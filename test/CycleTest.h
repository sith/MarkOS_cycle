//
// Created by Oleksandra Baukh on 1/21/18.
//

#ifndef MARKOS_CYCLETEST_H
#define MARKOS_CYCLETEST_H


#include <gtest/gtest.h>
#include <Cycle.h>

#include "MockCycleListener.h"

using mark_os::cycle::Cycle;

class CycleTest : public ::testing::Test {
protected:
    Cycle cycle;

    void SetUp() {
        cycle = *new Cycle;
    };
};


#endif //MARKOS_CYCLETEST_H
