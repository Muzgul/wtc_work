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


		$dom = new domDocument;
		$dom->loadHTML($text);
		$elements = $dom->getElementsByTagName('a');
		foreach ($elements as $elem)
		{
				$children = $elem->getElementsByTagName('*');
				$string = "";
				foreach ($children as $child)
				{
					$child->setAttribute('title', strtoupper($child->getAttribute('title')));
					$string .= $dom->saveHTML($child);
				}
				$elem->nodeValue = strtoupper($elem->nodeValue) . $string;
				$elem->setAttribute('title', strtoupper($elem->getAttribute('title')));
		}
		$return = $dom->saveHTML();
		echo htmlspecialchars_decode($return);
	}
?>