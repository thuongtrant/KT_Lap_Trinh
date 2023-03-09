#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Runner
{
private:
	string name;
	string desc = "";
public:
	Runner(string name) {
		this->name = name;
	}
	Runner& addDescription(string desc) {
		this->desc = desc;
		return *this;
	}
	void message() {
		cout << "\n\n::::: " << name << endl;
		if (desc != "") {
			cout << desc << endl;
		}

	}
};

