#include<iostream>
using namespace std;
int main()  
{  
int n,r,sum=0,p;        
cin>>n;    
p=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}
if(p==sum)  {
cout<<"Armstrong Number";  }  
else    {
cout<<"Not Armstrong Number"; }  
cout<<endl;}
