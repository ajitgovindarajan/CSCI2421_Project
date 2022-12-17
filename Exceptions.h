/*************************************************
 * Version: 12/16/2022
 * The exceptions to the code are stored here
 * **************************************************/

#ifndef HW3_EXCEPTIONS_H
#define HW3_EXCEPTIONS_H

#include <exception>

class UnderflowException:std::exception { };
class IllegalArgumentException:std::exception { };
class ArrayIndexOutOfBoundsException:std::exception { };
class IteratorOutOfBoundsException:std::exception { };
class IteratorMismatchException:std::exception { };
class IteratorUninitializedException:std::exception { };

#endif //HW3_EXCEPTIONS_H
