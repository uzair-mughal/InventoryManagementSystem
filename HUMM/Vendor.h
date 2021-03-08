#pragma once
#include"Person.h"
#include <string.h>
#include <sstream>
#include<stdlib.h>

using namespace std;

class Vendor : public Person {

private:

	Vendor *vendor[1000];
	string p_name;
	double p_cost = 0;
	int p_qty = 0;
	double total;
	string total_cost;
	string products[100];
	int index = 0;
	int pro_index = 0;

public:

	void load_vendor(string uname) {

		query = uname;
		q = query.c_str();
		conn = mysql_init(0);
		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);
		mysql_query(conn, "select * from vendor");
		res = mysql_store_result(conn);

		while (row = mysql_fetch_row(res)) {

			int i = 0;
			string c = "3";
			string pro[100];
			string id = row[0];
			string name = row[1];
			string total = row[2];
			pro[i] = row[3];
			i++;

			while (1) {

				int a = atoi(c.c_str());
				++a;
				c = to_string(a);

				query = "select product" + c + " from vendor WHERE id = '" + id + "';";
				q = query.c_str();
				qstate = mysql_query(conn, q);

				if (!qstate) {

					if (row[a] == NULL) {

						break;
					}
					else {

						pro[i] = row[a];
						i++;
					}
				}
				else {

					break;
				}
			}

			vendor[index++] = new Vendor(id, name, stod(total), pro, i);
		}
	}


	void insert_vendor(string uname, string v_id) {

		int i;
		string c = "3";
		string p_cost1 = to_string(p_cost);
		string p_qty1 = to_string(p_qty);
		string total;

		query = uname;
		q = query.c_str();
		conn = mysql_init(0);
		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);

		mysql_query(conn, "select * from vendor");

		res = mysql_store_result(conn);

		while (row = mysql_fetch_row(res)) {

			if (v_id == row[0]) {

				while (1) {

					int a = atoi(c.c_str());
					++a;
					c = to_string(a);

					query = "select product" + c + " from vendor WHERE id = '" + v_id + "';";
					q = query.c_str();
					qstate = mysql_query(conn, q);

					if (!qstate) {

						query = "select * from vendor WHERE id = '" + v_id + "';";
						q = query.c_str();
						qstate = mysql_query(conn, q);

						res = mysql_store_result(conn);

						for (i = 3;; i++) {

							if (row[i] == NULL) {

								total = calculate_total_cost();
								query = "UPDATE vendor SET total_cost='" + total + "' WHERE id='" + v_id + "';";
								q = query.c_str();
								mysql_query(conn, q);

								query = "UPDATE vendor SET product" + c + "='" + p_name + "' WHERE id='" + v_id + "';";
								q = query.c_str();
								mysql_query(conn, q);
								return;
							}
							if (i == a) {

								break;
							}
						}
					}
					else {

						break;
					}
				}

				total = calculate_total_cost();
				query = "UPDATE vendor SET total_cost='" + total + "' WHERE id='" + v_id + "';";
				q = query.c_str();
				mysql_query(conn, q);

				query = "ALTER TABLE vendor ADD COLUMN product" + c + " VARCHAR(100);";
				q = query.c_str();
				mysql_query(conn, q);
				query = "UPDATE vendor SET product" + c + "='" + p_name + "' WHERE id='" + v_id + "';";
				q = query.c_str();
				mysql_query(conn, q);
				return;

			}
		}
		total = calculate_total_cost(1);
		query = "insert into vendor (id,name,total_cost,product3) values('" + id + "','" + name + "','" + total + "','" + p_name + "');";
		q = query.c_str();
		mysql_query(conn, q);
	}

	void removeVendor(int ids,string uname) {

		cout << ids;
		query = uname;
		q = query.c_str();
		conn = mysql_init(0);
		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);

		query = "DELETE FROM vendor WHERE id = '" + vendor[ids]->id + "'";
		q = query.c_str();
		mysql_query(conn, q);
		delete vendor[ids];

		for (int i = ids; i < index; i++){

			vendor[i] = vendor[i + 1];
		}
		index--;

	}
	string calculate_total_cost() {

		double total;
		mysql_query(conn, "select * from vendor");
		res = mysql_store_result(conn);
		row = mysql_fetch_row(res);

		total = stod(row[2]);
		total = total + (p_cost*p_qty);
		return to_string(total);
	}
	string calculate_total_cost(int) {


		total = total + (p_cost*p_qty);
		return to_string(total);
	}
	Vendor(string id, string name, double total_cost, string arr[], int i) {

		this->id = id;
		this->name = name;
		this->total = total_cost;
		this->pro_index = i;

		for (int j = 0; j < i; j++) {

			products[j] = arr[j];

		}
	}

	Vendor(string id, string name, string p_name, double p_cost, int p_qty) {

		this->id = id;
		this->name = name;
		this->p_name = p_name;
		this->p_cost = p_cost;
		this->p_qty = p_qty;
	}

	Vendor(string id, string name) {

		this->id = id;
		this->name = name;
	}
	void clear()
	{
		for (int i = 0; i < index; i++)
		{
			delete vendor[i];
		}
		index = 0;
	}
	int get_index() {

		return index;
	}
	int get_pro_index() {

		return pro_index;
	}
	int get_pro_index(string id) {

		for (int i = 0; i < index; i++)
		{
			if (vendor[i]->id == id) {

				return vendor[i]->pro_index;
			}
		}
		return -1;
	}
	string get_id(int i) {

		return vendor[i]->id;
	}
	string get_name(int i) {

		return vendor[i]->name;
	}
	double get_total(int i) {

		return vendor[i]->total;
	}
	string get_product(int i, int k) {

		return vendor[i]->products[k];
	}
	int get_id_index(string id)  //returns index for the productid sent in parameter
	{
		for (int i = 0; i < index; i++)
		{
			if (id == vendor[i]->id)
				return i;
		}
		return -1;
	}

	bool edit_vendor(string id, string name, double total,string uname) {

		for (int i = 0; i < index; i++) {

			if (id == vendor[i]->id) {

				vendor[i]->name = name;
				vendor[i]->total = total;
				string newtotal = to_string(vendor[i]->total);

				query = uname;
				q = query.c_str();
				conn = mysql_init(0);
				conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);
				query = "UPDATE vendor SET name = '"+name+"',total_cost = '"+newtotal+"' WHERE id = '"+id+"';";
				q = query.c_str();
				qstate=mysql_query(conn, q);
				cout << "111";
				return 1;
			}
		}
		//clear();
		return 0;
	}

	Vendor();
	~Vendor();
};

