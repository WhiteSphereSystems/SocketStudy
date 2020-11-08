#ifndef UDP_H
#define UDP_H

#include "CommonFunc.h"

class IUdp {
public:
	IUdp();
	~IUdp();

	virtual bool initWinsock() = 0;
	virtual bool SocketCreate() = 0;

};

class UDP : public IUdp, protected CommonFunc {
public:

	UDP();
	~UDP();

private:

	virtual bool initWinsock();
	virtual bool SocketCreate();

};

#endif // !UDP_H
