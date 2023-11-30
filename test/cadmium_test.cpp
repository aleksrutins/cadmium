#include <cadmium/cadmium.hpp>
#include <iostream>
#include <gtest/gtest.h>

class CadmiumTest : public testing::Test { };

TEST_F(CadmiumTest, HasANumber) {
    cadmium::Cadmium c;
    EXPECT_EQ(c.get_number(), 6);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
