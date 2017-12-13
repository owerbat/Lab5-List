#pragma once

#include <iostream>

using namespace std;

template <class T>
struct TLink{
	T val;
	TLink<T> *pNext;
};

template <class T>
class TList {
	TLink<T> *pFirst;
	TLink<T> *pPrev;
	TLink<T> *pCurr;
	TLink<T> *pLast;
	TLink<T> *pStop;
	int size;
	int pos;
public:
	TList();
	~TList();

	int getSize() { return size; }
	int getPos() { return pos; }
	void setPos(const int _pos);

	void insFirst(const T& elem);
	void insLast(const T& elem);
	void insCurrent(const T& elem);
};