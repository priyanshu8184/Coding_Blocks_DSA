// sum of natural numbers upto n
#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"Enter the value of n ";
    cin>>n;
    sum=0;
    for (int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"the total sum upto the given n natural number is "<<sum;
    return 0;
}
