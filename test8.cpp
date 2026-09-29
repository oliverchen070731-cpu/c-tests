#include <iostream>
#include <string>
#include <unordered_map>

int firstUniqueChar(const std::string& s);
int main()
{
    std::string s = "loveleetcode";
    std::cout << firstUniqueChar(s) << std::endl;
    return 0;
}

int firstUniqueChar(const std::string& s)
{
    std::unordered_map<int, int> frequency;
    for(char c : s){
        frequency[c]++;
    }
    for(int index = 0; index < s.size(); index++){
        if(frequency[s[index]] == 1 )
        return index;
    }
}