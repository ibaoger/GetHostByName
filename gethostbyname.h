#ifndef _GETHOSTBYNAME_H_
#define _GETHOSTBYNAME_H_


#ifdef _WIN32
#include <Winsock2.h>
#else
#include <netdb.h>
#endif /* _WIN32 */

struct hostent *GetHostByName(const char *name);
void CancleGetHostByName();


#endif /*_GETHOSTBYNAME_H_*/
