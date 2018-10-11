
#ifndef MultiplicadorDivisor_hpp
#define MultiplicadorDivisor_hpp

class MultiplicadorDivisor{
    int mode;
public:
    MultiplicadorDivisor(int); //constructor
    int get_mode(){return mode;} //in-line method
    int operation(int a, int b); //out-of-line method
};

#endif /* MultiplicadorDivisor_hpp */
