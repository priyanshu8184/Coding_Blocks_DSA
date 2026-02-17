// maximum among  three numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    cout<<"enter the value of c";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is maximum"<<a;
    }
    else if(b>c && b>a){
        cout<<"b is maximum"<<b;
    }
    else{
        cout<<"c is maximum";
    }
    return 0;
}