#include <boost/test/unit_test.hpp>
#include "Ticket.h"

BOOST_AUTO_TEST_SUITE(TicketSuite)

BOOST_AUTO_TEST_CASE(TicketDetails) {
    Ticket ticket("Inception", "John Doe", 12.99);
    BOOST_REQUIRE_EQUAL(ticket.getDetails(), "Ticket for Inception booked by John Doe at price 12.990000");
}

BOOST_AUTO_TEST_SUITE_END()