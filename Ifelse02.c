#include <stdio.h>
        int main()
            {
                int a,b,c;
                printf("Enter a :");
              scanf("%d",&a);

              printf("\nEnter b :");
              scanf("%d",&b);

              printf("\nEnter c :");
              scanf("%d",&c);

              if (a>b && a>c)
              {
                printf("The largest value is a");
              }

               if (b>a && b>c)
              {
                printf("The largest value is b");
              }

              else
              {
                printf("The largest value is c");
              }






                return 0;

            }