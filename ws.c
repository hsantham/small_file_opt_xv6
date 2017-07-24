
#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int main()
{
    int fd;
    fd = open("abc.txt", O_CREATE|O_RDWR|O_SMALLFILE);
    printf(1, "write-1-%d\n",write(fd, "aaa", 3));
    printf(1, "write-2-%d\n",write(fd, "bbb", 3));
    close(fd);
    return 0;
}
