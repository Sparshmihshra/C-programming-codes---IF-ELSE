#include <stdio.h>
        int main()
            {
                float netsales,gross_sales,discount;

                printf("Enter GROSS SALES : ");
                scanf("%f",&gross_sales);



                if (gross_sales > 20000)
                    {
                        discount = 0.15*gross_sales;
                        netsales = gross_sales-discount;
                        printf("The NET SALES are : %f",netsales);
                    }
                 else if (gross_sales > 10000)
                    {
                        discount = 0.10*gross_sales;
                        netsales = gross_sales-discount;
                        printf("The NET SALES are : %f",netsales);
                    }
                 else
                    {
                        discount = 0.05*gross_sales;
                        netsales = gross_sales-discount;
                        printf("The NET SALES are : %f",netsales);
                    }








                return 0;
            }