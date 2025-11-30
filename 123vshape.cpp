#include<bits/stdc++.h>
using namespace std;
void print(int n){
                 
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        { 
           cout<<j ;
        }
         for (int k=1;k<=(2*n-2*i);k++){
          cout<<" ";
         }
         for(int j=i;j>=1;j--)
        { 
           cout<<j;
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