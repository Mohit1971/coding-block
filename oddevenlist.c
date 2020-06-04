/*
We are Given a singly linked list, group all odd nodes together followed by the even nodes. Here we are talking about the node number and not the value in the nodes.
Note: i) You should try to do it in place. The program should run in O(1) space complexity and O(nodes) time complexity.
ii) The relative order inside both the even and odd groups should remain as it was in the input.
iii) The first node is considered odd, the second node even and so on

Input Format
First line contains the number of nodes n. Next line contains the n node numbers.

Constraints
1<=Length of linked list<=10^4

Output Format
Print the original list and the modified list after Grouping all odd nodes together followed by the even nodes.

Sample Input
10
1 2 3 4 5 6 7 8 9 10
Sample Output
Original List: 1 2 3 4 5 6 7 8 9 10
Modified List: 1 3 5 7 9 2 4 6 8 10
*/





#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
	int data;
	struct node  *next;

};
struct node *head=NULL;
struct node *newnode,*temp;

void createnode()
{

newnode = (struct node *)malloc(sizeof(struct node));

printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=NULL;

if(head == NULL)
{
	head=newnode;

}

else
{
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;

	}

	temp->next=newnode;

}
}


struct node* odd_head;
struct node* odd_tail;
struct node* even_head;
struct node* even_tail;


void listoddeven()
{


temp=head;
bool isodd = 1;
{

while(temp!=NULL)
{

if(isodd)
{
	if(odd_head==NULL)
	{
odd_head=odd_tail=temp;

	}

	else
	{

		odd_tail->next=temp;
		odd_tail=temp;

	}

	temp=temp->next;
	odd_tail->next=NULL;

}

else
{

	if(even_head==NULL)
	{
       even_head=even_tail=temp;

	}

	else
	{

		even_tail->next=temp;
		even_tail=temp;

	}

	temp=temp->next;
	even_tail->next=NULL;

}

isodd=!isodd;

}

odd_tail->next=even_head;

}

}

void print()
{
	temp=odd_head;


	while(temp!=NULL)
	{
		printf("%d",temp->data);
	    temp = temp->next;

	}

}

int main()
{

createnode();
createnode();
createnode();
createnode();
createnode();
createnode();
listoddeven();
print();

}
