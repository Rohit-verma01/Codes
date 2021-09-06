#include<bits/stdc++.h>

using namespace std;
void funct()
{
	int a[3],d,e;
	int i=0,sum=0;
	cin>>a[0];
	cin>>a[1];
	cin>>a[2];
	cin>>d>>e;
	sort(a,a+3);
	for(i=0;i<3;i++)
	{
		if(e<a[i])
			break;
	}
	if(i==3)
	{
		sum=a[0]+a[1];
		if(sum<=d)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else if(i==0)
	{
		cout<<"NO"<<endl;		
	}
		
	else if(i==1)
	{
		sum=a[1]+a[2];
		if(sum<=d)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else
	{
		sum=a[0]+a[2];
		if(sum<=d)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}


int main(){
  int t;
  cin>>t;
  while(t--)
  	funct();
  return 0;
}
