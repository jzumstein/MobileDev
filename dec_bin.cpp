#include <iostream>
#include <string>

std::string ret_bin(int num1)
{
 std::string binary_s  = "";
 if ((num1 % 128) > 0){
 binary_s += "1";
 }
 else{
 binary_s += "0";
 }
 
if ((num1 % 64) > 0)
{
    binary_s += "1";

}

else
{
    binary_s += "0";
}


if ((num1 % 32) > 0)
{
    binary_s += "1";
}

else
{
    binary_s += "0";
}

if ((num1 % 16) > 0)
{
    binary_s += "1";
}
else
{
    binary_s += "0":
}

if ((num1 % 8) > 0)
{
    binary_s += "1";
}
else
{
    binary_s += "0";
}
if ((num1 % 4) > 0)
{
    binary_s += "1";
}
else
{
    binary_s += "0";
}
if ((num1 % 2) > 0)
{
    binary_s += "1";
}
else
{
    binary_s += "0";
}

return binary_s;
}
int main () {
std::cout << "Enter a number between 0-255: ";
int dec {};
std::cin >> dec;

std::cout << ret_bin(dec);

return 0;
}
