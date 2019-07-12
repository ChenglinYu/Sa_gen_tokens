#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_3[12];          // Tag.BODY
    entity_6 = 81;              // Tag.BODY
    entity_4 = 37;              // Tag.BODY
    entity_0 = 76;              // Tag.BODY
    char entity_7[20];          // Tag.BODY
    while(entity_4 < entity_6){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_3[entity_4] = 'Y';   // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 99;              // Tag.BODY
    entity_7[entity_0] = '2';   // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_2[58];          // Tag.BODY
    entity_2[entity_1] = 'i';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER