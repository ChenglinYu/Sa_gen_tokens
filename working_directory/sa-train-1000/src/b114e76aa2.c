#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[2];                                    // Tag.BODY
    entity_2 = 50;                                       // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    if (entity_1 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 56;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 29; entity_5 < entity_1; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 0;                                        // Tag.BODY
    char entity_4[31];                                   // Tag.BODY
    entity_9[entity_5] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[16];                                   // Tag.BODY
    entity_0 = 33;                                       // Tag.BODY
    entity_4[entity_0] = 'Y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_3] = 'l';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER