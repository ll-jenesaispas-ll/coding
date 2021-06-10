#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int RBD(int n,int arr[]){
   int ans=0,maxno=INT_MIN,i=0;
   while(i<n){
       if(arr[i]>maxno && arr[i]>arr[i+1]){
           ans++;
       }
       maxno=max(maxno,arr[i]);
       i++;
   }
   return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[n]=-1;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<RBD(n,arr);
}