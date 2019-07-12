#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_1[62];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 57;                                       // Tag.BODY
    entity_9 = 0;                                        // Tag.BODY
    char entity_6[83];                                   // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    char entity_4[1];                                    // Tag.BODY
    entity_8 = 83;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    if (entity_0 < entity_8){                            // Tag.BODY
    entity_6[entity_2] = 'F';                            // Tag.BUFWRITE_TAUT_SAFE
    } else {                                             // Tag.BODY
    entity_0 = 93;                                       // Tag.BODY
    entity_4[entity_9] = 'w';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    for(entity_3 = 23; entity_3 < entity_0; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_3] = 'g';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER