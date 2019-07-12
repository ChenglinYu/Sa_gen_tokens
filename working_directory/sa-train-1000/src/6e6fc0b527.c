#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_3[46];          // Tag.BODY
    char entity_6[0];           // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 48;              // Tag.BODY
    entity_1 = 91;              // Tag.BODY
    entity_4 = 91;              // Tag.BODY
    while(entity_1 < entity_4){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_7] = 'R';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_1] = 'M';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER