#include <iostream>
#include "gtest/gtest.h"
#include "Judge.cpp"

TEST(CheckJudgeEven, OneIsBack){
    EXPECT_EQ(1, judgeEven(10));
}

TEST(CheckJudgeEven, zeroIsBack){
    EXPECT_EQ(0, judgeEven(9));
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}