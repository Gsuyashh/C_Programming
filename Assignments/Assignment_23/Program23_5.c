#include<stdio.h>
#include<stdlib.h>
int CountWhite(char *str)
{
    int i = 0;
    
    while(*str !='\0')
    {
        if((*str==' '))
        {
            i = i+1;
        }   
        str++;
    }

    return i;

}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);
    printf("%d",iRet);
    return EXIT_SUCCESS;
}