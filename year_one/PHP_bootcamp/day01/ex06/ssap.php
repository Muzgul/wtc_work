#!/usr/bin/php
<?php
	$array = array();
	for ($i = 1; $i < $argc ; $i++) { 
		$exp = explode(' ', trim($argv[$i]));
		foreach ($exp as $value) {
			array_push($array, $value);
		}
	}
	sort($array);
	if (sizeof($array) > 0)
		foreach ($array as $value) {
			echo "$value\n";
		}
?>