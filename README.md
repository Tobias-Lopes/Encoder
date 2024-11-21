# Encoder
Game Encoder

The Republic fell. The evil Galactic Empire, which took its place, controls everything and everyone with an iron fist. The few Jedis who survived Order 66 are dispersed across the universe and the galaxy's only hope is the resistance formed by the Rebel Alliance.

Since the Empire monitors all transmissions, the Resistance's only chance is to encrypt the data before sending. It is up to you, as the last survivor of a noble order of developers, to implement the encryption algorithm that will be used in the Rebel Alliance's data transmissions. May the Force be with you!

****

Implement the Rebel Alliance's cryptographic algorithm. The program must receive as input a key K of 4 decimal digits (0000 to 9999) and a message P of up to 200 characters. You must create a function that will receive P and K, transforming P into the encrypted message C by applying the key K. As output, the program must print the encrypted message C.

If a non-standard key is entered, a "Key invalid!" message will be displayed. should be displayed.​

The characters allowed for messages, both encrypted and original, are defined in the following vector, which must be incorporated into your code:

const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' '};
If any character other than those presented is entered, the program should display the message: "Invalid character in input!".

The operation of the algorithm is based on the displacement of each input character by the number of times specified by the key in that position.

Examples:

Key(K): 0123
Message(P): AAAABBBBCC

Encryption:
   AAAABBBBCC
 +0123012301
   ----------
   ABCDBCDECD   
Key(K) : 6666
Message(P): WXYZ1234

Encryption:
   WXYZ1234
 +66666666
   --------
   ? 01789A

Note that vector S is being used for the substitution calculation. 
Note: This algorithm is known as the Vigenère Cipher. For more than 300 years it was called "le chiffre indéchiffrable" (the indecipherable cipher).
