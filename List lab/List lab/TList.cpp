#include "TList.h"

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

}

template <class T>
void TList<T>::insCurrent(const T& elem) {

}