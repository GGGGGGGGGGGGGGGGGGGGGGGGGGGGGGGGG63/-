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
        int *p;
        int i;
        p=&i;
        *p=100;
        printf("p=%x\n",p);
        printf("&p=%x\n",&p);
        printf("*p=%x\n",*p);
        printf("i=%x\n",i);
        printf("&i=%x\n",&i);
        return 0;
    }
