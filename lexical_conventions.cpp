
/*---------------------/
/ UNIVERSAL CHARACTERS /
/---------------------*/

/*
    A universal character name consists of a sequence of characters that 
    represent a Unicode code point. These take two forms. Use \UNNNNNNNN 
    to represent a Unicode code point of the form U+NNNNNNNN, where NNNNNNNN 
    is the eight-digit hexadecimal code point number. Use four-digit \uNNNN 
    to represent a Unicode code point of the form U+0000NNNN.
*/

auto \u30AD = 42; // \u30AD is 'キ'

int main() {
    if (キ == 42) return true; // \u30AD and キ are the same to the compiler
}


/*//////////////////////
/ UNIVERSAL CHARACTERS /
//////////////////////*/
