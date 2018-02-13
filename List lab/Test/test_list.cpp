#include "gtest.h"
#include "../List lab/TList.h"

TEST(TList, can_create_a_list) {
	ASSERT_NO_THROW(TList<int> l);
}






TEST(THeadList, can_create_a_head_list) {
	ASSERT_NO_THROW(THeadList<int> l);
}