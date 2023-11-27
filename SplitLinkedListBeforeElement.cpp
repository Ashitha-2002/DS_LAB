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
	
	void split(LinkedList &ll1, LinkedList &ll2 , int data)
	{
		Node *current = head;
		Node *prev = head;
		
		
		while(current != NULL)
		{
			if(current->value == data)
			{
				while(current != NULL)
				{
					ll2.createNode(current->value);
					current = current->next;
				}
				
				ll1.tail = prev;
				ll1.tail->next = NULL;
			}
			else
			{
				prev = current;
				current = current->next;
			}
		}
	}

private:
    Node *head;
    Node *tail;
};

int main() 
{
	int n, data,seachElement,position;
	LinkedList list1;
	LinkedList list2; 
	cout << "Enter number of nodes : ";
	cin >> n;
	for(int  i = 0; i < n; i++)
	{
		cout << "Enter the data for node " << i + 1 << " : ";
		cin >> data;
		list1.createNode(data);
	}
	
	cout << "Linked List" << endl;
	list1.printList();
	
	cout << "Enter the data to search : " << endl;
	cin >> seachElement;
	position = list1.search(seachElement);
	if(position > 0)
	{
		cout << "Element " << seachElement << " found in position " << position << endl;
		list1.split(list1, list2, seachElement);	
	}
	else
	{
		cout << "Element " << seachElement << " not found" << endl;
	}
	
	cout << "Linked List 1 : ";
	list1.printList();
	cout << "Linked List 2 : ";
	list2.printList();			
}
