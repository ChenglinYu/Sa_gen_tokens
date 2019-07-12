#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_2;                                       // Tag.BODY
    char entity_1[42];                                  // Tag.BODY
    entity_2 = 81;                                      // Tag.BODY
    int entity_7;                                       // Tag.BODY
    for(entity_7 = 1; entity_7 < entity_2; entity_7++){ // Tag.BODY
    }                                                   // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_1[entity_7] = 'T';                           // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[39];                                  // Tag.BODY
    entity_3 = 4;                                       // Tag.BODY
    entity_6[entity_3] = 'w';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER