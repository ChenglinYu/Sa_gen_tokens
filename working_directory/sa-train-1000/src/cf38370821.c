#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_7[64];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_9 = 49;                                       // Tag.BODY
    if (entity_6 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 19;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 84; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_5[38];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_7[entity_4] = 'y';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;                                        // Tag.BODY
    entity_0 = 36;                                       // Tag.BODY
    char entity_1[9];                                    // Tag.BODY
    entity_8 = 91;                                       // Tag.BODY
    entity_5[entity_0] = 'd';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_8] = 'x';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER