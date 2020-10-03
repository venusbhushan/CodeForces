#include<iostream>
using namespace std;
int main()
{ int t,n,m,s,i,j,a,b,c,d;
   cin>>t;
   while(t--)
   {
       cin>>n>>m;s=-1;
       for(i=0;i<n;i++)
       {
           cin>>a>>b>>c>>d;
           if(b==c)
           {
               s=1;
           }
       }
       if(s==1 && m%2==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }

   }

    return 0;
}
