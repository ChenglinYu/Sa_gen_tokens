#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_4[53];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_1 = 7;                                        // Tag.BODY
    char entity_7[71];                                   // Tag.BODY
    entity_8 = 45;                                       // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_3 = 38;                                       // Tag.BODY
    char entity_0[73];                                   // Tag.BODY
    if (entity_9 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 47;                                       // Tag.BODY
    entity_7[entity_3] = 'C';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_4[entity_1] = 'e';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_6 = 98; entity_6 < entity_9; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_6] = 't';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER