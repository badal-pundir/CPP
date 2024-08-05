#include<iostream>

class xyx{
    protected:
    static int a;

    public:
    void function() {
        std::cout<<a;
    }
};

class zyz:xyx{
    public:
    void function2(){
        a = 10;
        std::cout<<a;
        // a++;
        // std::cout<<a;
    }
};

int main(){
    zyz obj = zyz();
    obj.function2();
    return 0;
}