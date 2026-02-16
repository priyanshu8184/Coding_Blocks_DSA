#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for ( int i = 0; i < n; i++)
    {
        cout<<" * "<<endl;
    }

    cout<<"Enter the number of rows: ";
    cin>>n;
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<"enter the number of rows";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            // space
            cout <<"  ";
        }
        for(int k=1;k<=i;k++){
            cout << "* ";
        }
        cout<<endl;
    }
      for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            // space
            cout <<"  ";
        }
        for(int k=1;k<=n-i+1;k++){
            cout << "* ";
        }
        cout<<endl;
    }
    

    return 0;
    
}
