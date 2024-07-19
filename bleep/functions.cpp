#include <string>

void asterisk(std::string word, std::string &text, int i) {
  
  for (int x = 0; x < word.size(); ++x) {
    
    text[i+x] = '*';

  }

}

void bleep(std::string word, std::string &text) {
  
  for (int i = 0; i < text.size(); ++i) {

    int match = 0;

    for (int z = 0; z < word.size(); ++z) {
      
      if (text[i+x] == word) {

        ++match;

      }

    }

    if (match == word.size()) {

      asterisk(word, text, i);

    }

  }

}