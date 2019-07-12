#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_3[16];                                  // Tag.BODY
    int entity_6;                                       // Tag.BODY
    int entity_1;                                       // Tag.BODY
    char entity_0[52];                                  // Tag.BODY
    int entity_7;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    int entity_5;                                       // Tag.BODY
    char entity_4[46];                                  // Tag.BODY
    entity_1 = 33;                                      // Tag.BODY
    entity_6 = rand();                                  // Tag.BODY
    entity_8 = 99;                                      // Tag.BODY
    entity_5 = 56;                                      // Tag.BODY
    if (entity_6 < entity_8){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_6 = 81;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_7 = 9; entity_7 < entity_6; entity_7++){ // Tag.BODY
    entity_0[entity_5] = 'h';                           // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_1] = 'Y';                           // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                   // Tag.BODY
    entity_4[entity_7] = 'K';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER