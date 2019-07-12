#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_4[81];          // Tag.BODY
    entity_7 = 65;              // Tag.BODY
    entity_0 = 69;              // Tag.BODY
    while(entity_7 < entity_0){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_7] = 'C';   // Tag.BUFWRITE_COND_SAFE
    int entity_9;               // Tag.BODY
    entity_9 = 4;               // Tag.BODY
    char entity_3[84];          // Tag.BODY
    entity_3[entity_9] = 'X';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER