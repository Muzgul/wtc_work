#!/usr/bin/php
<?php
	while (1)
	{
		echo "Enter a number: ";
		$line = trim(fgets(STDIN));
		if (is_numeric($line))
			echo "$line is a number\n";
		else
			echo "$line is not a number\n";
	}	
?>