/*
 ============================================================================
 Name        : Prompt.c
 Author      : Bruno Pan Y Agua Machado
 Version     :
 Copyright   :
 Description : list in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
 int num;
 struct Node *next;
};
typedef struct Node node;

int tam;

void begin(node *LIST);
int menu(void);
void opcao(node *LIST, int op);
node *criaNo();
void put(node *LIST);
void list(node *LIST);
void remove(node *LISTA);


void put()
{
    node *novo=aloca();
    node *oldHead = LIST->next;

    LIST->next = novo;
    novo->next = oldHead;

    tam++;

}

void begin(node *LIST)
{
    LIST->next = NULL;
    tam=0;
}



int menu(void)
{
    int opt;

        printf("***Menu de Opções***\n");
        printf("[1]put.  \n");
        printf("[2]get.  \n");
        printf("[3]list.  \n");
        printf("[4]remove.  \n");
        printf("[5]clear.  \n");
        printf("[6]first.  \n");
        printf("[7]last.  \n");
        printf("[8]exit.  \n");
        printf("Opcao: ");
        scanf("%d", &opt);

}

void opcao(node *LISTA, int op)
{
 node *tmp;
 switch(op){

  case 1:
   void put(List)
   break;

  case 2:

   break;

  case 3:

   break;

  case 4:

   break;

  case 5:

   break;

  case 6:

   break;

  case 7:

   break;

  case 8:

   break;

  default:
   printf("Comando invalido\n\n");
 }
}

int main()
{
    node *LIST = (node *) malloc(sizeof(node));
        if(!LIST)
        {
            printf("without memory!\n");
            exit(1);
        }else
        {
            begin(LIST);
            nt opt;
            do
            {
            opt=menu();
            opcao(LIST,opt);
            }while(opt);

            ree(LIST);
            return 0;
        }
}


