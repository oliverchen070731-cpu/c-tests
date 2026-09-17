#include <iostream>
#include <vector>

std::vector <int> Twosum(const std::vector <int>& Num, int target);

int main()
{
    std::vector <int> Num = {2,7,11,5};
    int target = 9;
    std::vector <int> answer = Twosum(Num, target);
    std::cout << answer[0] << " " << answer[1] << std::endl;
    return 0;
}

std::vector <int> Twosum(const std::vector <int>& Num, int target)
{
    for(int i = 0; i < Num.size(); i++){
        for(int j = i + 1; j < Num.size(); j++){
            if(Num[i] + Num[j] == target){
                return {i,j};

            }
        }
    }

    return {};
}
