<?php
/*
	mission.biedi to CFGTownGenerator
*/
//Function to Generate Code
function GenerateCFGTown($zone) {
	//Extremely Ugly and poor Regx!
	$reg = '/class\x20_vehicle_[a-zA-Z0-9\.-_]*\r\n\{\r\n\t.*\r\n.*\r\n\t{\r\n\t\tPOSITION="\[(?P<loc1>[0-9\.\-]*),\x20(?P<loc2>[0-9\.\-]*),\x20(?P<loc3>[0-9\.\-]*).*\r\n\t\tTYPE="(?P<type>.*)";\r\n\t\tAZIMUT="(?P<yaw>[0-9\.\-e]*)";/';
	//Loop through all the zone
	for($i=0;$i<count($zone);$i++) {
		//Check if there is a file for the zone
		if(File_Exists($zone[$i][0].".biedi")) {
			//Get contents of zone file
			$sourcestring = file_get_contents($zone[$i][0].".biedi");
			preg_match_all($reg, $sourcestring, $data);
			//Collect the data
			$x = $data[1];
			$y = $data[2];
			$z = $data[3];
			$types = $data[4];
			$yaw = $data[5];
			//Start Generating class for zone
			echo "	class ".$zone[$i][0]." {<br>";
			echo "		position[] = ".$zone[$i][1].";<br>";
			echo "		size = ".$zone[$i][2].";<br><br>";
			//Generate class for building
			for($j=0;$j<count($x);$j++) {
				$tmpx = $x[$j];
				$tmpy = $y[$j];
				$tmpz = $z[$j];
				$tmptype = $types[$j];
				$tmpyaw = $yaw[$j];
				echo "		class Object".$j." {<br>";
				echo "			Type=\"".$tmptype."\";<br>";
				echo "			position[] = {".$tmpx.",".$tmpy.",".$tmpz."};<br>";
				echo "			direction = ".$tmpyaw.";<br>";
				echo "			SetZUp = 1;<br>		};<br>";
			}
			echo "	};<br>";
		}
	}
}
/*Sahrani Zones*/
$zones[0] 				= array("NWI","{3549.5293, 16948.412}","2750");;
$zones[count($zones)]	= array("EMLZ1","{9084.665, 15606.263}","4250");
$zones[count($zones)]	= array("EMLZ2","{13508.527, 16287.334}","3000");
$zones[count($zones)]	= array("EMLZ3","{17841.162, 13019.341}","2750");
$zones[count($zones)]	= array("EMLZ4","{16090.729, 9587.1191}","2000");
$zones[count($zones)]	= array("EMLZ5","{12505.881, 10952.824}","2000");
$zones[count($zones)]	= array("EMLZ6","{9737.9395, 7844.0952}","1200");
$zones[count($zones)]	= array("EMLZ7","{13373.855, 8715.9863}","1500");
$zones[count($zones)]	= array("WMLZ1","{7483.5483, 8740.6846}","2750");
$zones[count($zones)]	= array("WMLZ2","{10256.928, 10019.207}","1850");
$zones[count($zones)]	= array("WMLZ3","{12007.973, 6930.9556}","1800");
$zones[count($zones)]	= array("WMLZ4","{10791.405, 5391.6064}","1500");
$zones[count($zones)]	= array("WMLZ5","{8694.2754, 5947.1602}","1600");
$zones[count($zones)]	= array("WMLZ6","{9737.9395, 7844.0952}","1200");
$zones[count($zones)]	= array("NEI","{17719.813, 18512.668}","1800");
$zones[count($zones)]	= array("SWI","{2596.4631, 2593.689}","1900");
$zones[count($zones)]	= array("SEI","{17488.941, 3990.011}","1800");

/*Run The Generator*/
echo "<pre>";
	GenerateCFGTown($zones);
echo "</pre>";
?>