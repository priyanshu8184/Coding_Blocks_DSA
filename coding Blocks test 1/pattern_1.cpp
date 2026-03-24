//    1 2 3 4 5 
//    1 2 3 4  *
//    1 2 3  * * *
//    1 2  * * * * *
//    1  * * * * * * *
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Number of rows:";
    cin>>n;

    for(int i =1 ; i<=n ; i++){
        for(int j =1; j<n-1;j++){
            cout<<" ";
        }
        for(int j =1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        for(int j =2; j<=i; j++){
            cout<<" *";
        }
        for(int j =i-1; j>1; j--){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}

    