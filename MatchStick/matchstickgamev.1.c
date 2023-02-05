#include<stdio.h>
#include<stdlib.h>
int main()
{
    int total,a,b,i,rem=21;
    printf("                                             RULE: One can pick only upto 4 Matchstick at a time.\n\n");
    for(i=0;i<=rem;i++)
    {
        printf("YOUR TURN :");
        scanf("%d",&a);
        if(a>4)
        {
        printf("\n\n!Follow the rules! \n\n GAME ENDED");
        exit(0);
        }
        printf("I will pick %d Matchstick\n",(5-a));
        b=5-a;
        rem-=(a+b);
        printf("Remaining:%d\n\n\n",rem);
        if(rem==1)
        printf("YOU LOST! \n\n                     BETTER LUCK NEXT TIME:)");
    }
}