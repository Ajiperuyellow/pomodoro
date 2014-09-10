#include <iostream>
#include <chrono>
#include <thread>
#include "Timer.h"

using namespace std;

Timer::Timer()
{}


int Timer::ElapsedTime(){
  
    std::chrono::time_point<std::chrono::system_clock> start, now;
    start = std::chrono::system_clock::now();
    std::time_t start_time = std::chrono::system_clock::to_time_t(start);
    
    int elapsed_minutes=0;
    int elapsed_seconds=0;
    int milliseconds=1000;
    
    while (elapsed_minutes<2/*25*/ /*&& elapsed_seconds<0*//*59*/)
    {
	cout << elapsed_minutes << endl;
	
	std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));		     
	
	now = std::chrono::system_clock::now();
	
	elapsed_minutes = std::chrono::duration_cast<std::chrono::minutes>
                             (now-start).count();
	elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>
                             (now-start).count();
	
	//cout << "noch nicht! ";
    }
    
    return elapsed_minutes;
    //cout << elapsed_minutes << endl;
    //cout << elapsed_seconds << endl;
}
  
int main()
{
    
  Timer TimerInstance;
  TimerInstance.ElapsedTime();
  //cout << ;
}