#pragma once
#include <iostream>

using namespace std;

class Product	{

private:

	string name;
	string id;
	int qty;
	double cost, price;

public:
	
	// ## NOTE: No defualt constructor in the end ##
	Product(){}

	Product(string id, string name, double cost, double price, int qty)	{

		this->id = id;
		this->name = name;
		this->cost = cost;
		this->price = price;
		this->qty = qty;
	}

	friend class Inventory;

	string get_id() {

		return this->id;
	}

	// Later implementations
	void addItem() {
	}

	double get_price()
	{
		return price;
	}
	double get_cost()
	{
		return cost;
	}

};