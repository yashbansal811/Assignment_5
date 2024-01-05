#include<iostream>
using namespace std;
int main()
{
    int n,r,count=0;
    cin>>n;
    while(n>0){
        r=n%2;
        if(r==0){
            count++;
        }
        n/=2;
    }
    cout<<count;
    return 0;    
}