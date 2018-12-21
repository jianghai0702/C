//
//  main.c
//  06-Setjmp + Longjmp
//
//  Created by FCNA01 on 2018/12/21.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <setjmp.h>

static jmp_buf buf;

void fun02(){
    
    printf("fun02 \n");
    
    longjmp(buf, 1);
}


void fun01(){
    
    fun02();
    
    printf("fun01 \n");
}







int main(int argc, const char * argv[]) {
    // insert code here...

    
    /**
     
     库变量
     jmp_buf : 存储宏 setjmp() 和函数 longjmp() 相关信息的数组
     
     
     库宏
     int setjmp(jmp_buf environment)
     1.把当前环境保存在变量 environment 中
     2.从setjmp宏调用中返回，则它会返回零
     3.从 longjmp() 函数调用中返回，则它会返回一个非零值。
     
     
     
     库函数
     void longjmp(jmp_buf environment, int value)
     1.恢复最近一次调用 setjmp() 宏时保存的环境
     2.jmp_buf 参数的设置是由之前调用 setjmp() 生成的。
     
     */
    
    int jmp = setjmp(buf);
    
    if (jmp == 0)
    {
        printf("111111 \n");
        
        fun01();
    }
    else
    {
        printf("222222 \n");
    }
    
    
    
    return 0;
}
