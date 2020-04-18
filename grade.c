#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks out of 100 in digits\n");
    scanf("%d",&marks);
    if(marks>84&&marks<101)
    printf("Grade A");
    else if(marks>69&&marks<85)
        printf("Grade B");
    else if(marks>54&&marks<70)
        printf("Grade C");
    else if(marks>39&&marks<55)
        printf("Grade D");
    else if(marks<40&&marks>-1)
        printf("Grade F");
    else printf("Invalid digits\n Enter from '0' to '100' only");
    return 0;
}
