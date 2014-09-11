#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE myTestModule


#include <boost/test/unit_test.hpp>
#include <iostream>
#include <string>
#include <sqlite3.h>
#include "database.h"

using namespace std;

Database db;

BOOST_AUTO_TEST_CASE(myCaseName)
{
    cout << "   Test to create/open the pomodoro sqlite3 database" << endl;
    BOOST_CHECK(db.openDatabase() == true);

    cout << "   Test to create the table" << endl;
    BOOST_CHECK(db.createTable() == true);

    cout << "   Test insertActivityItem()" << endl;
    std::string activity = "Hallo Activity";
    BOOST_CHECK(db.insertActivityItem(activity) == true);

    cout << "   Test to close the pomodoro database" << endl;
    BOOST_CHECK(db.closeDatabase() == true);

    cout << "   The destructor will also close the database in our first version, but its closed" << endl;
}

