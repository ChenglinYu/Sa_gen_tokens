#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[65];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_2[69];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_3 = 8;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 3;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    entity_2[entity_7] = 'q';                            // Tag.BUFWRITE_TAUT_SAFE
    if (entity_4 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 73;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 62; entity_8 < entity_4; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_8] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER