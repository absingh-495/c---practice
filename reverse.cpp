#include<iostream>
using namespace std;
  int main(){
    // initalized two variables
    int i, rev=0;
    cout<<"\n enter the number to find the reverse of it: ";
    // stored in i
    cin>>i; 
    // checking that the value is greater than 0 or not
    while ( i>0 )
    {
      rev = (rev * 10) + i % 10;
      i = i /10;
     }
    // printing the value
    cout<<"\n Reverse = "<<rev;
    return 0;

  }