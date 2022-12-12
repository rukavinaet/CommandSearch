#include <iostream>
#include <cstring>
using namespace std;

void myFunction();
std::string baseUrl; 

int main()
{
    system("cls");
    // uzmi straincu
    std::string site;

    std::cout << "## CommandSearch 0.1 ##\nSource code is avaliable at https://github.com/rukavinaet/CommandSearch\n\n ";
    std::getline(std::cin, site);
    if (site == "options")
    {
        std::cout << "These are options and they are coming soon.\n\n";
        
        main();
    }
    else
    {
        for (int i = 0; i < site.length(); ++i)
        {
            // replacing character to '-' with a 'space'.
            if (site[i] == ' ')
            {
                site[i] = '-';
            }
        }

        // pripremi string za link
        // uzmi prva dva slova i stavi ih u strinh
        
        // mogući znakovi
        char c = ':';

        // base url će ovisiti o commani
        // string baseUrl = "https://www.google.com/search?client=https://rukavinaet.github.io/CommandSearch&q=";
        // string Final =  baseUrl + site;

        // cout << Final << endl;

        // provjeri dali upis ima onaj preodređeni znak
        if (site.find(c) != std::string::npos)
        {
            string first_two = site.substr(0, 2);
            site.erase(0,3);
            if (first_two == "GH")
            {
                baseUrl = "https://github.com/search?q=" + site;
            }
            myFunction(); // call the function

            // system(std::string("start " + baseUrl).c_str());
            return 0;
        }
        else
        {
            baseUrl = "https://www.google.com/search?q="+ site;
            myFunction();
        }
    }
}
void myFunction()
{
    system(std::string("start " + baseUrl).c_str());
}