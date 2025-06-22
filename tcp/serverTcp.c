#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>

#define PORT 8080

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    char buffer[1024] = {0};
    char *message = "Hola desde el servidor TCP\n";

    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("Error al crear socket");
        exit(EXIT_FAILURE);
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);
    bind(server_fd, (struct sockaddr *)&address, sizeof(address));

    listen(server_fd, 3);
    int addrlen = sizeof(address);
    new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen);

    read(new_socket, buffer, 1024);
    printf("Mensaje recibido: %s\n", buffer);
    send(new_socket, message, strlen(message), 0);
    close(server_fd);
    return 0;
}
