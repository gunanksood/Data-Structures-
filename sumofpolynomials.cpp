#include<iostream>
using namespace std;
class node
{
    public:
    int pow;
    int coff;
    node* next;
};



void insert1(node** head1)
{
    int i;
    node* temp = *head1;
    do{
          if(*head1 == NULL)
          {

              cout<<"please enter the coff and pow of 1st polynomial"<<endl;
              node* n = new node;
              cin >>n -> coff;
              cin >>n-> pow;
              n -> next = NULL;
              *head1 = n;
          }
          else
          {
              temp = *head1;
              while(temp->next != NULL)
              {
               temp = temp->next;
              }

              cout<<"please enter the coff and pow of polynomial"<<endl;
              node* n = new node;
              cin >>n -> coff;
              cin >>n-> pow;
              n -> next = NULL;
              temp -> next = n;


          }
       cout<<"enter 0 to exit or 1 to continue"<<endl;
       cin >> i;
      }while(i != 0);
}



void show1(node* head1)
{
    node* temp = head1;
    while(temp)
    {
     cout<<temp->coff<<"^"<<temp->pow;
    temp = temp -> next;
    if(temp != NULL)
    {
        cout<<" + ";
    }
    }
cout<<endl;
}


void insert2(node** head2)
{
    int i;
    node* temp = *head2;
    do{
          if(*head2 == NULL)
          {

              cout<<"please enter the coff and pow of 2nd polynomial "<<endl;
              node* n = new node;
              cin >>n -> coff;
              cin >>n-> pow;
              n -> next = NULL;
              *head2 = n;
          }
          else
          {
              temp = *head2;
              while(temp->next != NULL)
              {
               temp = temp->next;
              }

              cout<<"please enter the coff and pow of polynomial"<<endl;
              node* n = new node;
              cin >>n -> coff;
              cin >>n-> pow;
              n -> next = NULL;
              temp -> next = n;


          }
       cout<<"enter 0 to exit or 1 to continue"<<endl;
       cin >> i;
      }while(i != 0);
}


void show2(node* head2)
{
    node* temp = head2;
    while(temp)
    {
     cout<<temp->coff<<"^"<<temp->pow;
    temp = temp -> next;
    if(temp != NULL)
    {
        cout<<" + ";
    }
    }
cout<<endl;
}


void add(node* head1, node* head2,node** head3)
{
    cout<<endl<<"Adding the polynomials"<<endl;
    node* temp1 = head1;
    node* temp2 = head2;
    node* temp3 = NULL;
    while(temp1 && temp2)
    {
        if(temp1 -> pow == temp2 -> pow)
        {

            if(*head3 == NULL)
            {
                node* n = new node;
                n -> coff = temp1 -> coff + temp2 -> coff;
                n -> pow = temp1 -> pow;
                n -> next = NULL;
                temp3 = n;
                *head3 = n;
            }
            else
            {
                node* n = new node;
                n -> coff = temp1 -> coff + temp2 -> coff;
                n -> pow = temp1 -> pow;
                n -> next = NULL;
                temp3 -> next = n;
                temp3 = temp3->next;

            }
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        else if(temp1 -> pow > temp2 -> pow)
        {

            if(*head3 == NULL)
            {
                node* n = new node;
                n -> coff = temp1 -> coff;
                n -> pow = temp1 -> pow;
                n -> next = NULL;
                temp3 = n;
                *head3 = n;
            }
            else
            {
                node* n = new node;
                n -> coff = temp1 -> coff;
                n -> pow = temp1 -> pow;
                n -> next = NULL;
                temp3 -> next = n;
                temp3 = temp3->next;

            }
            temp1 = temp1 -> next;
        }
        else
        {

            if(*head3 == NULL)
            {
                node* n = new node;
                n -> coff = temp2 -> coff;
                n -> pow = temp2 -> pow;
                n -> next = NULL;
                temp3 = n;
                *head3 = n;
            }
            else
            {
                node* n = new node;
                n -> coff = temp2 -> coff;
                n -> pow = temp2 -> pow;
                n -> next = NULL;
                temp3 -> next = n;
                temp3 = temp3->next;

            }
            temp2 = temp2 -> next;
        }
    }
temp3 -> next = NULL;
}


void show3(node* head3)
{
    cout<<endl<<"Result is : "<<endl;
    node* temp = head3;
    while(temp)
    {
     cout<<temp->coff<<"^"<<temp->pow;
    temp = temp -> next;
    if(temp != NULL)
    {
        cout<<" + ";
    }
    }
cout<<endl;
}


int main(void)
{
    node* head1 = NULL;
    node* head2 = NULL;
    node* head3 = NULL;
    insert1(&head1);
    show1(head1);
    insert2(&head2);
    show2(head2);
    add(head1,head2,&head3);
    show3(head3);
}
