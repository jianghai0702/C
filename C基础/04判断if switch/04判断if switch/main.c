//
//  main.c
//  04判断if switch
//
//  Created by FCNA01 on 2018/12/18.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    
    
    
    
    /*
     if
     
     */
    int a = 10;
    
    if (a == 10) {
        
        printf("a = %i \n", a);
    }
    
    
    
    
    
    

    /*
     enum
     
     */
    enum DAY
    {
        MON=1,
        TUE,
        WED,
        THU,
        FRI,
        SAT,
        SUN
    };
    
    enum DAY day = TUE;
    
    switch (day) {
        case MON:
            printf("1 \n");
            break;
        case TUE:
            printf("2 \n");
            break;
        case WED:
            printf("3 \n");
            break;
        case THU:
            printf("4 \n");
            break;
        case FRI:
            printf("5 \n");
            break;
        case SAT:
            printf("6 \n");
            break;
        case SUN:
            printf("7 \n");
            break;
            
        default:
            break;
    }
    
    
    
    
    
    /*
     三元运算符
     
     Exp1 ? Exp2 : Exp3;
     
     
     int main()
     {
       int num;
       printf("输入一个数字 : ");
       scanf("%d",&num);
       (num%2==0)?printf("偶数"):printf("奇数");
     }
     */
    
    
    
    
    return 0;
}
