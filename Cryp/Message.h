#pragma once

vector<int> message(string message) {
	vector <int> input;	
	int a;
	for (int i = 0; i < message.size(); ++i) {
		a = message[i];
		input.push_back(a);
	}
	return input;
}
