#include<iostream>
#include<stdlib.h>
#include<climits>
using namespace std;
class node
{

public:
    int data;
    node* left;
    node* right;
};
int h=0;
node* newnode(int data)
{
    node* temp=new node();
    temp->data=data;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}

node* insertion(node* node,int data)
{
if(node==NULL)
{
    return newnode(data);
}
if(data<node->data)
{
    node->left=insertion(node->left,data);
}
else if(data>node->data)
{
    node->right=insertion(node->right,data);
}
return node;
}

node* minvaluenode(node* root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

node* deletion(node* root,int key)
{
    node* temp;
if(root==NULL)
{
    return NULL;
}
else if(key<root->data)
{
    root->left=deletion(root->left,key);
}
else if(key>root->data)
{
    root->right=deletion(root->right,key);
}
else
{
    if(root->left==NULL)
    {
        temp=root->right;
        free(root);
        return temp;
    }
     if(root->right==NULL)
    {
        temp=root->left;
        free(root);
        return temp;
    }
    temp=minvaluenode(root->right);
    root->data=temp->data;
    root->right=deletion(root->right,root->data);
    return root;
}

}
void inorder( node* root)
{
if(root==NULL)
{
    return;
}
inorder(root->left);
cout<<"    "<<root->data;
inorder(root->right);
}
void preorder( node* root)
{
if(root==NULL)
{
    return;
}
cout<<"    "<<root->data;
preorder(root->left);
preorder(root->right);
}
void postorder( node* root)
{
if(root==NULL)
{
    return;
}
postorder(root->left);
postorder(root->right);
cout<<"    "<<root->data;
}

int searching(node* root,int n)
{

if(root!=NULL)
{
searching(root->left,n);
if(root->data==n)
{

h=1;
}
searching(root->right,n);
}


return h;
}

int maximum(int a,int b)
{
    if(a>b )
        return a;
    if(b>a)
        return b;

}
int height(node* root)
{
if(root->left==NULL && root->right==NULL)
{
    return 0;
}
     int l=0;
    int r=0;
if(root->left!=NULL)
{
    l=1+height(root->left);

}
if(root->right!=NULL)
{
    r=1+height(root->right);

}

return maximum(l,r);
}



int main()
{
    node* root=NULL;
    int i,j,k,n,s,t;

    do
    {
        cout<<endl<<"enter 1 to insert.  ";
        cout<<endl<<"enter 2 to delete. ";
        cout<<endl<<"enter 3 to display Inorder.";
        cout<<endl<<"enter 4 to display Preorder.";
        cout<<endl<<"enter 5 to display postorder.";
        cout<<endl<<"enter 6 to search a node";
        cout<<endl<<"enter 7 to print height of a tree";
        cin>>t;
        switch(t)
        {
            case 1:
                   cout<<"enter the value to insert"<<endl;
                   cin>>k;
                   root=insertion(root,k);
                   break;
            case 2:
                   cout<<"enter the value to insert"<<endl;
                   cin>>k;
                   deletion(root,k);
                   break;
            case 3:inorder(root);
                    break;
            case 4: preorder(root);
                    break;
            case 5: postorder(root);
                    break;
            case 6:
                    cout<<"enter a no. to search";
                    cin>>n;
                    h=0;
                    s=searching(root,n);
                    if(s==1)
                    {
                       cout<<"no found";
                    }
                    else
                    {
                       cout<<"no. not found";
                    }
                    break;
            case 7:
                    k=height(root);
                    cout<<"height is "<<k<<endl;
                    break;
        }
    }while(t!=0);


}


