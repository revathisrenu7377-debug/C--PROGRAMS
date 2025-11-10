#include <stdio.h>

int main() {
    void sayHello(){
    printf("Hello, student! tou just called me back!\n");
    void studentWork(void(*callbackFunc)()){
        printf("student is doing homework....\n");
        callbackFunc();

    }
    int main(){
        studentWork(sayHello);

    }
}

    // Write C code here


    return 0;
}
