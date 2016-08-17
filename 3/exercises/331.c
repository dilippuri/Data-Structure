#include <stdio.h>

int main( void ){

  int x,y;

  printf("Enter x: ");
  scanf("%d", &x);
  printf("Enter y: ");
  scanf("%d", &y);

  if ( x < 10 )
    if ( y > 10 )
      puts( "*****" );
    else
    puts( "#####" );
  puts( "$$$$$" );

  if ( x < 10 ) {
    if ( y > 10 )
      puts( "*****" );
    }
    else {
    puts( "#####" );
    puts( "$$$$$" );
    }

return 0;
}
