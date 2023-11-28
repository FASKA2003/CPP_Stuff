#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T> class Calculator {
private:
public:
  T add(T num1, T num2) { return num1 + num2; }
  T substract(T num1, T num2) { return num1 - num2; }
  T multiply(T num1, T num2) { return num1 * num2; }
  T divide(T num1, T num2) {
    try {
      if (num2 == 0) {
        throw runtime_error("Division by zero");
      } else {
        return num1 / num2;
      }
    } catch (const runtime_error &e) {
      cerr << "exception caught : " << e.what() << endl;
    }
    return num1 / num2;
  }
  T modulas(T num1, T num2) { return num1 % num2; }
};
int main(int argc, char *argv[]) {
  Calculator<int> calculator;
  cout << "The sum is " << calculator.add(10, 20) << endl;
  cout << "The difference is " << calculator.substract(20, 10) << endl;
  cout << "The product is " << calculator.multiply(5, 4) << endl;
  cout << "The modulas is " << calculator.modulas(10, 4) << endl;
  cout << "The division is " << calculator.divide(20, 0) << endl;
  return 0;
}
