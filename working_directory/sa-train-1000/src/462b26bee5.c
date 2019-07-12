#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_1 = 30;              // Tag.BODY
    char entity_8[21];          // Tag.BODY
    entity_7 = 96;              // Tag.BODY
    entity_0 = 25;              // Tag.BODY
    char entity_3[81];          // Tag.BODY
    while(entity_1 < entity_0){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    entity_8[entity_7] = 'y';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_3[entity_1] = 'p';   // Tag.BUFWRITE_COND_SAFE
    entity_9 = 27;              // Tag.BODY
    char entity_2[47];          // Tag.BODY
    entity_2[entity_9] = 'W';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER