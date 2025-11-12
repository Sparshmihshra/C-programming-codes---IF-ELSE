#include <stdio.h>
        int main ()
            {
                float net,gross,allowances,deductions;

                printf("Enter the GROSS SALARY : ");
                scanf("%f",&gross);

                printf("\nNET SALARY = GROSS SALARY + ALLOWANCES - DEDUCTIONS");

                if (gross > 10000)
                    {
                        allowances = 0.1*gross;
                        deductions=0.03*gross;
                        net=gross+allowances-deductions;
                        printf("\nThe NET SALARY is : %f",net);
                    }
                 else if (gross > 5000)
                    {
                        allowances = 0.07*gross;
                        deductions=0.02*gross;
                        net=gross+allowances-deductions;
                        printf("\nThe NET SALARY is : %f",net);
                    }  
                    else
                    {
                        printf("\nSALARY can't be this low leave the JOB");
                    } 





                return 0;
            }