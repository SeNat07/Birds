#ifndef BIRD_H 
#define BIRD_H
#include <iostream>
#include <iomanip>

using namespace std;

class Bird {
	public:
		Bird();

		string getSpecies() { return species; }
		void setSpecies(string speciesValue) { species = speciesValue; }

	private:
		string species;
};
#endif