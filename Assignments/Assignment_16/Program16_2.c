#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow,int iCol)
{
    int j = 0;
    int i = 0;
    char ch = '\0';
    for(i = 1; i<=iRow ; i++ )
    {
        if((i%2)!=0)
        {
            for(j = 1, ch = 'A'; j <=iCol ; j++,ch++ )
        {
            printf("%c \t",ch);
        }

        }
        else
        {
            for(j = 1, ch = 'a'; j <=iCol ; j++,ch++ )
        {
            printf("%c \t",ch);
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