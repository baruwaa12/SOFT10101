
#include <iostream>
using namespace std;
const int MAXACCOUNTS =8;
int main()
{
   int AccountNumber[MAXACCOUNTS] = {1001, 7940, 4382, 2651, 3020, 7168, 6245, 9342};
   double Balance[MAXACCOUNTS] = {4254.40, 27006.25, 123.50, 85326.92, 657.0, 7423.34, 4.99, 107864.44};
	int DaysSinceDebited[MAXACCOUNTS] = {20, 35, 2, 14, 5, 360, 1, 45};

  
  double intRate {0} ;
  
  for (int x = 0; x < 8; x++) {

    if (Balance[x] > 10000 || DaysSinceDebited[x] > 30)
    {
        intRate = 0.06;
      }else{
        intRate = 0.03;
    }

    cout << AccountNumber[x] << "   " << 
    Balance[x] << "  "
    << intRate*Balance[x] << "   " << endl;
    
  }

  
  
  
	return 0;
}
