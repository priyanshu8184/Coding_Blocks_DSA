// pattern number 8
//     * 
//   * * * 
// * * * * * 
// * * * * * 
//   * * * 
//     * 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        // space
        for(int j=1;j<=m-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
     for(int i=m;i>=1;i--){
        // space
        for(int j=1;j<=m-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
