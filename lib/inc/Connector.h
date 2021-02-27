#ifndef ARTRONICS_CONNECTOR_H
#define ARTRONICS_CONNECTOR_H

#include <string>

class Connector {
public:
    virtual void connect(std::string devName) = 0;
};


#endif //ARTRONICS_CONNECTOR_H
