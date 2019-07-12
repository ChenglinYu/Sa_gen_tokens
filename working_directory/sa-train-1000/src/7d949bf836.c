#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_3[43];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 12;              // Tag.BODY
    char entity_2[66];          // Tag.BODY
    entity_0 = 60;              // Tag.BODY
    entity_1 = 7;               // Tag.BODY
    entity_3[entity_1] = 'e';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_5] = 'B';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER