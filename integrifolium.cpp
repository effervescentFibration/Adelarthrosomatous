/*
 *  integrifolium.cpp
 * 
 *    Try running it here: https://gcc.godbolt.org/
 *    Note: must be compiled with `-std=c++11`
 *    Rhys Braginton Pettee Olsen
 *    <rhol9958@colorado.edu>
 */

template <typename T>
class Integrifolium {
  private:
    T *i;
  public:
    // parameterized constructor
    Integrifolium(T _i_ = 0) {
      i = new T(_i_);
    }
    // copy constructor
  	Integrifolium(const Integrifolium& other) {
      i = new T(*other.i);
    }
    // move constructor
  	Integrifolium(const Integrifolium&& other) {
      i = other.i;
    }
};

Integrifolium<int> a = Integrifolium<int>();
