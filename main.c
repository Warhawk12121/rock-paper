#include <stdio.h>
#include <stdlib.h>
int cp=0,hp=0,ch,cc;
void choice();
void points();
void show();
void check();

int main()
{
    show();
    while(1){
        if(hp==3 || cp==3)
            break;
        else
    {   printf("player enter your choice\n");
        scanf("%d",&ch);
        choice();
            check();
            points();
    }
    }
            if(hp==3)
        printf("CONGRATS!!!! YOU WON");
    else if(cp==3)
        printf("CPU WON!!!BETTER LUCK NEXT TIME");


    return 0;
}
    void check()
    {
         if(ch==1 && cc==2)
           {printf("\tpaper vs rock \n\tpaper wins");
            hp++; }
        else if(ch==1 && cc==3)
            {printf("\tpaper vs scissor \n\tscissor wins");
                cp++; }
            else if (ch==1 && cc==1)
                printf("Draw !!\n NO points");
        else if(ch==2 && cc==1)
           {printf("\tpaper vs rock \n\tpaper wins");
            hp++; }
        else if(ch==2 && cc==3)
            {printf("\tpaper vs scissor \n\tscissor wins");
                cp++; }
            else if(ch==2 && cc==2 )
                printf("Draw !!\n NO points");

           else if(ch==3 && cc==1)
            {printf("\tscissor vs rock \n\trock wins");
                cp++; }
        else if(ch==3 && cc==2)
            {printf("\tscissor vs paper \n\tscissor wins");
                hp++; }
        else if (ch==3 && ch==3)
            printf("Draw !!\n NO points");
    }

    void points()
    {
        printf("\n\tPlayer || CPU\n");
        printf("\t\t%d|| %d\n",hp,cp);

    }
    void show()
    {
        printf("\t\tROCK PAPER SCISSORS!!!\n ");
        printf("press 1-rock\npress 2-paper\npress 3-scissor\n");
    }
    void choice()
    {
         if(ch==1)
         printf("player chose rock\n");
         else if (ch==2)
            printf("player chose paper\n");
            else if (ch==3)
                printf("player chose scissor\n");
            else {
                printf("Invalid choice!!! Take another choice\n");
                scanf("%d",&ch);
                choice();
            }
        cc=rand()%3+1;

        if(cc==1)
        printf("CPU chose rock\n");
         else if (cc==2)
            printf("CPU chose paper\n");
            else if(cc==3)
                printf("CPU chose scissor\n");
    }

