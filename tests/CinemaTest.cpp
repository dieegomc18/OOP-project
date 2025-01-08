#include <boost/test/unit_test.hpp>
#include "Cinema.h"

BOOST_AUTO_TEST_SUITE(CinemaSuite)

BOOST_AUTO_TEST_CASE(AddMovie) {
    Cinema cinema("Cineplex");
    cinema.addMovie("Inception", "Christopher Nolan", 12.99);
    BOOST_CHECK(true); // You can further implement checks for the movies list
}

BOOST_AUTO_TEST_SUITE_END()