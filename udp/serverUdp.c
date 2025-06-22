#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 9090

int main() {
    int sockfd;
    char buffer[1024];
    struct sockaddr_in servaddr, cliaddr;

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);
    bind(sockfd, (const struct sockaddr *)&servaddr, sizeof(servaddr));

    socklen_t len = sizeof(cliaddr);
    recvfrom(sockfd, buffer, 1024, 0, (struct sockaddr *)&cliaddr, &len);
    printf("Mensaje recibido: %s\n", buffer);
    sendto(sockfd, "Hola desde el servidor UDP", 27, 0, (struct sockaddr *)&cliaddr, len);
    close(sockfd);
    return 0;
}
