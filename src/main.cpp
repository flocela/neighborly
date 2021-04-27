#include <iostream>
#include "simulator/Manager.h"

int main() {

    //vector<CityType> citytypes{GridCardFactory, RRTracksCardFactory}
    std::cout << "Hello World!" << "\n";
    Manager m{};
    m.start();
    return 0;
}