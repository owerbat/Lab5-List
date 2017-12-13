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

	void Reset() {
		pCurr = pFirst;
		pos = 0;
		pPrev = pStop;
	}
	void GoNext() {
		pPrev = pCurr;
		pCurr = pCurr->pNext;
		pos++;
	}
	bool IsEnd() { return (pFirst == pStop); }

	void DelFirst();
	void DelCurrent();
};

template <class T>
TList<T>::TList() {
	pFirst = pLast = pPrev = pCurr = pStop = NULL;
	size = 0;
	pos = -1;
}

template <class T>
TList<T>::~TList() {
	// for(...) delFirst()
}

template <class T>
void TList<T>::setPos(const int _pos) {
	// for(...) GoNext()
}

template <class T>
void TList<T>::insFirst(const T& elem) {
	TLink<T> *tmp = new TLink<T>;
	tmp->val = elem;
	tmp->pNext = pFirst;
	if (pFirst == pStop) {
		pFirst = pLast = pCurr = tmp;
		pos = 0;
	}
	else {
		pFirst = tmp;
		pos++;
	}
	size++;
}

template <class T>
void TList<T>::insLast(const T& elem) {
	TLink<T> *tmp = new TLink<T>;
	tmp->val = elem;
	tmp->pNext = pStop;
	if (pFirst == pStop) {
		pFirst = pLast = pCurr = tmp;
		pos = 0;
	}
	else {
		pLast->pNext = tmp;
		pLast = tmp;
	}
	size++;
}

template <class T>
void TList<T>::insCurrent(const T& elem) {
	if (pCurr == pFirst) {
		insFirst(elem);
	}
	else if (pCurr == pStop) {
		insLast(elem);
	}
	else {
		TLink<T> *tmp = new TLink<T>;
		tmp->val = elem;
		tmp->pNext = pCurr;
		pPrev->pNext = tmp;
		pCurr = tmp;
		size++;
	}
}

template <class T>
void TList<T>::DelFirst() {
	if (size == 1) {
		delete pFirst;
		pFirst = pLast = pCurr = pPrev = pStop;
		pos = -1;
	}
	else {
		tmp = pFirst;
		pFirst = pFirst->pNext;
		delete tmp;
		pos--;
	}
	size--;
}

template <class T>
void TList<T>::DelCurrent() {
	if (size == 1) {
		DelFirst();
	}
	else {

	}
}