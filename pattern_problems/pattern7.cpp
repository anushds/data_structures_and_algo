#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=i;j<n;j++)
            cout<<" ";
        for(int l=1;l<=(2*i)-1;l++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
/*
    *
   ***
  *****
 *******
*********
*/
