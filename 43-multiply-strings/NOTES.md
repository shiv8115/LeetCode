This is the standard manual multiplication algorithm. We use two nested for loops, working backward from the end of each input number. We pre-allocate our result and accumulate our partial result in there. One special case to note is when our carry requires us to write to our sum string outside of our for loop.
​
At the end, we trim any leading zeros, or return 0 if we computed nothing but zeros.
size_t startpos = sum.find_first_not_of("0");
if (string::npos != startpos) {
return sum.substr(startpos);
}