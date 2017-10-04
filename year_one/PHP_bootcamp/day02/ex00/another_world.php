#!/usr/bin/php
<?php
	if ($argc > 1)
	{
		$temp = trim($argv[1]);
		$temp = preg_replace("/[\t\s\r]+/", " ", $temp);
		echo "$temp\n";
	}
?>