#pragma once
#include "Includes.cpp"//so we dont need any more includes

class Delivery
{
public:
	vector<int> deliverySpaces; //the space(s) the player must land on in order to deliver the package
	int reward = 0; //how much money they will make


	//gets and sets
	vector<int> getDeliverySpaces() {
		return deliverySpaces;
	}

	int getReward() {
		return reward;
	}

	void setReward(int i) {
		reward = i;
	}

	void setDeliverySpaces(vector<int> vi) {
		deliverySpaces = vi;
	}
};

