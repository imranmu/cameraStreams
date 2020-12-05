#ifndef TST_VIDEOSRCFLAGS_H
#define TST_VIDEOSRCFLAGS_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../displayctrlfunctions.h"

using namespace testing;
DisplayCtrlFunctions displayCtrlInst;

TEST(videoSrc, videoSrcFlags)
{
    EXPECT_EQ(0,displayCtrlInst.m_reverCAMFlag); //!< check if default is 0
    EXPECT_EQ(1, 1); //!< sample
    ASSERT_THAT(0, Eq(0));//!< sample
}

#endif // TST_VIDEOSRCFLAGS_H
