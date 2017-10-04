#!/usr/bin/php
<?php
	if ($argc > 1)
	{
		echo preg_replace("/[\s\t\n\r]+/", " ", trim($argv[1]));
		echo "\n";
	}
?>