#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(std::vector<int> Numbers, int target);

int main()
{
    std::vector<int> Numbers = {1,23,4,5,9,11,23,67,8};
    std::vector<int> result = twoSum(Numbers, 9);
    std::cout << result[0] << " " << result[1] << std::endl;
    return 0;
}

std::vector<int> twoSum(std::vector<int> Numbers, int target)
{
    std::unordered_map<int, int> map;
    for(int i = 0; i < Numbers.size(); i++){
        int complement = target - Numbers[i];
        if(map.find(complement) != map.end()){
            return {map[complement], i};
        }
        map[Numbers[i]] = i;
    }

    return {};
}