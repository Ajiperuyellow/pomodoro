#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE myTestModule


#include <boost/test/unit_test.hpp>
#include "framework.h"


int add(int i, int j){return i+j;}
FrameworkTracking aFrameworkTrackingObject;
FrameworkPlanning aFrameworkPlanningObject;

BOOST_AUTO_TEST_CASE(myCaseName)
{
    //check the testcase
    BOOST_CHECK(add(4,4)==9);
    //check the timer
    BOOST_CHECK(aFrameworkTrackingObject.StartTimer()==6);
    //check the timer
    BOOST_CHECK(aFrameworkTrackingObject.TimerHasRunOut()==6);
    //check the interrupt
    BOOST_CHECK(aFrameworkTrackingObject.Interrupt()==6);
    //check the EnterListItem
    BOOST_CHECK(aFrameworkPlanningObject.EnterListItem()==6);
    //check the NewName
    BOOST_CHECK(aFrameworkPlanningObject.NewNameOfProject()==6);
    //check the SetNumber
    BOOST_CHECK(aFrameworkPlanningObject.SetNumberOfPomodori()==6);
    //check the OpenExisting
    BOOST_CHECK(aFrameworkPlanningObject.OpenExistingProject()==6);
    //check the SetTodaysObject
    BOOST_CHECK(aFrameworkPlanningObject.SetTodaysObjects()==6);
}

