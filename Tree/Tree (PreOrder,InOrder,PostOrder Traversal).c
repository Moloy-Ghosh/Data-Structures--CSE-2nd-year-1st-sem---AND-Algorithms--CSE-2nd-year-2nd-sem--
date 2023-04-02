#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char INFO[20];
int LEFT[20];
int RIGHT[20];
void PREORD(void);
void INORD(void);
void POSTORD(void);
int STACK[20];
int TOP, ROOT, AVAIL;

/*
index info left right
0      K    -1   -1
1      C     2    5
2      G    -1   -1
3           13
4      A     9    1
5      H     16   0
6      L    -1   -1
7            8
8            3
9      B    17   12
10          18
11     F    -1   -1
12     E    11   -1
13          14
14
15          10
16     J    6   -1
17     D    -1   -1
18          19
19          -1

Tree:

               .A.
             .     .
           .         .
          B           C
        .  .          ..
      .     .        .  .
     D       E      G    H
              .         . .
            .          .   .
           F          J     k
                     .
                    .
                   L

*/

int main()
{
    INFO[0]='K';INFO[1]='C';INFO[2]='G';INFO[4]='A';
    INFO[5]='H';INFO[6]='L';INFO[9]='B';INFO[11]='F';
    INFO[12]='E';INFO[16]='J';INFO[17]='D';

    LEFT[0]=-1;LEFT[1]=2;LEFT[2]=-1;LEFT[3]=13;LEFT[4]=9;
    LEFT[5]=16;LEFT[6]=-1;LEFT[7]=8;LEFT[8]=3;LEFT[9]=17;
    LEFT[10]=18;LEFT[11]=-1;LEFT[12]=11;LEFT[13]=14;
    LEFT[14]=15;LEFT[15]=10;LEFT[16]=6;LEFT[17]=-1;
    LEFT[18]=19;LEFT[19]=-1;

    RIGHT[0]=-1;RIGHT[1]=5;RIGHT[2]=-1;RIGHT[4]=1;RIGHT[5]=0;
    RIGHT[6]=-1;RIGHT[9]=12;RIGHT[11]=-1;RIGHT[12]=-1;RIGHT[16]=-1;
    RIGHT[17]=-1;

    ROOT=4;
    AVAIL=7;

    printf("Preorder Traversal Path:\n");
    PREORD();

    printf("\n\n\nInorder Traversal Path:\n");
    INORD();

    printf("\n\n\nPostorder Traversal Path:\n");
    POSTORD();

    getch();
}

void PREORD(void) //NODE->LEFT->RIGHT
{
    int PTR;
    TOP=0;
    STACK[0]=-1;
    PTR=ROOT;
    while(PTR!=-1)
    {
        printf("%c->",INFO[PTR]);

        if(RIGHT[PTR]!=-1)
        {
            TOP=TOP+1;
            STACK[TOP]=RIGHT[PTR];
        }

        if(LEFT[PTR]!=-1)
        {
            PTR=LEFT[PTR];
        }
        else
        {
            PTR=STACK[TOP]; //RIGHT[PTR] na karon oitar right nao thakte pare
            TOP=TOP-1; //It means pop
        }
    }
    printf("END");
}

void INORD(void) //LEFT->NODE->RIGHT
{
    int PTR;
    TOP=0;
    STACK[0]=-1;
    PTR=ROOT;

    label1:
        while(PTR!=-1)
        {
            TOP=TOP+1;
            STACK[TOP]=PTR;
            PTR=LEFT[PTR];
        }

        PTR=STACK[TOP];
        TOP=TOP-1;

        while(PTR!=-1)
        {
            printf("%c->",INFO[PTR]);
            if(RIGHT[PTR]!=-1)
            {
                PTR=RIGHT[PTR];
                goto label1;
            }
            PTR=STACK[TOP];
            TOP=TOP-1;
        }
        printf("END");
}

void POSTORD(void) //LEFT->RIGHT->NODE
{
    int PTR;
    TOP=0;
    STACK[0]=-99;
    PTR=ROOT;

    label1:
        while(PTR!=-1)
        {
            TOP=TOP+1;
            STACK[TOP]=PTR;

            if(RIGHT[PTR]!=-1)
            {
                TOP=TOP+1;
                STACK[TOP]=(-1)*RIGHT[PTR];
            }

            PTR=LEFT[PTR];
        }

        PTR=STACK[TOP];
        TOP=TOP-1;

        while(PTR>=0 && TOP!=0)
        {
            printf("%c->",INFO[PTR]);
            PTR=STACK[TOP];
            TOP=TOP-1;
        }
        if(PTR<0 && TOP!=0)
        {
            PTR=(-1)*PTR;
            goto label1;
        }
        printf("END");
}

/*
Output:
Preorder Traversal Path:
A->B->D->E->F->C->G->H->J->L->K->END


Inorder Traversal Path:
D->B->F->E->A->G->C->L->J->H->K->END


Postorder Traversal Path:
D->F->E->B->G->L->J->K->H->C->END
*/
