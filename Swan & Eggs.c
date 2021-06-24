#include <stdio.h>

int main()
{
   int N,no_of_egg=0;
   scanf("%d",&N);
   int swan_ages[N];
   for(int i=0;i<N;i++)
   {
       scanf("%d",&swan_ages[i]);
        if(swan_ages[i]>0)
       {
       if(swan_ages[i]>=52)
       {
           no_of_egg=no_of_egg+16;
       }
       else
       {
           int rem=4-(52-swan_ages[i]);
           if(rem>0)
           {
               no_of_egg=no_of_egg+(rem*4);
           }
       }
       
     }
       
   }
   printf("%d", no_of_egg);

}

