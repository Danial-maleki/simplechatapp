# 🐧 Tux Chat

A simple client/server chat application written in C++ using Qt.

## ✨ Features
- Client / Server architecture
- TCP socket communication
- Qt Widgets UI
- Cross-platform (Linux / Windows)

## 🛠 Build

### Requirements
- Qt 5.15+ or Qt 6.x
- CMake 3.5+

### Server
```bash
cd server
mkdir build && cd build
cmake ..
make
./tux-chat-server

Client

cd client
mkdir build && cd build
cmake ..
make
./tux-chat-client
