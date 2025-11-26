#include<bits/stdc++.h>
using namespace std;

void print(int n){
    int i,j;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    print(n);
    return 0;

}
