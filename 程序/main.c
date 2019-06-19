//
//  main.c
//  程序
//
//  Created by s20181105880 on 2019/6/19.
//  Copyright © 2019 s20181105880. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fp;
    fp=fopen("我的文档.txt","w+");
    fprintf( fp ,"文件内容");//这句话就可以往文件里写入数据
    fclose(fp);
    /*if(fp == NULL){
        printf("Failed to open file");
        return 0;*/
    return 0;
    }
