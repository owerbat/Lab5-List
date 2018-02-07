#include <time.h>
#include "Polinom.h"

int main() {
	/*cout << "Count of elements: ";
	int count = 0;
	cin >> count;

	TList<int> list;

	cout << "Enter elements" << endl;

	int FirstEl;
	cin >> FirstEl;

	list.insFirst(FirstEl);

	for (int i = 1; i < count; i++) {
		list.Reset();
		int tmp;
		cin >> tmp;
		if (tmp <= list.GetFirst()->val) {
			list.insFirst(tmp);
		}
		else if (tmp >= list.GetLast()->val) {                    //оформить как метод
			list.insLast(tmp);
		}
		else {
			while (tmp > (list.GetCurr()->val)) {
				list.GoNext();
			}
			list.insCurrent(tmp);
		}
	}

	cout << "List: ";
	for (list.Reset(); !list.IsEnd(); list.GoNext()) {
		cout << list.GetCurr()->val << " ";
	}
	cout << endl;*/

	/*
	srand(time(NULL));

	cout << "Count of elements: ";
	int count = 0;
	cin >> count;

	TList<int> list;

	for (int i = 0; i < count; i++) {
		list.insFirst(rand() % 100);
	}

	TList<int> SortList;

	for (SortList.Reset(); !SortList.IsEnd(); SortList.GoNext()) {
		cout << SortList.GetCurr()->val << " ";
	}
	*/


	TMonom m1;
	m1.coeff = 2;
	m1.degX = 7;
	m1.degY = 3;
	m1.degZ = 6;

	TMonom m2;
	m2.coeff = 2;
	m2.degX = 7;
	m2.degY = 3;
	m2.degZ = 6;

	cout << operator==(m1, m2) << endl;

	return 0;
}