
#include<iostream>
using namespace std;
int main()
{
  int anum;
  int bnum;
  int result;

  cout<<"Enter a number : ";
  cin>>anum;
  cout<<"\nEnter a number : ";
  cin>>bnum;

  cout<<"\n"<< ((anum > bnum ) ? cout<< "\nLargest :"<<anum <<"\nSmallest :" << bnum :
	                             cout<< "\nLargest :"<<bnum <<"\nSmallest :" << anum) ;
  
 
	return(0);
}
