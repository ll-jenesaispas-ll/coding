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
        cout<<maxno<<" ";
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

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    arr[n]=-1;
    cout<<RecordBreakingDay(n,arr);
}*/

