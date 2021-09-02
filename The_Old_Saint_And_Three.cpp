#include<bits/stdc++.h>

using namespace std;
void funct()
{
  int b[3];
  int a[3];
  int i=0,count1=0,count2=0;
  for(i=0;i<3;i++)
  {
  	cin>>a[i];
  	if(a[i]==1)
  		count1++;
  }
  
  for(i=0;i<3;i++)
  {
  	cin>>b[i];
  	if(b[i]==1)
  		count2++;
  }
  
  if(count1==count2)
  	cout<<"Pass"<<endl;
  else
  	cout<<"Fail"<<endl;
}


int main(){
  int t;
  cin>>t;
  while(t--)
  	funct();
  return 0;
}
