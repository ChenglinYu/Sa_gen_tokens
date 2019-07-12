#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    char entity_1[28];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 57;              // Tag.BODY
    entity_5 = 68;              // Tag.BODY
    while(entity_5 < entity_6){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_3[57];          // Tag.BODY
    entity_1[entity_5] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 34;              // Tag.BODY
    entity_3[entity_0] = 'Q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER