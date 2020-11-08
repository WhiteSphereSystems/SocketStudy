#include"CommonFunc.h"

bool CommonFunc::SocketCreate(int af, int type, int protcol) {

	*sock = socket(af,type,protcol);
	if (*sock == NULL) {

		return 0;

	}

	return 1;

}

void CommonFunc::SocketConfig(int address_family, int port, int address) {

	addr.sin_family = address_family;
	addr.sin_port = htons(port);
	addr.sin_addr.S_un.S_addr = address;

	return 1;
}

void CommonFunc::SocketBind(int address_family, int port, int address) {

	addr.sin_family = address_family;
	addr.sin_port = htons(port);
	addr.sin_addr.S_un.S_addr = address;

	bind(*sock, (struct sockaddr*)&addr, sizeof(addr));

}