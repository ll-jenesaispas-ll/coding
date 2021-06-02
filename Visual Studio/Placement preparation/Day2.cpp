#include <iostream>
using namespace std;
int main(){
    char c;
    int islower,isupper;
    cin>>c;
    islower=(c=='a'|| c=='e'|| c=='i'||c=='o'||c=='u');
    isupper=(c=='A'|| c=='E'|| c=='I'||c=='O'||c=='U');
    if(islower || isupper)
        cout<<"Vowel\n";
    else
        cout<<"constant";
}