function swap()
{
	var temp = document.getElementsByClassName("signup");
	for (var i = 0; i < temp.length; i++)
	{
		if (temp[i].style.display == "none")
			temp[i].style.display = "block";
		else
			temp[i].style.display = "none";
	}
	return false;
}