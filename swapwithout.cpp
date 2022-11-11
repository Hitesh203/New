#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"\na=";
  cin>>a;
  cout<<"\nb=";
  cin>>b;
  cout<<"\nBefore Swapping"<<"\na="<<a<<"\nb="<<b;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"\nAfter Swapping"<<"\na="<<a<<"\nb="<<b;
  return 0;
}
