#pragma once
#include <iostream>
#include "Product.h"
#include <mysql.h>
#include <string>
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

class Inventory {
private:

	// Dynamic Allocation::WIP
	Product *prodLs[1000];
	int index;
	string query;
	const char* q;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES *res;
	int qstate;
	string uname;
public:

	Inventory()
	{
		index = 0;
	}

	// Further mod after gui creation::WIP
	void addProduct(string id, string name, double cost, double price, int qty) {

		prodLs[index++] = new Product(id, name, cost, price, qty);
		string id1 = id;
		string cost1 = to_string(cost);
		string price1 = to_string(price);
		string qty1 = to_string(qty);
		query = uname;
		q = query.c_str();
		try
		{
			conn = mysql_init(0);

			conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);
			if (conn)
			{
				query = "insert into inventory(id, product_name, cost, price, quantity) values('" + id1 + "','" + name + "','" + cost1 + "','" + price1 + "','" + qty1 + "')";
				q = query.c_str();
				mysql_query(conn, q);
			}
			else
				throw 0;
		}
		catch (int)
		{
			MessageBox::Show("Error in Accessing Database!");
		}
	}

	void getlist(string *list)
	{
		for (int i = 0; i <= index; i++)
		{
			//string name = prodLs[i]->name;
			//list = name + " "; //+ Convert::ToString(prodLs[i]->id) + " " + prodLs[i]->cost + " " + prodLs[i]->price + " " + prodLs[i]->qty + "\n";
		}
	}

	void editProduct(int i, string id, string name, double cost, double price, int qty) {

		prodLs[i]->id = id;
		prodLs[i]->name = name;
		prodLs[i]->cost = cost;
		prodLs[i]->price = price;
		prodLs[i]->qty = qty;

		string cost_s = to_string(cost);
		string price_s = to_string(price);
		string qty_s = to_string(qty);

		query = uname;
		q = query.c_str();
		try
		{
			conn = mysql_init(0);
			conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);
			if (conn)
			{
				query = "UPDATE inventory SET 'id' = '" + id + "', 'name' =  '" + name + "', 'cost' = '" + cost_s + "', 'price' = '" + price_s + "', 'qty' = '" + qty_s + "'";
				q = query.c_str();
				mysql_query(conn, q);
			}
			else throw 0;
		}
		catch (int)
		{
			MessageBox::Show("Error in Accessing Database!");
		}
	}

	void removeProduct(int ids) {

		/*int id = prodLs[ids]->id;
		for (int i = 0; i <= index; i++)
		{

			if (prodLs[i]->getId() == id)	{

				for (int j = i; j <= index; j++)	{

					prodLs[i] = prodLs[i + 1];
				}
			}

			// This will remove the last product in array not the one we removed...
			delete prodLs[index--];

		}*/
		query = uname;
		q = query.c_str();
		try
		{
			conn = mysql_init(0);

			conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);
			if (conn)
			{
				query = "DELETE FROM inventory WHERE id = '" + prodLs[ids]->id + "'";
				q = query.c_str();
				mysql_query(conn, q);
				delete prodLs[ids];
				for (int i = ids; i < index; i++)
				{
					prodLs[i] = prodLs[i + 1];
				}
				index--;
			}
			else throw 0;
		}
		catch (int)
		{
			MessageBox::Show("Error in Accessing Database!");
		}
	}
	void loadfromdb(string u)
	{
		string cost1, price1, id1, name1, qty1;
		query = u;
		uname = u;
		q = query.c_str();

		conn = mysql_init(0);

		try
		{
			conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);

			if (conn)
			{
				qstate = mysql_query(conn, "select * from Inventory");

				if (!qstate) {

					res = mysql_store_result(conn);
					//CREATE TABLE inventory(id VARCHAR(100) NOT NULL, product_name VARCHAR(100) NOT NULL, cost DOUBLE NOT NULL, price DOUBLE NOT NULL, quantity INT NOT NULL,PRIMARY KEY(id))
					while (row = mysql_fetch_row(res)) {
						string id1 = row[0];
						string name1 = row[1];
						string cost1 = row[2];
						string price1 = row[3];
						string qty1 = row[4];
						addProduct(id1, name1, std::stod(cost1), std::stod(price1), std::stoi(qty1));
					}
				}
			}
			else throw 0;
		}
		catch (int)
		{
			MessageBox::Show("Error in Accessing Database!");
		}
	}
	bool update_product(string p_id,string p_name,double p_cost,double p_price,int p_qty,string uname) {

		for (int i = 0; i < index; i++) {

			if (prodLs[i]->id == p_id) {

				prodLs[i]->name = p_name;
				prodLs[i]->cost = p_cost;
				prodLs[i]->price = p_price;
				prodLs[i]->qty = p_qty;

				string newcost = to_string(p_cost);
				string newprice = to_string(p_price);
				string newqty = to_string(p_qty);

				query = uname;
				q = query.c_str();
				conn = mysql_init(0);
				conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);
				query = "UPDATE inventory SET product_name = '" + p_name + "',cost = '" + newcost + "',price='"+ newprice +"',quantity='" + newqty + "' WHERE id = '" + p_id + "';";
				q = query.c_str();
				qstate = mysql_query(conn, q);
				cout << "111";
				return 1;
			}
		}
		return 0;
	}
	int get_name_search(string search) //returns index for the name sent in parameter
	{
		for (int i = 0; i < index; i++)
		{
			if (search == prodLs[i]->name)
				return i;
		}
		return -1;
	}
	int get_id_search(string search)  //returns index for the productid sent in parameter
	{
		for (int i = 0; i < index; i++)
		{
			if (search == prodLs[i]->id)
				return i;
		}
		return -1;
	}
	int get_index()
	{
		return index;
	}
	string get_name(string prod)
	{
		return prodLs[get_id_search(prod)]->name;
	}
	string get_name(int i)
	{
		return prodLs[i]->name;
	}
	string get_id(int i) {

		return prodLs[i]->id;
	}
	int get_qty(int prod)
	{
		return prodLs[prod]->qty;
	}
	double get_cost(int prod)
	{
		return prodLs[prod]->cost;
	}
	double get_price(int prod)
	{
		return prodLs[prod]->price;
	}
	int get_qty(string prod)
	{
		return prodLs[get_id_search(prod)]->qty;
	}
	double get_cost(string prod)
	{
		return prodLs[get_id_search(prod)]->cost;
	}
	double get_price(string prodid)
	{
		return prodLs[get_id_search(prodid)]->price;
	}
	void change_quantity(int prod, int qty)
	{
		prodLs[prod]->qty = qty;
		query = uname;
		q = query.c_str();

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "HUMM", "abcd", q, 0, NULL, 0);

		query = "UPDATE inventory SET quantity = '" + to_string(qty) + "' where id = '" + prodLs[prod]->id+"'";
		q = query.c_str();
		mysql_query(conn, q);
	}
	~Inventory()
	{}


};