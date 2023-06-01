#include<iostream>
using namespace std ;
int main(){
int n;
cout<<"entre the number of rows you want in pattern"<<endl;
cin>>n;
int counnt=1;
for(int i =0 ;i<n;i++){
    for(int j =0 ;j<4;j++){
        cout<<counnt<<" ";
        counnt++;
    }
    cout<<endl;
}
return 0;
}