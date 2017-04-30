#include<iostream>
#include<string.h>
#include<math.h>
#include<cstdlib>
using namespace std;
#define MAX 10
int a[MAX][MAX],n;
int visited[MAX];
int q[MAX];
/* a function to build an adjacency matrix of the graph*/
void buildadjm(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {   
               a[i][j]=0;
               continue;
            }
            else
            {
            cout<<"enter for "<<i<<","<<j<<endl;
            cin>>a[i][j];
            }
        } 
    }
    cout<<"graph is "<<endl;
    for ( int i = 0 ; i < n ; i++ )
    {
        for (int  j = 0 ; j < n ; j++ )
        {

            cout<<a[i][j]<<"   ";
	}
	cout<<endl;
    }
}

int outdegree(int a[MAX][MAX],int x,int n)
{
    int i, count =0;
    for(i=0;i<n;i++)
    {
        if( a[x][i] ==1)
        {
            count++;
        }
    }
    return(count);
}

int indegree(int a[MAX][MAX],int x,int n)
{
    int i, count =0;
    for(i=0;i<n;i++)
    {
        if( a[i][x] ==1)
        {
            count++;
        }
    }
return(count);
}

void dfs(int v)
{
    cout<<v<<endl;
    visited[v]=1;
    int j;
    for(j=0;j<n;j++)
    {
        if(a[v][j]&&visited[j]==0)
        dfs(j);
    }
}

void bfs(int v)
{
	 q[MAX]={0};
	int front=0;
        int rear=0;
	visited[MAX]={0};
	visited[v]=1;
	q[rear]=v;
	rear++;
	while(rear!=front)
	{
		int u=q[front];
		cout<<u<<" ";
		front++;


	for(int i=0;i<n;i++)
	{
		if(!visited[i]&&a[u][i]==1)
		{
			q[rear]=i;
			rear++;
			visited[i]=1;

		}

	}
}
cout<<endl;

}
/*void display()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           cout<<a[i][j];
        cout<<endl;
    }
}*/
main()
{ 
int choice;
int key,i,h,v;
cout<<"Enter the number of nodes in graph maximum\n";
cin>>n;

    do
    {
        cout<<"1.Build graph\n";
        cout<<"2.Indegree\n";
        cout<<"3 Outdegree\n";
        cout<<"4 DFS\n";
        cout<<"5 BFS\n";
        cout<<"6.Quit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            buildadjm(n);
            break;
        case 2:
            for(i=0;i<n;i++)
            {
                cout<<"The indegree of the node "<<i<<" is "<<indegree(a,i,n)<<endl;
            }
            break;
        case 3:
            for(i=0;i<n;i++)
            {
                cout<<"The outdegree of the node "<<i<<" is "<<outdegree(a,i,n)<<endl;
            }
            break;
        case 4:
            for(i=0;i<n;i++)
            {
                visited[i]=0;
            }
            cout<<"enter starting vertex"<<endl;
            cin>>v;
             //0;
            dfs(v);
            break;
        case 5:
            for(i=0;i<n;i++)
            {
                visited[i]=0;
            }
            cout<<"enter starting vertex"<<endl;
            cin>>v;//2
            bfs(v);
            break;
        case 6:
            break;
        default :
            cout<<"Wrong choice\n";
        }
    }while(choice != 6);
    
    return 0;
}
