/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "DateTests.hpp"
#include <Ishiko/Tests/Core.hpp>
#include <Ishiko/Time/linkoptions.hpp>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoTime");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<DateTests>();

    return theTestHarness.run();
}
