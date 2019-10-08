#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    static signed int i=0xAABBCCDD;
    char *p;
    int j=10;
    p=(char *)&i;
    printf("p=%x\n",p);
    printf("&i=%x\n",&i);
    printf("*(p+3)=%x\n",*(p+3));
    printf("*p=%x\n",*p);
    return 0;
    }
