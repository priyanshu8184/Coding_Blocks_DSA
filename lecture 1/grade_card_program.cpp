// grade card program
#include<iostream>
using namespace std;
int main(){
    int math, sci, hindi,sst,english,cs,gk,total,sum1;
    cin>>math;
    cin>>sci;
    cin>>hindi;
    cin>>sst;
    cin>>english;
    cin>>cs;
    cin>>gk;
    sum1=math+sci+sst+hindi+english+cs+gk;
    total=sum1*100/700;
    if(total>=90){
        cout<<"congrats! you got  grade A"<< total;
    }
    else if(total>=80){
        cout<<"congrats!  you got grade B "<< total;
    }
    else if(total>=70){
        cout<<"congrats! you got grade C "<< total;
    }
    else if (total>=60){
        cout<<"Congrats ! you got grade D"<< total;
    }
    else if(total>=50){
        cout<<"you got grade E and you need to improve"<< total;
    }
    else {
        cout<<"you are fail."<< total;
    }
    return 0;
}