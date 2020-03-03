#include <iostream>
#include <string>

int main()
{
    std::string alpha_num = "12345";
    int num;
    num = std::stoi(alpha_num);
    num++;
    std::cout << num << std::endl;
}