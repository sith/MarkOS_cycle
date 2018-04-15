//
// Created by Oleksandra Baukh on 1/19/18.
//

#ifndef MARK1_CYCLE_H
#define MARK1_CYCLE_H


#include <collections/LinkedList.h>
#include "CycleListener.h"

namespace mark_os {
    namespace cycle {
        class Cycle {
            unsigned long cycleNumber = 0;
            mark_os::commons::List<CycleListener> *listeners = new mark_os::commons::LinkedList<CycleListener>();
        public:
            unsigned long getCycle() const;

            void next();

            mark_os::commons::List<CycleListener> *getListeners() const;

        };
    }
}

#endif //MARK1_CYCLE_H
