# cplxnumbers
Author: Gabriel Ghellere 

A class for operations with complex numbers to help in engineering and physicists calculus
#

How to use:

First #include "Complex.h" in your header and use namespace complexnumbers;

For a complex number in rectangular form declaration uses:
    Complex number(real, imaginary)
    
Operations:
  
  Copy and compare:
  If you want copy a number uses = operator
  Example:
  
        Complex c1(2, 1);
        Complex c2 = c1; 
        
        In this case c2 asume c1 value.
        
  For compare equality uses operators == and !=, the result is a bool 
        
        if (c1 = c2) or if (c1 != c2) this operations returns true or false.
    
  SUm and subtraction
  
  Uses operators '+' and '-'
  Example:
  
      Complex c1(1, 1);
      Complex c2(3, 8); 
      Complex result = c1 + c2; //result assume (4, 9)
  
  And with real numbers
  
      Complex c1(3, 3);
      Complex result = c1 + 10; // result assume (13, 3)
  
  
  Conjugated complex
  
  If you have a complex and want a conjugated uses (*number)
  Example:
  
    Complex c1(1, 1);
    Complex conj = (*c1) // conj assume (1, -1)
      
  Multiplication (be careful with Conjugated)
  
  Uses * operator with two complex numbers or complex and real
  Example:
  
      Complex c1(2, 5);
      Complex c2(1, -2); 
      Complex result = c1 * c2; //result assume (12, 1)
   
   Or:

      Complex result = 3*c1; // result assume (6, 15)
      
      
  Modulus and phase
  
  For get Modulus and phase use the methods getModulus and getPhase, Example:
  
         Complex c1(2, 5);
         float modulus = c1.getModulus();
         float phase = c1.getPhase; 
   
  
    
  
