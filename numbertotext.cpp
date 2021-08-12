#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class NumberToText {
   private:
   int number = 0;
   public:
   int input;
   string teksayilar[10] = {"bir","iki","uc","dort","bes","alti","yedi","sekiz","dokuz","on"};
   void getInput() {
      cin >> input;
   }
   void setNumber(int numberinput) {
      
      if (numberinput > 0) {
         number = numberinput;
      }
   }
   void numberToText() {
      if ((number > 0) && (number <= 10)) {
         cout << teksayilar[number-1] << endl;
       }
       else {
          cout << "Sorry, this program only converts numbers between 1 and 10 for now." << endl;
       }
      }
   };

int main() {
   NumberToText n;
   n.getInput();
   n.setNumber(n.input);
   n.numberToText();
}