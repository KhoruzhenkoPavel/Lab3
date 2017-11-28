#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string a = "Pavel";
	string b = "Admin";
	string c = "Anton";
	cout << "Hello world! " << endl << "login ..." ;
	cin >> name;
	if (name == a)
		cout << "Hello, " << a << ". ADMIN" << endl;
	else if (name == b)
		cout << "Hello, " << b << ". ADMIN" << endl;
	else if (name == c)
		cout << "Hello, " << c << ". ADMIN" << endl;
	else {
		cout << "hello, " << name <<" User" <<endl;
	}
	return 0;
}