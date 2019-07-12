#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_0;                                       // Tag.BODY
    int entity_9;                                       // Tag.BODY
    entity_9 = rand();                                  // Tag.BODY
    char entity_6[59];                                  // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_8 = 29;                                      // Tag.BODY
    int entity_7;                                       // Tag.BODY
    entity_7 = 93;                                      // Tag.BODY
    char entity_1[69];                                  // Tag.BODY
    if (entity_9 < entity_8){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_9 = 93;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_0 = 6; entity_0 < entity_9; entity_0++){ // Tag.BODY
    entity_1[entity_7] = 'M';                           // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                   // Tag.BODY
    entity_6[entity_0] = 'a';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER