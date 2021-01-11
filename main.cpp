/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // Variable Initilaize
    int n, i, j;
    // Input get
    cout<<"Enter Row Limit:";
    cin>>n;
    for(i = n; i >= 1; i--) {
        for (j = n; j >= 1; j--) {
            if (i >= j)
            cout<<i;
            else
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
