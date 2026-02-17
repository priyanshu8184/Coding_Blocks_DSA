// pattern number 2 of part 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=1;i<=n;i++){
        // space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1;j++){
            // star
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
