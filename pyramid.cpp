#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
     {

        for(k=1;k<=n-i;k++)
         { 
            cout<<" ";
         }
           
        for(j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
         } 
        for(k=1;k<=n-i;k++)
         { 
            cout<<" ";
         }
         cout<<"\n";
     }
    

}






int main(){
    int n;
cout<<"enter number";
cin>> n;
print(n);
return 0;
}