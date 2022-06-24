#include <string>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
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

//Retrun the trailing zeros of the factorial of the number given in input
long zeros(long n) {
  int zeros = 0;
  n = n/5;
  zeros = n;
  while (n >= 5) {
    n = n/5;
    zeros += n;
  }
  return zeros;
}

// Requires a string in input. Retiurns a string of the same size.
// For a given index, if the char has dupplicates in the string, replaces it by ')'
// Else, replaces it by '('
// For letters, not case-sensitive
std::string duplicate_encoder(const std::string& word){
  char c;
  bool dup = false;
  std::string rtnStr;
  for (unsigned long i = 0; i < word.length(); i++) {
    
    for (unsigned long j = 0; j < word.length(); j++) {
      if (i != j && tolower(word[i]) == tolower(word[j])){
        dup = true;
      }
    }
    if (dup == false) {
      rtnStr.append("(");
    }
    else if (dup == true) {
      rtnStr.append(")");
    }
    dup = false;
  }
  return rtnStr;
}

// Take as input a vector of int and an int. Each element of the vector represents a client in a supermarket, its value
// is its time at the till. The int is the number of till.
// The program returns the time needed for all clients to be gone.
// Whenever a till is empty, the first client of the list takes it.
long queueTime(std::vector<int> customers,int n){
  long time;
  int free_till = n;
  std::vector<int> tills = {};
  int min;
  int index_min;
  int cpt2;
  for (int cpt = 0; cpt < n; cpt++) {
    tills.push_back(0);
  }
  for(int i : customers) {
    min = *std::min_element(tills.begin(), tills.end());
    for (cpt2 = 0; cpt2 < tills.size(); cpt2++) {
      if (tills[cpt2] == min) {
        index_min = cpt2;
      }
    }
    tills[index_min] += i;
  }
  time = *std::max_element(tills.begin(), tills.end());
  return time;
}

//Takes a string as input, containing only letters or spaces.
// Has no impact of words of 4 letters or less, but reverses words of 5 letters or more.
// Returns a string.
std::string spinWords(const std::string &str)
{
  int cpt5 = 0;
  int rev = 0;
  std::string reversed; 

  for (int i = 0; i < str.size(); i++) {
    reversed.push_back(str[i]);
    if (iswalnum(str[i+1]) == 0 && cpt5 >= 4) {
      for (rev = 0; rev <= cpt5; rev++) {
        reversed[i-rev] = str[rev+i-cpt5];
      }
      cpt5 = 0;
    }
    else if (str[i] == ' ') {
      cpt5 = 0;
    }
    else {
      cpt5++;
    }
  }
  return reversed;
}