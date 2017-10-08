<?php
	if ($_POST['login'] != "" && $_POST['passwd'] != "" && $_POST['submit'] == "OK")
	{
		if (!file_exists("../private/passwd"))
		{
			if (!file_exists("../private"))
				mkdir("../private");
			$file = fopen("../private/passwd", "w");
			fclose($file);
		}
		$pass = hash('sha256', $_POST['passwd']);
		$new = array("login" => $_POST['login'], "passwd" => $pass);
		$old = unserialize(file_get_contents("../private/passwd"));
		if (isset($old[0]))
		{
			foreach ($old as $value) {
				if (strcmp($value['login'], $new['login']) == 0)
					$new = [];
			}
		}
		else
			$old = array();
		if (sizeof($new) == 2)
		{
			array_push($old, $new);
			file_put_contents("../private/passwd", serialize($old));
			$result = "OK" . PHP_EOL;
		}else
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