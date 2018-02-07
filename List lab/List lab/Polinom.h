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