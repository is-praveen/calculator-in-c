#include<stdio.h>

void calc()
{
    int a,b,c;
    int choice=0;
    while(choice!=6)
    {
        printf("-----Calculator-----\n");
        printf("\n1. Addition(+)");
        printf("\n2. Substraction(-)");
        printf("\n3. Multiplication(*)");
        printf("\n4. Divide(/)");
        printf("\n5. Modulus(%%)");
        printf("\n6. Exit\n");
        printf("\n--------------------\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter two values: ");
                scanf("%d%d",&a,&b);
                c=a+b;
                printf("%d + %d = %d\n",a,b,c);
                break;
            case 2:
                printf("Enter two values: ");
                scanf("%d%d",&a,&b);
                c=a-b;
                printf("%d - %d = %d\n",a,b,c);
                break;
            case 3:
                printf("Enter two values: ");
                scanf("%d%d",&a,&b);
                c=a*b;
                printf("%d * %d = %d\n",a,b,c);
                break;
            case 4:
            {
                float c;
                printf("Enter two values: ");
                scanf("%d%d",&a,&b);
                c=(float)a/b;
                printf("%d / %d = %.2f\n",a,b,c);
                break;
            }
            case 5:
                printf("Enter two values: ");
                scanf("%d%d",&a,&b);
                c=a%b;
                printf("%d %% %d = %d\n",a,b,c);
                break;
            case 6:
                break;
            default:
                printf("Invalid choice please try again...\n");
        }
    }
}
int main()
{
    calc();
    return 0;
}