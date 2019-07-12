#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    entity_4 = 82;              // Tag.BODY
    char entity_0[39];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 69;              // Tag.BODY
    while(entity_8 < entity_4){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_6[13];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_0[entity_8] = 'C';   // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 44;              // Tag.BODY
    entity_6[entity_2] = 'e';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER