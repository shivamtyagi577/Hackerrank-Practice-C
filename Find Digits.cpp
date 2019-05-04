#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits( int n)
{
   int temp,r,c=0;
   temp=n;
   while(temp>0)
   {
      if(temp%10!=0 && n%(temp%10)==0)
      {
          c++;
      }
      temp=temp/10; 
   }
    return c;
}

int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int result=findDigits( n);
        cout<<result<<endl;
    }
    return 0;
}
