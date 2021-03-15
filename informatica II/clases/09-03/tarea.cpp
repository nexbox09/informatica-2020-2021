#include <iostream>
void numeros(std::string arg) {

    /*
    todo: contar cantidad de comas para
    determinar el tamano
    */
    
    int comas = 0;
    for(int i = 0; i < arg.size(); i++) {

    char actual = arg[i];

    if(actual == ',') {
      comas++;

    }
        
    }
    int nums [comas];
    int numsPos = 0;

    for(int i = arg.size() - 1; i > 0; i--) {

        /*
        Todo: tomar en cuenta el signo.
        */
        int orden = 1;
        int total = 0;
        while(i >= 0 && arg[i] != ',') {

            char digito = arg[i];
            int valor = digito - '0';
            total = total + valor*orden;
            i--;
            orden = orden * 10;
        }

        nums[numsPos] = total;
        numsPos++;
    }

    std::cout << nums << "\n";

}

int main(int argc, char** argv) {

    int nums[4];
    nums[0] = 1;
    nums[1] = 5;
    nums[2] = 7;
    nums[3] = -5;
    std::string vocales = ""; 
    
    numeros(vocales);
}
