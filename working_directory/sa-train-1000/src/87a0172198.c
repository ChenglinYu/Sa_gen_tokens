#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[51];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_9 = 46;                                       // Tag.BODY
    for(entity_5 = 11; entity_5 < entity_9; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_1[entity_5] = 'b';                            // Tag.BUFWRITE_COND_SAFE
    char entity_0[98];                                   // Tag.BODY
    entity_3 = 25;                                       // Tag.BODY
    entity_0[entity_3] = 'J';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER