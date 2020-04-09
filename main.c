#include <rpc.h>
#include "main.h"

int main() {
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_addr_len;

    server_addr.sin_addr.s_addr = inet_addr(ipAddress);
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);

    serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    if (socket < 0) {
        perror("socket()");
    }
    if (bind(serverSocket, (struct sockaddr *) &server_addr, sizeof(server_addr)) < 0) {
        perror("bind()");
    }
    if (listen(serverSocket, 5) < 0) {
        perror("listen()");
    }

    while((clientSocket = accept(serverSocket, (struct sockaddr*)&client_addr, &client_addr_len))){

    }
    return 0;
}
