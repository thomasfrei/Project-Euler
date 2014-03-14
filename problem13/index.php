<?php
	
$handle = fopen("numbers.txt", "r");
$number = 0;

while(!feof($handle)){
	$number  =  $number + fgets($handle, 50);
}

echo substr(str_replace('.', '', $number),0,10) . "\n"; 
?>