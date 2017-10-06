# ZCM
---
## Motivation

MAAV's system runs using several executables that run a piece of MAAV's software that must
communicate with each other effectively. The reason for this design is that it expedites development
and testing, and makes it more modular. In order for these pieces to communicate effectively, we use
a library called zero communications and marshalling or ZCM.

---
## How it works

ZCM has many transports that you can use it with, "ipc" or interprocess, UDP Multicast, and "inproc"
or inter thread but within the same process. We're going to be using "ipc" for the most part, so
that is what we'll be working with here.

Before you do continue and begin the actual exercise, please read through but don't do this tutorial
on ZCM's github, [zcm tutorial](https://github.com/ZeroCM/zcm/blob/master/docs/tutorial.md). Even
though that tutorial is in C and not C++, you should have at least an idea of what you need to do
to have two processes communicate over ipc. You should also look over the two following C++ examples
and can use them as a reference for the exercise.
[Pub.cpp](https://github.com/ZeroCM/zcm/blob/master/examples/cpp/Pub.cpp) and
[Sub.cpp](https://github.com/ZeroCM/zcm/blob/master/examples/cpp/Sub.cpp).

---
## The Exercise

We will implement something similar to the tutorial you just read, however, with a few differences
to make it more similar to something we would do on MAAV.

First, we need to create a zcm message
type. We'll name it "message\_t" and you will create the type in the "message\_t.zcm" file you can
find in zcm-exercise. Here we will have an int32\_t in the message type. Make sure you use the
correct syntax as you can reference in the tutorial found above.

Next we need to generate the header file that we can #include so that we can use the type we defined
with zcm. To generate a C++ header file, use the command:
```
zcm-gen -x <filename.zcm>
```

Now you need to implement the sender in sender.cpp. It needs to send messages over the
"MAAVTRAINING" channel using "ipc". The first message should send 0 and with each message sent the
number that is sent should increase by 1. Take into account that if you try to send messages too
quickly many will be lost, so you should include a small delay between publishes. Make it send a
specific number of messages that you can chose.

Once the sender is implemented, you need to implement the receiver in receiver.cpp. This part is
much more complicated than the sender, as you will need to implement a handler class that will keep
track of the number of messages received. You should reference [Sub.cpp](https://github.com/ZeroCM/zcm/blob/master/examples/cpp/Sub.cpp)
to expedite this process and to help with debugging later on. Your main.cpp should instead of using
zcm.run() instead use zcm.handle() inside of a loop. It should print the number inside of
every received message upon receiving it, as well as the total number of messages received at the
end of execution.

The CMake is already done for you.

** MAKE SURE THAT YOU KEEP ALL OF YOUR COMPILED BINARIES IN A BUILD DIRECTORY **
** THIS KEEPS YOUR DIRECTORIES CLEAN AND PREVENTS YOU FROM COMMITTING BINARIES **

---
## The Exercise Part II

After testing your sender and receiver combo, you likely have noticed that no matter what you do,
you always lose at least the first message that you send with zcm. This is unavoidable, as each zcm
channel you want to send messages over must be "primed" before use. This entails sending a single
message and then waiting long enough for it to take effect.

What you need to do is go into your sender and edit it to include the "priming". Be sure to tune the
delay between the priming and the sending of the messages intended to reach the receiver to be large
enough. Once you have this working, you have a working basic knowledge of zcm.

---
## Closing Notes

This has covered the most important parts of using zcm in your work for MAAV. However, it did not
delve into variable size arrays being sent over zcm. You need to look over this on the zcm github
and make sure you understand how it works, as we use it frequently. Essentially in the message type
class, the variable size array is a vector and you push back to it. But when you want to send a zcm
message of this type, you need to make sure to set the member variable that you defined as the size
of the array in the zcm struct definition to the size of the vector as this size is important for
sending and receiving the data.

If you've reached this point and understand everything that was done in this tutorial, you are
qualified to work with ZCM on MAAV.
