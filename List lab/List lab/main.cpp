#include "TList.h"

int main() {
	cout << "Count of elements: ";
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
	cout << endl;

	return 0;
}