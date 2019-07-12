#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[96];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_5[43];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_6 = 90;                                       // Tag.BODY
    entity_4 = 46;                                       // Tag.BODY
    if (entity_3 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 92;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_4] = 'G';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_9 = 35; entity_9 < entity_3; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_9] = 'o';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER