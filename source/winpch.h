#ifndef WINPCH_H
#define WINPCH_H

// this header is just meant to be precompiled for compilation speed reasons.
// mainly for the purposes of making it fast when windows.h is involved.
#undef UNICODE
#define WIN32_LEAN_AND_MEAN
#include "mgldraw.h" // for allegro
#include <windows.h>
#include "jamultypes.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <mmsystem.h>

#endif
