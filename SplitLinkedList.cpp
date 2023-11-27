#include<iostream>

using namespace std;

struct Node {
    int value;
    struct Node * next;
};

class LinkedList
{
public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void createNode(int value)
    {
        Node *temp = new Node;
        temp->value = value;
        temp->next = NULL ;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {   
            tail->next = temp;
            tail = temp;
        }
    }

    void printList() {
        Node * current = head;

        while (current != NULL) 
		{
           	cout << current->value << "->";
        	current = current->next;
        }
        cout << "NULL" << endl;
    }
    
    int search(int data)
    {
    	Node *current = head;
    	int position = 0;
    	
    	while(current != NULL)
    	{
    		position++;
    		if(current->value == data)
			{
				return position;
			}
			else
			{
				current = current->next;
			}	
		}
		return -1;
	}
	
	void split(LinkedList list, int data)
	{
		Node *current = head;
		Node *prev = head;
		
		LinkedList list2; 
		
		while(current != NULL)
		{
			if(current->value == data)
			{
				while(current != NULL)
				{
					list2.createNode(current->value);
					current = current->next;
				}
				
				list.tail = prev;
				list.tail->next = NULL;
			}
			else
			{
				prev = current;
				current = current->next;
			}
		}
		
		cout << "Linked List 1 : ";
		list.printList();
		cout << "Linked List 2 : ";
		list2.printList();			
	}

private:
    Node *head;
    Node *tail;
};

int main() 
{
	int n, data,seachElement,position,splitElement;
	LinkedList ll;
	cout << "Enter number of nodes : ";
	cin >> n;
	for(int  i = 0; i < n; i++)
	{
		cout << "Enter the data for node " << i + 1 << " : ";
		cin >> data;
		ll.createNode(data);
	}
	
	cout << "Linked List" << endl;
	ll.printList();
	
	cout << "Enter the data to search : " << endl;
	cin >> seachElement;
	position = ll.search(seachElement);
	if(position > 0)
	{
		cout << "Element " << seachElement << " found in position " << position << endl;	
	}
	else
	{
		cout << "Element " << seachElement << " not found" << endl;
	}
	
	cout << "Enter the data to split : " << endl;
	cin >> splitElement;
	ll.split(ll, splitElement);
}
