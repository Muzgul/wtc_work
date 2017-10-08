<?php
	function login($login, $passwd)
	{
		$content = unserialize(file_get_contents("../private/passwd"));
		if (isset($content[0]))
		{
			for ($i=0; $i < sizeof($content); $i++) { 
				if (strcmp($content[$i]['login'], $login) == 0)
				{
					$passwd = hash("sha256", $passwd);
					if (strcmp($content[$i]['passwd'], $passwd) == 0)
						return (TRUE);
				}
			}
		}
		return (FALSE);
	}
	function signup($login, $passwd)
	{
		if (!file_exists("../private/passwd"))
		{
			if (!file_exists("../private"))
				mkdir("../private");
			$file = fopen("../private/passwd", "w");
			fclose($file);
		}
		$pass = hash('sha256', $passwd);
		$new = array("login" => $login, "passwd" => $pass);
		$old = unserialize(file_get_contents("../private/passwd"));
		if (isset($old[0]))
		{
			foreach ($old as $value) 
			{
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
			return (TRUE);
		}				
		return (FALSE);
	}
?>