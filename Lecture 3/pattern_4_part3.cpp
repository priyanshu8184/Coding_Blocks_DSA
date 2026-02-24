#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the Number of Rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        // left star
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        // spaces
       for(int j=1;j<=(n-i)-1;j++){
        cout<<" ";
       } 
       if(i==n){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
    }
        else{
            for(int j=1;j<=i;j++){
                cout<<"* ";

            }
            cout<<endl;
        }
       
    
    }
return 0;
}