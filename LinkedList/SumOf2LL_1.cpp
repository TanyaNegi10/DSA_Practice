// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

//Brute force

// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// int LLlength(Node *&head)
// {
//     Node *temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         count++;
//     }
//     return count;
// }

// void InsertNode(Node *&head, int data)
// {
//     Node *newnode = new Node(data);
//     if (head == NULL)
//     {
//         head = newnode;
//         return;
//     }
//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newnode;
// }

// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data <<" ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int reverse(int num,int cnt)
// {
//     int rem=0;
//     int rev=0;
//     while(num!=0 )
//     {
//         rem=num%10;
//         rev=rev*10+rem;
//         num=num/10;
       
//     }
//     while(cnt!=0 )
//     {
//         rem=num%10;
//         rev=rev*10+rem;
//         num=num/10;
//         cnt--;       
//     }
//     return rev;
// }

// int MakeNumber(Node* &head)
// {
//     Node* temp=head;
//     int r=0;
//     int num=0;
//     int cnt=0;
//     while(temp!=NULL && temp->data==0)
//     {
//         cnt++;
//         temp=temp->next;
//     }
//     while(temp!=NULL)
//     {
//         int d=temp->data;
//         num=r*10+d;
//         r=r*10+d;
//         temp=temp->next;
//     }
//     int ans=reverse(num,cnt);
//     return ans;
// }

// void makeLL(Node* &head,int num)
// {
//     int rem=0;
//     int rev=0;
//     while(num!=0)
//     {
//         rem=num%10;
//         InsertNode(head,rem);
//         num=num/10;       
//     }
//     if(rem==0)
//     {
//         InsertNode(head,rem);
//     }
//     print(head);
// }

// int main()
// {
//     Node* head=NULL;
//     Node *head1 = NULL;
//     Node *head2 = NULL;

//     //Ex-1
//     InsertNode(head1, 2);
//     InsertNode(head1, 4);
//     InsertNode(head1, 3);   
//     InsertNode(head2, 5);
//     InsertNode(head2, 6);
//     InsertNode(head2, 4);

//     //Ex-2
//     // InsertNode(head1, 0);   
//     // InsertNode(head2, 0);

//     //Ex-3
//     // InsertNode(head1, 9);
//     // InsertNode(head1, 9);
//     // InsertNode(head1, 9);
//     // InsertNode(head1, 9);
//     // InsertNode(head1, 9);
//     // InsertNode(head1, 9);
//     // InsertNode(head1, 9);
   
//     // InsertNode(head2, 9);
//     // InsertNode(head2, 9);
//     // InsertNode(head2, 9);
//     // InsertNode(head2, 9);

    
//     int n1=MakeNumber(head1);
//     int n2=MakeNumber(head2);

//     // cout<<n1<<endl;
//     // cout<<n2<<endl;
//     int sum=n1+n2;
//     // cout<<sum<<endl;

//     makeLL(head,sum);
//     return 0;
// }


//Optimal Approach
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void InsertNode(Node *&head, int data)
{
    Node *newnode = new Node(data);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

void makeLL(Node* head1,Node* head2)
{
    int carry=0;
    Node* dummy=new Node();
    Node* temp=dummy;
    while(head1!=NULL || head2!=NULL || carry!=0)
    {
        int sum=0;
        if(head1!=NULL)
        {
            sum+=head1->data;
            head1=head1->next;
        }
        if(head2!=NULL)
        {
            sum+=head2->data;
            head2=head2->next;
        }
        sum+=carry;
        carry=sum/10;
        Node* newnode=new Node(sum%10);
        temp->next=newnode;
        temp=temp->next;
    }
    print(dummy->next);
}

int main()
{
    Node* head=NULL;
    Node *head1 = NULL;
    Node *head2 = NULL;
    
//     //Ex-1
//     InsertNode(head1, 2);
//     InsertNode(head1, 4);
//     InsertNode(head1, 3);   
//     InsertNode(head2, 5);
//     InsertNode(head2, 6);
//     InsertNode(head2, 4);

//     //Ex-2
//     // InsertNode(head1, 0);   
//     // InsertNode(head2, 0);

    //Ex-3
    InsertNode(head1, 9);
    InsertNode(head1, 9);
    InsertNode(head1, 9);
    InsertNode(head1, 9);
    InsertNode(head1, 9);
    InsertNode(head1, 9);
    InsertNode(head1, 9);   
    InsertNode(head2, 9);
    InsertNode(head2, 9);
    InsertNode(head2, 9);
    InsertNode(head2, 9);

    makeLL(head1,head2);
    
    return 0;
}


//Leetcode bruteforce

// ListNode* dummy=new ListNode();
//         ListNode* temp=dummy;
//         long long r1=0;
//         long long num1=0;
//         int cnt1=0;
//         while(l1!=NULL && l1->val==0)
//         {
//             cnt1++;
//             l1=l1->next;
//         }
//         while(l1!=NULL)
//         {
//             long long d=l1->val;
//             num1=r1*10+d;
//             r1=r1*10+d;
//             l1=l1->next;
//         }

//         long long rem1=0;
//         long long rev1=0;
//         while(num1!=0 )
//         {
//             rem1=num1%10;
//             rev1=rev1*10+rem1;
//             num1=num1/10; 
                      
//         }
//         while(cnt1!=0)
//         {
//             rem1=num1%10;
//             rev1=rev1*10+rem1;
//             num1=num1/10;
//             cnt1--;
//         }
        
//         long long r2=0;
//         long long num2=0;
//         int cnt2=0;
//         while(l2!=NULL && l2->val==0)
//         {
//             cnt2++;
//             l2=l2->next;
//         }
//         while(l2!=NULL )
//         {
//             long long d=l2->val;
//             num2=r2*10+d;
//             r2=r2*10+d;
//             l2=l2->next;
//         }

//         long long rem2=0;
//         long long rev2=0;
//         while(num2!=0 )
//         {
//             rem2=num2%10;
//             rev2=rev2*10+rem2;
//             num2=num2/10;           
//         }
//         while(cnt2!=0)
//         {
//             rem2=num2%10;
//             rev2=rev2*10+rem2;
//             num2=num2/10;
//             cnt2--;
//         }

//         long long sum=rev1+rev2;

//         long long rem3=0;
//         long long rev3=0;
//         while(sum!=0 )
//         {
//             rem3=sum%10;
//             ListNode* newNode=new ListNode(rem3);
//             temp->next=newNode;
//             temp=temp->next;
//             rev3=rev3*10+rem3;
//             sum=sum/10;           
//         }
//         if(rem3==0)
//         {
//             ListNode* newNode=new ListNode(rem3);
//             temp->next=newNode;
//         }

//     return dummy->next;

