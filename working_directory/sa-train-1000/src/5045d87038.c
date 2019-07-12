#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_3 = 9;                                        // Tag.BODY
    char entity_5[0];                                    // Tag.BODY
    if (entity_7 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 98;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 25; entity_1 < entity_7; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_1] = 'N';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER