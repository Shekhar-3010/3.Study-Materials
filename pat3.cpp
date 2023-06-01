#include <iostream>
using namespace std;
int main()
{
    int c;
    cout << "entre the number of rows you want in pattern" << endl;
    cin >> c;
    for (int i = 1; i < c; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*"<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}