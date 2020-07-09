//==========================================================================
//Author: James Ortiz
//File: PrimitiveTypes.cpp
//Description: A survey of the bitset STL-library in modern C++
//along with general illustrations of bitwise operations.
//Compile: g++ -std=c++14 PrimitiveTypes.cpp -o PrimitiveTypes
//==========================================================================

//Libraries used in program:

#include <iostream> //For standard I/O:
#include <bitset>   //Used to show arrays of bits
#include <iomanip>  //Used for setw functionality

using namespace std;

//Function CountBits()
//Param(s):
//num - unsigned int value
//Returns: short primitive type value
//Contains the number of set bits (1) the binary number has.
short CountBits(unsigned int num){
    short bits = 0;
    while(num){
        bits += num & 1;
        num >>= 1;
    }
    return bits; //return the number of bits:
}//end function CountBits()

//MAIN Driver Function:

int main() {

    //Unsigned int variable declarations & initializations (used throughout the program):
    unsigned int a, b, c, d;

    a = 32;
    b = 16;
    c = 7;
    d = 557;

    cout << "Binary representation of " << setw(8) << a << " is " << bitset<16>(a) << endl;
    cout << "Binary representation of " << setw(8) << b << " is " << bitset<16>(b) << endl;
    cout << "Binary representation of " << setw(8) << c << " is " << bitset<16>(c) << endl;
    cout << "Binary representation of " << setw(8) << d << " is " << bitset<16>(d) << endl;

    //Finding the number of bits set of each number:

    cout << "The number of bits that are set in " << setw(2) << a << " is " << CountBits(a) << endl;
    cout << "The number of bits that are set in " << setw(2) << b << " is " << CountBits(b) << endl;
    cout << "The number of bits that are set in " << setw(2) << c << " is " << CountBits(c) << endl;
    cout << "The number of bits that are set in " << setw(2) << d << " is " << CountBits(d) << endl;



    //Bit-shifting operations:

    cout << " ----------------------------- Shifting values to the Left: " << endl;

    //Shifting values to the left by 2 (<< 2) :

    // NOTE: ( N << 2 is the same as N * 2^(m) where M is the shifting value):
    unsigned int la = a << 2;
    unsigned int lb = b << 2;
    unsigned int lc = c << 2;
    unsigned int ld = d << 2;

    cout << "Left shifting the value " << setw(3) << a << " by 2 gives us " << la << endl;
    cout << "Left shifting the value " << setw(3) << b << " by 2 gives us " << lb << endl;
    cout << "Left shifting the value " << setw(3) << c << " by 2 gives us " << lc << endl;
    cout << "Left shifting the value " << setw(3) << d << " by 2 gives us " << ld << endl;


    cout << " ----------------------------- Shifting values to the Right: " << endl;

    //Shifting values to the right by 2 ( >> 2) :
    unsigned int ra = a >> 2;
    unsigned int rb = b >> 2;
    unsigned int rc = c >> 2;
    unsigned int rd = d >> 2;

    cout << "Right shifting the value " << setw(3) << a << " by 2 gives us " << ra << endl;
    cout << "Right shifting the value " << setw(3) << b << " by 2 gives us " << rb << endl;
    cout << "Right shifting the value " << setw(3) << c << " by 2 gives us " << rc << endl;
    cout << "Right shifting the value " << setw(3) << d << " by 2 gives us " << rd << endl;

    //Illustrating XOR (^) bitwise operations:


    cout << endl;

    cout << "Illustrating bitwise XOR Operations ( ^ ): " << endl;
    unsigned int xor_ad = a ^ d;
    unsigned int xor_bc = b ^ c;

    cout << "XOR Value of " << a << " with " << d <<
         " is " << xor_ad << endl;

    cout << "In Binary, the operation looks like this: " << endl;
    cout << bitset<32>(a) <<endl;
    cout << "XOR" << endl;
    cout << bitset<32>(d) << endl;
    cout << "-----------------------------------" << endl;
    cout << setw(4) << bitset<32>(xor_ad) << endl;

    cout << endl;

    cout << "XOR Value of " << b << " with " << c <<
        " is " << xor_bc << endl;

    cout << "In Binary, the operation looks like this: " << endl;
    cout << bitset<32>(b) <<endl;
    cout << "XOR" << endl;
    cout << bitset<32>(c) << endl;
    cout << "-----------------------------------" << endl;
    cout << bitset<32>(xor_bc) << endl;

    cout << endl;

    //Illustrating AND Bitwise Operation ( & ) :
    cout << "Illustrating AND bitwise operation ( & ):" << endl;

    unsigned int and_ad, and_bc;
    and_ad = a & d;
    and_bc = b & c;

    cout << "AND Value of " << a << " with " << d <<
         " is " << and_ad << endl;

    cout << "In Binary, the operation looks like this: " << endl;
    cout << bitset<32>(a) <<endl;
    cout << "AND" << endl;
    cout << bitset<32>(d) << endl;
    cout << "-----------------------------------" << endl;
    cout << bitset<32>(and_ad) << endl;

    cout << endl;

    cout << "AND Value of " << b << " with " << c <<
         " is " << and_ad << endl;

    cout << "In Binary, the operation looks like this: " << endl;
    cout << bitset<32>(b) <<endl;
    cout << "AND" << endl;
    cout << bitset<32>(c) << endl;
    cout << "-----------------------------------" << endl;
    cout << bitset<32>(and_bc) << endl;

    cout << endl;



    //Illustrating OR Bitwise Operation:
    cout << "Illustrating OR bitwise operation ( | ):" << endl;

    unsigned int or_ad, or_bc;
    or_ad = a | d;
    or_bc = b | c;

    cout << "OR Value of " << a << " with " << d <<
         " is " << or_ad << endl;

    cout << "In Binary, the operation looks like this: " << endl;
    cout << bitset<32>(a) <<endl;
    cout << "OR" << endl;
    cout << bitset<32>(d) << endl;
    cout << "-----------------------------------" << endl;
    cout << bitset<32>(or_ad) << endl;

    cout << endl;

    cout << "OR Value of " << b << " with " << c <<
         " is " << or_bc << endl;

    cout << "In Binary, the operation looks like this: " << endl;
    cout << bitset<32>(a) <<endl;
    cout << "OR" << endl;
    cout << bitset<32>(d) << endl;
    cout << "-----------------------------------" << endl;
    cout << bitset<32>(or_bc) << endl;

    cout << endl;



    //Illustrating NOT Bitwise Operation:
    cout << "Illustrating NOT bitwise operation ( ~ ):" << endl;

    unsigned int not_a, not_d;
    not_a = ~a;
    not_d = ~d;

    cout << "NOT Value of " << a <<
         " is " << not_a << endl;

    cout << "In Binary, the operation looks like this: " << endl;
    cout << bitset<32>(a) <<endl;
    cout << "NOT" << endl;
    cout << "-----------------------------------" << endl;
    cout << bitset<32>(not_a) << endl;

    cout << endl;

    cout << "NOT Value of " << d <<
         " is " << not_d << endl;

    cout << "In Binary, the operation looks like this: " << endl;
    cout << bitset<32>(d) <<endl;
    cout << "NOT" << endl;
    cout << "-----------------------------------" << endl;
    cout << bitset<32>(not_d) << endl;

    cout << endl;






    return 0;
}
