#include <stdio.h>
#include <unistd.h>

int main ()
{
    char buf[11] = {0};
    int i=0;
    for ( i = 0; i< 10; i++)
    {
        buf[i]='-'; //buf 中的-不断增多
        printf("%s\r",buf);
        usleep (100000);
        fflush(stdout); //手动刷新标准输出缓冲区

    }
    return 0;
}
