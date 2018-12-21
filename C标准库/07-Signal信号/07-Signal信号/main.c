//
//  main.c
//  07-Signal信号
//
//  Created by FCNA01 on 2018/12/21.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void signal_catch(int);



int main(int argc, const char * argv[]) {

    /**
     
     库变量
     sig_atomic_t
     
     
     库宏
     SIG_DFL  默认的信号处理程序。
     SIG_ERR  表示一个信号错误。
     SIG_IGN  忽视信号。
     
     信号码：
     SIGABRT  程序异常终止。
     SIGFPE   算术运算出错，如除数为 0 或溢出。
     SIGILL   非法函数映象，如非法指令。
     SIGINT   中断信号，如 ctrl-C。
     SIGSEGV  非法访问存储器，如访问不存在的内存单元。
     SIGTERM  发送给本程序的终止请求信号。
     
     
     库函数：
     void (*signal(int sig, void (*func)(int)))(int)
     
     */
    
    
    int ret = signal(SIGINT, signal_catch);
    
    if (ret == SIG_ERR)
    {
        printf("中断信号");
        
        exit(EXIT_SUCCESS);
    }

    
    ret = raise(SIGINT);
    
    if (ret != 0) {
        
        printf("不能生成信号 \n");
        
        exit(EXIT_SUCCESS);
    }
    
    
    printf("退出...\n");
    
    return 0;
}





void signal_catch(int num)
{
    printf("捕获信号 %i",num);
    
    exit(1);
}

