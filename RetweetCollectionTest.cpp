#include <gmock/gmock.h>
#include "RetweetCollection.h"
using namespace testing;
class ARetweetCollection:public testing::Test
{
public:
    RetweetCollection collection;
};

TEST_F(ARetweetCollection, IsEmptyWhenCreated)
{
    ASSERT_TRUE(collection.isEmpty());
}

TEST_F(ARetweetCollection, HasSizeZeroWhenCreated)
{
    ASSERT_THAT(collection.size(), Eq(0u));
}

TEST_F(ARetweetCollection, IsNoLongerEmptyAfterTweetAdd)
{
    collection.add(Tweet());
    ASSERT_FALSE(collection.isEmpty());
}

TEST_F(ARetweetCollection, IsEmptyWehnItsSizeIsZero)
{
    ASSERT_THAT(collection.size(), Eq(0u));

    ASSERT_TRUE(collection.isEmpty());
}

TEST_F(ARetweetCollection, IsNotEmptyWhenItsSizeIsNonZero)
{
    collection.add(Tweet());
    ASSERT_THAT(collection.size(), Gt(0u));

    ASSERT_FALSE(collection.isEmpty());
}

class ARetweetCollectionWithOneTweet : public Test
{
public:
    RetweetCollection collection;
    void SetUp() override
    {
        collection.add(Tweet());
    };
};

TEST_F(ARetweetCollectionWithOneTweet, IsNoLongerempty)
{
    ASSERT_FALSE(collection.isEmpty());
}

TEST_F(ARetweetCollectionWithOneTweet, HasSizeOfOne)
{
    ASSERT_THAT(collection.size(), Eq(1u));
}