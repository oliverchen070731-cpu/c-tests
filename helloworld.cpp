#include <iostream>

int searchArray(int Numbers[], int size, int myNum);
int main()
{
    int Numbers[] = {2,8,9,13,7,5,48};
    int size = sizeof(Numbers)/sizeof(Numbers[0]);
    int index;
    int myNum;

    do{     std::cout << "Please enter the number you want to find: " << std::endl;
    std::cin >> myNum;

    index = searchArray(Numbers, size, myNum);
    if(index != -1){
        std::cout << "The number you want to find is int he index of" << " " << index << '\n';
    }
    else{
        std::cout << "The number you want to find is not in the array" << '\n';
    }
    }while(index == -1);
}

int searchArray(int Numbers[], int size, int myNum)
{
    for(int i = 0; i < size; i++){
        if(Numbers[i] == myNum){
            return i;
        }
    }
    return -1;
}