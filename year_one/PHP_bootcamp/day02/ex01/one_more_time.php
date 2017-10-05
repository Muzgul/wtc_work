#!/usr/bin/php
<?php
	date_default_timezone_set('CET');
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
		if (!(is_numeric($array[3]) && $array[3] > 1969 && $array[3] < 2039))
			return (0);
		if (preg_match("/(2[0-3]|[01][0-9]):([0-5][0-9]):([0-5][0-9])/", $array[4]) != 1)
			return (0);
		if (strlen(trim($array[4])) != 8)
			return (0);
		$time = explode(':', trim($array[4]));
		if ($time[0] < 0 || $time[0] > 23)
			return (0);
		if ($time[1] < 0 || $time[1] > 59)
			return (0);
		if ($time[2] < 0 || $time[2] > 59)
			return (0);
		return ($array);
	}
	function calc($array)
	{
		$day = $array[1];
		if ($day < 10)
			$day = "0" . $day;
		$month = check_months($array[2]) + 1;
		if ($month < 10)
			$month = "0" . $month;
		$string = $array[3] . ":" . $month . ":" . $day . " " . $array[4];
		$total = strtotime($string);
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