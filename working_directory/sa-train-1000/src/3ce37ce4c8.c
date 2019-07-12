#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_7[57];                                   // Tag.BODY
    entity_1 = 43;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 89;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 53; entity_0 < entity_4; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7[entity_0] = 'B';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 59;                                       // Tag.BODY
    char entity_8[72];                                   // Tag.BODY
    entity_8[entity_3] = '5';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER