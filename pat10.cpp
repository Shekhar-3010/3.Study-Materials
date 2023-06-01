#include<iostream>
#include<string>
using namespace std ;
int main(){
    int n ;
    cout<<"emyre the number of rows you want to display"<<endl;
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){   
            char ch =('A'+i -1);
            cout<<ch<<" ";


        }
        cout<<endl;
    }
   

return 0;
}