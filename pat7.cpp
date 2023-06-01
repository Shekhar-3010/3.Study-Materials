#include<iostream>
#include<string>
using namespace std ;
int main(){
 int c;
    cout << "entre the number of rows you want in pattern" << endl;
    cin >> c;
    for(int i=1; i<c; i++){
        for(int j=0; j<c; j++){
            char ch='A'+j;
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
return 0;
}