#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_5[5];                                    // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_1 = 43;                                       // Tag.BODY
    if (entity_6 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 58;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 87; entity_2 < entity_6; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_2] = 'h';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER