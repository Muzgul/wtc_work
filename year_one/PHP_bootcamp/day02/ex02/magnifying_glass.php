#!/usr/bin/php
<?php
	if ($argc > 1)
	{
		$file = fopen(trim($argv[1]), "r+");
		if (!$file)
		{
			echo "[ Error reading file: $argv[1] ]\n";
			exit();
		}
		$size = filesize($argv[1]);
		$text = fread($file, $size);
		fclose($file);

		$dom = new DOMDocument;
		$dom->loadHTML($text);
		$elems = $dom->getElementsByTagName('a *');
		foreach ($elems as $value) {
			$value->setAttribute('title', strtoupper($value->getAttribute('title')));
		}
		$text = $dom->saveHTML();
		echo $text;
	}
?>