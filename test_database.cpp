#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE myTestModule


#include <boost/test/unit_test.hpp>
#include <sqlite3.h>
#include "database.h"

Database db;

BOOST_AUTO_TEST_CASE(myCaseName)
{
    BOOST_CHECK(db.openDatabase() == true);
    BOOST_CHECK(db.closeDatabase() == true);
}

