#pragma once

void encrypt(vector<int> input, vector<int> key1, string name) {
	ofstream cypherFile;
	cypherFile.open(name + ".txt");
	vector<int> cypherVector;
	int extraZeroes, inputText[3][1], key[3][3], cypherText[3][1], endOfRowKey, endOfRowText, numberOfms, total;
	endOfRowKey = 0;
	endOfRowText = 0;
	numberOfms = 0;
	total = 0;

	if (input.size() % 3 != 0) {
		if (input.size() % 3 == 1)
			extraZeroes = 2;
		else {
			extraZeroes = 1;
		}
	}
	else {
		extraZeroes = 0;
	}
	for (; extraZeroes > 0; --extraZeroes) {
		input.push_back(0);
	}
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j, ++endOfRowKey) {
			key[i][j] = key1[endOfRowKey];
			cypherFile << key[i][j] << " ";
		}
		cypherFile << endl;

	}

	for (; numberOfms < input.size() / 3; ++numberOfms) {
		for (int i = 0; i < 3; ++i, ++endOfRowText) {
			inputText[i][0] = input[endOfRowText];
		}
		for (int i = 0; i < 3; ++i) {
			for (int k = 0; k < 3; ++k) {
				int x = (key[i][k] * inputText[k][0]);
			}

			for (int j = 0, total = 0; j < 3; ++j) {
				total = total + (key[i][j] * inputText[j][0]);
				if (j == 2) {
					cypherText[i][0] = total;
				}
			}
			cypherFile << cypherText[i][0] << " ";			
		}
		cypherFile << endl;

	}
	cypherFile.close();
}


