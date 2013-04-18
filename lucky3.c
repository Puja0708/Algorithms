#include <stdio.h>
#include <stdlib.h>
long long dp[ 51 ][ 1 << 9 ];
int status[ 50 ];
char arr[ 1022 ][ 9 ];
int w[ 50 ];
void before()
{
int i = 9, num, j = 0, k = 0, l, mask, temp;
while( i ) {
mask = (1 << i) - 1;
while( mask > -1 ) {
for( l = 0; l < 9 - i; l++ ) {
arr[ j ][ k++ ] = '0';
}
temp = mask;
while( k < 10 ) {
if( temp & 1 ) {
arr[ j ][ k++ ] = '7';
}
else
arr[ j ][ k++ ] = '4';
temp >>= 1;
}
mask--;
j++;
k = 0;
}
i--;
}
}
 
 
void main( void )
{
int t, n, i, j, k, mask, new_mask, l, m, temp;
long long total;
before();
scanf( "%d", &t );
while( t-- ) {
total = 0;
scanf( "%d", &n );
for( i = 0; i < n; i++ ) {
scanf( "%d", &w[ i ] );
}
for( i = 0; i < 1022; i++ ) {
for( j = 0; j <= n; j++ )
for( k = 0; k < ( 1 << 9 ); k++ )
dp[ j ][ k ] = 0;
for( j = 0; j < n; j++ ) {
temp = w[ j ];
k = 8;
while( temp ) {
if( temp % 10 + '0' > arr[ i ][ k ] ) {
status[ j ] = 0;
break;
}
temp /= 10;
k--;
}
if( temp == 0 )
status[ j ] = 1;
}
mask = 0;
for( j = 0; j < 9 && arr[ i ][ j ] == '0'; j++ ) {
mask += 1 << ( 8 - j );
}
dp[ 0 ][ mask ] = 1;
for( j = 0; j < n; j++ ) {
for( k = mask; k < ( 1 << 9 ); k++ ) {
if( dp[ j ][ k ] == 0 )
continue;
dp[ j + 1 ][ k ] += dp[ j ][ k ];
if( status[ j ] == 1 ) {
new_mask = 0;
new_mask |= k;
temp = w[ j ];
l = 0;
while( temp ) {
if( temp % 10 + '0' == arr[ i ][ 8 - l ] ) {
new_mask |= ( 1 << l );
}
l++;
temp /= 10;
}
dp[ j + 1 ][ new_mask ] += dp[ j ][ k ];
}
}
}
total += dp[ n ][ (1 << 9) - 1 ];
}
printf( "%lld\n", total );
}
}
 
