//Tc: O(n)
//SC: O(1)

#include <iostream>
#include<vector>
using namespace std;
int f(int n)
{
    int prev=0;
    int prev1=1;

    for(int i=2;i<=n;i++)
    {
       int ans=prev+prev1;
        prev=prev1;
        prev1=ans;
    }
    return prev1;
}
int main()
{
    int n=7;
   
    cout<<f(n);

    return 0;
}
