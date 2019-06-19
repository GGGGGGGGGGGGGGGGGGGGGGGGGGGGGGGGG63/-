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
    FILE *fp = fopen("singer.txt","w");
    if(fp == NULL){
        printf("Failed to open file");
        return 0;
    }
}
