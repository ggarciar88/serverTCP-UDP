____________________________________________________________________________________________________________________________________________________________________________________________________________________
# TCP and UDP Client-Server Communication in C
____________________________________________________________________________________________________________________________________________________________________________________________________________________

This project demonstrates simple implementations of TCP and UDP client-server communication using the C programming language. It is intended for educational purposes, particularly for students studying Telecommunications Engineering or Computer Science.

## Overview

The repository includes four separate programs:

- `server_tcp.c` – A basic TCP server that waits for incoming connections, receives a message from a client, and sends a response.
- `client_tcp.c` – A TCP client that connects to the server, sends a message, and receives a response.
- `server_udp.c` – A UDP server that listens for datagrams from a client and sends a reply.
- `client_udp.c` – A UDP client that sends a message to the server and waits for a response.

This project helps you understand the differences between **connection-oriented (TCP)** and **connectionless (UDP)** protocols and how to work with sockets in C.

---

## Project Structure

tcp_udp_project/
├── README.md
├── Makefile
├── tcp/
│ ├── server_tcp.c
│ └── client_tcp.c
└── udp/
├── server_udp.c
└── client_udp.c


## Technologies Used

- **C language**
- **POSIX sockets** (`<sys/socket.h>`, `<netinet/in.h>`, `<arpa/inet.h>`)
- Compatible with **Linux environments** (e.g., Ubuntu)


## Instructions to Compile

Use the provided `Makefile` to compile all programs.
This will generate the following binaries in the root folder:

-server_tcp
-client_tcp
-server_udp
-client_udp

 
 ## How to Run

- Open Terminal 1 and run the server.

      bash
      ./server_tcp

- Open Terminal 2 and run the client:

      bash
      ./client_tcp

You should see a message being sent from the client to the server and a response printed back to the client.

 
## UDP Communication

- Open Terminal 1 and run the server:

      bash
      ./server_udp

- Open Terminal 2 and run the client:

      bash
      ./client_udp
  
The UDP communication will exchange messages similarly, though without establishing a persistent connection.


## IMPORTANT Notes

-Default TCP port: 8080
- Default UDP port: 9090
- Both clients connect to 127.0.0.1 (localhost) by default.
- The server must be started before the client.

## Intended Audience

This project is suitable for:

  - University students studying telecommunications, networking, or computer systems.
  - Anyone interested in learning low-level socket programming.
  - Engineers preparing for job interviews involving C or networking basics.

## License

This project is open-source and free to use for educational and personal learning purposes.

