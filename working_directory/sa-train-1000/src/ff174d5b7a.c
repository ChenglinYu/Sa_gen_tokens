#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_7[65];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    entity_8 = 22;                                       // Tag.BODY
    if (entity_5 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 74;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 32; entity_2 < entity_5; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_2] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER