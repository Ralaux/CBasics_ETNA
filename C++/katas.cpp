#include <string>
#include <iostream>
using std::cout;

// Transform a string with letters and '-' or '_' in CamelCase
std::string to_camel_case(std::string text) {
  for (int i = 0 ; i < text.size() ; i += 1) {
    if (i == 0) {
      text[i] = tolower(text[i]);
    }
    else if (text[i] == '-' || text[i] == '_') {
      text[i+1] = toupper(text[i+1]);
      text = text.erase(i, 1);
    }
  }
  return text;
}

// Gives the digital root of a number = sum of its numbers.
// If sum has more than 1 number, keeps going on it.
// Ex : 942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
int digital_root(int n)
{
    int work = n;
    int sum = 0;

    while (work != 0) {
      work = work / 10;
      sum = sum + ( n - (work * 10));
      n = n / 10;
    }

    while (sum/10 != 0) {
      sum = digital_root(sum);
    }
    
    return sum;
}

int main () {
    return 0;
}

// For a given rgb color (ex : '255,144,235'), returns the Hex color code associated
// which is the 3 numbers in hexadecimal base concatenated (FF9019 for the example above)  
class RGBToHex
{
  public:
  static std::string convert10ToHex(int number10) {
    if (number10 <= 0) {
      return "00";
    }
    else if (number10 >= 255)
    {
      return "FF";
    }
    std::string digits = "0123456789ABCDEF";
    std::string rtnValue = "00";
    rtnValue[0] = digits[number10/16];
    rtnValue[1] = digits[number10%16];
    return rtnValue;
  }

  static std::string rgb(int r, int g, int b) {
    std::string rtnValue = "";
    rtnValue = convert10ToHex(r) + convert10ToHex(g) + convert10ToHex(b);
    return rtnValue;
  }
};