#include <iostream>
#include <cstring>
using namespace std;


//dev branch za .2v

// globalne stvari
void GoWeb();
void help();
std::string baseUrl;
std::string ProjectWeb;

int main()
{
    // očisti sustav i pripremi "site"- unos korisnika
    system("cls");
    std::string site;

    std::cout << "## CommandSearch 0.1 ##\nMore information is avaliable at https://rukavinaet.github.io/CommandSearch\nFor help type 'help'\n\n ";
    std::getline(std::cin, site);
    if (site == "")
    {
        system("cls");
        main();
    }
    else
    {
        if (site == "options")
        {
            std::cout << "These are options and they are coming soon.\nReturning back...\n";
            main();
        }
        else if (site == "help")
        {
            system("cls");
            help();
        }
        else{
             
        // sve razmake zamijeni sa crticom
        for (int i = 0; i < site.length(); ++i)
        {
            if (site[i] == ' ')
            {
                site[i] = '-';
            }
        }

        char c = ':';
        // ovo će se koristit kada bude multiple statements
        char d = '+';
        // ako ima dvotočku onda radi ovo
        if (site.find(c) != std::string::npos)
        {
            string first_two = site.substr(0, 2);
            site.erase(0, 3);
            if (first_two == "GH")
            {
                baseUrl = "https://github.com/search?q=" + site;
            }
            else if (first_two == "LD")
            {
                baseUrl = "https://www.linkedin.com/search/results/all/?keywords=" + site;
            }
            else if (first_two == "SO")
            {
                baseUrl = "https://stackoverflow.com/search?q=" + site;
            }
            else
            {
                baseUrl = "https://www.google.com/search?q=" + site;
            }
            GoWeb();

            return 0;
        }
        else
        {
            baseUrl = "https://www.google.com/search?q=" + site;
            GoWeb();
        }
    }
        }
    

   
}
void GoWeb()
{
    system(std::string("start " + baseUrl).c_str());
}
void help()
{
    int n;
    std::cout << "## CommandSearch 0.1 ##\nCommands:\nGH - GitHub\nSO - StackOverflow\nLD - LinkedIN\n\nAttention: This is an alpha software, bugs are not welcome, but expected\nType '1' to return back or type '2' to go to the project website.\n\n";
    std::cin >> n;
    if (n == 1){main();}
    else if (n == 2){ProjectWeb = "https://rukavinaet.github.io/CommandSearch";system(std::string("start " + ProjectWeb).c_str());}
    else{main();}
}