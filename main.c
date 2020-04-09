#include "main.h"

int main() {
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_addr_len = sizeof(client_addr);

    server_addr.sin_addr.s_addr = inet_addr(ipAddress);
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);

    serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    if (socket < 0) {
        perror("socket()");
        exit(1);
    }
    if (bind(serverSocket, (struct sockaddr *) &server_addr, sizeof(server_addr)) < 0) {
        perror("bind()");
        exit(1);
    }
    if (listen(serverSocket, 5) < 0) {
        perror("listen()");
        close(serverSocket);
        exit(1);
    }

    memset(request, '\0', 4096);
    while(running){
        clientSocket = accept(serverSocket, (struct sockaddr*)&client_addr, &client_addr_len);
        if (clientSocket < 0) {
            perror("listen()");
            continue;
        }
        read(clientSocket, request, 4096 - 1);
        puts(request);
        write(clientSocket, response, sizeof(response) - 1);
    }
    return 0;
}
