#include <iostream>
#include <string>

using namespace std;

int main() {
string site;
cout << "Enter Desired site: " << endl;
cin >> site;
string baseUrl;
if(site=="Facebook"){
	baseUrl="https://www.facebook.com/";
	cout << baseUrl << endl;
    system("pause");
}
else if(site=="Youtube"){
	baseUrl="https://www.youtube.com/user/";
	cout << baseUrl << endl;
}

//system(std::string("start " + baseUrl).c_str());
	return 0;
    system("pause");
}
