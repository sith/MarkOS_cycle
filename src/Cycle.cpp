//
// Created by Oleksandra Baukh on 1/19/18.
//

#include "Cycle.h"

namespace mark_os {
    namespace cycle {
        unsigned long Cycle::getCycle() const {
            return cycleNumber;
        }

        void Cycle::next() {
            cycleNumber++;
            auto iteratorPointer = listeners->iterator();
            mark_os::commons::Iterator<CycleListener> &iterator = *iteratorPointer.get();
            while (iterator.hasNext()) {
                CycleListener *pListener = iterator.next();
                pListener->onEvent(cycleNumber);
            }
        }

        mark_os::commons::List<CycleListener> *Cycle::getListeners() const {
            return listeners;
        }
    }
}
