<?php
/*
	mission.biedi to CFGTownGenerator
*/
$reg = '/class\x20_vehicle_[a-zA-Z0-9\.-_]*\r\n\{\r\n\t.*\r\n.*\r\n\t{\r\n\t\tPOSITION="\[(?P<loc1>[0-9\.\-]*),\x20(?P<loc2>[0-9\.\-]*),\x20(?P<loc3>[0-9\.\-]*).*\r\n\t\tTYPE="(?P<type>.*)";\r\n\t\tAZIMUT="(?P<yaw>[0-9\.\-e]*)";/';
$sourcestring = file_get_contents("mission.biedi");
preg_match_all($reg, $sourcestring, $data);

$x = $data[1];
$y = $data[2];
$z = $data[3];
$types = $data[4];
$yaw = $data[5];

for($i=0;$i<count($x);$i++) {
	$Objects[$i] = new Objects;
	$Objects[$i]->x = $x[$i];
	$Objects[$i]->y = $y[$i];
	$Objects[$i]->z = $z[$i];
	$Objects[$i]->type = $types[$i];
	$Objects[$i]->yaw = $yaw[$i];
}

/* Print out all our collected data */
echo "<pre>";
for( $i=0;$i<count($Objects);$i++) {
	echo "	class Object".$i." {<br>";
	echo "		Type=\"".$Objects[$i]->type."\";<br>";
	echo "		position[] = {".$Objects[$i]->x.",".$Objects[$i]->y.",".$Objects[$i]->z."};<br>";
	echo "		direction = ".$Objects[$i]->yaw.";<br>";
	echo "		SetZUp = 1;<br>	};<br>";
}
echo "</pre>";

/* Our class to store the objects */
class Objects {
	public $x = "";
	public $y = "";
	public $z = "";
	public $type = "";
	public $yaw = "";
}
?>