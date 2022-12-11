#include <iostream>
#include <string>

using namespace std;

int main()
{
    //uzmi straincu
    string site;
    cout << "Enter Desired site: " << endl;
    cin >> site;
    //pripremi string za link
    string baseUrl;
    //uzmi prva dva slova i stavi ih u strinh
    string first_two = site.substr(0, 2);
    //mogući znakovi
    char c = ':';

    //base url će ovisiti o commani
    baseUrl = "https://www.facebook.com/";

    cout << baseUrl << endl << first_two << endl;

    //provjeri dali upis ima onaj preodređeni znak
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