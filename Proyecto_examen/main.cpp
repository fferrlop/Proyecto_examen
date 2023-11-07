#include <iostream>
#include <cmath>

int a[] = {3, 6, 5, 8};
int b[] = {4, 8, 12, 15};
int c;


int main() {

    for (int i = 0; i <= 3; i++) {
        std::cout << "Valores lado a: ";
        std::cout << a[i] << std::endl;
    }

          for (int j = 0; j <= 3; j++ ){
              std::cout << "Valores lado b: ";
              std::cout  << b[j] << std::endl;
              {

                  c = sqrt(a[j] * a[j] + b[j] * b[j]);
                  std::cout << "Valor lado c: "<< c << std::endl;
              }
          }



    return 0;
    }



