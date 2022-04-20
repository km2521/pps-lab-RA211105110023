/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int billamt,amtgiven;
    scanf("%d \n %d",&billamt,&amtgiven);
    printf("Quotient:");
    printf("%d\n",billamt/amtgiven);
    printf("Remainder:");
    printf("%d",billamt%amtgiven);

    return 0;
}
