#include <stdio.h>
#include "event_manager.h"
#include "module.h"

void main()
{
    int i,m,n,again;
    printf("Enter the number of modules\n");
    scanf("%d",&m);
    //printf("Enter the number of events\n");
    //scanf("%d", &n);
    module_init(m,n);
    do
    {
        printf("\n\nENTER THE EVENT NO");
        scanf("%d",&i);
        trigger_event(i);
        printf("\n enter again ");
        scanf("%d",&again);
    }while(again == 1);
}
