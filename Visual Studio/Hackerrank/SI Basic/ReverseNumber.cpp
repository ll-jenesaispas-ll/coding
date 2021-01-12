//Constraints -10^18 to 10^18 This solution is partially correct 
#include <iostream>
using namespace std;
int main(){
    int n,reverse=0,rem;
    cin>>n;
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    cout<<reverse;
}