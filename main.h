#ifndef CHEROKEE_MAIN_H
#define CHEROKEE_MAIN_H

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <pthread.h>

int running = 0;
char* rootPath = "/home/yan/Documents/cherokee/testFolder";
char* port = "80";
char* ipAddress = "127.0.0.1";
int serverSocket;
int clientSocket;
char request[2048];
char* response = "lalalala";

#endif //CHEROKEE_MAIN_H
