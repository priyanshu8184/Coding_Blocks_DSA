// sum of n whole numbers
#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"Enter the value of n";
    cin>>n;
    sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The total sum of the n whole nubers are:"<<sum;



    // sum of even occuring numbers upto n
    if(n%2==0){
        for (int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"the sum n occured even numbers are "<<sum;
    }
    
    return 0;
}