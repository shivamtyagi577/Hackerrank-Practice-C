#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int i,c[n],e=100;
    for(i=0;i<n;i++)
    {
        cin>>c[i];

    }
    i=0;
    for(i=0;i<n;i+=k)
    {
        if(c[i]==0)
        {
            e--;
        }
        if(c[i]==1)
        {
            e=e-3;
        }
    }   
    
    cout<<e;
    return 0;
}
