#pragma once
#include "Person.h"
#include <mysql.h>

class User : public Person {

private:

	string pass, cpass;

public:

	bool create_database() {

		query = "CREATE DATABASE " + uname;
		q = query.c_str();

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", "", 0, NULL, 0);

		qstate = mysql_query(conn, q);

		if (!qstate) {

			return true;
		}
		else {

			return false;
		}
	}

	void create_logintable() {

		query = uname;
		q = query.c_str();

		conn = mysql_init(0);
		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);

		mysql_query(conn, "CREATE TABLE login(password VARCHAR(100) NOT NULL);");

		query = "insert into login(password) values('" + pass + "')";
		q = query.c_str();
		mysql_query(conn, q);

	}

	void create_tables() {

		mysql_query(conn, "CREATE TABLE inventory(id VARCHAR(100) NOT NULL, product_name VARCHAR(100) NOT NULL, cost VARCHAR(100) NOT NULL, price VARCHAR(100) NOT NULL, quantity VARCHAR(100) NOT NULL,PRIMARY KEY(id));");
		mysql_query(conn, "CREATE TABLE customers(cust_id VARCHAR(100) NOT NULL, cust_name VARCHAR(100) NOT NULL, date VARCHAR(100) NOT NULL, cust_number VARCHAR(100) NOT NULL, PRIMARY KEY(cust_number));");
		mysql_query(conn, "CREATE TABLE vendor(id VARCHAR(100) NOT NULL, name VARCHAR(100) NOT NULL, total_cost VARCHAR(100) ,product3 VARCHAR(100) ,PRIMARY KEY(id));");
	}

	bool check_user() {

		query = uname;
		q = query.c_str();

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);

		if (conn) {

			qstate = mysql_query(conn, "select * from login");

			if (!qstate) {

				res = mysql_store_result(conn);

				while (row = mysql_fetch_row(res)) {

					if (pass == row[0]) {

						return true;
					}
				}
				return false;
			}
		}
		return false;
	}
	void insert_inventory(string id, string name, string cost, string price, string qty) {

		query = "insert into inventory(id,product_name,cost,price,quantity) values('" + id + "','" + name + "','" + cost + "','" + price + "','" + qty + "')";
		q = query.c_str();
		mysql_query(conn, q);
	}

	bool check_pass() {

		if (pass == cpass) {

			return true;
		}
		else {

			return false;
		}
	}

	bool check_pass_update(string pass, string newpass, string conpass) {

		qstate = mysql_query(conn, "select * from login");

		if (!qstate) {

			res = mysql_store_result(conn);

			while (row = mysql_fetch_row(res)) {

				if (pass == row[0]) {

					if (newpass == conpass) {

						query = "UPDATE login SET password = '" + newpass + "'";
						q = query.c_str();
						mysql_query(conn, q);

						return true;
					}
				}
			}
			return false;
		}
		return false;
	}
	void delete_user() {

		query = uname;
		q = query.c_str();

		conn = mysql_init(0);
		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);


		query = "drop database " + uname;
		q = query.c_str();
		mysql_query(conn, q);
	}

	User() {

	}

	User(string first_name, string last_name, string uname, string pass, string cpass) {

		this->uname = uname;
		this->pass = pass;
		this->cpass = cpass;
	}

	User(string uname, string pass) {

		this->uname = uname;
		this->pass = pass;
	}

	void setPass(string pass) {

		pass = pass;
	}

	void setUname(string uname) {

		uname = uname;
	}

	string getpass() {

		return pass;
	}
	string getcpass() {

		return cpass;
	}

	string getuname() {

		return uname;
	}
};