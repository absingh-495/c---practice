
#include <iostream>  
using namespace std;
int main()
{
  int n, fac;
  cout<<"\n enter the given the number: ";
  cin>>n;
  fac=1;
  while(n>=1){
    fac = fac*n;
    n = n-1;
  }
  cout<<"\n factorial:"<<fac;
  return 0;
}

 