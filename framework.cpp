#include "framework.h"
#include<iostream>
#include<stdexcept>
#include <cppunit/extensions/HelperMacros.h>

using std::cout;
using std::endl;


Framework::Framework()
{}

FrameworkPlanning::FrameworkPlanning()
{}

FrameworkTracking::FrameworkTracking()
{}

Complex::Complex()
{}

ComplexNumberTest::ComplexNumberTest()
{}

void FrameworkTracking::StartTimer(){
throw std::runtime_error("startTimer - Function call");
}

void FrameworkTracking::Interrupt(){
throw std::runtime_error("Interrupt-Function call");
}

void FrameworkPlanning::EnterListItem(){
throw std::runtime_error("EnterListItem-Function call");
}

void FrameworkPlanning::SetNumberOfPomodori(){
throw std::runtime_error("SetNumberOfPomodori-Function call");
}

/**BOOST_AUTO_TEST_CASE( my_test )
{
    FrameworkPlanning test_object( "qwerty" );

    BOOST_CHECK( test_object.is_valid() );
}*/


