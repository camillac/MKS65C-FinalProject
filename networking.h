#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <time.h>
#include <limits.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>

#ifndef NETWORKING_H
#define NETWORKING_H
#define ACK "HOLA"

#define HANDSHAKE_BUFFER_SIZE 10
#define BUFFER_SIZE 1000

#define PORT "42069"
#define TEST_IP "127.0.0.1"

struct deck {
  char** cards;
  size_t size;
  int card_at;
};

void error_check(int i, char *s);
int server_setup();
int server_connect(int sd);
int client_setup(char * server);


#endif
