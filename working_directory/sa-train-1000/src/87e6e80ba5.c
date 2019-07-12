#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[78];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 21;                                       // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    if (entity_3 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 40;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 75; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_7] = 'U';                            // Tag.BUFWRITE_COND_SAFE
    char entity_4[57];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 71;                                       // Tag.BODY
    entity_4[entity_5] = 'L';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER