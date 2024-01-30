#include<stdio.h>
#include<stdlib.h>

struct node // ek structure banaya jisme saare nodes honge list ke
{
    int data;
    struct node* next;
}* head = NULL,
   *tail
   = NULL; 

void insert(int value)
{
    struct node* newnode; // Naya node banaya
    newnode = (struct node*)malloc(
        sizeof(struct node));
 
    newnode->data = value; // naye node ko nayi value de rahe
    newnode->next = NULL;
 
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode; // peeche ke or tail node ko update kar rahe
    }
    return;
}
 
void delete (int pos)
{
    struct node* temp = head; // temporary variable jo next head ki taraf point kargea
    int i;
    if (pos == 0) {
        printf("\nElement deleted is : %d\n", temp->data);
        head = head->next;
        temp->next = NULL;
        free(temp);
        }
    else {
        for (i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        // Node yaha se select karenge josko delete karna hai
        
        struct node* del
            = temp->next; // yeh C main likhne tareeeka hai to point to the next node
        temp->next = temp->next->next;
        printf("\nElement deleted is : %d\n", del->data);
        del->next = NULL;
        free(del); // Node ko yaha delete kiya hai
    }
    return;
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    printf("\nLinked List after deletion at position 0");
    delete (0); // List yaha se check hoga
    printf("\nLinked List after deletion at position 2");
    delete (2);
    return 0;
}

