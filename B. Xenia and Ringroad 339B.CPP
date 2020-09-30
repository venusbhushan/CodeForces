#include <iostream>
//#include<vector>
using namespace std;

int main()
{
    int i,j,n,m,x,sum,vect[100000];
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
      cin>>vect[i];
    }
    sum=vect[0]-1;
    for(i=0;i<m-1;i++)
    {
        if(vect[i]<vect[i+1])
        {
            sum=sum+vect[i+1]-vect[i];
            cout<<sum<<endl;
        }
        else
        {
           sum=sum+n-vect[i]+vect[i+1];
            cout<<sum<<endl;
        }
    }

cout<<sum<<endl;
  return 0;
}
