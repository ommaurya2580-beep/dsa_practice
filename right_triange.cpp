#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,j,num;
    cout<<"enter length of pattern";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";

        }
        cout<<" \n";
    }
return 0;
}