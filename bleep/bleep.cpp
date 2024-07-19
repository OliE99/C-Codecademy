#include <iostream>
#include <string>

#include "functions.hpp"

int main() {

  std::string word = "broccoli";

  std::string sentence = "I really like to eat broccoli. Broccoli is one of my favorite vegetables. Broccoli is green. There are many ways to cook broccoli. You can boil it, fry it and grill it. Broccoli is really good for you as it is full of fibre. It is also very tasty. Everybody loves broccoli! :)";

  bleep(word, sentence);

  for (int i = 0; i < sentence.size(); i++) {

    std::cout << sentence[i];

  }

  std::cout "\n";

}