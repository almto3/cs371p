p.im();    // not ok
*p.im();   // not ok
(*p).im(); // ok


*x.move(5, 6);            // not ok
(*x).move(5, 6);          // ok
x.operator*().move(5, 6);

x->move(5, 6);
x.operator->()->move(5, 6);
