#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_5[46];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_3 = 26;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    if (entity_0 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 98;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 63; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_8] = 'c';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER