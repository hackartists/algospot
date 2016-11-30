#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

//#define MAXCOUNT 10000

//typedef unsigned int input_t;

int main(){
        int count,i;
        int a,b,x,y;

        scanf("%d", &count);
        while(count--){
                scanf("%d %d",&a, &b);
                x = a;
                y = b;
                scanf("%d %d",&a, &b);
                x ^= a;
                y ^= b;
                scanf("%d %d",&a, &b);
                x ^= a;
                y ^= b;
                printf("%d %d\n", x,y);
        }

        return 0;
}
