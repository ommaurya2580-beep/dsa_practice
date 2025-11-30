#include<bits/stdc++.h>
using namespace std;

void print(int n){
   
    for (int i=1;i<=(2*n-1);i++)
    {if(i<=n)
       { for(int j=1;j<=i;j++){
            cout<<"*" ;       
         }
        }
     else if(i>n)
     {
        for(int k=1;k<=(2*n-i);k++)
        {
            cout<<"*" ;
        }
     }
    cout<<"\n" ;
}
}
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    print(n);

    return 0;
}