/***************************************************************

 * 模  块：xsamples
 * 文  件：main.c
 * 功  能：DNS解析，非阻塞，超时
 * 作  者：阿宝（Po）
 * 日  期：2015-09-22
 * 版  权：Copyright (c) 2012-2014 Dream Company

***************************************************************/

#ifdef _WIN32
#include <Windows.h>
#else
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#endif /* _WIN32 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "gethostbyname.h"

/* load library */

/* macro define */

/* pre declare */

/* member value */

int main(int argc, char **argv)
{
    struct hostent *host;
    const char *name = "baidu.com";
    host = GetHostByName(name);
    if (host != 0)
    {
        struct in_addr addr;
        int i = 0;
        while (host->h_addr_list[i] != 0) {
            addr.s_addr = *(size_t*)(host->h_addr_list[i]);
            printf("success: %s\n", inet_ntoa(addr));
            i++;
        }
    }
    else
        printf("error\n");
    CancleGetHostByName();
    getchar();
	return 0;
}
