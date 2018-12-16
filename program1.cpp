#include <iostream>

using namespace std;

void checkadjacent(string message, bool &exists);
int main(){
  string message;
  bool exists = false;

  cout << "Please enter a message: ";
  getline(cin, message);

  checkadjacent(message, exists);
  if (!exists){
    cout << "There are no adjacent characters that are the same.\n";
  }
  return 0;
}

void checkadjacent(string message, bool &exists){
  for (int i = 0 ; i < message.length() - 1; i++ ){
    if (message.at(i) != ' ' && message.at(i) == message.at(i + 1)){
      cout << "Characters " << i + 1 << " and " << i + 2 << " are the same: " << message.at(i) << endl;
      exists = true;
    }
  }
}
