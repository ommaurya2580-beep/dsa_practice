#include<bits/stdc++.h>
using namespace std;

void print(int n){
    char ch='A';
    for (int i=0;i<n;i++)
    {
        for(ch='A';ch<='A'+i;ch++){
            cout<<ch;
            
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