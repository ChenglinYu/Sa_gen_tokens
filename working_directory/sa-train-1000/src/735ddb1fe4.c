#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_3;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_3 = 57;                                      // Tag.BODY
    entity_8 = rand();                                  // Tag.BODY
    char entity_7[60];                                  // Tag.BODY
    int entity_6;                                       // Tag.BODY
    if (entity_8 < entity_3){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_8 = 82;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_6 = 7; entity_6 < entity_8; entity_6++){ // Tag.BODY
    }                                                   // Tag.BODY
    char entity_1[14];                                  // Tag.BODY
    int entity_2;                                       // Tag.BODY
    char entity_9[90];                                  // Tag.BODY
    entity_7[entity_6] = 'Z';                           // Tag.BUFWRITE_COND_UNSAFE
    int entity_4;                                       // Tag.BODY
    entity_2 = 47;                                      // Tag.BODY
    entity_1[entity_2] = 'g';                           // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4 = 98;                                      // Tag.BODY
    entity_9[entity_4] = 'm';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER