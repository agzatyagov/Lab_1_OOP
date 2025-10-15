#include <gtest/gtest.h>
#include "replacinfunc.h"

TEST(ReplacinTest, Example1) {
    EXPECT_EQ(replacinfunc("abcabc", 2, 'a', 'X'), "abcXbc");
}

TEST(ReplacinTest, NoReplacement) {
    EXPECT_EQ(replacinfunc("qwerty", 3, 'z', 'Z'), "qwerty");
    EXPECT_EQ(replacinfunc("test", 0, 't', 'T'), "test");
}

TEST(ReplacinTest, Numbers) {
    EXPECT_EQ(replacinfunc("112233", 2, '2', '5'), "115233");
}

TEST(ReplacinTest, Special) {
    EXPECT_EQ(replacinfunc("a-a-a-a", 1, '-', '_'), "a_a_a_a");
}

TEST(ReplacinTest, Edges) {
    EXPECT_EQ(replacinfunc("", 5, 'x', 'y'), "");
    EXPECT_EQ(replacinfunc("aaaa", 5, 'a', 'b'), "aaaa");
}

#ifdef RUN_TESTS
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#endif