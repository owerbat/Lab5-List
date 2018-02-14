#pragma once
#include "TList.h"

struct TMonom {
	double coeff;
	int degX, degY, degZ;
};




bool operator<(const TMonom& t1, const TMonom& t2) {
	if (t1.degX < t2.degX)
		return true;
	else if (t1.degX == t2.degX) {
		if (t1.degY < t2.degY)
			return true;
		else if (t1.degY == t2.degY) {
			if (t1.degZ < t2.degZ)
				return true;
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}

bool operator>(const TMonom& t1, const TMonom& t2) {
	if (t1.degX > t2.degX)
		return true;
	else if (t1.degX == t2.degX) {
		if (t1.degY > t2.degY)
			return true;
		else if (t1.degY == t2.degY) {
			if (t1.degZ > t2.degZ)
				return true;
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}

bool operator==(const TMonom& t1, const TMonom& t2) {
	if ((t1.degX != t2.degX) || (t1.degY != t2.degY) || (t1.degZ != t2.degZ))
		return false;
	else
		return true;
}

bool operator>=(const TMonom& t1, const TMonom& t2) {
	return !(t1 < t2);
}

bool operator<=(const TMonom& t1, const TMonom& t2) {
	return !(t1 > t2);
}

bool operator!=(const TMonom& t1, const TMonom& t2) {
	return !(t1 == t2);
}

TMonom operator+(const TMonom& t1, const TMonom& t2) {
	if ((t1.degX != t2.degX) || (t1.degY != t2.degY) || (t1.degZ != t2.degZ)) {
		char *str = "Degrees of these monoms are different";
		throw str;
	}

	TMonom res;

	res.degX = t1.degX;
	res.degY = t1.degY;
	res.degZ = t1.degZ;
	res.coeff = t1.coeff + t2.coeff;

	return res;
}

TMonom operator-(const TMonom& t1, const TMonom& t2) {
	if ((t1.degX != t2.degX) || (t1.degY != t2.degY) || (t1.degZ != t2.degZ)) {
		char *str = "Degrees of these monoms are different";
		throw str;
	}

	TMonom res;

	res.degX = t1.degX;
	res.degY = t1.degY;
	res.degZ = t1.degZ;
	res.coeff = t1.coeff - t2.coeff;

	return res;
}

TMonom operator*(const TMonom& t1, const TMonom& t2) {
	TMonom res;

	res.degX = t1.degX + t2.degX;
	res.degY = t1.degY + t2.degY;
	res.degZ = t1.degZ + t2.degZ;
	res.coeff = t1.coeff * t2.coeff;

	return res;
}

TMonom operator/(const TMonom& t1, const TMonom& t2) {
	TMonom res;

	res.degX = t1.degX - t2.degX;
	res.degY = t1.degY - t2.degY;
	res.degZ = t1.degZ - t2.degZ;
	res.coeff = t1.coeff / t2.coeff;

	return res;
}









class TPolinom : public THeadList<TMonom> {
public:
	TPolinom() : THeadList<TMonom>() {
		pHead->val.coeff = 0;
		pHead->val.degZ = -1;
	}

	TPolinom(TMonom *m, int size) : THeadList<TMonom>() {
		pHead->val.coeff = 0;
		pHead->val.degZ = -1;

		for (int i = 0; i < size; i++)
			insLast(m[i]);
	}

	void insByOrder(const TMonom &m);

	void operator+=(TPolinom &q);
	TPolinom operator+(TPolinom &q);
	//void operator*(const double& a);
	//void operator*(const TMonom& m);
	
};




void TPolinom::insByOrder(const TMonom &m) {
	for (Reset(); !IsEnd(); GoNext()) {
		if (pCurr->val == m) {
			pCurr->val.coeff += m.coeff;
			if (pCurr->val.coeff == 0)
				DelCurrent();
			return;
		}
		if (pCurr->val < m) {
			insCurrent(m);
			return;
		}
	}
	insLast(m);
}

void TPolinom::operator+=(TPolinom &q) {
	Reset();
	q.Reset();
	while (!IsEnd() || !q.IsEnd()) {
		if (pCurr->val == q.pCurr->val) {
			pCurr->val.coeff += q.pCurr->val.coeff;
			if (pCurr->val.coeff == 0) {
				DelCurrent();
				q.GoNext();
			}
			else {
				GoNext();
				q.GoNext();
			}
		}
		else if (pCurr->val < q.pCurr->val) {
			insCurrent(q.pCurr->val);
			q.GoNext();
		}
		else
			GoNext();
	}
}

TPolinom TPolinom::operator+(TPolinom &q) {
	TPolinom res;
	Reset();
	q.Reset();
	while (!IsEnd() || !q.IsEnd()) {
		if (pCurr->val == q.pCurr->val) {
			if ((pCurr->val.coeff + q.pCurr->val.coeff) != 0) 
				res.insByOrder(pCurr->val + q.pCurr->val);
			GoNext();
			q.GoNext();
		}
		else if (pCurr->val < q.pCurr->val) {
			/*insCurrent(q.pCurr->val);
			q.GoNext();*/
			res.insByOrder(q.pCurr->val);
			q.GoNext();
		}
		else {
			res.insByOrder(pCurr->val);
			GoNext();
		}
	}
	return res;
}