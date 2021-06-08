#include <iostream>
using namespace std;

//Hallow Rectangle
/*int main(){
    int r,c;
    cin>>r>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1 || i==r || j==1 || j==c){
                cout<<"*";
            }
            else 
                cout<<" ";
        }
        cout<<endl;
    }
}*/

//Inverted Pyramid
/*int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}*/

//Half pyramid after 180 rotation
/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i)
                cout<<" ";
            else 
                cout<<"*";
        }
        cout<<endl;
    }
}*/

//Half Pyramid using numbers
/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}*/

//Floyd's Triangle
/*int main(){
    int n;
    cin>>n;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }
}*/

//Butterfly Pattern
/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<"*";

        int space=2*n-2*i;
        for(int j=1;j<=space;j++)
            cout<<" "; 
        
        for(int j=1;j<=i;j++)
            cout<<"*";
        
        cout<<endl;
    }

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
            cout<<"*";

        int space=2*n-2*i;
        for(int j=1;j<=space;j++)
            cout<<" "; 
        
        for(int j=1;j<=i;j++)
            cout<<"*";
        
        cout<<endl;
    }
    
}*/

//Inverted pattern
/*int main(){
    int n;
    cin>>n;
    int num=1;
    for(int i=n;i>=1;i--){
        num=1;
        for(int j=1;j<=i;j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }
}*/

//0-1 pattern
/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           if((i+j)%2==0){
            cout<<"1 ";
           }
           else{
               cout<<"0 ";
           }
        }
        cout<<endl;
    }
}*/

//Rhombus pattern
/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        for(int j=1;j<=n;j++)
            cout<<"*";
        cout<<endl;
    }
}*/

//Number pattern
/*int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
}*/

//palindromic pattern
/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}*/

//Star Pattern
/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        for(;j<=n;j++)
            cout<<"*"<<" ";
        for(;j<=n+i-1;j++)
            cout<<"*"<<" ";
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        int j;
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        for(;j<=n;j++)
            cout<<"*"<<" ";
        for(;j<=n+i-1;j++)
            cout<<"*"<<" ";
        cout<<endl;
    }
}*/

//Zig-Zag pattern
/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0) || (i==2 && j%4==0))
                cout<<"* ";
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}*/

