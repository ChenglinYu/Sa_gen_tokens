#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_5[84];                                   // Tag.BODY
    entity_7 = 8;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 76;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 10; entity_8 < entity_4; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_3[39];                                   // Tag.BODY
    entity_5[entity_8] = 'v';                            // Tag.BUFWRITE_COND_SAFE
    int entity_9;                                        // Tag.BODY
    char entity_6[58];                                   // Tag.BODY
    entity_9 = 95;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_3[entity_9] = 'd';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 16;                                       // Tag.BODY
    entity_6[entity_0] = 'r';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER