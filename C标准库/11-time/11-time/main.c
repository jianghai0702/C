//
//  main.c
//  11-time
//
//  Created by FCNA01 on 2018/12/21.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <time.h>


/**
 
  asctime(const struct tm *timeptr)  初始化time
  time(time_t *timer)
  ctime(const time_t *timer)         获取time字符串
 
  difftime(time_t time1, time_t time2)  时间差（秒）
  gmtime(const time_t *timer)           格林尼治标准时间GMT（tm结构）
  gmtime(const time_t *timer)          本地时间（tm结构）
 */


//tm结构
//struct tm {
//    int tm_sec;         /* 秒，范围从 0 到 59                */
//    int tm_min;         /* 分，范围从 0 到 59                */
//    int tm_hour;        /* 小时，范围从 0 到 23                */
//    int tm_mday;        /* 一月中的第几天，范围从 1 到 31                    */
//    int tm_mon;         /* 月份，范围从 0 到 11                */
//    int tm_year;        /* 自 1900 起的年数                */
//    int tm_wday;        /* 一周中的第几天，范围从 0 到 6                */
//    int tm_yday;        /* 一年中的第几天，范围从 0 到 365                    */
//    int tm_isdst;       /* 夏令时                        */
//};

void gettime()
{
    time_t now;
    
    struct tm *tm;
    
    time(&now);
    
    tm = gmtime(&now);
    
    printf("%04i-%02i-%02i %02i:%02i:%02i\n",
           tm->tm_year + 1900,
           tm->tm_mon,
           tm->tm_mday,
           
           tm->tm_hour + 8,
           tm->tm_min,
           tm->tm_sec
           );
    
}



//本地时间和国际时间相差秒数
void timeOffset()
{
    time_t time_loc;
    
    time_t time_gmt;
    
    time(&time_loc);
    
    time(&time_gmt);
    
    struct tm *tm_time_loc;

    struct tm *tm_time_gmt;

    tm_time_loc = localtime(&time_loc);

    tm_time_gmt = gmtime(&time_gmt);
    
//    int year_o = tm_time_loc->tm_year - tm_time_gmt->tm_year;
//    int mon_o  = tm_time_loc->tm_mon - tm_time_gmt->tm_mon;
//    int day_o  = tm_time_loc->tm_mday - tm_time_gmt->tm_mday;
    int hour_o = tm_time_loc->tm_hour - tm_time_gmt->tm_hour;
    int min_o  = tm_time_loc->tm_min  - tm_time_gmt->tm_min;
    int sec_o  = tm_time_loc->tm_sec  - tm_time_gmt->tm_sec;
    
    int sec_offset =
    hour_o * 60 * 60 +
    min_o * 60 +
    sec_o;
    
    printf("%i \n",sec_offset);
}






int main(int argc, const char * argv[]) {
    
    timeOffset();
    
    gettime();
    
    return 0;
}














