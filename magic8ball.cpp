#include <iostream>
#include <cstdlib>

int main() {

  std::cout << "MAGIC 8 BALL SAYS: \n\n";

  srand(time(NULL));

  int choice = std::rand() % 10;

  switch(choice) {
    case 0:
      std::cout << "It is certain.\n";
      break;
    case 1:
      std::cout << "It is decidedly so.\n";
      break;
    case 2:
      std::cout << "Without a doubt.\n";
      break;
    case 3:
      std::cout << "Yes definitely.\n";
      break;
    case 4:
      std::cout << "Reply hazy, try again.\n";
      break;
    case 5:
      std::cout << "Ask again later.\n";
      break;
    case 6:
      std::cout << "Cannot predict now.\n";
      break;
    case 7:
      std::cout << "Don’t count on it.\n";
      break;
    case 8:
      std::cout << "Outlook not so good.\n";
      break;
    case 9:
      std::cout << "Very doubtful.\n";
      break;
    default:
      std::cout << "My sources say no.\n";
      break;

  }

  return 0;

}