#include<stdio.h>
#include<stdlib.h>

#include "func.h"

int main()
{
	int tot_mod, tot_eve,j;

	printf("Enter no.of Modules: ");
	scanf("%d", &tot_mod);
	
	printf("Enter no.of Events: ");
	scanf("%d", &tot_eve);
    
    	void (*func[10])(int) = {mod1,mod2,mod3,mod4,mod5,mod6,mod7,mod8,mod9,mod10};

    	do
    	{
        	printf("\n******************************************************\n");
        	printf("Enter your Choice:\n\t1. Add module & Event\n\t2. Events Engaged\n\t0. Exit\n");
		printf("******************************************************\n");
		scanf("%d", &j);
        	printf("\n");

        	switch(j)
        	{
            		case 1:
                		module_func(tot_mod, tot_eve, func);
                		break;
            		
			case 2:
                		interest_mod(tot_eve);
                		break;
            		default:
                		break;
        	}
        
   	}while(j!=0);
    	printf(".......Program Finished.......\n");
    	free_node();    
    	return 0;
}
