//
//  main.c
//  03存储类
//
//  Created by FCNA01 on 2018/12/18.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    /**
     C储存类
     
     auto
     register
     static
     extern
     */
    
    
    /*
     auto
     auto是所有局部变量默认的存储类。
     实例定义了两个带有相同存储类的变量，
     auto 只能用在函数内，即 auto 只能修饰局部变量。
     
     {
       int mount;
       auto int month;
     }
     */
    
    
    
    
    
    
    /*
     register
     register 定义存储在寄存器中的局部变量，而不是 RAM 中的局部变量。
     寄存器：寄存器的大小（通常是一个词，4字节）
     不能对它应用一元的 '&' 运算符（因为它没有内存位置）
     
     {
       register int  miles;
     }
     */
    
    
    
    
    
    
    
    
    /*
     static
     
     static修饰局部变量，生命周期等于程序的生命周期
     static修饰全局变量，作用域为此文件
     
     
     
     #include <stdio.h>
     
    void func1(void);
    
    static int count = 10;        //全局变量 - static 是默认的
    
    int main()
    {
        while (count--) {
            func1();
        }
        return 0;
    }
    
    void func1(void)
    {
        static int thingy=5;
        thingy++;
        printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
    }

     */
    

    
    
    
    
    
    
    
    
    /*
     extern
     
     1.extern提供一个全局变量的引用，且对所有文件都可见
     2.其它文件可以通过使用extern声明变量指向第一个文件的全局变量
     
     
     第一个文件：
     #include <stdio.h>
     int count ;
     extern void write_extern();
     
     int main()
     {
       count = 5;
       write_extern();
     }

     
     第二个文件：
     #include <stdio.h>
     extern int count;
     void write_extern(void)
     {
       printf("count is %d\n", count);
     }

     
     打印结果：
     count is 5
     
     
     */
    
    
    
    
    
    
    return 0;
}
