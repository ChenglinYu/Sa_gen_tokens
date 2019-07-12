#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_5[16];                                   // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_2 = 59;                                       // Tag.BODY
    if (entity_0 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 60;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 92; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_7[3];                                    // Tag.BODY
    entity_5[entity_8] = 'N';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;                                        // Tag.BODY
    entity_9 = 12;                                       // Tag.BODY
    entity_6 = 82;                                       // Tag.BODY
    entity_7[entity_9] = 'T';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_4[67];                                   // Tag.BODY
    entity_4[entity_6] = 'U';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER