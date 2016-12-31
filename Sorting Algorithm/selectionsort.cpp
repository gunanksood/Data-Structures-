#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i=0,j,k,in;
    cout<<"Enter the no. of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<endl<<"enter "<<n<<" elements"<<endl;
    while(i<n)
    {
       cin>>a[i++];

    }
    for(i=0;i<n;i++)
    {
        in=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[in] )
            {
                in=j;
            }
        }

        swap(a[i],a[in]);
    }

cout<<"Sorted elements are "<<endl;
    i=0;
    while(i<n)
    {
       cout<<a[i++]<<" ";

    }
    return 0;
}
