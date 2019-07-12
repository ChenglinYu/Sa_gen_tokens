#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_4[53];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_3 = 83;                                       // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 97;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 86; entity_5 < entity_9; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_0[39];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_4[entity_5] = '7';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 90;                                       // Tag.BODY
    entity_0[entity_6] = 'z';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER