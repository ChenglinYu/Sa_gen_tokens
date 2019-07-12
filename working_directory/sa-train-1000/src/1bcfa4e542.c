#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_1[36];          // Tag.BODY
    entity_3 = 26;              // Tag.BODY
    char entity_4[40];          // Tag.BODY
    entity_5 = 18;              // Tag.BODY
    entity_8 = 14;              // Tag.BODY
    while(entity_5 < entity_8){ // Tag.BODY
    entity_4[entity_3] = 'V';   // Tag.BUFWRITE_TAUT_SAFE
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_5] = 'a';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER