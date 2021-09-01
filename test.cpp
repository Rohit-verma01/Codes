#include<bits/stdc++.h>

using namespace std;
void funct()
{
  int n,i=0;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  	cin>>a[i];
  sort(a,a+n);
  int temp=a[0];
  for(i=1;i<n;i++)
  {
  	if(a[i]>temp)
  		break;
  }
  if(i==n)
  	cout<<0<<endl;
  else
  	cout<<n-i<<endl;
}


int main(){
  int t;
  cin>>t;
  while(t--)
  	funct();
  return 0;
}
