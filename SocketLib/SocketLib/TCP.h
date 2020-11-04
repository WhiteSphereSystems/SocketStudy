#ifndef TCP_H
#define TCP_H

#include <WinSock2.h>

class ITcp {
public:
	ITcp();
	virtual ~ITcp() = 0;
	bool initWinsock();
	bool SocketCreate();
	
};

class TCP : public ITcp {
public:
	TCP();
	virtual ~TCP();

private:
	SOCKET* sock;
};

#endif // !TCP_H

