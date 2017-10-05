#!/usr/bin/php
<?php
	//See file organisation https://opensource.apple.com/source/Libc/Libc-583/include/utmpx.h
	date_default_timezone_set('CET');
	$text = file_get_contents("/var/run/utmpx");
	$arr = array();
	while ($text)
	{
		$temp = unpack("A256user/A4id/A32line/ipid/itype/lsec/lusec/A256host/A64pad", $text);
		if ($temp['type'] == 7)
		{	
			$time = $temp['user'] . " " . $temp['line'] . "  " . date('M  j G:i', $temp['sec']);
			array_push($arr, $time);
		}
		$text = substr($text, 628);
	}
	foreach ($arr as $value) {
		echo $value . PHP_EOL;
	}
?>