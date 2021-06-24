#include <stdio.h>

int main()
{
   int money;
   printf("Enter amount:");
   scanf("%d",&money);
   if((money>25000) || (money<0))
   {
       printf("Error");
   }
   int notes[]={2000,500,100,50,10,5,2,1};
   int notes_freq[10];
   
   for(int i=0;i<10;i++)
   {
       if(money>=notes[i])
       {
           notes_freq[i]=money/notes[i];
           money=money%notes[i];
       }
       else
       {
           notes_freq[i]=0;
       }
       
   }
   for(int j=0;j<10;j++)
   {
       printf("%d ",notes_freq[j]);
   }

    return 0;
}
