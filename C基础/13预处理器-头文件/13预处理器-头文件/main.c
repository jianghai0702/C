//
//  main.c
//  13预处理器-头文件
//
//  Created by FCNA01 on 2018/12/19.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    
    /**
     预处理器：
     
     #define     定义宏
     #include    包含一个源代码文件
     #ifdef      如果宏已经定义，则返回真
     
     #if         if
     #else       else
     #elif       else if
     #endif      结束
     */
    
    
    
    
    /**
     预处理宏
     
     __DATE__    当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
     __TIME__    当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
     __FILE__    这会包含当前文件名，一个字符串常量。
     __LINE__    这会包含当前行号，一个十进制常量。
     __STDC__    当编译器以 ANSI 标准编译时，则定义为 1。
     
     printf("File :%s\n", __FILE__ );
     printf("Date :%s\n", __DATE__ );
     printf("Time :%s\n", __TIME__ );
     printf("Line :%d\n", __LINE__ );
     printf("ANSI :%d\n", __STDC__ );
     */

    
    
    
    
    
    #pragma mark - 运算符
    
    
    /**
     预处理运算符：
     
     1.续运算符（\）
     2.字符串常量化运算符（#）： 把宏的参数转为字符串
     3.标记粘贴运算符（##）：   会合并两个参数
     4.defined() 运算符 ：    确定一个标识符是否已经使用 #define 定义过
     
     */
    
    

    /*
     续运算符（\）
     
     #define  message_for(a, b)  \
              printf(#a " and " #b ": We love you!\n")
     */
    
    
    
    /*
     字符串运算符（#）
     
     #define  message_for(a, b)  \
              printf(#a " and " #b ": We love you!\n")
     
     int main(void)
     {
       message_for(Carole, Debra);
       return 0;
     }
     
     运行结果：
     Carole and Debra: We love you!
     */
    
    
    
    
    /*
     粘贴运算符（##）
     
     #define tokenpaster(n) \
             printf ("token" #n " = %d", token##n)
     
     int main(void)
     {
         int token34 = 40;
     
         tokenpaster(34);
     
         return 0;
     }
     
     运行结果：
     printf ("token34 = %d", token34);
     token34 = 40
     */
    
    
    
    
    
    /*
     defined（）运算符：
     
     
     #if !defined (MESSAGE)
     #define MESSAGE "You wish!"
     #endif
     
     int main(void)
     {
         printf("Here is the message: %s\n", MESSAGE);
         return 0;
     }
     
     运行结果：
     Here is the message: You wish!
     */
    
    
    
    
    
    
    #pragma mark - 参数化的宏
    
    /*
     1.必须使用 #define 指令定义
     2.宏名称和左圆括号之间不允许有空格
     
     #define MAX(x,y) ((x) > (y) ? (x) : (y))
     #define Min(x,y) ( (x) > (y) ? (y) : (x) )
     printf("Max between 20 and 10 is %d\n", MAX(10, 20));
     printf("min : %i \n", Min(4, 8));
     */
    

    
    
    
    
    
    #pragma mark - 头文件
    
    /*
     引用系统库文件
     
     #include <file>
     */
   
    
    
    /*
     引用项目文件
     
     #include "file"
     */
    
    
    
    
    /*
     防止重复引用
     
     #ifndef HEADER_FILE
     #define HEADER_FILE
     
     the entire header file file
     
     #endif
     */
    
    
    
    
    
    /*
     有条件引用
     
     #if SYSTEM_1
        # include "system_1.h"
     #elif SYSTEM_2
        # include "system_2.h"
     #elif SYSTEM_3
        ...
     #endif
     */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
