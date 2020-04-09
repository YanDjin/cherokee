//
// Created by Yan on 09/04/2020.
//

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
char* rootPath = "C:\\Users\\Yan\\Documents\\Projects\\ETNA\\Cherokee\\test_folder";
int port = 80;
char* ipAddress = "127.0.0.1";
int serverSocket;
int clientSocket;

#endif //CHEROKEE_MAIN_H
