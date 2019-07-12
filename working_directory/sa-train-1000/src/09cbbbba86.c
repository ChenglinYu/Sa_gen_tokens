#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    entity_7 = 19;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_3[53];                                   // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    if (entity_8 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 84;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 88; entity_6 < entity_8; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_2[51];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_3[entity_6] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 21;                                       // Tag.BODY
    entity_2[entity_9] = 'd';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER