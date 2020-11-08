#ifndef TCP_H
#define TCP_H

#include "CommonFunc.h"

class ITcp {
public:
	ITcp();
	virtual ~ITcp() = 0;
	virtual bool initWinsock() = 0;
	virtual bool SocketCreate()= 0;
	
};

class TCP : public ITcp, protected CommonFunc{
public:
	TCP();
	~TCP();

private:

	virtual bool initWinsock();
	virtual bool SocketCreate();
};

#endif // !TCP_H

