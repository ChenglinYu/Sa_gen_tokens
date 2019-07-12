#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[89];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 84;                                       // Tag.BODY
    entity_5 = 5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_0[5];                                    // Tag.BODY
    for(entity_9 = 40; entity_9 < entity_6; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_5] = 'G';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_9] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER