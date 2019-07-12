#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    entity_1 = 83;              // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_2[22];          // Tag.BODY
    entity_0 = 22;              // Tag.BODY
    while(entity_1 < entity_0){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_3[5];           // Tag.BODY
    entity_2[entity_1] = 'g';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;               // Tag.BODY
    entity_7 = 29;              // Tag.BODY
    entity_3[entity_7] = 'E';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER