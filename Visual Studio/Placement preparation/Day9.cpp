#include<iostream>
#include<climits>
using namespace std;
//Binary to decimal
/*int binarytodecimal(int n){
    int res=0;
    int num=1;
    int temp=n;
    while(temp>0){
        int last=temp%10;
        res+=num*last;
        num*=2;
        temp/=10;
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<binarytodecimal(n);
}*/

//Max and min in array 
/*int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
        cin>>array[i];
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++){
        maxNo=max(maxNo,array[i]);
        minNo=min(minNo,array[i]);
    }
    cout<<maxNo<<" "<<minNo;
}*/

//Linear Search
/*int linearsearch(int n,int key,int array[]){
    for(int i=0;i<n;i++){
        if(key==array[i])
            return i;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    cout<<linearsearch(n,key,arr);
}*/

//Binary Search
/*int binarysearch(int n,int key,int arr[]){
    int s=0,e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            e=mid-1;
        else 
            s=mid+1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    cout<<binarysearch(n,key,arr);
}*/

//Selection Sort
/*void selectionsort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i]; 
    selectionsort(n,arr);
}*/