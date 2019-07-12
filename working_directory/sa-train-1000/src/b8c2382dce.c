#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_9 = 4;               // Tag.BODY
    char entity_3[51];          // Tag.BODY
    char entity_4[30];          // Tag.BODY
    entity_5 = 33;              // Tag.BODY
    entity_0 = 76;              // Tag.BODY
    char entity_7[48];          // Tag.BODY
    entity_2 = 6;               // Tag.BODY
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    entity_4[entity_2] = '8';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    entity_7[entity_9] = '6';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_5] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER