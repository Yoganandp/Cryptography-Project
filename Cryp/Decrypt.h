#pragma once

void decrypt(string fileName) {
	ifstream inputFile;
	vector <int> inputVector;
	int number, x = -1;
	int key[3][3], endOfRowKey, endOfRowText = 0, cypherText[3][1], inputText[3][1];
	endOfRowKey = 0;
	vector<int> num, num2;
	inputFile.open(fileName + ".txt");
	if (!inputFile.is_open()) {
		do {
			cout << "Please enter an existing file name: ";
			getline(cin, fileName);
			inputFile.open(fileName + ".txt");
		} while (!inputFile.is_open());
	}
	vector <int> a;
	while (!inputFile.eof()) {
		inputFile >> number;
		++x;
		if (x < 9) {
			a.push_back(number);
		}

		if (x > 8) {
			num.push_back(number);
		}
	}

	vector<int> b = inverseKey(a);

	for (int i = 0; i < (num.size() - 1); ++i) {
		num2.push_back(num[i]);

	}

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j, ++endOfRowKey) {
			key[i][j] = b[endOfRowKey];
		}
	}
	for (int l = 0; l < num2.size() / 3; ++l) {
		for (int i = 0; i < 3; ++i, ++endOfRowText) {
			cypherText[i][0] = num2[endOfRowText];
		}
		for (int i = 0; i < 3; ++i) {
			for (int j = 0, total = 0; j < 3; ++j) {
				total = total + (key[i][j] * cypherText[j][0]);
				if (j == 2) {
					inputText[i][0] = total;
				}
			}
			if (inputText[i][0] != 0)
				inputVector.push_back(inputText[i][0]);
		}
	}


	output(inputVector);
}

