<?php
	function ft_split($input)
	{
		$line = trim($input);
		$line = preg_replace("/\s+/", ' ', $line);
		$array = explode(' ', $line);
		echo "Array\n(\n";
		if (sizeof($array) > 1)
		{
			sort($array);		
			for ($i = 0; $i < sizeof($array); $i++)
				echo "\t[$i] => $array[$i]\n";
			
		}else
			echo "\t[0] => $line\n";
		echo ")\n";
	}
?>