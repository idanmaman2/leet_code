#define INT_MAX 2147483647
#define INT_MIN -2147483648
int myAtoi(char * s){
  int length  = strlen(s); 
  char factor = 1 ; 
  size_t i = 0 ; 
  int sum = 0 ; 
  for(; i < length && *s == ' '; i++,s++);
  if (*s == '+')
    ++s ; 
  else 
    if(*s == '-'){
    factor = -1 ; 
    ++s ; 
  }
  for(; i < length && *s == '0'; i++,s++);
  for(; i < length && *s <= '9' && *s >='0'; i++,s++){
      if (factor == 1 && sum > INT_MAX / 10 )
            return INT_MAX ; 
      if (factor == -1  && sum < INT_MIN / 10 )
            return INT_MIN ;
      sum *=10 ; 
      int val =   (*s - '0') ; 
      if (factor == 1 && sum > INT_MAX  - val )
            return INT_MAX ; 
      if (factor == -1  && sum < INT_MIN + val )
            return INT_MIN ;
      sum=sum +factor * val  ; 
  };
  return sum ; 



}