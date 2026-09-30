#include <iostream>
#include <string>
#include <unordered_map>

int firstUniqueChar(const std::string& s);
int main()
{
    std::string s;
    std::cout << "Please enter the string: " << std::endl;
    std::getline(std::cin, s);
    std::cout << firstUniqueChar(s) << std::endl;
    return 0;

}

int firstUniqueChar(const std::string& s)
{
    std::unordered_map<int, int> frequency;
    for(char x : s){
        frequency[x]++;
    }
    for(int index = 0; index < s.size(); index++){
        if(frequency[s[index]] == 1)  return index;
    }
    return -1;
}

