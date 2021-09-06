#include<bits/stdc++.h>

using namespace std;
void funct()
{
	int n,a,b;
	int temp;
	//n is for size of string
	cin>>n;
	//a  minutes to fill each inter-district e-pass application
	cin>>a;
	//b  minutes for each inter-state e-pass application.
	cin>>b;
	int count_a=0,count_b=0,total=0;;
	//count_a is for count of a
	//count_b is for count of b
	//total is for total time taken

	string s;
	cin>>s;

	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
			count_a++;
		else
			count_b++;
		
	}
  //this will count total time taken for filling the forms
	total = (count_a * a) + (count_b * b);
	cout<<total<<endl;
	
}


int main()
{
  int t;
  cin>>t;
  while(t--)
  	funct();
  return 0;
}
