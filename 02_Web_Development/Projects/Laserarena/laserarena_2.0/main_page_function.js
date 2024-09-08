/*

Author: Waldemar Tschernow
Date: 24.05.2020
Projekt: Website Laserarena Weiden
File: stylesheet : beinhaltet alle Funktions-Formatierungen

*/

/*///////////////////////////////////////////////////////////////*/ 
/* Hit Counter*/
function hitcounter()
{
	var today= 0, yesterday= 0, alltime= 0, online= 0;
	
	alltime++;
	online++;
	
    document.getElementById("s01").innerHTML = today;	
	document.getElementById("s02").innerHTML = yesterday;
	document.getElementById("s03").innerHTML = alltime;
	document.getElementById("s04").innerHTML = online;
}


/* Cookies*/
function removeElement() 
{
	document.getElementById("imgbox1").style.display = "none";
}