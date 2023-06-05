# ft_irc for 42cursus.

This project is about creating our own IRC server, using an IRC client (Irssi) to connect to it and test it.
IRC is a text-based communication protocol on the Internet.
It offers real-time messaging that can be either public or private.
Users can exchange direct messages and join group channels.
The server is of course capable of handling multiple clients at the same time.
ft_irc was done in C++98 and we had to work as a duo with @Rudyar to realise it.

### Prerequisites (install the client to use the server) :wrench:

    sudo apt-get install irssi

---

### Our grade :mortar_board:

[![lleveque's 42 ft_irc Score](https://badge42.vercel.app/api/v2/clc6bxaur00060fmon220zhly/project/2879800)](https://github.com/JaeSeoKim/badge42)

---

### Usage :desktop_computer:

First:

    git clone https://github.com/Rudyar/ft_irc
    cd ft_irc

Then:

    make

<p align="center">
    <img src="https://github.com/Rudyar/ft_irc/blob/main/readme/make-ft_irc.gif">
</p>

Finally:

    ./ircserver <port> <password>

\<port> will be the port number on which your IRC server will be listening to for incoming IRC connections. <br>
\<password> will be connection password. It will be needed by any IRC client that tries to connect to your server.

<p align="center">
    <img src="https://github.com/Rudyar/ft_irc/blob/main/readme/run-ft_irc.gif">
</p>

#### Now the server is setted up and listening for incoming connections. 😴

---

### Example of use :speech_balloon:

- Connect to the server using Irssi:

<p align="center">
    <img src="https://github.com/Rudyar/ft_irc/blob/main/readme/connection-ft_irc.gif">
</p>

- Connect to a channel and communicate with another client:

<p align="center">
    <img src="https://github.com/Rudyar/ft_irc/blob/main/readme/channel-ft_irc.gif">
</p>

---

### Features implemented :keyboard:

The server was implemented with the followings commands:
- die
- invite
- join
- kick
- kill
- mode
- nick
- notice
- oper
- part
- pass
- pong
- privmsg
- quit
- topic
- user
- who
- whois

Available modes for client are:
- i
- o

Available modes for channels are:
- k
- l
