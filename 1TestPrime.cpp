/* 
Prime Number Testing 
The First Program from the Udemy competitive programming language.  
*/
#include<iostream> 
using namespace std;
 
int main()
{
int n;
cout<<"Enter a positive number for primary testing! "<<endl;
cin >> n;
for( int i; i<n ;i++)
{
	if(n%i==0){
	cout<<"The Number is not prime"<<endl;
	}
	else 
	  {
	  cout<<"The number is Prime number"<<endl;
	  }
}  
return 0;
}




