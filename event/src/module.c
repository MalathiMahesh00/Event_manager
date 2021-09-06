#include <stdlib.h>
#include <stdio.h>
#include "event_manager.h"

void mod1()
{ 
  printf("Module 1\n");
}

void mod2()
{
  printf("Module 2\n");
}

void mod3()
{
  printf("Module 3\n");
}

void mod4()
{
  printf("Module 4\n");
}

void mod5()
{
  printf("Module 5\n");
}



void (*reg_event[])() = {&mod1,&mod2,&mod3,&mod4,&mod5};

int module_init(int m, int n)
{
  int i;
  for (i = 0; i < m; i++)
      {
        event(i,reg_event[i]);
      }

}
