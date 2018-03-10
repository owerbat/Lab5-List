#pragma once
#include "TList.h"

ostream& operator<<(ostream &out, const string &str) {
	for (int i = 0; i < str.size(); i++) {
		out << (char)(str[i]);
	}
	return out;
}





//-------------------------------------------------------------------------

	struct TMonom {
		double coeff;
		int degX, degY, degZ;
	};




	bool operator<(const TMonom& t1, const TMonom& t2) {
		if ((&t1 == NULL) || (&t2 == NULL))
			return false;
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
		if ((&t1 == NULL) || (&t2 == NULL))
			return false;
		if ((t1.degX == t2.degX) && (t1.degY == t2.degY) && (t1.degZ == t2.degZ))
			return true;
		else
			return false;
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

	TMonom operator*(const TMonom &q, const double a) {
		TMonom res;
		res.coeff = q.coeff * a;
		res.degX = q.degX;
		res.degY = q.degY;
		res.degZ = q.degZ;
		return res;
	}

	ostream& operator<<(ostream &out, const TMonom &m) {
		out << m.coeff << "x^" << m.degX << "y^" << m.degY << "z^" << m.degZ;
		return out;
	}


	//-------------------------------------------------------------------------------------------------------------



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

	TPolinom operator*(const double a);
	void operator*=(const double a);

	void operator+=(TPolinom &q);
	TPolinom operator+(TPolinom &q);
	void operator-=(TPolinom &q);
	TPolinom operator-(TPolinom &q);
	TPolinom operator*(TPolinom &q);

	void operator*=(const TMonom &m);
	TPolinom operator*(const TMonom &m);

	


	bool isStart() { return pCurr == pFirst;}
	double getCoeff() { return pCurr->val.coeff; }
	int getX() { return pCurr->val.degX; }
	int getY() { return pCurr->val.degY; }
	int getZ() { return pCurr->val.degZ; }
	bool isEmpty() { return pFirst == NULL; }

	string GetString() {
		/*string res;
		
		for (Reset(); !IsEnd(); GoNext()) {
			if (pCurr != pFirst || pCurr->val.coeff >= 0)
				res += "+";
			res += pCurr->val.coeff;
			res += "x^";
			res += pCurr->val.degX;
			res += "y^";
			res += pCurr->val.degY;
			res += "z^";
			res += pCurr->val.degZ;
		}

		return res;*/

		
		if (isEmpty())
			return "0";

		string tmp = "";

		for (Reset(); !IsEnd(); GoNext()) {
			if (!isStart() && getCoeff() > 0)
				tmp += "+";

			if ((getCoeff() != 1) || (!getX() && !getY() && !getZ()))
				tmp += getCoeff();

			if (getX())
				if (getX() > 1) {
					tmp += "x^";
					tmp += getX();
				}
				else
					tmp += "x";

			if (getY())
				if (getY() > 1) {
					tmp += "y^";
					tmp += getY();
				}
				else
					tmp += "y";

			if (getZ())
				if (getZ() > 1) {
					tmp += "z^";
					tmp += getZ();
				}
				else
					tmp += "z";
		}

		return tmp;
	

	}


	friend ostream& operator<<(ostream &out, TPolinom &p) {
		if (p.size) {
			for (p.Reset(); !p.IsEnd(); p.GoNext()) {
				out << p.pCurr->val << " + ";
			}
			out << ".";
		}
		else
			out << "0 .";
		return out;
	}

protected:
	void NormalView();
};






void TPolinom::insByOrder(const TMonom &m) {
	if (!size) {
		insFirst(m);
		return;
	}
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

TPolinom TPolinom::operator*(const double a) {
	TPolinom res;
	for (Reset(); !IsEnd(); GoNext())
		res.insByOrder(pCurr->val * a);
	return res;
}

void TPolinom::operator*=(const double a) {
	for (Reset(); !IsEnd(); GoNext())
		pCurr->val.coeff *= a;
}

void TPolinom::operator+=(TPolinom &q) {
	if (size && q.size) {
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
	else if(!size && q.size) {
		for (q.Reset(); !q.IsEnd(); q.GoNext())
			insByOrder(q.pCurr->val);
	}

	/*for (q.Reset(); !q.IsEnd(); q.GoNext())
		insByOrder(q.pCurr->val);*/
}

TPolinom TPolinom::operator+(TPolinom &q) {
	TPolinom res;

	res += *this;
	res += q;

	return res;
}

void TPolinom::operator-=(TPolinom &q) {
	q *= (-1.0);
	*this += q;
	q *= (-1.0);
}

TPolinom TPolinom::operator-(TPolinom &q) {
	return *this + (q * (-1));
}

void TPolinom::operator*=(const TMonom &m) {
	for (Reset(); !IsEnd(); GoNext())
		pCurr->val = pCurr->val * m;
}

TPolinom TPolinom::operator*(const TMonom &m) {
	TPolinom res;
	for (Reset(); !IsEnd(); GoNext())
		res.insByOrder(pCurr->val * m);
	return res;
}

TPolinom TPolinom::operator*(TPolinom &q) {
	TPolinom res;
	for (Reset(); !IsEnd(); GoNext()) {
		for (q.Reset(); !q.IsEnd(); q.GoNext()) {
			//res = res + (pCurr->val * q.pCurr->val);
			res.insByOrder(pCurr->val * q.pCurr->val);
		}
	}
	return res;
}

void TPolinom::NormalView() {
	TPolinom q;

	for (Reset(); !IsEnd(); GoNext())
		q.insFirst(pCurr->val);

	while (size != 0)
		DelFirst();

	for (q.Reset(); !q.IsEnd(); q.GoNext())
		insByOrder(q.pCurr->val);
}





void sum(TPolinom p, TPolinom q, TPolinom *res) {
	*res += p;
	*res += q;
}