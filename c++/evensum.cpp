#include<iostream>
using namespace std;
int main()
{
int num,i,sum=0;
cout<<"enter number : ";
cin>>num;

cout<<"even number "<<num<<endl;
for(i=1;i<=num;i++)
{
if(i%2==0)
{
cout<<"\t "<<i<<endl;
}
}
cout<<" even number upto "<<num<<endl;
for(i=1;i<=num*2;i++)
{
   if(i%2==0)
  {
    cout<<"\t"<<i<<endl;
    sum=sum+i;
  }
}
cout<<"sum of  given number :"<<sum<<endl;


}
