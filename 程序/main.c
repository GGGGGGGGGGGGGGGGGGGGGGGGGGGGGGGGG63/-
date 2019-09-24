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
        static signed int i=5;
        char *p;
        int j=10;
        p=(char *)&i;
        printf("sum=%d\n",i+j);
        return 0;
    }
