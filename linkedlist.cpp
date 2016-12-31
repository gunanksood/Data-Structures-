#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node* link;
};


// ******************Global Declaration of variables******************
struct node* temp;
struct node* head;
struct node * one;
struct node * n1;
struct node * pre;
struct node * perpre;


//*******Function to create Linked List***************
void create_ll()
{
    int num;
cout<<"enter the number of elements "<<endl;
cin>>num;
cout<<"enter "<<num<<" elements";
while(num>0)
{
      if(head==NULL)
    {

       one=new node;
        cin>>one->data;
        one->link=NULL;
        head=one;


    }
    else
    {

        temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        struct node *n;
        n=new node;
        cin>>n->data;
        n->link=NULL;
        temp->link=n;
    }
    num--;
}

}



//**********Function to insert a value in the Beginning**********
void insert_beg()
{
if(head==NULL)
{
    cout<<"List is Empty";
}
else
{
n1=new node;
cout<<"enter the value "<<endl;
cin>>n1->data;
n1->link=head;
head=n1;
}

}


//**********Function to insert a value in the end *****************
void insert_end()
    {
     if(head==NULL)
     {
         cout<<"List is empty";
     }
     else
     {

temp=head;
while(temp->link!=NULL)
{
    temp=temp->link;
}
n1=new node;
cout<<"enter the number"<<endl;
cin>>n1->data;
temp->link=n1;
n1->link=NULL;
     }
    }


//************Function to add an element before a number
void add_before()
{
    if(head==NULL)
{
    cout<<"List is Empty";
}
else
{
    int num,flag=0;
temp=head;
cout<<"enter the element before which element is inserted "<<endl;
cin>>num;
while(temp->data!=num)
{
   one=temp;
   temp=temp->link;
   if(temp->link==NULL)
   {

if(temp->data==num)
{
    goto add;
}
else
{
   cout<<"**************Please enter a valid number**************"<<endl<<endl;
   flag=1;
   break;
}



   }
}
if(flag==0)
{
    add: n1=new node;
    cout<<"enter the value to insert";
    cin>>n1->data;
    n1->link=temp;
    one->link=n1;
}



}
}

 //**************Function to add an element after a value****************
void add_after()
{
    if(head==NULL)
    {
        cout<<"list is empty";

    }
    else{
   int num,flag=0;
temp=head;
cout<<"enter the element after which element is inserted "<<endl;
cin>>num;
while(temp->data!=num)
{

   temp=temp->link;
   if(temp->link==NULL)
   {
       if(temp->data==num)
       {
          goto add;
       }
       else
       {
           last: cout<<"**************Please enter a valid number************"<<endl<<endl;
           flag=1;
           break;
       }

   }
}
if(flag==0)
{

   add: n1=new node;
    cout<<"enter the value to insert"<<endl;
    cin>>n1->data;
    n1->link=temp->link;
    temp->link=n1;

}
    }
}


//*********************Function to delete a value from the Beginning***********
void delete_beg()
{
    if(head==NULL)
    {
        cout<<"list is empty";

    }
else
    {
        temp=head;
head=temp->link;
cout<<"Node Deleted Successfully"<<endl<<endl;
free(temp);
    }




}



//************Function to delete A value from the end***************
void delete_end()
{

    if(head==NULL)
    {
        cout<<"list is empty";

    }
    else{
         temp=head;
while(temp->link!=NULL)
{
    one=temp;
    temp=temp->link;
}
one->link=NULL;
free(temp);
cout<<"node deleted successfully"<<endl<<endl;
    }

}




//**********************Function to delete a specified value************
void delete_node()
{
    if(head==NULL)
    {
        cout<<"list is empty";

    }
    else{
          int num,flag=0;
temp=head;
    cout<<"enter a node to delete"<<endl;
cin>>num;
while(temp->data!=num)
{
    one=temp;
    temp=temp->link;
    if(temp->link==NULL)
{
        cout<<"enter a valid number"<<endl<<endl;
        flag=1;
        break;
    }
}
one->link=temp->link;
free(temp);
    }

}



//*****************update the value of a node**************
void update()
{
    if(head==NULL)
    {
        cout<<"list is empty";

    }
    else{

      int pos,flag=0,num=1;
temp=head;
cout<<"enter the position of value to update "<<endl;
cin>>pos;
while(num<pos)
{

   temp=temp->link;
   num++;
}

cout<<"enter the new value";
    cin>>temp->data;
    cout<<"************ Value updated successfully*****************"<<endl<<endl;

    }

}

//**************Function to sort the elements of linked list**************
void sort_ll()
{
    if(head==NULL)
    {
        cout<<"list is empty";

    }
    else{
    int num;
    temp=head;
    while(temp->link!=NULL)
    {
        one=temp->link;
        while(one!=NULL)
        {
            if(temp->data>one->data)
            {
                num=temp->data;
                temp->data=one->data;
                one->data=num;
            }
            one=one->link;
        }
        temp=temp->link;
    }
    cout<<"List is Sorted"<<endl<<endl;
    }
}


//********************Search an element in linked list*************************
void search_node()
{
    int num;
    if(head==NULL)
    {
        cout<<"Linked list is empty";

    }
    else{
        int i=0;
        cout<<"Enter a no. to search";
        cin>>num;
        temp=head;
        while(temp!=NULL)
        {
            if(temp->data==num)
            {
                cout<<"no. found at index "<<i<<" in linked list"<<endl;
                break;
            }
            i++;
            temp=temp->link;
        }
        if(temp==NULL)
        {
            cout<<"No. is not present in the linked list"<<endl;

        }
    }


}



//***************Function to display the elements of Linked list*********************
void display_ll()
{
    if(head==NULL)
    {
        cout<<"linked list is empty";
    }
    else
    {
     cout<<"linked list is "<<endl;
    if(head->link!=NULL)
    {
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;


        }


    }
    }

    cout<<endl<<endl<<endl;
}


//**************** count the length of linked list******************
void count()
{
    temp=head;
    int c=0;
    while(temp!=NULL)
    {
        temp=temp->link;
        c++;
    }
    cout<<"Linked list contain "<<c<<" elements"<<endl<<endl;
}






//*****************Sort in descending order****************
void sort_desc()
{
    if(head==NULL)
    {
        cout<<"list is empty";

    }
    else{
        int num;
    temp=head;
    while(temp!=NULL)
    {
        one=temp->link;
        while(one!=NULL)
        {
            if(temp->data<one->data)
            {
                num=temp->data;
                temp->data=one->data;
                one->data=num;
            }
            one=one->link;
        }
        temp=temp->link;
    }
    cout<<"List is Sorted"<<endl<<endl;
    }
}


//*****************convert to decimal****************
void decimal()
{
    if(head==NULL)
    {
        cout<<"list is empty";

    }
    else{
    int a,num=0,tens=1;
    temp=head;
    while(temp!=NULL)
    {

        num=num*tens+temp->data;
        tens=1*10;
        temp=temp->link;

    }
    int rem,dec=0,base=1;
     while (num>0)
    {

        rem = num%10;
        dec = dec+rem*base;
        base = base*2;
        num = num/10;




    }
    cout<<"value in decimal is : "<<dec<<endl<<endl;
    }
}
void duplicate()
{
    if(head==NULL)
    {
        cout<<"list is empty";

    }
    else{
    //complete the code

    temp=head;
    while(temp!=NULL)
        {
        one=temp->link;
        while(one!=NULL)
            {

            if(temp->data==one->data)
                {
                    if(temp->link==pre)
                    {
                        temp->link=one->link;
                        break;
                    }
                    else
                    {
                         pre->link=one->link;
                         break;

                    }


            }

            pre=one;
            one=one->link;



        }
        temp=temp->link;
    }

    }
}





//***************MAIN FUNCTION**************************
int main()
{
  head=NULL;
  int choice;

    do
    {


        cout<<endl<<"choose your option";
        cout<<endl<<"1. Create a linked list";
        cout<<endl<<"2. Insert a node in beginning";
        cout<<endl<<"3. insert a node in the end ";
        cout<<endl<<"4. Add before a given node";
        cout<<endl<<"5. Add after a given node";
        cout<<endl<<"6. delete from the beginning";
        cout<<endl<<"7. delete from the ending";
        cout<<endl<<"8. delete a specific node";
        cout<<endl<<"9. Update a value";
        cout<<endl<<"10. Sort the linked list";
        cout<<endl<<"11. search the value in linked list ";
        cout<<endl<<"12. Print the linked list";
        cout<<endl<<"13. Length of linked list";
        cout<<endl<<"14. Search an element ";
        cout<<endl<<"15. sort in descending order";
        cout<<endl<<"16. convert to decimal";
        cout<<endl<<"17. to remove duplicate";
        cout<<endl<<"enter 0 to exit"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
            create_ll();
            break;
        case 2:
            insert_beg();
            break;
        case 3:
            insert_end();
            break;
        case 4:
            add_before();
            break;
        case 5:
            add_after();
            break;
        case 6:
            delete_beg();
            break;
        case 7:
            delete_end();
            break;
        case 8:
            delete_node();
            break;
        case 9:
            update();
            break;
        case 10:
            sort_ll();
            break;
        case 11:
            search_node();
            break;
        case 12:
            display_ll();
            break;
        case 13:
            count();
            break;
        case 14:
            search_node();
            break;
        case 15:
            sort_desc();
            break;
        case 16:
            decimal();
            break;
        case 17:
            duplicate();
            break;


        }
    }
    while(choice !=0);
    return 0;
}


// ***************************** MADE BY:GUNANK SOOD ******************************
