// Evolable Asia Mission 1
// Candidate: Nguyen The Long - LongNT0707@gmail.com
// System: Ubuntu 13.10, gcc 4.8.1
// Usage: $./eva01  < input > output

#include <stdio.h>

int sum_line(int count);
int check_case(int count);

int main()
{
  int N;
  scanf("%d", &N);
  check_case(N);
  return 0;
}

int sqr_sum_line(int count)
{
  if(count == 0) return 0;
  
  int i_num;
  scanf("%d", &i_num);
  if(i_num > 0)
    return sqr_sum_line(count - 1) + i_num * i_num;
  else
    return sqr_sum_line(count - 1);
}

int check_case(int count)
{
  if(count == 0) return 0;

  int i_count;
  scanf("%d", &i_count);
  printf("%d\n", sqr_sum_line(i_count));

  check_case(count - 1);
  return 0;
}
