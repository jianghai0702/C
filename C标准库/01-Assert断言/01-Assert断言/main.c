//
//  main.c
//  01-Assert断言
//
//  Created by FCNA01 on 2018/12/21.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <assert.h>

int main(int argc, const char * argv[]) {

    /**
     Assert断言
     
     void assert(int expression);
     1.如果 expression 为 TRUE，assert() 不执行任何动作
     2.如果 expression 为 FALSE，assert() 会在标准错误 stderr 上显示错误消息，并中止程序执行。
     */
    
    int a;
    printf("输入整数： ");
    scanf("%i",&a);
    assert(a > 10);
    printf("输入的整数：%i \n",a);
    
    
    
    
    char str[20];
    printf("输入字符串： ");
    scanf("%s",str);
    assert(str != NULL);
    printf("输入的字符串：%s \n",str);

    
    
    
    return 0;
}
