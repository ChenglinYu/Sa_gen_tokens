#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_6;                                       // Tag.BODY
    int entity_2;                                       // Tag.BODY
    char entity_1[30];                                  // Tag.BODY
    entity_6 = 81;                                      // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_8 = rand();                                  // Tag.BODY
    if (entity_8 < entity_6){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_8 = 43;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_2 = 8; entity_2 < entity_8; entity_2++){ // Tag.BODY
    }                                                   // Tag.BODY
    char entity_4[43];                                  // Tag.BODY
    entity_1[entity_2] = 'h';                           // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;                                       // Tag.BODY
    entity_3 = 4;                                       // Tag.BODY
    entity_4[entity_3] = 'C';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER