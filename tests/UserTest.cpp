#include <boost/test/unit_test.hpp>
#include "User.h"

BOOST_AUTO_TEST_SUITE(UserSuite)

BOOST_AUTO_TEST_CASE(UserName) {
    User user("John Doe");
    BOOST_REQUIRE_EQUAL(user.getName(), "John Doe");
}

BOOST_AUTO_TEST_SUITE_END()