//
//  main.c
//  06函数
//
//  Created by FCNA01 on 2018/12/18.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>


void
fun01(int a)
{
    a = 20;
}

void
fun02(int *a)
{
    *a = 20;
}

int main(int argc, const char * argv[]) {

    int a = 10;
    
    //传值
    fun01(a);
    
    printf("%i \n",a);
    
    
    //传址
    fun02(&a);
    
    printf("%i \n",a);

    return 0;
}
