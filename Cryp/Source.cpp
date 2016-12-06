#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <time.h>
#include <Windows.h>

using namespace std;

#include "FunctionNames.h"
#include "Message.h"
#include "Output.h"
#include "key.h"
#include "inverseKey.h"
#include "Encrypt.h"
#include "Decrypt.h"
#include "EorD.h"
#include "Reuse.h"
#include "UI.h"

int main() {	
	EncryptionUI();
	reuse();	
	return 0;
}