//
//  main.c
//  15可变参数
//
//  Created by FCNA01 on 2018/12/19.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>
#include <string.h>



/**
 
 
 1.导入 #include <stdarg.h>
 2.num代表参数总数
 
 */
void fun01(int num, ...)
{
    va_list valist;
    
    //初始化valist
    va_start(valist, num);
    
    
    //遍历valist
    
    char str[255];
    
    for (int i = 0; i < num; i ++) {
        
        char *tempStr = va_arg(valist, char *);
        
        strcat(str, tempStr);
    }
    
    //结束，清理valist内存
    va_end(valist);
    
    
    printf("%s \n",str);
}


int main(int argc, const char * argv[]) {

    fun01(2,"hello,","world");
    return 0;
}
