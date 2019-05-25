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
