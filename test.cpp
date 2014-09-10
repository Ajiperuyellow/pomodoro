#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE myTestModule


#include <boost/test/unit_test.hpp>
#include "framework.h"


int add(int i, int j){return i+j;}
FrameworkTracking aObject;

BOOST_AUTO_TEST_CASE(myCaseName)
{

    BOOST_CHECK(add(4,4)==9);
    BOOST_CHECK(aObject.StartTimer()==6);
}
