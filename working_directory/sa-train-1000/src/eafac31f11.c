#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_4[69];          // Tag.BODY
    char entity_6[66];          // Tag.BODY
    char entity_3[32];          // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 47;              // Tag.BODY
    entity_5 = 68;              // Tag.BODY
    entity_7 = 9;               // Tag.BODY
    entity_3[entity_5] = 'S';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 39;              // Tag.BODY
    while(entity_1 < entity_7){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_1] = 'o';   // Tag.BUFWRITE_COND_SAFE
    entity_4[entity_2] = 'E';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER