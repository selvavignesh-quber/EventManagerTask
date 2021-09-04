#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main()
{
    int m,e,j;

    printf("Enter no.of Modules: ");
    scanf("%d", &m);
    printf("Enter no.of Events: ");
    scanf("%d", &e);
    
    void (*func[10])() = {mod1,mod2,mod3,mod4,mod5,mod6,mod7,mod8,mod9,mod10};
    do
    {
        printf("Enter your Choice:\n1. Add module & Event\n2. Events Engaged\n0. Exit\n");
        scanf("%d",&j);
        switch(j)
        {
            case 1:
                module_func(m,e);
                break;
            case 2:
                interest_mod(e, func);
                break;
            default:
                break;
        }
        
    }while(j!=0);
    
    return 0;
}