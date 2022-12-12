#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //uzmi straincu
     std::string site;

  std::cout << "## CommandSearch 0.1 ##\nFor settings type 'settings'.\nSource code is avaliable at https://github.com/rukavinaet/CommandSearch\n\n ";
  std::getline (std::cin,site);
  if(site == "settings"){
      std::cout << "These are seetiings";
  }
  else{
    
  }
  //std::cout << "Hello, " << site << "!\n";

    for (int i = 0; i < site.length(); ++i) {
      // replacing character to '-' with a 'space'.
      if (site[i] == ' ') {
         site[i] = '-';
      }
   }

    //pripremi string za link
    string baseUrl;
    //uzmi prva dva slova i stavi ih u strinh
    string first_two = site.substr(0, 2);
    //mogući znakovi
    char c = ':';

    //base url će ovisiti o commani
    baseUrl = "https://www.google.com/search?client=CMDSearch&q=";
    string Final = baseUrl + site;

    cout << Final << endl;

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