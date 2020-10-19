
#include "Includes.cpp"//all includes are there
#include "Delivery.h"

using namespace std;

//use hashmaps to allocate properties to specific players
unordered_map<int, int> playerSpace;
unordered_map<int, int> playerMoney;
unordered_map<int, vector<string>> playerCards;


int main()
{
    Delivery d;
    d.setReward(5);
}
