#include <stdlib.h>
#include <stdio.h>
#include "module.h"

typedef void(*fptr)();

struct module{
    int module_id;
    int event_bitmap;
    fptr cb;
    struct module *next;

};

struct module* head = NULL;

int event(int i, void(*cb_func)())
{
  int e_no,e,event_flag=0;
  printf("Enter the number of events for this module\n");
  scanf("%d",&e_no);

  for (int j=0;j<e_no;j++)
  {
    scanf("%d",&e); 
    event_flag |= 1 << (e-1);
  }
  event_reg(i+1,event_flag,cb_func);
}

int event_reg(int id,int flag,void(*fp)())
{ 
  struct module* temp = (struct module*)malloc(sizeof(struct module));
  struct module* p;
  temp->module_id = id;
  temp->event_bitmap = flag;
  temp->cb = fp;
  temp->next = NULL;

  if (head == NULL)
    head = temp;
  else
  {
    p = head;
    while (p->next != NULL)
      p=p->next;
    p->next = temp;
  }
}

int trigger_event(int e)
{
  struct module*  p;
  p = head;
  while (p != NULL)
  {
    int CHECK = 1<<(e-1);
    if (p->event_bitmap & CHECK)
        {
            p->cb();
        }
    p=p->next;
  }
}
