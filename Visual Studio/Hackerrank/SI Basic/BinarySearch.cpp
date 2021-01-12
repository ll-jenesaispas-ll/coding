#include<iostream>
using namespace std;
bool Binarysearch(int arr[],int l,int h,int key){
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==key)
            return true;
        if(arr[mid]<key)
            l=mid+1;
        else
        {
            h=mid-1;
        }
    }
    return false;
}
int main(){
    int n,k;
    bool result;
    cout<<"Enter Size";
    cin>>n;
    cout<<"Enter Key";
    cin>>k;
    int a[n];
    cout<<"Enter Elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    result=Binarysearch(a,0,n-1,k);
    if(result)
        cout<<"true";
    else
    {
        cout<<"false";
    }
}