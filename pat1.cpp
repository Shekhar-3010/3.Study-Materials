#include<iostream>
#include<stdlib.h>
using namespace std ;
int main(){
    int n ;
    cout<<"entre the number of rows in the patters"<<endl;
    cin>>n;
for(int i=1;i<n;i++){
    for(int j =1;j<n;j++){
       cout<<n-j<<" ";
    }
    cout<<endl;
}
return 0;
}