#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <fstream>


using namespace std;

class Client
{
public:
	Client(string name, double price) {
		this->name = name;
		this->price = price;
	}
	friend ostream& operator<<(ostream &os, Client c) {
		os << c.name << " (" << c.price <<"$)"<< endl;
		return os;
	}
	friend istream& operator >> (istream &is, Client c) {
		is >>c.price;
		return is;
	}
	bool operator <(const Client &c)const {
		return(this->price < c.price);
	}

private:
	string name;
	double price;
};

