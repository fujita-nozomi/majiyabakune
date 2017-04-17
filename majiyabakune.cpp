// C++ language（for Linux! Not Windows!)
#include<iostream>
#include<unistd.h>
using namespace std;
int main(int argc, char const *argv[])
{
    while(1)
        {
            cout << "マジやばくね..." << endl;
            usleep(500000); // Usleep is not recommended but normal sleep cannot use "sleep(0.5);"
        }
    return 0;
}
