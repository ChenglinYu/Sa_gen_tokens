#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_6[20];          // Tag.BODY
    entity_7 = 3;               // Tag.BODY
    char entity_8[52];          // Tag.BODY
    entity_3 = 61;              // Tag.BODY
    entity_4 = 70;              // Tag.BODY
    while(entity_7 < entity_4){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    entity_8[entity_3] = '7';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_6[entity_7] = 'B';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[28];          // Tag.BODY
    entity_0 = 60;              // Tag.BODY
    entity_2[entity_0] = 's';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER