#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    int i,j,k,l;
    for(i=n;i>=1;i--)
     {
        for(k=1;k<=n-i;k++)
         { 
            cout<<" ";
         }

        for(j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
         } 
           
        
        for(l=1;l<=n-i;l++)
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