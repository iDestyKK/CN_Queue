#CN_Queue
A C library that implements C++ Queues in C.

Along with linked lists, queues are among one of the simplest data structures. In C++, these are included in the STL library as both simple queues and deques which you can use by using "#include &lt;queue&gt;" and "#include &lt;deque&gt;". But in C, you have to make it yourself.

Queues are a FIFO (First-In-First-Out) structure, meaning you can push back, but can only pop front. In other words, you can add to the back of the queue, but you can only access the first element.

CN_Queue is a generic queue container that can hold any data of any size in it. This is because you specify the type while initiating the queue. All nodes created in that queue will be able to hold the number of bytes of the datatype specified. It is a dynamically resizable structure. All operations except for "cn_queue_clear" are constant time, making this an extremely fast and efficient library.

Full documentation at: <a href = "http://web.eecs.utk.edu/~ssmit285/lib/cn_queue/index.html">http://web.eecs.utk.edu/~ssmit285/lib/cn_queue/index.html</a></br>The documentation has details and examples on every single function in the library, as well as a guide comparing it to C++ Queues.
