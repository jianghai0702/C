//
//  main.c
//  08-StdArg可变参数
//
//  Created by FCNA01 on 2018/12/21.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>



void fun01(int num, ...)
{
    va_list valist;
    
    va_start(valist, num);
    
    for (int i = 0; i < num; i ++) {
        
        char *temp = va_arg(valist, char *);
        
        printf(" %s \n", temp);
    }
    
    
    va_end(valist);
}



/**
 
 va_list 参数列表
 
 va_start(va_list ap, last_arg)  将函数的参数赋值到参数列表va_list
 
 type va_arg(va_list ap, type)  从va_list中获取每一个参数va_arg
 
 va_end()  结束释放内存
 */


int main(int argc, const char * argv[]) {
    
    fun01(3, "a","b","c");
    
    
    return 0;
}
