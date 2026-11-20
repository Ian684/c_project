#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
typedef struct Node{int value;struct Node*next;}Node;int main(void){Node*head=NULL;for(int v=25;v>=3;v-=11){Node*n=malloc(sizeof*n);n->value=v;n->next=head;head=n;}for(Node*n=head;n;n=n->next)printf("%d ",n->value);putchar('\n');while(head){Node*n=head->next;free(head);head=n;}return 0;}
