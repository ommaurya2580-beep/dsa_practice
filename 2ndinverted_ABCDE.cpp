#include<bits/stdc++.h>
using namespace std;

void print(int n){
    
    int i,j;
    for (i=n;i>=1;i--)
    { char ch='A';
        for(j=1;j<=i;j++){
            cout<<ch;
            ch=ch+1;   
        }
        cout<<endl;
    }
    
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    print(n);
    return 0;

}