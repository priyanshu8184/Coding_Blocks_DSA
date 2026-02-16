#include <iostream>
using namespace std;

int main() {
	// sum of two numbers
	int a,b,c;
	a=10;
	b=20;
	c=a+b;
	cout<<"The sum of a and b is: "<<c<<endl;
	// simple interest
	int si,p,t,r;
	cout<<"Enter the principal amount: ";
	cin>>p;
	cout<<"Enter the time in years: ";
	cin>>t;
	cout<<"Enter the rate of interest: ";
	cin>>r;
	si=(p*t*r)/100;
	cout<<"The simple interest is: "<<si<<endl;
	// even or odd
	int num1;
	cout<<"Enter a number:";
	cin>>num1;
	if(num1%2==0){
		cout<<"The number is even."<<endl;
	}
	else{
		cout<<"the number is odd.";
	}
	return 0;
}