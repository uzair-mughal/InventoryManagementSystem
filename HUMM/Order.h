#pragma once
#include "Inventory.h"
using namespace std;

class Item {
public:
	Item()
	{

	}
	Item(string code, int qty, double price)
	{
		this->code = code;
		this->qty = qty;
		this->price = price;
	}
	string code;
	unsigned int qty;
	double price;
};

class Order {
public:
	friend class Customers;
	Order();
	Order(string code, string cname, string date, Inventory *inv)
	{
		c_name = cname;
		customer_code = code;
		this->date = date;
		this->inv = inv;
		confirmed = false;
		index = 0;
	}

	double get_orderprice()
	{
		double totalprice = 0;
		for (int i = 0; i < index; i++)
		{
			totalprice += items[i]->price* items[i]->qty;
		}
		return totalprice;
	}
	void ConfirmOrder()
	{

	}
	void add_item(string code, int qty, double price)
	{
		items[index++] = new Item(code, qty, price);
	}
	void remove_item(string code)
	{
		if (items[index - 1]->code == code)
			delete items[--index];
		else
		{
			for (int i = 0; i < index; i++)
			{
				if (items[i]->code == code)
				{
					delete items[i];
					index--;
					for (int j = i; j < index; j++)
					{
						items[j] = items[j + 1];
					}
					break;
				}
			}
		}

	}
	void change_item(string code, int qty)
	{
		for (int i = 0; i < index; i++)
		{
			if (items[i]->code == code)
			{
				items[i]->qty = qty;
			}
		}
	}
	int get_index()
	{
		return index;
	}
	string get_name()
	{
		return c_name;
	}
	string get_date()
	{
		return date;
	}
	string get_code()
	{
		return customer_code;
	}
	int get_qty(string code)
	{
		for (int i = 0; i < index; i++)
		{
			if (items[i]->code == code)
				return items[i]->qty;
		}
		return -1;
	}
	int get_index(string code)
	{
		for (int i = 0; i < index; i++)
		{
			if (items[i]->code == code)
				return i;
		}
		return -1;
	}
private:

	string customer_code;
	string c_name;
	string date;
	Item *items[1000];
	int index;
	Inventory *inv;
	bool confirmed;

};

class Customers {
private:
	int customers;
	Order *orders[1000];
	Inventory *inv;

	string query;
	const char* q;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES *res;
	int qstate;
	string uname;

public:
	Customers()
	{
		customers = 0;
	}
	Customers(Inventory *inv)
	{
		this->inv = inv;
		customers = 0;
	}


	void loadfromdb(string uname)
	{
		this->uname = uname;
		string cost1, price1, id1, name1, qty1;
		query = uname;
		q = query.c_str();

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);

		if (conn)
		{

			qstate = mysql_query(conn, "select * from customers");
			//customers, cust_name , date , cust_number );
			if (!qstate)
			{
				res = mysql_store_result(conn);
				while (row = mysql_fetch_row(res)) {

					AddCustomer(row[0], row[1], row[3]);
				}
			}
		}
		if (customers != 0)
		{
			for (int i = 0; i < customers; i++)
			{
				string customer_table = "select * from customer_" + orders[i]->get_code();
				qstate = mysql_query(conn, customer_table.c_str());
				if (!qstate)
				{
					res = mysql_store_result(conn);
					while (row = mysql_fetch_row(res)) {
						orders[i]->add_item(row[0], std::stoi(row[1]), std::stod(row[2]));
					}
				}
			}
		}

	}

	void add_item(string code, int qty, double price, int number)
	{
		orders[number]->add_item(code, qty, price);
		query = uname;
		q = query.c_str();

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);
		query = "insert into customer_" + orders[number]->get_code() + "(prod_code, prod_qty, prod_price) values('" + code + "','" + to_string(qty) + "','" + to_string(price) + "')";
		q = query.c_str();
		mysql_query(conn, q);
	}
	void change_order_qty(int qty, int customer, int order)
	{
		orders[customer]->items[order]->qty = qty;
		query = uname;
		q = query.c_str();

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);
		string temp = "UPDATE customer_" + orders[customer]->get_code() + " SET prod_qty = '" + to_string(qty) + "' WHERE prod_code = '" + orders[customer]->items[order]->code + "'";
		query = temp;
		q = query.c_str();
		mysql_query(conn, q);
	}
	void remove_item(string code, int number)
	{
		orders[number]->remove_item(code);
		query = uname;
		q = query.c_str();

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);

		query = "DELETE FROM customer_" + orders[number]->get_code() + " WHERE prod_code = '" + code + "'";
		q = query.c_str();
		mysql_query(conn, q);
	}
	void AddCustomer(string code, string cname, string date)
	{
		orders[customers++] = new Order(code, cname, date, inv);
		query = uname;
		q = query.c_str();

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);
		query = "insert into customers(cust_id, cust_name, date, cust_number) values ('" + code + "', '" + cname + "', '" + date + "', '" + to_string(customers - 1) + "')";
		q = query.c_str();
		mysql_query(conn, q);
		//CREATE TABLE vendor(id VARCHAR(100) NOT NULL, name VARCHAR(100) NOT NU
		query = "CREATE TABLE customer_" + code + "(prod_code VARCHAR(100) NOT NULL, prod_qty VARCHAR(100), prod_price VARCHAR(100));";
		q = query.c_str();
		mysql_query(conn, q);
	}
	void removeCustomer(string code)
	{
		if (orders[customers - 1]->customer_code == code) {
			delete orders[--customers];
		}
		else
		{
			for (int i = 0; i < customers; i++)
			{
				if (orders[i]->customer_code == code)
				{
					delete orders[i];
					customers--;
					for (int j = i; j < customers; j++)
					{
						orders[j] = orders[j + 1];
					}
					break;
				}
			}
		}

		query = uname;
		q = query.c_str();

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);

		query = "DELETE FROM customers WHERE cust_id = '" + code + "'";
		q = query.c_str();
		mysql_query(conn, q);
		//DROP DATABASE
		query = "drop table customer_" + code +" ;";
		q = query.c_str();
		mysql_query(conn, q);
	}
	bool exists(string code)
	{
		for (int i = 0; i < customers; i++)
		{
			if (orders[i]->get_code() == code)
				return true;
		}
		return false;
	}
	int get_customers()
	{
		return customers;
	}
	int get_cust_orders(int i)
	{
		return orders[i]->get_index();
	}
	int get_index(string code, int customer)
	{
		return orders[customer]->get_index(code);
	}

	string get_name(int i)
	{
		return orders[i]->c_name;
	}
	string get_code(int i)
	{
		return orders[i]->customer_code;
	}
	string get_code(int order, int number)
	{
		return orders[number]->items[order]->code;
	}
	string get_date(int i)
	{
		return orders[i]->date;
	}
	double get_bill(int i)
	{
		return orders[i]->get_orderprice();
	}
	int get_qty(string code, int order)
	{
		return orders[order]->get_qty(code);
	}
	int get_qty(int order, int number)
	{
		return orders[number]->items[order]->qty;
	}
	double get_price(int order, int number)
	{
		return orders[number]->items[order]->price;
	}
};