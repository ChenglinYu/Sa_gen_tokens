#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_1[93];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_9 = 91;                                       // Tag.BODY
    for(entity_5 = 36; entity_5 < entity_9; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_4[38];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 20;                                       // Tag.BODY
    entity_1[entity_5] = 'B';                            // Tag.BUFWRITE_COND_SAFE
    entity_4[entity_7] = 'X';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER