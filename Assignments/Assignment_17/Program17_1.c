#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow,int iCol)
{
    int j = 0;
    int i = 0;
    int k = 0;
    for(i = 1,k =1; i<=iRow ; i++ )
    {
        for(j = 1; j <=iCol ; j++,k++ )
        {
            if(k<=9)
            {
                printf("%d \t",k);
            }
            else
            {
                k=1;
                printf("%d \t",k);
            }
            
        }
        printf("\n");
    }

}

int main ()
{
    int iValue1 =0,iValue2 = 0;

    printf("Enter column : \n");
    scanf("%d",&iValue1);

    printf("Enter Row : \n");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}