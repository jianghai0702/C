//
//  main.c
//  08指针运算
//
//  Created by FCNA01 on 2018/12/18.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>

//typedef int (*MyBlock)(int a, int b);


int sum(int a, int b)
{
    return a + b;
}


//回调函数
//在回调函数中执行函数
int block(int (*sum) (int c,int d), int a, int b )
{
    int temp = sum(a,b);

    return temp;
}
//int block(MyBlock block, int a, int b )
//{
//    int temp = sum(a,b);
//
//    return temp;
//}






int main(int argc, const char * argv[]) {

    /*
     数组指针
     */
    int arr[5] = {1,2,3,4,5};
    
    int *p;
    
    p = arr;
    
    
    
    
    
    //指针减法
//    for (int i = 4; i >= 0; i --) {
//
//        printf("%p \n", p + i);
//
//        printf("%.0f \n", *(p + i));
//    }
    /*
     0x7ffeefbff5b0
     5
     0x7ffeefbff5a8
     4
     0x7ffeefbff5a0
     3
     0x7ffeefbff598
     2
     0x7ffeefbff590
     1
     */
    
    
    
    
    /*
     函数指针
     */
    
    int (*p2) (int a, int b) = &sum;
    
    int num = p2(p2(1, 1), 1);
    
    printf("%i \n", num);
    
    
    
    
    
    
    /*
     回调函数
     
     
     1.把方法地址传过去
     */
    
//    int num2 = block(&sum ,1,2);
//
//    printf("%i \n",num2);
    
    
    int num3 = block(sum, 1, 2);
    
    printf("%i \n",num3);
    
    
    return 0;
}
