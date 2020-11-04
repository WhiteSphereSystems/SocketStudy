#ifndef SOCKET_MANAGER
#define SOCKET_MANAGER

#include "TCP.h"
#include "UDP.h"

class SocketManager : public ITcp, public IUdp {
public:



private:

	ITcp *tcp = new TCP();
	IUdp *udp = new UDP();

};

#endif // !SOCKET_MANAGER

