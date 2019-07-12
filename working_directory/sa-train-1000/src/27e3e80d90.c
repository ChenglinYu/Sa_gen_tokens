#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    char entity_5[36];                                   // Tag.BODY
    entity_0 = 59;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    if (entity_1 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 5;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 19; entity_7 < entity_1; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_7] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER