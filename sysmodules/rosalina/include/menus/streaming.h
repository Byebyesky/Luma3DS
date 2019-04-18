#pragma once

#include <3ds/types.h>
#include "menu.h"
#include "sock_util.h"

extern Menu streamingMenu;

void startMainThread(void);
void endThread(void);
void finalize();
void rpCloseGameHandle();
void closeRPHandle();
//int acceptClient(struct sock_ctx *ctx);
//int closeConnection(struct sock_ctx *ctx);
//struct sock_ctx *allocClient(struct sock_server *server, u16 port);
//void releaseClient(struct sock_server *server, struct sock_ctx *ctx);