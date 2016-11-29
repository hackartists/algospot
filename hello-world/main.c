#include <stdio.h>
#include <stdlib.h>

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
                int n_read,count,i;
                size_t len=50;
                int total=0;

                buf = (char*)malloc(HEAP_SIZE);
                n_read = getline(&buf,&len,stdin);
                buf[n_read]=0;
                count = atoi(buf);
                buf_t = buf;
                if (count > MAX_COUNT)
                        return -1;

                for(i=0; i<count; i++)
                {
                        strcpy(buf_t,PREFIX);
                        buf_t += PREFIX_SIZE-1;
                        n_read = getline(&buf_t,&len,stdin);
                        buf_t += n_read-1;
                        strcpy(buf_t, POSTFIX);
                        buf_t += POSTFIX_SIZE-1;
                }
                buf_t[0] = 0;

                printf(PRINT_FMT, buf);

                free(buf);
       }
}
