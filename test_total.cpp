#include <iostream>

void move(char a, char b);
void hanoi(int n, char x, char y, char z);
unsigned countTimes(int n);

int main()
{
    
    int n;
    while(1){
        std::cout << "Enter the number of the plates: " << std::endl;
        std::cin >> n;
        if(n == 0) break;
        if(n < 0){
            std::cout << "Input error, retry" << std::endl;
            continue;
        }

        hanoi(n, 'A', 'B', 'C');
        std::cout << countTimes(n) << std::endl;
    }
    return 0;
}

void move(char a, char b)
{
    std::cout << "move" << " " << a << " " << "to" << " " << b << std::endl;
}

void hanoi(int n, char x, char y, char z)
{
    if(n == 1){
        move(x,z);
    }
    else{
        hanoi(n-1,x,z,y);
        move(x,z);
        hanoi(n-1,y,x,z);
    }
}

unsigned countTimes(int n)
{
    if(n == 1){
        return 1;
    }
    else{
        return 2 * countTimes(n - 1) + 1;
    }
}