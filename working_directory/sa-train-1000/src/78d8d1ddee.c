#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 45;              // Tag.BODY
    entity_0 = 60;              // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_2[26];          // Tag.BODY
    char entity_7[25];          // Tag.BODY
    entity_4 = 6;               // Tag.BODY
    char entity_6[99];          // Tag.BODY
    entity_5 = 52;              // Tag.BODY
    entity_7[entity_1] = 'z';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_5] = 'j';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_4] = 'F';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER