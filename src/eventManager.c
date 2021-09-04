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

void interest_mod(int tot_eve)
{
    	int e1, flag = 0;
	printf("Enter the Event No to check modules: ");
	scanf("%d", &e1);
	printf("\n");
	struct Node * temp = head_node;

	if(e1 <= tot_eve)
	{
		while(temp!=NULL){

        	if(CHECK_BIT(temp->bit_map, e1))
        	{
            		printf("The module : %d\n", temp->mod_no);
            		temp->cbfp(e1);
	    		flag = 1;
        	} 
		temp = temp->next;
			}
		if(flag == 0)
			printf("No module is interested in %d\n",e1);
	}
	else
		printf("There is no such event\n");
}

void free_node()
{
	free(head_node);
}
