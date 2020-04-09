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

int running = 1;
char* rootPath = "/home/yan/Documents/cherokee/testFolder";
int port = 80;
char* ipAddress = "127.0.0.1";
int serverSocket;
int clientSocket;

char request[4096];
char response[] = 
"HTTP/1.1 200 OK\r\n"
"Content-Type: text/html; charset=UTF-8\r\n\r\n"
"lalalala\r\n\r\n";

#endif //CHEROKEE_MAIN_H
