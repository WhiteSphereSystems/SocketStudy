#include <winsock2.h>
#include <iostream>
#include <windows.h>


struct SendData {
	int a;
	char b[12] = "";
	long c;
};

int main() {

	WSADATA wsaData;

	sockaddr_in addr;
	sockaddr_in client;
	SOCKET Csock;
	int len;
	//WCHAR Buff[1024];
	char buff[30];
	//SendData data;

	WSAStartup(MAKEWORD(2, 0), &wsaData);

	Csock = socket(AF_INET, SOCK_STREAM, 0);
	if (Csock == INVALID_SOCKET) {
		printf("socket failed\n");
		return 0;
	}

	//printf("%s", data.b);

	/*wsprintf(Buff,L"%#x", "AECD");

	MessageBox(NULL, Buff, L"WindowsProject", MB_OK);*/

	addr.sin_family = AF_INET;
	addr.sin_port = htons(12345);
	addr.sin_addr.S_un.S_addr = INADDR_ANY;
	bind(Csock, (struct sockaddr*)&addr, sizeof(addr));

	listen(Csock, 10);
	len = sizeof(client);
	Csock = accept(Csock, (struct sockaddr*)&client, &len);

	send(Csock,"abcd" , 5, 0);




	closesocket(Csock);


	WSACleanup();

	return 0;

}