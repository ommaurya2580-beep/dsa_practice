#include<bits/stdc++.h>
using namespace std;

void print(int n){
    
    for (int i=n;i>=1;i--)
    {   char ch='A';
        for(int j = i;j >= 1;j--){
            printf("%c",ch);
            ch++;
            
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