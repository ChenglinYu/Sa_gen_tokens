#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[91];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_4[69];                                   // Tag.BODY
    entity_2 = 25;                                       // Tag.BODY
    entity_3 = 35;                                       // Tag.BODY
    for(entity_0 = 70; entity_0 < entity_2; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_0] = 'P';                            // Tag.BUFWRITE_COND_SAFE
    entity_4[entity_3] = 'V';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER