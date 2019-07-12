#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_3;                                       // Tag.BODY
    int entity_5;                                       // Tag.BODY
    char entity_2[44];                                  // Tag.BODY
    char entity_1[49];                                  // Tag.BODY
    int entity_4;                                       // Tag.BODY
    entity_5 = 60;                                      // Tag.BODY
    entity_3 = 59;                                      // Tag.BODY
    int entity_0;                                       // Tag.BODY
    entity_4 = rand();                                  // Tag.BODY
    if (entity_4 < entity_5){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_4 = 69;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_0 = 7; entity_0 < entity_4; entity_0++){ // Tag.BODY
    entity_1[entity_3] = 'e';                           // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                   // Tag.BODY
    entity_2[entity_0] = 'U';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER