#ifndef COMMONFUNC_H
#define COMMONFUNC_H

#include <WinSock2.h>
#include <memory>

class CommonFunc {
public:
	CommonFunc();
	~CommonFunc();

protected:

	std::unique_ptr<SOCKET> sock;

	WSADATA wsaData;

	struct sockaddr_in addr;



	bool SocketCreate(int af ,int type, int protcol);
	void SocketConfig(int addrss_family, int port, int address);
	void SocketBind(int address_family, int port, int address);
	bool SocketListen();
	bool SocketAccept();
	bool SocketSend(SOCKET sock,void* buf,int bufsize);
	bool SocketRecv(SOCKET sock, void* buf, int bufsize);
	bool SocketClose();

};

#endif // !COMMONFUNC_H

