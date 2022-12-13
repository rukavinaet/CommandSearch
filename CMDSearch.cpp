#include <iostream>
#include <cstring>
using namespace std;

// dev branch za .2v
// https://cplusplus.com/forum/beginner/100729/

// globalne stvari
void GoWeb();
void help();
std::string baseUrl;
std::string ProjectWeb;

int main()
{
    // očisti sustav i pripremi "second"- unos korisnika
    system("cls");
    std::cout << "## CommandSearch 0.1 ##\nMore information is avaliable at https://rukavinaet.github.io/CommandSearch\nFor help type 'help'\n\n ";
    std::string first, second;
    char delimeter(':'); // It is always '-' is it?
    std::getline(std::cin, first, delimeter);
    std::getline(std::cin, second);
        if (second == "options")
        {
            std::cout << "These are options and they are coming soon.\nReturning back...\n";
            system("pause");
        }
        else if (second == "help")
        {
            system("cls");
            help();
        }
        else
        {

            // sve razmake zamijeni sa crticom
            for (int i = 0; i < second.length(); ++i)
            {
                if (second[i] == ' ')
                {
                    second[i] = '+';
                }
            }
                if (first == "GH")
                {
                    baseUrl = "https://github.com/search?q=" + second;
                }
                else if (first == "LD")
                {
                    baseUrl = "https://www.linkedin.com/search/results/all/?keywords=" + second;
                }
                else if (first == "SO")
                {
                    baseUrl = "https://stackoverflow.com/search?q=" + second;
                }
                else
                {
                    baseUrl = "https://www.google.com/search?q=" + second;
                }
                GoWeb();

                return 0;
            }
          
        }
    

void GoWeb()
{
    system(std::string("start " + baseUrl).c_str());
}
void help()
{
    int n;
    std::cout << "## CommandSearch 0.1 ##\nCommands:\nGH - GitHub\nSO - StackOverflow\nLD - LinkedIN\n\nAttention: This is an alpha software, bugs are not welcome, but expected\nType '1' to return back or type '2' to go to the project websecond.\n\n";
    std::cin >> n;
    if (n == 1)
    {
        main();
    }
    else if (n == 2)
    {
        ProjectWeb = "https://rukavinaet.github.io/CommandSearch";
        system(std::string("start " + ProjectWeb).c_str());
    }
    else
    {
        main();
    }
}