#include <stdio.h>
        int main ()
                {
                    int a,b,c;
                    printf("Enter marks obtained in Sub 1 : ");
                    scanf("%d",&a);

                     printf("\nEnter marks obtained in Sub 2 : ");
                    scanf("%d",&b);

                     printf("\nEnter marks obtained in Sub 3 : ");
                    scanf("%d",&c);

                    int total = a + b + c ;
                    int average = total/3 ;

                    printf("\nThe total marks obtained are %d",total);
                    printf("\nWhile the average marks are %d",average);

                    if(a>=35 && b>=35 && c>=35)
                                            {


                    if (average>=70 )
                    {
                        printf("\nThe student passed with distinction");
                    }

                    else if (average>=60)
                    {
                        printf("\nThe student has obtained first class grade");
                    }
                    else if (average>=50)
                    {
                        printf("\nThe student has obtained second class grade");
                    }
                    else if (average>=35)
                    {
                        printf("\nThe student has obtained third class grade");
                    }
                    else{
                        printf("\nThe student failed in the examinations");
                    }
                    }

                else
                    {
                        printf("\nThe student failed in the examinations");
                        }
                    return 0;
                }