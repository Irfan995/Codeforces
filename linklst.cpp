#include<iostream>
using namespace std;
void print();
bool find(int n);
struct node
{
    int number;
    node *next;
    //node *prev;
};
node *head=NULL;
node *tail=NULL;


void insert(int n)
{
    if(head==NULL)
    {
        node *temp= new node();
        temp->number=n;
        temp->next=NULL;
        head=temp;
        tail=head;
    }
    else
    {
        node *temp= new node();
        temp->number=n;
        temp->next=NULL;
        tail->next=temp;
        //temp->prev=tail;
        tail=temp;

    }

}
void delte(int n)
{
    if(!find(n))
        cout<<"element not found\n";
    else
    {

        node *temp=head;
        if(head->number==n)
        {
            node *t=head;
            head=head->next;
            temp=head;
            free(t);
        }

        else

        {
            while(1)
            {
                node *temp2=temp->next;
                if(temp2==tail)
                {
                    tail=temp;
                    tail->next=NULL;
                    free(temp2);
                    break;
                }
                if(temp2->number==n)
                {
                    temp->next=temp2->next;
                    free(temp2);
                    break;
                }
                temp=temp->next;

            }
        }
        print();
    }


}

bool find(int n)
{
    node* tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->number==n)
        {
            //cout<<"found";
            //break;
            return true;
        }
        tmp=tmp->next;
    }
    return false;
}
void print()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->number;
        cout<<" ";
        temp=temp->next;
    }
    cout<<"\n";

}




int main()
{
    char ass;
    int ele;
    int j;
    while(1)

    {
        scanf("%c", &ass);
        if(ass!='T')
            scanf("%d", &ele);
        else
            break;
        if(ass=='I')
        {
            insert(ele);
            print();

        }
        if(ass=='D')
        {
            delte(ele);
            //print();

        }

        if(ass=='F')
            if(find(ele))
                cout<<"found\n";
            else
                cout<<"not found\n";

    }


    //getch();
    return 0;
}
