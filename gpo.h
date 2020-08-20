#ifndef __NB_GPO
#define __NB_GPO

#include "mbed.h"
#include "nworkbench.h"



class nBlock_GPO: public nBlockNode {
public:
    nBlock_GPO(PinName pinOut);
    void triggerInput(nBlocks_Message message);
private:
    DigitalOut _out;
};




#endif
