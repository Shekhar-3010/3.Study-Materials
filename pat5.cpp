#include<iostream>
using namespace std ;
int main(){
 int c;
    cout << "entre the number of rows you want in pattern" << endl;
    cin >> c;
    int count =1;
    for(int i=0; i<=c; i++){
        for(int j=0; j<=i; j++){
            cout<<count<<" ";
            count++;

        }
        cout<<endl;
    }
return 0;
}