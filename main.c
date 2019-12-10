//
//  main.c
//  Re_Start
//
//  Created by super on 08/12/2019.
//  Copyright © 2019 IDE. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int num1, num2;
    
    printf("two whloe number: ");
    scanf("%d %d", &num1, &num2);
    
    if(num1>=num2)
    {
        for(; num1>=num2; num2++)
        {
            int i=1;
            for(i=1; i<=9; i++)
                printf("%dX%d=%d \n", num2, i, num2*i);
        }
    }
    
    else
    {
        for(; num1<=num2; num1++)
        {
            int i=1;
            for(i=1; i<=9; i++)
                printf("%dX%d=%d \n", num1, i, num1*i);
        }
    }
    
    return 0;
}
