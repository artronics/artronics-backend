#ifndef ARTRONICS_CANCONNECTOR_H
#define ARTRONICS_CANCONNECTOR_H

#include "Connector.h"

class CanConnector : public Connector {
public:
    void connect(std::string devName) override;
};


#endif //ARTRONICS_CANCONNECTOR_H
