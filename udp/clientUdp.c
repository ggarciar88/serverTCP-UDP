#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 9090

int main() {
    int sockfd;
    char buffer[1024] = {0};
    struct sockaddr_in servaddr;

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    inet_pton(AF_INET, "127.0.0.1", &servaddr.sin_addr);

    sendto(sockfd, "Hola desde el cliente UDP", 26, 0, (struct sockaddr *)&servaddr, sizeof(servaddr));
    socklen_t len = sizeof(servaddr);
    recvfrom(sockfd, buffer, 1024, 0, (struct sockaddr *)&servaddr, &len);
    printf("Mensaje del servidor: %s\n", buffer);
    close(sockfd);
    return 0;
}
