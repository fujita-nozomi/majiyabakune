// C language（for Linux! Not Windows!)
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    while(1)
        {
            printf("マジやばくね...\n");
            usleep(500000); // Usleep is not recommended but normal sleep cannot use "sleep(0.5);"
        }
    return 0;
}
