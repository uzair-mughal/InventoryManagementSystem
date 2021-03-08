#pragma once
#include <iostream>
#include <mysql.h>

using namespace std;

class Person {

protected:

	string uname, email, name ,id;

	string query;
	const char* q;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES *res;
	int qstate;

public:

	Person();
	~Person();

};

