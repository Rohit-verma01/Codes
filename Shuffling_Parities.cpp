#include<bits/stdc++.h>

using namespace std;
void funct()
{
	long long n;
	int i=0;
	cin>>n;
	long long temp;
	long long sum=0;
	long long countEven=0,countOdd=0;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		if(temp%2==0)
			countEven++;
		else
			countOdd++;
	}
	
	int countEvenPlace = n/2;
	int countOddPlace = n - countEvenPlace;	
	if(countEvenPlace > countOdd)
		sum = sum + countOdd;
	else
		sum = sum + countEvenPlace;	
		
	if(countOddPlace > countEven)
		sum = sum + countEven;
	else
		sum = sum + countOddPlace;	
	
	cout<<sum<<endl;
}


int main()
{
  int t;
  cin>>t;
  while(t--)
  	funct();
  return 0;
}
