#include<bits/stdc++.h>
using namespace std;

void print(int n){
    char ch='A';
    for (int i=0;i<n;i++)
    { 
        for(int j=0;j<=i;j++){
            cout<<ch; 
        }
        ch=ch+1;
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