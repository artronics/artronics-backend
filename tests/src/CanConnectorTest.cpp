#include "gtest/gtest.h"

class CanConnectorTest : public ::testing::Test {
protected:
    void SetUp() override {

    }

};

TEST_F(CanConnectorTest, Test_foo) {
    ASSERT_EQ(1, 1);
}