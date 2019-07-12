#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_3[47];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 66;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 63;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_0[16];                                   // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_5 = 14;                                       // Tag.BODY
    char entity_4[20];                                   // Tag.BODY
    if (entity_1 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 45;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 51; entity_7 < entity_1; entity_7++){ // Tag.BODY
    entity_3[entity_5] = 'L';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_4[entity_9] = 'q';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0[entity_7] = 'q';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER