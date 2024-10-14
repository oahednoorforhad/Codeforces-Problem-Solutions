#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};

node *start, *ptr;
void searchD()
{
    cout<<"TYPE DATA: ";
    int tos;
    cin>>tos;
    
}
int main()
{
    start= new node();
    ptr=start;
    cout<<"How many data: ";
    int n;
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        cin>>ptr->data;
        if (i!=n)
        {
            ptr->link = new node();
            ptr = ptr->link;
        }
    }
    ptr->link= NULL;
    ptr=start;
    searchD();
    while (ptr!=NULL)
    {
        cout<< ptr->data << "";
        ptr = ptr->link;
    }
    
}