//
// Created by Oleksandra Baukh on 1/19/18.
//

#ifndef MARK1_CYCLELISTENER_H
#define MARK1_CYCLELISTENER_H

namespace mark_os {
    namespace cycle {
        class CycleListener {
        public:
            virtual void onEvent(unsigned long cycleNumber)=0;
        };
    }
}

#endif //MARK1_CYCLELISTENER_H
