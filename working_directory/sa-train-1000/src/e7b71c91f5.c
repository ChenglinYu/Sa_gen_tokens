#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_1[7];                                   // Tag.BODY
    int entity_4;                                       // Tag.BODY
    int entity_7;                                       // Tag.BODY
    int entity_9;                                       // Tag.BODY
    entity_7 = 45;                                      // Tag.BODY
    int entity_0;                                       // Tag.BODY
    char entity_5[58];                                  // Tag.BODY
    entity_9 = 37;                                      // Tag.BODY
    entity_4 = 76;                                      // Tag.BODY
    char entity_2[28];                                  // Tag.BODY
    entity_1[entity_7] = 'w';                           // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_0 = 9; entity_0 < entity_4; entity_0++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_5[entity_9] = 'W';                           // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_0] = 'j';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER