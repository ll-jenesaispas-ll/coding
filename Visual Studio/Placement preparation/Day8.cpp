#include<iostream>
#include<math.h>
using namespace std;

//Prime or not
/*int main(){
    int n;
    cin>>n;
    int i=2;
    bool flag=0;
    while(i<sqrt(n)){
        if(n%i==0)
            cout<<"Not prime";
            flag=1;
            break;
        i++;
    }
    if(!flag)
        cout<<"Prime";
}*/

//Reverse Number
/*int main(){
    int n,rev=0;
    cin>>n;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<rev;
}*/

//Amstrong Number
/*int main(){
    int n,temp,sum=0;
    cin>>n;
    temp=n;
    while(temp>0){
        int lastdigit=temp%10;
        sum+=lastdigit*lastdigit*lastdigit;
        temp/=10;
    }
    cout<<sum;
    if(sum==n)
        cout<<"Amstrong Number";
    else 
        cout<<"Not Amstrong Number";
}*/

//print all prime numbers b/w given two numbers
/*bool prime(int n){
    int k=2;
    while(k<=sqrt(n)){
        if(n%k==0)
            return false;
        k++;
    }
    return true;
}

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(prime(i))
            cout<<i<<endl;
    }
}*/

//Fibenacci Sequence
/*void fib(int n){
    int t1=0,t2=1;
    int nextterm;
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    fib(n);
}*/

//Factorial
/*int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++)
        factorial*=i;
    return factorial;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}*/

//Ncr
/*int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
        fact*=i;
    return fact;
}

int main(){
    int n,r,res;
    cin>>n>>r;
    res=fact(n)/(fact(n-r)*fact(r));
    cout<<res;
}*/

//Pascal Triangle 
/*int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
        fact*=i; 
    return fact;
}

int ncr(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++)
            cout<<ncr(i,j)<<" ";
        cout<<endl;
    }
}*/

//Triplets
/*bool triplet(int a,int b,int c){
    int big=max(a,max(b,c));
    int sum=a*a+b*b+c*c-big*big;
    if(sum==(big*big))
        return true;
    else
        return false;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<triplet(a,b,c);
}*/