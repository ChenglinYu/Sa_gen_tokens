#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_2 = 38;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    char entity_0[85];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    if (entity_4 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 95;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 62; entity_9 < entity_4; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_9] = 'g';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;                                        // Tag.BODY
    entity_8 = 89;                                       // Tag.BODY
    char entity_3[34];                                   // Tag.BODY
    entity_3[entity_8] = 'y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER