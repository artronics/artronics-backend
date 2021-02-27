#include "gtest/gtest.h"

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

TEST (SquareRootTest, PositiveNos) {
    EXPECT_EQ (18.0, 18);
}