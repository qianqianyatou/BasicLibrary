#pragma once

#include "winsock2.h"
#pragma comment(lib,"ws2_32.lib")

enum IO_TYPE
{
	IO_ACCEPT = 0,
	IO_READ ,
	IO_WRITE
};

typedef struct _OVERLAPPED_EX
{
	OVERLAPPED overlapped;
	IO_TYPE    ioType;
	void*      pObject;
}OVERLAPPPED_EX;

class CNetWorkSession
{
public:
	CNetWorkSession();
	~CNetWorkSession();

public:
	bool Start();
	bool Stop();
	void Bind();
};