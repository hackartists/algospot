#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRINT_FMT "%s"
#define PREFIX "Hello, "
#define PREFIX_SIZE sizeof(PREFIX)
#define POSTFIX "!\n"
#define POSTFIX_SIZE sizeof(POSTFIX)
#define MAX_COUNT 50
#define MAX_NAME_SIZE 50
#define CONSTANT_SIZE 9
#define HEAP_SIZE MAX_COUNT*MAX_NAME_SIZE+(MAX_COUNT * CONSTANT_SIZE)+1

int main(int argc, char** argv)
{
        if(!feof(stdin))
        {
                char* buf;
                char* buf_t;
                int count,i;

                buf = (char*)malloc(HEAP_SIZE);
                scanf("%d",&count);

                buf_t = buf;
                if (count > MAX_COUNT)
                        return -1;

                for(i=0; i<count; i++)
                {
                        strcpy(buf_t,PREFIX);
                        buf_t += PREFIX_SIZE-1;

                        scanf("%s",buf_t);

                        buf_t += (strlen(buf_t));
                        strcpy(buf_t, POSTFIX);
                        buf_t += POSTFIX_SIZE-1;
                }
                buf_t[0] = 0;

                printf(PRINT_FMT, buf);

                free(buf);
        }
}
