/*
 * Simple Integer Queue Test
 * 
 * Tests CN_Queues and how they can be used to store integers and
 * print them out in the order that they were added to the queue.
 * 
 * This application stores 0 through 9 in the queue and then
 * prints them out in that order by popping the queue.
 */

#include <stdio.h>
#include <stdlib.h>

#include "../cn_queue.h"

main() {
	//Initialize the Queue
	CN_QUEUE queue = cn_queue_init(int);
	
	int a;
	for (a = 0; a < 10; a++)
		cn_queue_push(queue, &a); //Pushes the value of "a" into the queue
	
	int b;
	while (!cn_queue_empty(queue)) {
		b = cn_queue_deref_front(queue, int); //Gets exact value of the front of the queue
		printf("%d\n", b);                    //Prints to stdout.
		cn_queue_pop(queue);                  //Pop the queue.
	}
	
	//Free the Queue
	cn_queue_free(queue);
}
