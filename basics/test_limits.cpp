#include <iostream>
#include <limits>
int main(int, char **) {
  std::cout
    << "char:"<< static_cast< int >(std::numeric_limits< char >::max()) << "\n"
    << "unsigned char:"<< static_cast< int >(std::numeric_limits< unsigned char >::max()) << "\n"
    << "short:"<< std::numeric_limits< short >::max() << "\n"
    << "unsigned short:"<<std::numeric_limits< unsigned short >::max() << "\n"
    << "int:"<<std::numeric_limits< int >::max() << "\n"
    << "unsigned int:"<<std::numeric_limits< unsigned int >::max() << "\n"
    << "long:"<<std::numeric_limits< long >::max() << "\n"
    << "unsigned long:"<<std::numeric_limits< unsigned long >::max() << "\n"
    << "long long:"<<std::numeric_limits< long long >::max() << "\n"
    << "unsigned long long:"<<std::numeric_limits< unsigned long long >::max() << "\n"
    << "double" << std::numeric_limits< double >:: max() <<"\n";
}