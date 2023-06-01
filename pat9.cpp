#include<iostream>
#include<string>
using namespace std ;
int main(){
    int n ; 
    cout<<"entre the number of rows"<<endl;
    cin>>n;
    
    for(int i =0 ; i<n;i++){
        char ch='A';
        for(int j=0;j<n;j++){  
            char abc=ch+i;
            cout<< abc<<" ";
            ch++;
        }
        cout<<endl;
    }

return 0;
}