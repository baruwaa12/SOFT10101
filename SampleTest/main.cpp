
#include <iostream>
#include <iomanip>

using namespace std;
const int NUMBULBS = 7;


struct BWI {

double BulbPrice;

int Weight;
};

  int main() {

  double PostagePrice {0} ;

  int Weight[NUMBULBS] = {40, 50, 200, 120, 500, 100, 200};

  cout << "Bulb Price" << " " << "Weight"<< " " << "IncPostage" << "\n";
  

   for (int x = 0; x < 7; x++) {

    if (Weight[x] >= 500) {
        PostagePrice = 2.50;
      } else if (Weight[x] < 50) {
        PostagePrice = 0.50;
      } else {
        PostagePrice = 1.00;
      }

     }
  
  struct {
    double Price;
    int weight;
  } Bulb1, Bulb2, Bulb3, Bulb4, Bulb5, Bulb6, Bulb7; // We can add variables by separating them with a comma here

  // Put data into the first structure
  Bulb1.Price = 7.99;
  Bulb1.weight = 40;

  Bulb2.Price = 0.5;
  Bulb2.weight = 50;

  Bulb3.Price = 4.5;
  Bulb3.weight = 200;

  Bulb4.Price = 3.25;
  Bulb4.weight = 120;

  Bulb5.Price = 6.75;
  Bulb5.weight = 500;

  Bulb6.Price = 1.85;
  Bulb6.weight = 100;

  Bulb7.Price = 5.00;
  Bulb7.weight = 200;

  cout << Bulb1.Price << " " << Bulb1.weight << " " << PostagePrice+Bulb1.Price << "\n";
  cout << Bulb2.Price << " " << Bulb2.weight << " " << PostagePrice+Bulb2.Price << "\n";
  cout << Bulb3.Price << " " << Bulb3.weight << " " << PostagePrice+Bulb3.Price << "\n";
  cout << Bulb4.Price << " " << Bulb4.weight << " " << PostagePrice+Bulb4.Price << "\n";
  cout << Bulb5.Price << " " << Bulb5.weight << " " << PostagePrice+Bulb5.Price << "\n";
  cout << Bulb6.Price << " " << Bulb6.weight << " " << PostagePrice+Bulb6.Price << "\n";
  cout << Bulb7.Price << " " << Bulb7.weight << " " << PostagePrice+Bulb7.Price << "\n";


 return 0;  
}
