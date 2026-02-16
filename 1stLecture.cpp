#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	a=10;
	b=20;
	c=a+b;
	cout<<"The sum of a and b is: "<<c<<endl;

	

// #include <iostream>
// using namespace std;
// int main()

	int si,p,t,r;
	cout<<"Enter the principal amount: ";
	cin>>p;
	cout<<"Enter the time in years: ";
	cin>>t;
	cout<<"Enter the rate of interest: ";
	cin>>r;
	si=(p*t*r)/100;
	cout<<"The simple interest is: "<<si<<endl;
	return 0;
}