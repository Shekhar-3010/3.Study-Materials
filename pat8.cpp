#include<iostream>
#include<string>
using namespace std ;
int main(){
    int c ;
     cout << "entre the number of rows you want in pattern" << endl;
    cin >> c;
    char ch='A';
    for(int i =0;i<c;i++){
        int count=0;
        
        for(int j=0;j<c;j++){
            cout<<ch<<" ";
            ch=ch+1;

        }
        cout<<endl;

    }

return 0;
}