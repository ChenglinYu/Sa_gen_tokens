#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_1[10];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_9 = 77;              // Tag.BODY
    entity_1[entity_9] = 'C';   // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_6[30];          // Tag.BODY
    entity_7 = 65;              // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_5[13];          // Tag.BODY
    entity_4 = 51;              // Tag.BODY
    entity_3 = 76;              // Tag.BODY
    entity_6[entity_7] = 'k';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_3 < entity_4){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_3] = 'z';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER