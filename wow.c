#include <stdio.h>
#define wow int
#define say printf
#define does(x) if(!(x))
#define fizz 3
#define buzz 5
#define nextplz say("\n");
#define amaze main
#define is =
#define many(x) while((x++) < 100)
#define has %
#define plz (say("%d", i));
#define bye return 0
#define nofizzbuzz(i) (!(i has fizz) || !(i has buzz))

wow amaze() {
  wow i is 0;

  many(i) {
    does(i has fizz)
      say("fizz");

    does(i has buzz)
      say("buzz");

    does(nofizzbuzz(i))
      plz;

    nextplz;
  }
  bye;
}
