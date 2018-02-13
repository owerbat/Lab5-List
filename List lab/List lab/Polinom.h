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
			else if (t1.degZ == t2.degZ) {
				if (t1.coeff < t2.coeff)
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
			else if (t1.degZ == t2.degZ) {
				if (t1.coeff > t2.coeff)
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
	else
		return false;
}

bool operator==(const TMonom& t1, const TMonom& t2) {
	if ((t1.degX != t2.degX) || (t1.degY != t2.degY) || (t1.degZ != t2.degZ) || (t1.coeff != t2.coeff))
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

};