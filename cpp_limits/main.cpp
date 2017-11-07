/* Print out the limits of c++ types on this system
 *
 * Limits of c integer types are not very well specified
 * The standard only sepcifies ranges instead of exact numbers
 * which leaves the actual max and min values up to the specific system
 */
#include <limits.h>
#include <iostream>

int main() {
    std::cout << "char bits: " << CHAR_BIT << std::endl;
    std::cout << "signed char min: " << SCHAR_MIN << std::endl;
    std::cout << "signed char max: " << SCHAR_MAX << std::endl;
    std::cout << "unsigned char max: " << UCHAR_MAX << std::endl;
    std::cout << "char min: " << CHAR_MIN << std::endl;
    std::cout << "char max: " << CHAR_MAX << std::endl;
    std::cout << "short int min: " << SHRT_MIN << std::endl;
    std::cout << "short int max: " << SHRT_MAX << std::endl;
    std::cout << "unsigned short int max: " << USHRT_MAX << std::endl;
    std::cout << "int min: " << INT_MIN << std::endl;
    std::cout << "int max: " << INT_MAX << std::endl;
    std::cout << "unsigned int max: " << UINT_MAX << std::endl;
    std::cout << "long min: " << LONG_MIN << std::endl;
    std::cout << "long max: " << LONG_MAX << std::endl;
    std::cout << "unsigned long int max: " << ULONG_MAX << std::endl;
    std::cout << "long long min: " << LLONG_MIN << std::endl;
    std::cout << "long long max: " << LLONG_MAX << std::endl;
    std::cout << "unsigned long long int max: " << ULLONG_MAX << std::endl;
    return 0;
}
