this code

```

#include <iostream>
int main() {
  int x = 5;
  int *pointer = &x;

  std::cout << pointer;
}
```

give me this output: 0x7ffd75053a14

so i can just assume that this is the memory adress that x was stored in

okay now this one :

```

#include <iostream>
int main() {
  int x = 5;
  int *pointer = &x;

  std::cout << *pointer;
}
```

show '5' for output, which means that it shows the value of x, now i wonder what we can cook with this shit

--------------------------------------------------------
fuckass pointers:

```
#include <iostream>
#include <string>
void opinion_on_pointers_swapper(std::string *x, std::string *y) {
  std::string temporary = *x;
  *x = *y;
  *y = temporary;
};
int main() {
  std::string truth = "omg i love pointers they're so easy and make sence";
  std::string lie = "this shit is boggus not gonna lie";
  opinion_on_pointers_swapper(&truth, &lie);
  std::string real_truth = truth;
  std::cout << "real truth is: " << real_truth;
  return 0;
}
```

they switching from the damn function declaration using that
`void something(int *a, int *b) // which means "ayo create me a function with these parameters, parameters contain creating two pointers with the int type plz"`
to this lame ahh function calling :
`something(&x, &y); // which says "parameters are taking the adresses of this variables u declared before...`

actually now i get it,
basically the function creates pointers to adresses, then gives then takes the values and switch them.
one thing one shall remember is that `*` has two contexts,

# 1st

`*` works as a way to declare a pointer, example:

```
int x = 10;
int *p = &x;
```

here we're saying, ayo gimme a pointer for the already made variables imma put later that grabs the memory address of x and yeah take the value
or in other formats;

```
bool is_nyx_right = true; //always obviously
bool *pointer2 = &is_nyx_right;

```

# 2nd

the `*` works as a value grabber, when u type it u kinda are telling variables i suppose to use the value, instead of memory address
----------------------------------------------------

and last thing to remember is that the `&` is like a memory adress thingy like in the last example, you can see that we pointed to the memory address of "lie" and "truth", and the pointer took that shii and grabbed its value as mentioned in the function...
