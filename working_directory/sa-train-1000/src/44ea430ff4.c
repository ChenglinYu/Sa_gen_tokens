#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_8 = 61;                                       // Tag.BODY
    char entity_6[75];                                   // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 15;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 52; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_9[61];                                   // Tag.BODY
    entity_6[entity_3] = '9';                            // Tag.BUFWRITE_COND_SAFE
    int entity_2;                                        // Tag.BODY
    entity_2 = 38;                                       // Tag.BODY
    entity_9[entity_2] = 'Y';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER