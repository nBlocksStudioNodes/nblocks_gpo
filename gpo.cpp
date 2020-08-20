#include "gpo.h"

/// GPO
nBlock_GPO::nBlock_GPO(PinName pinOut): _out(pinOut) {
    return;
}
void nBlock_GPO::triggerInput(nBlocks_Message message) {
    _out = (message.intValue)? 1 : 0;
}

