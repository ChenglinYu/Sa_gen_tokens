#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    entity_4 = 36;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_2[74];                                   // Tag.BODY
    for(entity_5 = 30; entity_5 < entity_4; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_7[21];                                   // Tag.BODY
    entity_6 = 50;                                       // Tag.BODY
    entity_2[entity_5] = 'W';                            // Tag.BUFWRITE_COND_SAFE
    entity_1 = 6;                                        // Tag.BODY
    char entity_9[31];                                   // Tag.BODY
    entity_9[entity_6] = 'K';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_1] = 'g';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER