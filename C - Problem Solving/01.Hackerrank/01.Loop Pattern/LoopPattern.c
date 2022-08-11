#include <stdio.h>
#include <stdlib.h>

int main()
{
   int row, col,start, end, size;
   int n;

   //scanf("Enter Number: %d", &n);

   n = 7;
   start = 0;
   size = (2 * n) -1;
   end = size -1;
   int a[size][size];

   while(n != 0)
   {
       for(row = start; row<= end; row++)
       {
           for(col = start; col<=end; col++)
           {
               if(row == start || row == end || col == start || col == end)
               {
                   a[row][col] = n;
               }
           }
       }
       ++start;
        --end;
        --n;
   }


   for(row = 0; row < size; row++)
   {
       for(col=0; col< size; col++)
       {
           printf("%d ", a[row][col]);
       }
       printf("\n");
   }

    return 0;
}

