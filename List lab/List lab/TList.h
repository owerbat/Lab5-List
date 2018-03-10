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
protected:
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

	virtual void insFirst(const T& elem);
	virtual void insLast(const T& elem);
	virtual void insCurrent(const T& elem);

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
	bool IsEnd() { 
		return (pCurr == pStop); 
	}

	void DelFirst();
	void DelCurrent();
	void DelLast();

	TLink<T> *GetCurr();
	TLink<T> *GetPrev();
	TLink<T> *GetFirst();
	TLink<T> *GetLast();

	//TList<T> sort();
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
	//for (Reset(); !IsEnd(); GoNext())
	while(size != 0)
		DelFirst();
}

template <class T>
void TList<T>::setPos(const int _pos) {
	// for(...) GoNext()
	for (int i = 0; i < _pos; i++)
		GoNext();
}

template <class T>
void TList<T>::insFirst(const T& elem) {
	/*TLink<T> *tmp = new TLink<T>;
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
	size++;*/

	TLink<T> *tmp = new TLink <T>;
	tmp->val = elem;
	if (pFirst == NULL)
	{
		pFirst = pLast = pCurr = tmp;
		pFirst->pNext = pStop;
		pos = 0;
	}
	else {
		tmp->pNext = pFirst;
		pFirst = tmp;
	}
	pos++;
	size++;
}

template <class T>
void TList<T>::insLast(const T& elem) {
	/*TLink<T> *tmp = new TLink<T>;
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
	size++;*/

	if (pFirst == NULL)
		insFirst(elem);
	else {
		TLink<T> *tmp = new TLink<T>;
		tmp->val = elem;
		pLast->pNext = tmp;
		tmp->pNext = pStop;
		pLast = tmp;
		size++;
	}
}

template <class T>
void TList<T>::insCurrent(const T& elem) {
	/*if (pCurr == pFirst) {
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
	}*/

	if (elem>pFirst->val)
		insFirst(elem);
	else {
		if (pCurr == pStop)
			insLast(elem);
		else {
			TLink<T> *tmp = new TLink<T>;
			tmp->val = elem;
			tmp->pNext = pCurr;
			pPrev->pNext = tmp;
			pCurr = tmp;
			size++;
		}
	}
}

template <class T>
void TList<T>::DelFirst() {
	/*if (size == 1) {
		delete pFirst;
		pFirst = pLast = pCurr = pPrev = pStop;
		pos = -1;
	}
	else {
		TLink<T> *tmp = pFirst;
		pFirst = pFirst->pNext;
		delete tmp;
		pos--;
	}
	size--;*/

	if (size == 1) {
		delete pFirst;
		pFirst = pLast = pCurr = pPrev = NULL;
	}
	else {
		TLink<T> *tmp = pFirst;
		pFirst = pFirst->pNext;
		delete tmp;
		pCurr = pFirst;
	}
	size--;
	if (pos > 0)
		pos--;
}

template <class T>
void TList<T>::DelCurrent() {
	/*if (size == 1) {
		DelFirst();
	}
	else {
		TLink<T> *tmp = pCurr;
		pCurr = pCurr->pNext;
		pPrev->pNext = pCurr;
		delete tmp;
		size--;
	}*/

	if (pCurr == pFirst)
		DelFirst();
	else
	{
		pCurr = pCurr->pNext;
		delete pPrev->pNext;
		pPrev->pNext = pCurr;
		size--;
	}
	if (size == 1) pLast = pFirst;
	if (!size) pFirst = NULL;
}

template <class T>
void TList<T>::DelLast() {
	/*if (size == 1) {
		DelFirst();
	}
	else {
		Reset();
		for (int i = 0; i < size - 1; i++) {
			GoNext();
		}
		TLink<T> *tmp = pLast;
		pCurr->pNext = pStop;
		pLast = pCurr;
		delete tmp;
		size--;
	}*/

	if (pLast == pFirst) 
		DelFirst();
	else {
		for (Reset(); !(pCurr->pNext == pStop); goNext()) {}
		delete pLast;
		pLast = pCurr = pPrev;
		Reset();
		size--;
		pos--;
	}
}

template <class T>
TLink<T> *TList<T>::GetCurr() {
	return pCurr;
}

template <class T>
TLink<T> *TList<T>::GetPrev() {
	return pPrev;
}

template <class T>
TLink<T> *TList<T>::GetFirst() {
	return pFirst;
}

template <class T>
TLink<T> *TList<T>::GetLast() {
	return pLast;
}

/*template <class T>
TList<T> TList<T>::sort() {
	TList<T> res;

	for (Reset(); !IsEnd(); GoNext()) {
		res.Reset();

		if (res.getSize() == 0) {
			res.insFirst(pCurr->val);
		}
		else if (pCurr->val <= res.getFirst()->val) {
			res.insFirst(pCurr->val);
		}
		else if (pCurr->val >= res.getLast()->val) {
			res.insLast(pCurr->val);
		}
		else {
			while (pCurr->val > (res.getCurr()->val)) {
				res.GoNext();
			}
			res.insCurrent(pCurr->val);
		}

		return res;
	}
}*/







template <class T>
class THeadList : public TList<T> {
protected:
	TLink<T> *pHead;
public:
	THeadList();
	~THeadList();

	void insFirst(const T& elem);
	void DelFirst();
};







template <class T>
THeadList<T>::THeadList() : TList() {
	pHead = new TLink<T>;
	pStop = pHead;
	pHead->pNext = pHead;
}

template <class T>
THeadList<T>::~THeadList() {
	TList::~TList();
	delete[] pHead;
}

template <class T>
void THeadList<T>::insFirst(const T& elem) {
	TList::insFirst(elem);
	pHead->pNext = pFirst;
}

template <class T>
void THeadList<T>::DelFirst() {
	TList::DelFirst();
	pHead->pNext = pFirst;
}