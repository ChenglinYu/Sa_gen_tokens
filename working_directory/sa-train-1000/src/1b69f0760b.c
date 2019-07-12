#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_6[27];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_8 = 56;              // Tag.BODY
    entity_3 = 83;              // Tag.BODY
    char entity_5[0];           // Tag.BODY
    entity_5[entity_8] = 'e';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 46;              // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 11;              // Tag.BODY
    entity_6[entity_1] = 'N';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_7[29];          // Tag.BODY
    entity_7[entity_9] = 'N';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER