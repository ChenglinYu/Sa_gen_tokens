#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_0[66];                                   // Tag.BODY
    char entity_6[39];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_2[79];                                   // Tag.BODY
    entity_5 = 7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_7 = 28;                                       // Tag.BODY
    entity_6[entity_5] = 'y';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 32;                                       // Tag.BODY
    for(entity_9 = 99; entity_9 < entity_7; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_9] = 'W';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_2[entity_1] = 'r';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER