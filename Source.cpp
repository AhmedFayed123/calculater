#include<iostream>
using namespace std;
int main() {
	int x;
	cout << " 1_ add \n"<< " 2_ subtract \n"<< " 3_ multiply \n"<< " 4_ dividing \n";
	
	cout << "please enter your calculation :" ;
	cin >> x;
	if (x >= 1 && x <= 4) {
		int a, b;
		cout << "enter first number :";
		cin >> a;
		cout << "enter second number :";
		cin >> b;
		if (x == 1)
			cout << a << "+" << b << "=" << a + b << endl;
		if (x == 2)
			cout << a << "-" << b << "=" << a - b << endl;
		if (x == 3)
			cout << a << "*" << b << "=" << a * b << endl;
		if (x == 4)
			cout << a << "/" << b << "=" << a / b << endl;


	}
	else {
		cout << "  \n Error : please choice from 1 to 4 " << endl;
	}
	return 0;
}