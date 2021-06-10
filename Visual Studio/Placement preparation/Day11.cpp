#include<iostream>
#include<climits>
using namespace std;
//Max till i
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxno=INT_MIN;
    for(int i=0;i<n;i++){
        maxno=max(maxno,arr[i]);
        cout<<maxno;
    }
}*/

//Sum of all sub arrays
/*int SubArraySum(int n,int arr[]){
    int temp=0,sum=0;
    for(int i=0;i<n;i++){
        temp=0;
        for(int j=i;j<n;j++){
            temp+=arr[j];
            sum+=temp;
        }
    }
    return sum;
}

Input:3
1 2 3
Output:20

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<SubArraySum(n,arr);
}*/

//Longest Arthematic SubArray
/*int ArthematicSubArray(int n,int arr[]){
    int pd=arr[1]=arr[0];
    int current=2;
    int j=2;
    int ans=INT_MIN;
    while(j<n){
        if(pd==arr[j]-arr[j-1])
            current++;
        else{
            pd=arr[j]-arr[j-1];
            current=2;
        }
        j++;
        ans=max(ans,current);
    }
    return ans;
}

Input:7
10 7 4 6 8 10 11
Output:4
    
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<ArthematicSubArray(n,arr);
}*/

//Record Breaking Day
/*int RecordBreakingDay(int n, int arr[]){
    int ans=0;
    int i=0;
    int maxno=INT_MIN;
    while(i<n){
        if(arr[i]>arr[i+1] && arr[i]>maxno)
            ans++; 
        maxno=max(maxno,arr[i]);
        i++;
    }
    return ans;
}

Input:8
1 2 0 7 2 0 2 2
Output:2

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    arr[n]=-1;
    cout<<RecordBreakingDay(n,arr);
}*/

//First Repeating Element
void FirstRepeatingNumber(int n,int a[]){
    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++)
        idx[i]=-1;
    int minidx=INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[a[i]]!=-1)
            minidx=min(minidx,idx[a[i]]);
        else 
            idx[a[i]]=i; 
    }
    cout<<minidx+1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i]; 
    cout<<"Hello";
    FirstRepeatingNumber(n,arr);
}