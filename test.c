#include <stdio.h>
int main()
{
    int i =0;
    int count =0;
    for(i=1000; i<=2000; i++)
   {
         if(i%4 == 0)
          {
          printf("%d ",i);  
           count++; 
          }   
   }
   printf("\ncount = %d\n",count);
    return 0;
}
