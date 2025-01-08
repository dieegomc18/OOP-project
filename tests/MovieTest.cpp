#include <boost/test/unit_test.hpp>
#include "Movie.h"

BOOST_AUTO_TEST_SUITE(MovieSuite)

BOOST_AUTO_TEST_CASE(MovieTitle) {
    Movie movie("Inception", "Christopher Nolan", 12.99);
    BOOST_REQUIRE_EQUAL(movie.getTitle(), "Inception");
}

BOOST_AUTO_TEST_SUITE_END()