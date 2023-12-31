#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }

    // Write your code here

    LinkedListNode<int>*prev=NULL;
    LinkedListNode<int>*cur=head;
    LinkedListNode<int>*forw=NULL;

    while(cur!=NULL)
    {
        forw=cur->next;
        cur->next=prev;
        prev=cur;
        cur=forw;
    }
    return prev;

}
