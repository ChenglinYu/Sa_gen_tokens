#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_4[17];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 76;              // Tag.BODY
    entity_1 = 68;              // Tag.BODY
    while(entity_8 < entity_1){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 40;              // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_4[entity_8] = '1';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[95];          // Tag.BODY
    entity_3 = 24;              // Tag.BODY
    char entity_6[5];           // Tag.BODY
    entity_5[entity_3] = 'l';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_7] = '9';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER