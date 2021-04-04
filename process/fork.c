#include <stdio.h>
#include <unistd.h>

int main ()
{
    printf("hello\n");
    fork ();
    printf ("hello world: %d\n",getpid());
    while(1);
        sleep(1);
    return 0;
}
