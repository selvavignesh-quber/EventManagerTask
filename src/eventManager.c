#include<stdio.h>
#include<stdlib.h>


int CHECK_BIT(int n,int e) 
{
	return (n) & (1<<(e-1));
}

struct Node
{
	int mod_no;
	int bit_map;
	void (*cbfp)(int);
	struct Node *next;
};

extern struct Node *head_node;

void interest_mod(int e, void (*func[10])() )
{
    int e1;
	printf("Enter the Event no. ");
    scanf("%d", &e1);

	struct Node * temp = head_node;
	while(temp!=NULL){

        if(CHECK_BIT(temp->bit_map, e1))
        {
            printf("The module -> %d\n", temp->mod_no);
            func[(temp->mod_no) - 1]();
        } 
		temp = temp->next;
		}
}
