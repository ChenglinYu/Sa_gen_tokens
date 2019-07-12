#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_7[73];          // Tag.BODY
    entity_2 = 94;              // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_6[51];          // Tag.BODY
    entity_0 = 30;              // Tag.BODY
    entity_1 = 71;              // Tag.BODY
    char entity_4[67];          // Tag.BODY
    entity_8 = 57;              // Tag.BODY
    entity_7[entity_8] = 'n';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_2 < entity_1){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_0] = 'z';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_2] = '9';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER