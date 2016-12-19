#include <iostream>
#include <vector>
using namespace std;
int main(){

	vector<string> inChar;
	string in;
	getline(cin, in);
	while(in != "\n"){
		if(in == "42")
			break;
		else
			inChar.push_back(in);
		getline(cin, in);
	}
	
	for(int i = 0; i < inChar.size(); i++)
		cout << inChar[i] << endl;
		
	return 0;

}
