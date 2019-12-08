//
//  main.c
//  Re_Start
//
//  Created by super on 08/12/2019.
//  Copyright © 2019 IDE. All rights reserved.
//

#include <stdio.h>

void func(int j)
{
    int i=1, n1=0, n2=1;
    
    while(i<=j)
    {
        if(i%2!=0)
        {
            printf("%d ", n1);
            n1+=n2;
        }
        else
        {
            printf("%d ", n2);
            n2+=n1;
        }
        i++;
    }
}

int main(void)
{
    int j;
    
    printf("출력할 피보나치 수열 개수: ");
    scanf("%d", &j);
    
    func(j);
    
    return 0;
}
