//
//  main.c
//  13文件读写
//
//  Created by FCNA01 on 2018/12/19.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    
    char path[255] = "/Users/FCNA01/Documents/C/13文件读写/13文件读写/file.txt";
    
    
    /*
     打开文件：
     
     
     打开模式：
     r    打开一个已有的文本文件，允许读取文件。
     w    打开一个文本文件，允许写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会从文件的开头写入内容。如果文件存在，则该会被截断为零长度，重新写入。
     a    打开一个文本文件，以追加模式写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会在已有的文件内容中追加内容。
     r+   打开一个文本文件，允许读写文件。
     w+   打开一个文本文件，允许读写文件。如果文件已存在，则文件会被截断为零长度，如果文件不存在，则会创建一个新文件。
     a+   打开一个文本文件，允许读写文件。如果文件不存在，则会创建一个新文件。读取会从文件的开头开始，写入则只能是追加模式。
     */
    
    
    
    

    
    
    
#if 1
    
    //写
    FILE *file = fopen(path, "w+");
    fputs("dsadsadgiuaguyaususaddasdasdsh", file);
    fclose(file);
    
#endif
    

    
    
    
#if 1
    
    //读
    FILE *file2 = fopen(path, "r");
    char content[255];
    fgets(content, 255, file2);
    printf("%s \n",content);
    
#endif
    
    

    
#if 1
    
    //移动光标seek
    /*
     int fseek(FILE *stream, long offset, int whence);
     offset：偏移量
     1.从文件头则为 正数
     2.从文件尾则为 负数
     
     whence:
     SEEK_SET:文件头
     SEEK_CUR:当前位置
     SEEK_END:文件尾
     */
    FILE *file3 = fopen(path, "r");
    
    char str[255];
    
    fseek(file3, 10, SEEK_SET);
    
    fgets(str, 255, file3);
    
    printf("%s", str);
    
#endif
    
    
    
    
    
    
    
    
    
    return 0;
}
