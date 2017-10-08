<?php
	function auth($login, $passwd)
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
		else
			return (FALSE);
	}
?>