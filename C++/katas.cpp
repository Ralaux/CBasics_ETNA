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

int main () {
    return 0;
}