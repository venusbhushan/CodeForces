//#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{ string word;
int arr[101];
int n,all=0,first=0;
cin>>word;
for(n=0;n<word.length();n++)
{
    arr[n]=word[n];
}
for(n=0;n<word.length();n++)
{
    if(arr[n]<=90)
    {
        all+=1;
    }
    if(arr[0]<=90)
    {
        first+=1;
    }
}
int x=word.length();
if(all == word.length())
{
      transform(word.begin(), word.end(), word.begin(), ::tolower);
      // word[0]=toupper(word[0]);
      cout<<word;
      return 0;
}
if(arr[0]>=90 && all==x-1)
{
     transform(word.begin(), word.end(), word.begin(), ::tolower);
     word[0]=toupper(word[0]);
      cout<<word;
      return 0;
}

cout<<word;


    return 0;
}
