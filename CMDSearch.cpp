#include <iostream>
#include <cstring>
using namespace std;

//globalne stvari
void myFunction();
std::string baseUrl;

int main()
{
    //očisti sustav i pripremi "site"- unos korisnika
    system("cls");
    std::string site;

    std::cout << "## CommandSearch 0.1 ##\nMore information is avaliable at https://rukavinaet.github.io/CommandSearch\n\n ";
    std::getline(std::cin, site);
    if (site == "options")
    {
        std::cout << "These are options and they are coming soon.\nReturning back...\n";
        main();
    }
    else
    {
        //sve razmake zamijeni sa crticom
        for (int i = 0; i < site.length(); ++i)
        {
            if (site[i] == ' ')
            {
                site[i] = '-';
            }
        }

        char c = ':';
        //ovo će se koristit kada bude multiple statements
        char d= '+';
        //ako ima dvotočku onda radi ovo
        if (site.find(c) != std::string::npos)
        {
            string first_two = site.substr(0, 2);
            site.erase(0, 3);
            if (first_two == "GH"){baseUrl = "https://github.com/search?q=" + site;}
            else if (first_two == "LD"){baseUrl = "https://www.linkedin.com/search/results/all/?keywords=" + site;}
            else if (first_two == "SO"){baseUrl = "https://stackoverflow.com/search?q=" + site;}
            else
            {
                baseUrl = "https://www.google.com/search?q=" + site;
            }
            myFunction();

            return 0;
        }
        else
        {
            baseUrl = "https://www.google.com/search?q=" + site;
            myFunction();
        }
    }
}
void myFunction()
{
    system(std::string("start " + baseUrl).c_str());
}