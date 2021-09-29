#include<stdio.h>
#include<stdlib.h>

#define SET_BIT(n,b) n = (n) | (1<<(b-1));

struct Node
{
	int mod_no;
	int bit_map;
	void (*cbfp)(int);
	struct Node *next;
}*n1;

struct Node *head_node;

void module_func(int tot_mod, int tot_eve, void (*func[10])() )
{
	int n, b, i, int_event;
	
	for(int j =0; j < tot_mod; j++){
		n1 = (struct Node *) malloc(sizeof(struct Node));
		n1->bit_map = 0;
		n1->mod_no = j+1;
	
		printf("Enter Module no. %d \n",n1->mod_no);
	
		printf("Enter no.of Events: ");
		scanf("%d",&int_event);

    		printf("Enter the event numbers: \n");

    		for(i=0; i<int_event;i++)
    		{
			printf("--> ");
        		scanf("%d",&b);
			
			if(b <= tot_eve)
				SET_BIT(n1->bit_map, b);
    		}	
		printf("\n");

		n1->cbfp = func[n1->mod_no-1];

		n1->next = NULL;

		if(head_node==NULL)
		{
			head_node = n1;
		}

		else
		{
			n1->next = head_node;
			head_node = n1;
		}
	}
}

void mod1(int e)
{
	printf("Callback of Module 1 is called for event %d\n\n",e);
}

void mod2(int e)
{
	printf("Callback of Module 2 is called for event %d\n\n",e);
}

void mod3(int e)
{
	printf("Callback of Module 3 is called for event %d\n\n",e);
}

void mod4(int e)
{
	printf("Callback of Module 4 is called for event %d\n\n",e);
}

void mod5(int e)
{
	printf("Callback of Module 5 is called for event %d\n\n",e);
}

void mod6(int e)
{
	printf("Callback of Module 6 is called for event %d\n\n",e);
}

void mod7(int e)
{
	printf("Callback of Module 7 is called for event %d\n\n",e);
}

void mod8(int e)
{
	printf("Callback of Module 8 is called for event %d\n\n",e);
}

void mod9(int e)
{
	printf("Callback of Module 9 is called for event %d\n\n",e);
}

void mod10(int e)
{
	printf("Callback of Module 10 is called for event %d\n\n",e);
}
