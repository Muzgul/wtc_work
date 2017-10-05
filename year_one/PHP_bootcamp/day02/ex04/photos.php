#!/usr/bin/php 
<?php
	if ($argc > 1)
	{
		$path = trim($argv[1]);
		$text = file_get_contents($path);
		$dom = new domDocument;
		libxml_use_internal_errors(true);
		$dom->loadHTML($text);
		libxml_clear_errors();
		$elements = $dom->getElementsByTagName('img');
		$arr = [];
		foreach ($elements as $children)
		{
			$temp = $children->getAttribute('src');
			if (strncmp($temp, $path, strlen($path)) != 0)
			{
				$temp = $path . $temp;
			}
			array_push($arr, $temp);
		}
		$temp = $_ENV['PWD'] . "/" . $path;
		echo $temp;
		print_r($arr);
		print_r($_ENV['PWD']);
	}
?>