#include<iostream>
using namespace std;
int main(){
int i=1;
int j,k,n;
    cin>>n;
    while(i<=n){
        j =1;
        while(j<=n-i+1){
             k=n-i+1;
            cout<<k;
            j++;
        }
        cout<<endl;
        i++;
            
    }
}