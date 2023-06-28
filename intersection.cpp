/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/
#include<bits/stdc++.h>
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
   Node* first=firstHead;
   Node* second=secondHead;

   unordered_set<Node*>ss;

   while(first)
   {
       ss.insert(first);
       first=first->next;
   }
   while(second)
   {
       if(ss.find(second)!=ss.end())
       {
           return second;
       }
       second=second->next;

   }
   return NULL;
}

