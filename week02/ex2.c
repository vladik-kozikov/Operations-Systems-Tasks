#include <stdio.h>
#include <string.h>

int main()
{
    char str[250];

    printf("Please input a string: ");
    scanf("%s",str);

    for(int i=strlen(str)-1;i>-1;i--)
        printf("%c",str[i]);

    return 0;
}
