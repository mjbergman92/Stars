#include <iostream>

using namespace std;
int main() {

	int numOfRowsToCenter = 0;
	int stars = 1;

	cout << "Number of Rows to Center of Arrowhead: ";
	cin >> numOfRowsToCenter;

	cout << endl << endl;

	for (int i = 0; i < numOfRowsToCenter + (numOfRowsToCenter - 1); i++) {

		if (i + 1 < numOfRowsToCenter) {

			stars = 2 * i + 1;
			//cout << endl << setw(2 * numOfRowsToCenter + 1);

		}
		else if(i + 1 > numOfRowsToCenter){

			stars = (2 * numOfRowsToCenter + 1) - 2 * ((i + 1) - numOfRowsToCenter + 1);

		}
		else {

			stars = (2 * numOfRowsToCenter + 1) + (2 * (numOfRowsToCenter - 1) + 1);

		}

		cout << endl;

		for (int j = 0; j < stars; j++) {

			cout << "*";

		}

	}

	cout << endl << endl;

	system("pause");

	return 0;

}