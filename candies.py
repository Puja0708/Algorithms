<?php


fscanf(STDIN, "%d\n", $t);


while($t--) {
#for($j=0;$j<$t;$j++){
	#$res = 0;
	fscanf(STDIN, "%d\n", $n);
	for($i=0;$i<$n;$i++) {
		fscanf(STDIN, "%d\n", $a[$i]);
	}

	#for($i=0;$i<$n;$i++){
	#	echo $a[$i];
	#}
$res = array_sum($a)-($n-1);

#echo $res;
}
?>

