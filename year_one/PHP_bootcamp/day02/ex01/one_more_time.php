#!/usr/bin/php
<?php
	function check_days($line){
		$days = array("lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche");
		foreach ($days as $key => $value) {
			if (strcasecmp(trim($line), $value) == 0)
				return ($key);
		}
		return (-1);
	}
	function check_months($line){
		$months = array("janvier", "fevrier", "mars", "avril", "mai", "juin", "juillet", "aout", "septembre", "octobre", "novembre", "decembre");
		foreach($months as $key => $value){
			if (strcasecmp(trim($line), $value) == 0)
				return ($key);
		}
		return (-1);
	}
	function check($line){ 
		$array = explode(' ', trim($line));
		if (sizeof($array) != 5)
			return (0);
		if (check_days($array[0]) == -1 || check_months($array[2]) == -1)
			return (0);
		if (!(is_numeric($array[1]) && $array[1] > 0 && $array[1] < 32))
			return (0);
		if (!(is_numeric($array[3]) && $array[3] > 1969 && $array[3] < 10000))
			return (0);
		if (preg_match("/(2[0-3]|[01]?[0-9]):([0-5]?[0-9]):([0-5]?[0-9])/", $array[4]) != 1)
			return (0);
		return ($array);
	}
	function calc($array)
	{
		$total = (($array[3] - 1970)) * 31536000 ;
		$total += check_months($array[2]) * 2630000  ;
		$total += ($array[1] - 1) * 86400;
		$temp = explode(':', $array[4]);
		$total += $temp[0] * 3600;
		$total += $temp[1] * 60;
		$total += $temp[2];
		return ($total);
	}
	for ($i = 1; $i < $argc; $i++)
	{
		if (check($argv[$i]) != 0)
		{
			$temp = calc(check($argv[$i]));
			echo "$temp\n";
		}else
			echo "Wrong Format\n";
	}
?>