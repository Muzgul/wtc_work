#!/usr/bin/php
<?php
	$array = array();
	for ($i = 1; $i < $argc ; $i++) { 
		$exp = explode(' ', trim($argv[$i]));
		foreach ($exp as $value) {
			array_push($array, $value);
		}
	}
	$temp = array();
	$i = 1;
	while ($i < sizeof($array) - 1) { 
		array_push($temp, $array[$i++]);
	}
	array_push($temp, $array[0]);
	if (sizeof($temp) > 0)
		foreach ($temp as $value) {
			echo "$value\n";
		}
?>