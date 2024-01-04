#include "ctype.h"

bool islower(char chr)
{
    return chr>='a' && chr<='z'; 
}
bool toupper(char chr)
{
    return islower(chr)?(chr-'a'+'A'):chr;
}