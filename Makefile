CC=gcc
CFLAGS=-Wall

all: server_tcp client_tcp server_udp client_udp

server_tcp: tcp/server_tcp.c
	$(CC) $(CFLAGS) tcp/server_tcp.c -o server_tcp

client_tcp: tcp/client_tcp.c
	$(CC) $(CFLAGS) tcp/client_tcp.c -o client_tcp

server_udp: udp/server_udp.c
	$(CC) $(CFLAGS) udp/server_udp.c -o server_udp

client_udp: udp/client_udp.c
	$(CC) $(CFLAGS) udp/client_udp.c -o client_udp

clean:
	rm -f server_tcp client_tcp server_udp client_udp
