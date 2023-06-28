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

bool detectCycle(Node *head)
{
	//	Write your code here

    Node* sl=head;
    Node* fa=head->next;

    if(head==NULL||head->next==NULL)
    {
        return false;
    }
    while(fa!=NULL && fa->next!=NULL)
    {
        sl=sl->next;
        fa=fa->next->next;

        if(sl==fa)
        {
            return true;
        }
    }
    return false;
}
