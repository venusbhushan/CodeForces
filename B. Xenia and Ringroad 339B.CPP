#include <iostream>
using namespace std;

int main()
{
    int i,n,m,sum,arr[100000];
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
      cin>>arr[i];
    }
    sum=arr[0]-1;//to move to arr[0] from  house 1
    for(i=0;i<m-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            sum+=arr[i+1]-arr[i];
        }
        else
        {
           sum+=n-vect[i]+vect[i+1];
        }
    }

cout<<sum<<endl;
  return 0;
}
