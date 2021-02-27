#include <iostream>
#include "CanConnector.h"

int main() {
    auto con = CanConnector();
    con.connect("kir");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
