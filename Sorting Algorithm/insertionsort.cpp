#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n,i,j;
cout<<"enter the number of elements "<<endl;
cin>>n;
int a[n];
i=0;
cout<<"enter "<<n<<" elements "<<endl;
while(i<n)
{
   cin>> a[i];
   i++;
}

for(i=0;i<n;i++)
{
    j=i;
    while(j>0 && a[j]<a[j-1])
    {

        swap(a[j],a[j-1]);
        j--;
    }
}

cout<<"Sorted array is"<<endl;
i=0;
while(i<n)
{
   cout<<a[i]<<" ";
   i++;
}
}

