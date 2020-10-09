#include <iostream>
using namespace std;
int main()
{
int n,k,sum=0,i=1,z=0;
cin>>n>>k;
int l=k;
for(i=1;i<=n;i++)
{
    if(l+5*i<=240 && i<=n )
    {
    l+=5*i;
    z+=1;
    }

}
cout<<z;
return 0;
}
