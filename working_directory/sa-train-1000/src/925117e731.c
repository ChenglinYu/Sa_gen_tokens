#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[14];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    entity_9 = 99;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    if (entity_1 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 84;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 28; entity_2 < entity_1; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_2] = 'h';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER