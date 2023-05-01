// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include "textgen.h"

TEST(prefix_count, first) {
    std::string t = "first second third fourth";
    t += " fifth sixth seventh eighth ninth tenth";
    int nPref = 2;
    int maxGen = 10;
    Gen m = Gen(t, nPref, maxGen);
    auto table = m.statetab;
    for (const auto& element : table) {
        EXPECT_EQ(element.first.size(), nPref);
    }
}
