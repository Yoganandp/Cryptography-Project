#pragma once

void output(vector <int> cypher) {
	char output;
	cout << "The message is: ";
	for (int i = 0; i < cypher.size(); ++i) {
		output = cypher[i];
		cout << output;
	}
	cout << endl;
}
