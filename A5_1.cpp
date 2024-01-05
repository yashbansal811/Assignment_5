#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,b=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    int r;
    while(sum>0){
        r=sum%2;
        b=b*10+r;
        sum/=2;
    }
    cout<<b;
}