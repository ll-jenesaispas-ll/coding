#include<iostream>
using namespace std;
int gcd(int x,int y){
    if(x%y==0)
        return y;
    else
        return gcd(y,x%y);
}

int main(){
    long int t,a,b,res;
    cin>>t;
    while(t--){
        cin>>a>>b;
        res=gcd(a,b);
        cout<<res<<" "<<(a*b)/res<<endl;
    }
}