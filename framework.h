#ifndef FRAMEWORK_H
#define FRAMEWORK_H

class Framework
{
public:
    Framework();

};

class FrameworkTracking
{
public:
    FrameworkTracking();

    void StartTimer();
    void Interrupt();
};

class FrameworkPlanning
{
public:
    FrameworkPlanning();

    void EnterListItem();
    void SetNumberOfPomodori();
};

//************ TEST THE TESTS ***********
class Complex {
  friend bool operator ==(const Complex& a, const Complex& b);
  double real, imaginary;
public:
  Complex( double r, double i = 0 )
    : real(r)
        , imaginary(i)
  {
  }
};

bool operator ==( const Complex &a, const Complex &b )
{
  return a.real == b.real  &&  a.imaginary == b.imaginary;
}

class ComplexNumberTest : public CppUnit::TestCase {
public:
  ComplexNumberTest( std::string name ) : CppUnit::TestCase( name ) {}

  void runTest() {
    CPPUNIT_ASSERT( Complex (10, 1) == Complex (10, 1) );
    CPPUNIT_ASSERT( !(Complex (1, 1) == Complex (2, 2)) );
  }
};



#endif // FRAMEWORK_H
