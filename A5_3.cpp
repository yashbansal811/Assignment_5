#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,da=0,db=0,k=0;
    cin>>a>>b;
    while(a>0){
        da=da+(pow(2,k))*(a%10);
        a=a/10;
        k++;
    }
    k=0;
    while(b>0){
        db=db+(pow(2,k))*(b%10);
        b/=10;
        k++;
    }
    if(da>db){
        cout<<da;
    }
    else{
        cout<<db;
    }
}