#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_6[94];          // Tag.BODY
    entity_1 = 48;              // Tag.BODY
    entity_8 = 60;              // Tag.BODY
    entity_5 = 20;              // Tag.BODY
    char entity_3[39];          // Tag.BODY
    entity_4 = 49;              // Tag.BODY
    char entity_0[25];          // Tag.BODY
    entity_0[entity_5] = 's';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_8 < entity_4){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_1] = '2';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_8] = 'G';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER