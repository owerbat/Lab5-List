#include <time.h>
#include "Polinom.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	TMonom *m = new TMonom[1], *n = new TMonom[1];

	m[0].coeff = 2;
	m[0].degX = 1;
	m[0].degY = m[0].degZ = 0;

	n[0].coeff = 1;
	n[0].degX = 2;
	n[0].degY = n[0].degZ = 0;

	cout << "m = " << m[0] << "\nn = " << n[0] << endl;

	TPolinom p(m, 1), q(n, 1);

	//TPolinom res = p + q;
	TPolinom res;
	/*res += p;
	res += q;*/
	sum(p, q, &res);

	/*string str = "abc";
	char *cstr = new char[str.length() + 1];
	strcpy_s(cstr, str.length() + 1, str.c_str());
	cout << cstr << endl;*/

	//cout << "res = " << res.GetString().c_str() << endl;

	/*string a = "abc";
	double b = 6.0;
	a += b;
	cout << a.c_str() << endl;*/
	
	cout << res << endl;

	delete[] m;
	delete[] n;

	return 0;
}