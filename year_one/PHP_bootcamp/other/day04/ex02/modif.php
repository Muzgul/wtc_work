<?php
	if ($_POST['login'] != "" && $_POST['oldpw'] != "" && $_POST['newpw'] != "" && $_POST['submit'] == "OK" && file_exists("../private/passwd"))
	{
		$oldpw = hash('sha256', $_POST['oldpw']);
		$newpw = hash('sha256', $_POST['newpw']);
		$content = unserialize(file_get_contents("../private/passwd"));
		if (isset($content[0]))
		{
			$result = "ERROR" . PHP_EOL;
			for ($i=0; $i < sizeof($content); $i++) { 
				if (isset($content[$i]))
				{
					if (strcmp($content[$i]['login'], $_POST['login']) == 0 && strcmp($content[$i]['passwd'], $oldpw) == 0)
					{
						$content[$i]['passwd'] = $newpw;
						file_put_contents("../private/passwd", serialize($content));
						$result = "OK" . PHP_EOL;
					}
				}
			}
		}
		else
			$result = "ERROR" . PHP_EOL;
	}
	else
	{
		$result = "ERROR" . PHP_EOL;
	}
?>
<!DOCTYPE html>
<html>
	<head>
		<title>diditwork?</title>
	</head>
	<body>
		<p><?php echo $result; ?></p>
	</body>
</html>