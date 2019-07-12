#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_2[77];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[65];                                   // Tag.BODY
    entity_1 = 48;                                       // Tag.BODY
    entity_6 = 73;                                       // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    entity_2[entity_6] = '1';                            // Tag.BUFWRITE_TAUT_SAFE
    if (entity_0 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 0;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 43; entity_4 < entity_0; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_4] = 'f';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER