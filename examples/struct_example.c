/*
 * Simple Struct example with CN_Queues
 * 
 * CN_Queues hold any datatype as long as the size specified is the same as what you store in it.
 */

#include <stdio.h>
#include <stdlib.h>

#include "../cn_queue.h"

typedef struct thing {
	int a, b;
} THING;

main() {
	CN_QUEUE queue = cn_queue_init(THING);
	
	THING a;
	a.a = 2;
	a.b = 3;

	cn_queue_push(queue, &a); //Push a copy of a to Queue

	//Update the original struct
	a.a++;
	a.b = a.a + a.b;
	cn_queue_push(queue, &a); //Push another copy of a to Queue
	
	THING* ii = 0; //Iterator
	while (!cn_queue_empty(queue)) {
		ii = cn_queue_front(queue);
		printf("STRUCT { A: %d, B: %d }\n", ii->a, ii->b);
		cn_queue_pop(queue);
	}
	
	cn_queue_free(queue);
}
