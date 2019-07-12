#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_7[85];          // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_4[72];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_3 = 5;               // Tag.BODY
    entity_1 = 72;              // Tag.BODY
    entity_0 = 74;              // Tag.BODY
    while(entity_1 < entity_0){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_3] = '2';   // Tag.BUFWRITE_TAUT_SAFE
    int entity_5;               // Tag.BODY
    char entity_8[63];          // Tag.BODY
    entity_4[entity_1] = 'I';   // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 51;              // Tag.BODY
    entity_8[entity_5] = 'x';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER