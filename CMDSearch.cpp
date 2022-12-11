#include <iostream>
#include <string>

using namespace std;

int main()
{
    string site;
    cout << "Enter Desired site: " << endl;
    cin >> site;
    string baseUrl;
    string first_two = site.substr(0, 2);
    char c = ':';
    baseUrl = "https://www.facebook.com/";

    cout << baseUrl << endl << first_two << endl;
    if (site.find(c) != std::string::npos)
    {
        std::cout << "Character found" << std::endl;
        system("pause");

        // system(std::string("start " + baseUrl).c_str());
        return 0;
    }
    else
    {


        // system(std::string("start " + baseUrl).c_str());
        system("pause");
                return 0;

    }
}