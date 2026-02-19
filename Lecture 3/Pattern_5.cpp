// pattern number 5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        // space
        // a loop

        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //star
        // b loop
        for(int j=1;j<=i;j++){
            cout<<"* ";
        } 
        //b loop 
        for(int j=2;j<=i;j++) 
        // here you can write 1 also on the place of 2{
            cout<<"* ";
        } 
        // a loop
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;

}