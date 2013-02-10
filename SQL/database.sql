/*
Navicat MySQL Data Transfer

Source Server         : dz
Source Server Version : 50524
Source Host           : localhost:3306
Source Database       : hivemind

Target Server Type    : MYSQL
Target Server Version : 50524
File Encoding         : 65001

Date: 2013-02-09 19:52:07
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `character_data`
-- ----------------------------
DROP TABLE IF EXISTS `character_data`;
CREATE TABLE `character_data` (
  `CharacterID` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `PlayerUID` varchar(32) NOT NULL,
  `InstanceID` int(11) NOT NULL,
  `Datestamp` datetime DEFAULT NULL,
  `LastLogin` datetime NOT NULL,
  `Inventory` text,
  `Backpack` text,
  `Worldspace` varchar(128) NOT NULL DEFAULT '[]',
  `Medical` varchar(256) NOT NULL DEFAULT '[]',
  `Alive` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `Generation` int(11) unsigned NOT NULL DEFAULT '1',
  `LastAte` datetime NOT NULL,
  `LastDrank` datetime NOT NULL,
  `KillsZ` int(11) unsigned NOT NULL DEFAULT '0',
  `HeadshotsZ` int(11) unsigned NOT NULL DEFAULT '0',
  `DistanceFoot` int(11) NOT NULL DEFAULT '0',
  `Duration` int(11) unsigned NOT NULL DEFAULT '0',
  `CurrentState` varchar(128) NOT NULL DEFAULT '[]',
  `KillsH` int(11) unsigned NOT NULL DEFAULT '0',
  `Model` varchar(64) NOT NULL DEFAULT '"Survivor2_DZ"',
  `KillsB` int(11) unsigned NOT NULL DEFAULT '0',
  `Humanity` int(11) NOT NULL DEFAULT '2500',
  PRIMARY KEY (`CharacterID`),
  KEY `CharFetch` (`PlayerUID`,`Alive`) USING BTREE
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of character_data
-- ----------------------------

-- ----------------------------
-- Table structure for `dbver`
-- ----------------------------
DROP TABLE IF EXISTS `dbver`;
CREATE TABLE `dbver` (
  `version` mediumint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`version`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of dbver
-- ----------------------------
INSERT INTO `dbver` VALUES ('123');

-- ----------------------------
-- Table structure for `object_classes`
-- ----------------------------
DROP TABLE IF EXISTS `object_classes`;
CREATE TABLE `object_classes` (
  `Classname` varchar(32) NOT NULL DEFAULT '',
  `Chance` decimal(6,5) NOT NULL DEFAULT '0.00000',
  `MaxNum` tinyint(1) unsigned NOT NULL DEFAULT '0',
  `Damage` varchar(20) NOT NULL DEFAULT '0',
  `Hitpoints` varchar(999) NOT NULL DEFAULT '[]',
  `MaxFuel` varchar(10) DEFAULT '0',
  `Inventory` text,
  PRIMARY KEY (`Classname`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of object_classes
-- ----------------------------
INSERT INTO `object_classes` VALUES ('V3S_Civ', '0.50000', '3', '0.75', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Ikarus', '0.00000', '0', '0.21', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Old_bike_TK_INS_EP1', '1.00000', '3', '0.05', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Old_bike_TK_CIV_EP1', '0.50000', '23', '0.01', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('TT650_Civ', '0.00000', '0', '0.10', '[[\"wheel_1_1_steering\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('TT650_Ins', '0.00000', '0', '0.10', '[[\"wheel_1_1_steering\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('tractor', '0.11110', '8', '0.20', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('UH1H_DZ', '0.05000', '20', '0.90', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('ATV_CZ_EP1', '0.00000', '0', '0.15', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Mi17_DZ', '1.00000', '0', '0', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('An2_TK_EP1', '0.00000', '0', '0.05', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('HMMWV_Ambulance_CZ_DES_EP1', '0.00000', '0', '0', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('policecar', '1.00000', '1', '0.80', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('ATV_US_EP1', '0.03910', '10', '0.30', '[[\"wheel_1_1_steering\",0.1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('PBX', '0.18520', '6', '0.10', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Smallboat_1', '0.00000', '0', '0.03', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Smallboat_2', '0.00000', '0', '0.10', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('S1203_TK_CIV_EP1', '1.00000', '0', '0.70', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('BAF_Offroad_W', '0.00000', '0', '0.8', '[[\"wheel_1_1_steering\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('hilux1_civil_3_open', '0.00000', '0', '0.33', '[[\"wheel_1_1_steering\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('car_hatchback', '0.00000', '0', '0.20', '[[\"wheel_1_1_steering\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Volha_2_TK_CIV_EP1', '0.00000', '0', '0.50', '[[\"wheel_1_1_steering\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Lada2', '0.00000', '0', '0.35', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Ural_TK_CIV_EP1', '0.00000', '0', '0.85', '[[\"glass1\",1],[\"glass2\",0.4],[\"glass3\",1],[\"glass4\",0.4],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_3_steering\",0.4],[\"wheel_2_3_steering\",0.4],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",0.4],[\"motor\",0.8],[\"sklo predni P\",0.5],[\"karoserie\",0.853],[\"palivo\",0.5]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('car_sedan', '0.00000', '0', '0.25', '[[\"wheel_1_1_steering\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('AN2_DZ', '0.00000', '0', '0.90', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('AH6X_DZ', '0.05000', '5', '0.5', ' [[\"motor\",1],[\"karoserie\",1],[\"elektronika\",0.8]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('BAF_Offroad_D', '0.00000', '0', '0', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('datsun1_civil_2_covered', '0.00000', '0', '0.40', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('SkodaGreen', '1.00000', '1', '0.40', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('UAZ_CDF', '0.04410', '4', '0.70', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('VWGolf', '0.20000', '20', '0.35', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Ikarus_TK_CIV_EP1', '0.00000', '1', '0.2', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('datsun1_civil_1_open', '0.00000', '0', '0.3', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('SkodaBlue', '0.09330', '15', '0.3', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Lada1_TK_CIV_EP1', '1.00000', '3', '0.4', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('hilux1_civil_1_open', '0.00000', '0', '0.6', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Lada2_TK_CIV_EP1', '0.00000', '0', '0.4', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('hilux1_civil_2_covered', '0.00000', '0', '0.4', '[]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('UralCivil', '0.00000', '0', '0.75', '[[\"glass1\",1],[\"glass2\",0.4],[\"glass3\",1],[\"glass4\",0.4],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_3_steering\",0.4],[\"wheel_2_3_steering\",0.4],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",0.4],[\"motor\",0.8],[\"sklo predni P\",0.5],[\"karoserie\",0.853],[\"palivo\",0.5]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('M1030_US_DES_EP1', '1.00000', '2', '0.4', '[[\"wheel_1_1_steering\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Volha_1_TK_CIV_EP1', '0.00000', '0', '0.3', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('LandRover_TK_CIV_EP1', '1.00000', '1', '0.8', '[[\"glass1\",1],[\"glass2\",0.4],[\"glass3\",1],[\"glass4\",0.4],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_3_steering\",0.4],[\"wheel_2_3_steering\",0.4],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",0.4],[\"motor\",0.8],[\"sklo predni P\",0.5],[\"karoserie\",0.853],[\"palivo\",0.5]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('LadaLM', '0.00000', '0', '0.5', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Lada1', '0.00000', '0', '0.4', '[[\"wheel_1_1_steering\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('UAZ_Unarmed_UN_EP1', '0.00000', '0', '0.7', '[[\"glass1\",1],[\"glass2\",0.4],[\"glass3\",1],[\"glass4\",0.4],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_3_steering\",0.4],[\"wheel_2_3_steering\",0.4],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",0.4],[\"motor\",0.8],[\"sklo predni P\",0.5],[\"karoserie\",0.853],[\"palivo\",0.5]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Ural_INS', '1.00000', '3', '0.8', '[[\"glass1\",1],[\"glass2\",0.4],[\"glass3\",1],[\"glass4\",0.4],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_3_steering\",0.4],[\"wheel_2_3_steering\",0.4],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",0.4],[\"motor\",0.8],[\"sklo predni P\",0.5],[\"karoserie\",0.853],[\"palivo\",0.5]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Land_A_Hospital', '1.00000', '6', '0', '[]', '0', null);
INSERT INTO `object_classes` VALUES ('Land_A_FuelStation_Feed', '0.00000', '0', '0', '[]', '0', null);
INSERT INTO `object_classes` VALUES ('Land_Mil_ControlTower', '1.00000', '3', '0', '[]', '0', null);
INSERT INTO `object_classes` VALUES ('CampEast', '0.00000', '0', '0', '[]', '0', null);
INSERT INTO `object_classes` VALUES ('Land_A_Crane_02b', '0.00000', '0', '0', '[]', '0', null);
INSERT INTO `object_classes` VALUES ('Land_A_GeneralStore_01', '1.00000', '1', '0', '[]', '0', null);
INSERT INTO `object_classes` VALUES ('Land_A_GeneralStore_01a', '1.00000', '17', '0', '[]', '0', null);
INSERT INTO `object_classes` VALUES ('Land_Shed_Ind02', '1.00000', '3', '0', '[]', '0', null);
INSERT INTO `object_classes` VALUES ('Land_Mil_Guardhouse', '1.00000', '1', '0', '[]', '0', null);
INSERT INTO `object_classes` VALUES ('Land_Mil_Barracks_i', '1.00000', '4', '0', '[]', '0', null);
INSERT INTO `object_classes` VALUES ('Old_moto_TK_Civ_EP1', '0.05980', '10', '.10', '[[\"wheel_1_1_steering\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('Mi17_Civilian_DZ', '0.50000', '5', '0', '[]', '.2', '[]');
INSERT INTO `object_classes` VALUES ('TT650_TK_EP1', '0.00000', '0', '0', '[[\"wheel_1_1_steering\",1]]', '0.2', '[]');
INSERT INTO `object_classes` VALUES ('SUV_TK_EP1', '1.00000', '1', '0.1', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '0', null);
INSERT INTO `object_classes` VALUES ('HMMWV_DES_EP1_DZ', '0.00000', '0', '.1', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"sklo predni P\",1],[\"glass1\",1],[\"glass3\",1]]', '.5', '[]');
INSERT INTO `object_classes` VALUES ('S1203_ambulance_EP1', '0.00000', '0', '.1', '[]', '0', null);
INSERT INTO `object_classes` VALUES ('', '0.00000', '0', '0', '[]', '0', null);

-- ----------------------------
-- Table structure for `object_data`
-- ----------------------------
DROP TABLE IF EXISTS `object_data`;
CREATE TABLE `object_data` (
  `ObjectID` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `ObjectUID` bigint(20) NOT NULL DEFAULT '0',
  `Instance` int(11) NOT NULL,
  `Classname` varchar(64) DEFAULT NULL,
  `Datestamp` datetime NOT NULL,
  `CharacterID` int(11) unsigned NOT NULL DEFAULT '0',
  `Worldspace` varchar(128) NOT NULL DEFAULT '[]',
  `Inventory` text,
  `Hitpoints` varchar(512) NOT NULL DEFAULT '[]',
  `Fuel` double(13,5) NOT NULL DEFAULT '1.00000',
  `Damage` double(13,5) NOT NULL DEFAULT '0.00000',
  `last_updated` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `Landmark` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`ObjectID`),
  KEY `ObjectUID` (`ObjectUID`),
  KEY `Instance` (`Instance`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of object_data
-- ----------------------------

-- ----------------------------
-- Table structure for `object_spawns`
-- ----------------------------
DROP TABLE IF EXISTS `object_spawns`;
CREATE TABLE `object_spawns` (
  `ObjectUID` varchar(20) NOT NULL DEFAULT '',
  `Classname` varchar(32) DEFAULT NULL,
  `Worldspace` varchar(64) DEFAULT NULL,
  `Description` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`ObjectUID`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC;

-- ----------------------------
-- Records of object_spawns
-- ----------------------------
INSERT INTO `object_spawns` VALUES ('11183', 'AH6X_EP1', '[0,[12140.965, 17707.445,0]]', ' Cabo Santa Lucia AH6 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11182', 'AH6X_EP1', '[0,[12072.036, 17725.236,0]]', ' Cabo Santa Lucia AH6 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11181', 'AH6X_EP1', '[0,[12209.184, 17631.158,0]]', ' Cabo Santa Lucia AH6 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11180', 'AH6X_EP1', '[0,[12140.348, 17549.396,0]]', ' Cabo Santa Lucia AH6 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11155', 'UH1H_DZ', '[0,[9768.0215, 9965.8379,0]]', ' Paraiso UH1 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11156', 'UH1H_DZ', '[0,[9961.668, 9983.123,0]]', ' Paraiso UH1 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11157', 'UH1H_DZ', '[0,[9255.793, 10021.686,0]]', ' Paraiso UH1 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11158', 'UH1H_DZ', '[270,[9671.8457, 9804.8936,0]]', ' Paraiso UH1 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11159', 'UH1H_DZ', '[180,[9585.0273, 9819.3047,0]]', ' Paraiso UH1 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11160', 'UH1H_DZ', '[180,[2753.8005, 2672.1826,0]]', ' Rahmadi UH1 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11161', 'UH1H_DZ', '[125,[2921.6829, 3057.4292,0]]', ' Rahmadi UH1 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11162', 'UH1H_DZ', '[245,[4938.4893, 15473.471,0]]', ' Isla del Vida UH1 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11163', 'UH1H_DZ', '[75,[4908.8252, 15834.633,0]]', ' Isla del Vida UH1 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11164', 'UH1H_DZ', '[75,[5411.083, 15765.569,0]]', ' Isla del Vida UH1 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11165', 'UH1H_DZ', '[75,[4555.3745, 15290.068,0]]', ' Isla del Vassal UHi Spawn 1');
INSERT INTO `object_spawns` VALUES ('11166', 'UH1H_DZ', '[75,[4488.6772, 15483.641,0]]', ' Isla del Vassal UH1 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11167', 'UH1H_DZ', '[75,[4391.8174, 15808.56,0]]', ' Isla del Vassal UH1 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11168', 'UH1H_DZ', '[105,[11874.796, 15371.278,0]]', ' Pesadas UH1 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11169', 'UH1H_DZ', '[185,[11871.795, 15482.457,0]]', ' Pesadas UH1 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11170', 'UH1H_DZ', '[290,[11997.843, 15418.979,0]]', ' Pesadas UH1 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11171', 'UH1H_DZ', '[290,[11944.572, 15296.531,0]]', ' Pesadas UH1 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11172', 'UH1H_DZ', '[290,[11832.779, 15285.64,0]]', ' Pesadas UH1 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11173', 'UH1H_DZ', '[0,[12406.447, 17468.381,0]]', ' Cabo Santa Lucia UH1 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11174', 'UH1H_DZ', '[0,[12140.722, 17757.068,0]]', ' Cabo Santa Lucia UH1 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11175', 'UH1H_DZ', '[0,[12202.939, 17547.191,0]]', ' Cabo Santa Lucia UH1 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11176', 'UH1H_DZ', '[0,[12090.093, 17750.174,0]]', ' Cabo Santa Lucia UH1 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11177', 'UH1H_DZ', '[0,[12064.701, 17675.529,0]]', ' Cabo Santa Lucia UH1 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11178', 'UH1H_DZ', '[0,[12512.527, 17672.982,0]]', ' Cabo Santa Lucia UH1 Spawn 6');
INSERT INTO `object_spawns` VALUES ('11179', 'AH6X_EP1', '[270,[12077.461, 17635.549,0]]', ' Cabo Santa Lucia AH6 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11052', 'SUV_TK_EP1', '[180,[13142.78, 8861.9707, 1.5258789e-005]]', 'SUV_TK_EP1 test');
INSERT INTO `object_spawns` VALUES ('11053', 'LandRover_TK_CIV_EP1', '[180,[13331.444, 9206.9463, -4.2915344e-006]]', '');
INSERT INTO `object_spawns` VALUES ('11054', 'UH1H_DZ', '[180,[13268.191, 9124.9668, 0.00012159348]]', '');
INSERT INTO `object_spawns` VALUES ('11055', 'Old_bike_TK_CIV_EP1', '[180,[13575.375, 9107.1074, 1.335144e-005]]', '');
INSERT INTO `object_spawns` VALUES ('11056', 'Ikarus_TK_CIV_EP1', '[180,[13464.382, 8947.2627, 0]]', '');
INSERT INTO `object_spawns` VALUES ('11057', 'PBX', '[180,[13069.369, 9068.0039, 0.00023293495]]', '');
INSERT INTO `object_spawns` VALUES ('11058', 'PBX', '[180,[13084.14, 9069.8037, 0.00015997887]]', '');
INSERT INTO `object_spawns` VALUES ('11068', 'Land_A_GeneralStore_01a', '[180,[9389.5566, 5970.1074, 0.060658392]]', '');
INSERT INTO `object_spawns` VALUES ('11061', 'Land_Mil_ControlTower', '[0,[12563.634, 8515.9219, -2.8610229e-005]]', '');
INSERT INTO `object_spawns` VALUES ('11062', 'Land_Mil_ControlTower', '[180,[9916.1045, 10084.415]]', '');
INSERT INTO `object_spawns` VALUES ('11067', 'Land_A_GeneralStore_01a', '[362.26242,[7735.8276, 6370.5557, 0.030484308]]', 'General Store @ Arcadia');
INSERT INTO `object_spawns` VALUES ('11064', 'Land_A_GeneralStore_01', '[165,[8261.416, 9185, 1.9073486e-006]]', '');
INSERT INTO `object_spawns` VALUES ('11065', 'Land_A_Hospital', '[33,[8192.9824, 9172.7441, 1.9073486e-005]]', '');
INSERT INTO `object_spawns` VALUES ('11066', 'Land_A_GeneralStore_01a', '[0,[9017.1807, 8208.1797,0]]', 'General Store @ Cayo');
INSERT INTO `object_spawns` VALUES ('11184', 'UH1H_DZ', '[270,[18176.949, 18094.736,0]]', ' Antigua UH1 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11185', 'UH1H_DZ', '[270,[17399.58, 17974.721,0]]', ' Antigua UH1 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11186', 'UH1H_DZ', '[270,[17936.225, 18415.6,0]]', ' Antigua UH1 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11187', 'UH1H_DZ', '[270,[18057.014, 18672.379,0]]', ' Antigua UH1 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11069', 'Land_A_GeneralStore_01a', '[-199.76781,[10907.879, 5053.5337, 0.11288104]]', 'General Store @ Iguana');
INSERT INTO `object_spawns` VALUES ('11070', 'Land_A_GeneralStore_01a', '[-222.60593,[11565.362, 5814.4839,  0.07]]', 'General Store @ Dolores #1');
INSERT INTO `object_spawns` VALUES ('11071', 'Land_A_GeneralStore_01a', '[-245.12224,[11473.569, 5863.9575, 0.25015035]]', 'General Store @ Dolores #2 -- clipping tree, sidewalk doesnt line up');
INSERT INTO `object_spawns` VALUES ('11072', 'Land_A_GeneralStore_01a', '[0,[11264.242, 5915.2656, 3.8146973e-006]]', 'General Store @ Dolores #3');
INSERT INTO `object_spawns` VALUES ('11090', 'Land_A_Hospital', '[-67.423927,[12729.122, 8084.4761, 0.039629139]]', 'Hospital Between Ortega and Corazol');
INSERT INTO `object_spawns` VALUES ('11073', 'Land_A_GeneralStore_01a', '[626.56323,[12674.209, 6817.1396, -0.04966826]]', 'General Store @ Ortego #2');
INSERT INTO `object_spawns` VALUES ('11074', 'Land_A_GeneralStore_01a', '[-120.88735,[12139.657, 7269.5229, -2.0980835e-005]]', 'General Store @ Ortego #1');
INSERT INTO `object_spawns` VALUES ('11075', 'Land_A_Hospital', '[270,[12106.365,17752.197,0]]', 'mike d');
INSERT INTO `object_spawns` VALUES ('11076', 'AH6X_DZ', '[270,[12140.685,17729.875,0]]', 'mike d');
INSERT INTO `object_spawns` VALUES ('11077', 'Land_Shed_Ind02', '[90,[12512.091,17698.373,0]]', 'mike d');
INSERT INTO `object_spawns` VALUES ('11078', 'Land_Mil_Guardhouse', '[90,[12091.051,17624.527,0]]', 'mike d');
INSERT INTO `object_spawns` VALUES ('11079', 'Land_Shed_Ind02', '[90,[12512.078,17709.75,0]]', 'mike d');
INSERT INTO `object_spawns` VALUES ('11080', 'Land_Shed_Ind02', '[90,[12512.058,17721.072,0]]', 'mike d');
INSERT INTO `object_spawns` VALUES ('11081', 'Land_A_GeneralStore_01a', '[305,[12499.264,14903.036,0]]', 'Market Esponia');
INSERT INTO `object_spawns` VALUES ('11082', 'Land_A_GeneralStore_01a', '[280,[17369.279,14201.62,0]]', 'Market Masbete');
INSERT INTO `object_spawns` VALUES ('11083', 'Land_A_GeneralStore_01a', '[100,[18932.539,13970.487,0]]', 'Market Pita');
INSERT INTO `object_spawns` VALUES ('11084', 'Land_A_Hospital', '[220,[18830.082,14205.258,0]]', 'Hospital Pita');
INSERT INTO `object_spawns` VALUES ('11085', 'Land_Mil_ControlTower', '[312,[19253.377,13880.749,0]]', 'ACT Pita Airfield');
INSERT INTO `object_spawns` VALUES ('11086', 'Land_Mil_Barracks_i', '[180,[12214.938,17758.033,0]]', 'Enterable Barracks Cabo Santa Lucia 1');
INSERT INTO `object_spawns` VALUES ('11087', 'Land_Mil_Barracks_i', '[180,[12215.99,17736.205,0]]', 'Enterable Barracks Cabo Santa Lucia 2');
INSERT INTO `object_spawns` VALUES ('11088', 'Land_Mil_Barracks_i', '[270,[12113.604,17549.924,0]]', 'Enterable Barracks Cabo Santa Lucia 3');
INSERT INTO `object_spawns` VALUES ('11089', 'Land_Mil_Barracks_i', '[270,[12128.973,17549.895,0]]', 'Enterable Barracks Cabo Santa Lucia 4');
INSERT INTO `object_spawns` VALUES ('11091', 'Land_A_GeneralStore_01a', '[93.210449,[12998.923, 8514.375, 0.090546116]]', 'Market @ Corazol (West Side) -- sits too high...');
INSERT INTO `object_spawns` VALUES ('11092', 'Land_A_GeneralStore_01a', '[226.64822,[13528.492, 9201.2012, 7.6293945e-006]]', 'Market @ Corazol (Noreast Side)');
INSERT INTO `object_spawns` VALUES ('11093', 'Land_A_Hospital', '[-168.57401,[10542.361, 8974.7695, 0.0252079]]', 'Hospital @ Paraiso');
INSERT INTO `object_spawns` VALUES ('11094', 'Land_A_GeneralStore_01a', '[159.28708,[10765.301, 9327.9922, -0.03610266]]', 'Market @ Paraiso (East Side)');
INSERT INTO `object_spawns` VALUES ('11095', 'Land_A_GeneralStore_01a', '[260.53879,[10526.049, 9705.085,0]]', 'Market @ Paraiso (Northern)');
INSERT INTO `object_spawns` VALUES ('11096', 'Land_A_GeneralStore_01a', '[92,[14110,12540,0]]', 'Market Bagango Delete a Poss. Move');
INSERT INTO `object_spawns` VALUES ('11097', 'Land_A_Hospital', '[350,[14058.509,12469.194,0]]', 'Hospital Bagango');
INSERT INTO `object_spawns` VALUES ('11098', 'VWGolf', '[72.605347,[11208.586, 8845.0732, 3.0517578e-005]]', 'vw golf @ bonanza (East)');
INSERT INTO `object_spawns` VALUES ('11099', 'VWGolf', '[0,[11555.468, 9199.0186, 1.5258789e-005]]', 'vw golf @ corinto (North)');
INSERT INTO `object_spawns` VALUES ('11100', 'VWGolf', '[-50.632935,[10606.456, 9365.6699, 4.5776367e-005]]', 'vw golf @ paraiso (Central)');
INSERT INTO `object_spawns` VALUES ('11101', 'VWGolf', '[180,[9163.5713, 8260.0605, 3.0517578e-005]]', 'vwgolf @ somato (Central)');
INSERT INTO `object_spawns` VALUES ('11102', 'VWGolf', '[-176.97333,[8192.458, 8861.873, 9.5367432e-006]]', 'vwgolf @ chantico (South #1)');
INSERT INTO `object_spawns` VALUES ('11103', 'VWGolf', '[3.9337673,[8198.4707, 8861.4111, 5.7220459e-006]]', 'vwgolf @ chantico (South #2)');
INSERT INTO `object_spawns` VALUES ('11104', 'VWGolf', '[5.7347598,[7628.5347, 9093.1201, 4.3869019e-005]]', 'vwgolf @ ambergris (West)');
INSERT INTO `object_spawns` VALUES ('11105', 'VWGolf', '[-48,[8055.5059, 9356.1152, 1.5735626e-005]]', 'vwgolf @ balmopan (Center)');
INSERT INTO `object_spawns` VALUES ('11106', 'VWGolf', '[14,[7666.0435, 6250.6265, 4.7683716e-006]]', 'vwgolf @ arcadia (South)');
INSERT INTO `object_spawns` VALUES ('11107', 'VWGolf', '[1,[9227.4912, 5840.8984, 3.8146973e-006]]', 'vwgolf @ cayo (Southwest #1)');
INSERT INTO `object_spawns` VALUES ('11108', 'VWGolf', '[-180,[9233.6064, 5841.6069,0]]', 'vwgolf @ cayo southwest #2');
INSERT INTO `object_spawns` VALUES ('11109', 'VWGolf', '[79,[9265.5107, 5166.4258, 1.9073486e-006]]', 'vwgolf @ tiberia (Southwest)');
INSERT INTO `object_spawns` VALUES ('11110', 'VWGolf', '[-255,[10640.636, 4765.0474, 3.8146973e-006]]', 'vwgolf @ iguana (South)');
INSERT INTO `object_spawns` VALUES ('11111', 'VWGolf', '[28,[10703.331, 5153.8315, 1.9073486e-006]]', 'vwgolf @ iguana (North)');
INSERT INTO `object_spawns` VALUES ('11112', 'VWGolf', '[-102,[11233.393, 5248.0547, 1.1444092e-005]]', 'vwgolf @parato (Southwest)');
INSERT INTO `object_spawns` VALUES ('11113', 'VWGolf', '[0,[11630.577, 5948.3574,0]]', 'vwgolf @dolores (Center)');
INSERT INTO `object_spawns` VALUES ('11114', 'VWGolf', '[-138,[11577.93, 6138.7817, 5.7220459e-006]]', 'vwgolf @dolores (North, Street Parked)');
INSERT INTO `object_spawns` VALUES ('11115', 'VWGolf', '[-29,[12320.95, 7063.3037, 5.1498413e-005]]', 'vwgolf @ ortego (Center)');
INSERT INTO `object_spawns` VALUES ('11116', 'VWGolf', '[44,[14436.021, 8526.9678, 5.531311e-005]]', 'vwgolf @gaula (South)');
INSERT INTO `object_spawns` VALUES ('11117', 'VWGolf', '[0,[16474.428, 9267.4219, 3.1471252e-005]]', 'vwgolf @Everon South');
INSERT INTO `object_spawns` VALUES ('11118', 'VWGolf', '[-48,[14401.734, 10869.619, 0.00012207031]]', 'vwgolf @obregan (Center)');
INSERT INTO `object_spawns` VALUES ('11119', 'VWGolf', '[-15,[13285.322, 11397.932, 5.9127808e-005]]', 'vwgolf @mercalillo (Center)');
INSERT INTO `object_spawns` VALUES ('11120', 'VWGolf', '[0,[14134.22, 12557.956,0]]', 'vwgolf @bagango (West, Garagad)');
INSERT INTO `object_spawns` VALUES ('11121', 'VWGolf', '[-37,[17357.977, 14280.118, 3.0517578e-005]]', 'vwgolf @masbete (North)');
INSERT INTO `object_spawns` VALUES ('11122', 'VWGolf', '[8,[12681.122, 15092.89,0]]', 'vwgolf @eponia (East)');
INSERT INTO `object_spawns` VALUES ('11123', 'VWGolf', '[0,[10611.216, 16147.297, 2.4795532e-005]]', 'vwgolf @mastaredo (Center)');
INSERT INTO `object_spawns` VALUES ('11124', 'VWGolf', '[220,[7759.1118, 15772.262, 1.335144e-005]]', 'vwgolf @ hunapu (Center)');
INSERT INTO `object_spawns` VALUES ('11125', 'AH6X_DZ', '[0,[9840.2432,9957.749,0]]', 'Paraiso AH6 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11126', 'AH6X_DZ', '[270,[9696.9473,9804.5547,0]]', 'Paraiso AH6 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11127', 'AH6X_DZ', '[0,[9874.8291,9982.8799,0]]', 'Paraiso AH6 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11128', 'AH6X_DZ', '[0,[10372.727,10141.317,0]]', 'Paraiso AH6 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11129', 'AH6X_DZ', '[0,[9255.8135,10144.221,0]]', 'Paraiso AH6 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11130', 'AH6X_DZ', '[0,[9392.167,9971.4531,0]]', 'Paraiso AH6 Spawn 6');
INSERT INTO `object_spawns` VALUES ('11131', 'AH6X_DZ', '[40,[19226.57,13891.751,0]]', 'Pita AH6 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11132', 'AH6X_DZ', '[40,[19285.365,13887.885,0]]', 'Pita AH6 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11133', 'AH6X_DZ', '[40,[19268.947,13903.275,0]]', 'Pita AH6 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11134', 'AH6X_DZ', '[40,[18640.467,14511.408,0]]', 'Pita AH6 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11135', 'AH6X_DZ', '[40,[19130.715,13957.444,0]]', 'Pita AH6 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11136', 'AH6X_DZ', '[40,[18976.715,14217.056,0]]', 'Pita AH6 Spawn 6');
INSERT INTO `object_spawns` VALUES ('11137', 'AH6X_DZ', '[175,[18201.971,17994.227,0]]', 'Antigua AH6 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11138', 'AH6X_DZ', '[175,[18022.094,18837.639,0]]', 'Antigua AH6 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11139', 'AH6X_DZ', '[175,[17740.158,18293.775,0]]', 'Antigua AH6 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11140', 'AH6X_DZ', '[175,[17304.639,17912.613,0]]', 'Antigua AH6 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11141', 'AH6X_DZ', '[195,[12012.314,15462.838,0]]', 'Pesadas AH6 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11142', 'AH6X_DZ', '[195,[11912.08,15447.997,0]]', 'Pesadas AH6 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11143', 'AH6X_DZ', '[195,[11958.771,15365.646,0]]', 'Pesadas AH6 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11144', 'AH6X_DZ', '[195,[11847.103,15296.562,0]]', 'Pesadas AH6 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11145', 'AH6X_DZ', '[0,[4912.7061,15473.937,0]]', 'Isla del Vida AH6 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11146', 'AH6X_DZ', '[0,[4955.9854,15747.413,0]]', 'Isla del Vida AH6 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11147', 'AH6X_DZ', '[335,[4980.5352,16075.607,0]]', 'Isla del Vida AH6 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11148', 'AH6X_DZ', '[45,[4417.8525,15806.573,0]]', 'Isla del Vassal AH6 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11149', 'AH6X_DZ', '[45,[4421.7549,15556.715,0]]', 'Isla del Vassal AH6 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11150', 'AH6X_DZ', '[150,[4575.2319,15274.136,0]]', 'Isla del Vassal AH6 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11151', 'AH6X_DZ', '[185,[2549.7756,2990.8325,0]]', 'Rahmadi AH6 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11152', 'AH6X_DZ', '[230,[3131.946,2728.2703,0]]', 'Rahmadi AH6 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11153', 'AH6X_DZ', '[255,[2907.343,2836.1133,0]]', 'Rahmadi AH6 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11154', 'AH6X_DZ', '[255,[7647.4175,6233.5459,0]]', 'Arcadi AH6 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11188', 'UH1H_DZ', '[270,[17878.91, 18163.469,0]]', ' Antigua UH1 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11189', 'UH1H_DZ', '[45,[19202.479, 13916.8,0]]', ' Pita UH1 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11190', 'UH1H_DZ', '[315,[19307.605, 13894.47,0]]', ' Pita UH1 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11191', 'UH1H_DZ', '[315,[19291.564, 13944.055,0]]', ' Pita UH1 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11192', 'UH1H_DZ', '[40,[19093.432, 14121.464,0]]', ' Pita UH1 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11193', 'UH1H_DZ', '[40,[18675.594, 14483.003,0]]', ' Pita UH1 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11194', 'UH1H_DZ', '[90,[2543.7949, 2539.1309,0]]', ' Rahmadi UH1 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11195', 'UH1H_DZ', '[35,[3050.2959, 2648.313,0]]', ' Rahmadi UH1 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11196', 'UH1H_DZ', '[125,[3364.74, 2921.0156,0]]', ' Rahmadi UH1 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11197', 'Mi17_Civilian_DZ', '[0,[2539.6934, 2925.6006,0]]', ' Rahmadi Mi17 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11198', 'Mi17_Civilian_DZ', '[35,[3007.8516, 2577.4023,0]]', ' Rahmadi Mi17 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11199', 'Mi17_Civilian_DZ', '[0,[2549.3755, 2416.5479,0]]', ' Rahmadi Mi17 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11200', 'Mi17_Civilian_DZ', '[0,[3336.8044, 2426.283,0]]', ' Rahmadi Mi17 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11201', 'Mi17_Civilian_DZ', '[345,[18081.51, 18565.043,0]]', ' Antigua Mi17 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11202', 'Mi17_Civilian_DZ', '[345,[18157.979, 18183.965,0]]', ' Antigua Mi17 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11203', 'Mi17_Civilian_DZ', '[345,[17490.604, 18228.338,0]]', ' Antigua Mi17 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11204', 'Mi17_Civilian_DZ', '[345,[18305.705, 18085.648,0]]', ' Antigua Mi17 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11205', 'Mi17_Civilian_DZ', '[0,[12105.221, 17664.307,0]]', ' Cabo Santa Lucia Mi17 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11206', 'Mi17_Civilian_DZ', '[0,[12068.168, 17571.033,0]]', ' Cabo Santa Lucia Mi17 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11207', 'Mi17_Civilian_DZ', '[0,[12206.876, 17479.082,0]]', ' Cabo Santa Lucia Mi17 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11208', 'Mi17_Civilian_DZ', '[230,[12321.407, 17563.324,0]]', ' Cabo Santa Lucia Mi17 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11209', 'Mi17_Civilian_DZ', '[230,[12452.358, 17640.217,0]]', ' Cabo Santa Lucia Mi17 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11210', 'Mi17_Civilian_DZ', '[230,[12582.212, 17756.256,0]]', ' Cabo Santa Lucia Mi17 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11211', 'Mi17_Civilian_DZ', '[290,[11886.513, 15285.516,0]]', ' Pesadas Mi17 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11212', 'Mi17_Civilian_DZ', '[10,[11939.032, 15397.446,0]]', ' Pesadas Mi17 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11213', 'Mi17_Civilian_DZ', '[10,[11988.927, 15395.191,0]]', ' Pesadas Mi17 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11214', 'Mi17_Civilian_DZ', '[10,[11958.975, 15443.094,0]]', ' Pesadas Mi17 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11215', 'Mi17_Civilian_DZ', '[10,[11888.932, 15453.461,0]]', ' Pesadas Mi17 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11216', 'Mi17_Civilian_DZ', '[10,[19311.402, 14004.939,0]]', ' Pita Mi17 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11217', 'Mi17_Civilian_DZ', '[10,[19011.9, 14311.271,0]]', ' Pita Mi17 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11218', 'Mi17_Civilian_DZ', '[10,[18739.82, 14425.946,0]]', ' Pita Mi17 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11219', 'Mi17_Civilian_DZ', '[10,[19357.648, 13783.67,0]]', ' Pita Mi17 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11220', 'Mi17_Civilian_DZ', '[310,[19154.393, 14065.777,0]]', ' Pita Mi17 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11221', 'Mi17_Civilian_DZ', '[310,[8189.0264, 16992.965,0]]', ' Selva Outpost Mi17 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11222', 'Mi17_Civilian_DZ', '[310,[8213.5244, 17071.598,0]]', ' Selva Outpost Mi17 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11223', 'AH6X_EP1', '[230,[8206.0469, 17038.66,0]]', ' Selva Outpost AH6 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11224', 'AH6X_EP1', '[20,[8230.9854, 17029.168,0]]', ' Selva Outpost AH6 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11225', 'AH6X_EP1', '[310,[8191.4106, 17022.541,0]]', ' Selva Outpost AH6 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11226', 'AH6X_EP1', '[310,[8175.7061, 16941.83,0]]', ' Selva Outpost AH6 Spawn 4');
INSERT INTO `object_spawns` VALUES ('11227', 'AH6X_EP1', '[300,[8216.2393, 17051.885,0]]', ' Selva Outpost AH6 Spawn 5');
INSERT INTO `object_spawns` VALUES ('11228', 'UH1H_DZ', '[310,[8165.166, 17043.479,0]]', ' Selva Outpost UH1 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11229', 'UH1H_DZ', '[20,[8151.2959, 17012.453,0]]', ' Selva Outpost UH1 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11230', 'UH1H_DZ', '[290,[8128.8682, 16966.361,0]]', ' Selva Outpost UH1 Spawn 3');
INSERT INTO `object_spawns` VALUES ('11231', 'V3S_Civ', '[270,[9566.6875, 9805.5547,0]]', ' Paraiso V3S Spawn 1');
INSERT INTO `object_spawns` VALUES ('11232', 'V3S_Civ', '[0,[9661.5605, 9784.1172,0]]', ' Paraiso V3S Spawn 2');
INSERT INTO `object_spawns` VALUES ('11233', 'V3S_Civ', '[0,[9528.8047, 9874.7939,0]]', ' Paraiso V3S Spawn 3');
INSERT INTO `object_spawns` VALUES ('11234', 'V3S_Civ', '[90,[9909.6787, 9984.1904,0]]', ' Paraiso V3S Spawn 4');
INSERT INTO `object_spawns` VALUES ('11235', 'V3S_Civ', '[0,[9805.2256, 9945.9912,0]]', ' Paraiso V3S Spawn 5');
INSERT INTO `object_spawns` VALUES ('11236', 'V3S_Civ', '[300,[8160.0557, 17069.096,0]]', ' Selva Outpost V3S Spawn 1');
INSERT INTO `object_spawns` VALUES ('11237', 'V3S_Civ', '[300,[8140.1768, 17030.285,0]]', ' Selva Outpost V3S Spawn 2');
INSERT INTO `object_spawns` VALUES ('11238', 'V3S_Civ', '[300,[9546.8701, 16754.477,0]]', ' Selva Outpost V3S Spawn 3');
INSERT INTO `object_spawns` VALUES ('11239', 'V3S_Civ', '[325,[7720.3872, 17796.422,0]]', ' Selva Outpost V3S Spawn 3');
INSERT INTO `object_spawns` VALUES ('11240', 'V3S_Civ', '[300,[8209.7559, 17182.902,0]]', ' Selva Outpost V3S Spawn 4');
INSERT INTO `object_spawns` VALUES ('11241', 'V3S_Civ', '[280,[11692.708, 17931.594,0]]', ' Cabo Santa Lucia V3S Spawn 1');
INSERT INTO `object_spawns` VALUES ('11242', 'V3S_Civ', '[0,[12538.753, 17710.385,0]]', ' Cabo Santa Lucia V3S Spawn 2');
INSERT INTO `object_spawns` VALUES ('11243', 'V3S_Civ', '[270,[12116.866, 17697.303,0]]', ' Cabo Santa Lucia V3S Spawn 3');
INSERT INTO `object_spawns` VALUES ('11244', 'V3S_Civ', '[90,[12247.991, 17480.262,0]]', ' Cabo Santa Lucia V3S Spawn 4');
INSERT INTO `object_spawns` VALUES ('11245', 'V3S_Civ', '[270,[12240.018, 17629.609,0]]', ' Cabo Santa Lucia V3S Spawn 5');
INSERT INTO `object_spawns` VALUES ('11246', 'V3S_Civ', '[130,[19125.521, 13940.723,0]]', ' Pita V3S Spawn 1');
INSERT INTO `object_spawns` VALUES ('11247', 'V3S_Civ', '[155,[19015.824, 14104.756,0]]', ' Pita V3S Spawn 2');
INSERT INTO `object_spawns` VALUES ('11248', 'V3S_Civ', '[40,[19212.961, 13884.933,0]]', ' Pita V3S Spawn 3');
INSERT INTO `object_spawns` VALUES ('11249', 'V3S_Civ', '[40,[19293.623, 13855.5,0]]', ' Pita V3S Spawn 4');
INSERT INTO `object_spawns` VALUES ('11250', 'V3S_Civ', '[140,[18612.602, 14463.818,0]]', ' Pita V3S Spawn 5');
INSERT INTO `object_spawns` VALUES ('11251', 'V3S_Civ', '[55,[4894.5459, 15498.271,0]]', ' Isla del Vida V3S Spawn 1');
INSERT INTO `object_spawns` VALUES ('11252', 'V3S_Civ', '[15,[4910.3657, 15451.239,0]]', ' Isla del Vida V3S Spawn 2');
INSERT INTO `object_spawns` VALUES ('11253', 'V3S_Civ', '[55,[4883.2437, 15564.367,0]]', ' Isla del Vida V3S Spawn 3');
INSERT INTO `object_spawns` VALUES ('11254', 'V3S_Civ', '[55,[4514.5884, 15291.074,0]]', ' Isla del Vassal V3S Spawn 1');
INSERT INTO `object_spawns` VALUES ('11255', 'V3S_Civ', '[55,[4530.4971, 15272.057,0]]', ' Isla del Vassal V3S Spawn 2');
INSERT INTO `object_spawns` VALUES ('11256', 'V3S_Civ', '[275,[4584.6328, 15281.092,0]]', ' Isla del Vassal V3S Spawn 3');
INSERT INTO `object_spawns` VALUES ('11257', 'V3S_Civ', '[278,[11919.425, 15261.576,0]]', ' Pesadas V3S Spawn 1');
INSERT INTO `object_spawns` VALUES ('11258', 'V3S_Civ', '[15,[12001.418, 15355.454,0]]', ' Pesadas V3S Spawn 2');
INSERT INTO `object_spawns` VALUES ('11259', 'V3S_Civ', '[195,[11975.27, 15470.835,0]]', ' Pesadas V3S Spawn 3');
INSERT INTO `object_spawns` VALUES ('11260', 'V3S_Civ', '[94,[11930.256, 15460.736,0]]', ' Pesadas V3S Spawn 4');
INSERT INTO `object_spawns` VALUES ('11261', 'V3S_Civ', '[180,[11862.666, 15484.654,0]]', ' Pesadas V3S Spawn 5');
INSERT INTO `object_spawns` VALUES ('11262', 'UAZ_CDF', '[0,[9888.3135, 9993.9668,0]]', ' Paraiso UAZ Spawn 01');
INSERT INTO `object_spawns` VALUES ('11263', 'UAZ_CDF', '[0,[9546.0752, 9819.8643,0]]', ' Paraiso UAZ Spawn 02');
INSERT INTO `object_spawns` VALUES ('11264', 'UAZ_CDF', '[0,[9374.2188, 9973.1455,0]]', ' Paraiso UAZ Spawn 03');
INSERT INTO `object_spawns` VALUES ('11265', 'UAZ_CDF', '[270,[9040.5439, 9752.5342,0]]', ' Paraiso UAZ Spawn 04');
INSERT INTO `object_spawns` VALUES ('11266', 'UAZ_CDF', '[0,[8670.9531, 10105.245,0]]', ' Paraiso UAZ Spawn 05');
INSERT INTO `object_spawns` VALUES ('11267', 'UAZ_CDF', '[170,[9393.6035, 10885.151,0]]', ' Paraiso UAZ Spawn 06');
INSERT INTO `object_spawns` VALUES ('11268', 'UAZ_CDF', '[0,[10267.567, 10062.299,0]]', ' Paraiso UAZ Spawn 07');
INSERT INTO `object_spawns` VALUES ('11269', 'UAZ_CDF', '[140,[11744.879, 10236.215,0]]', ' Paraiso UAZ Spawn 08');
INSERT INTO `object_spawns` VALUES ('11270', 'UAZ_CDF', '[30,[11102.648, 9853.1816,0]]', ' Paraiso UAZ Spawn 09');
INSERT INTO `object_spawns` VALUES ('11271', 'UAZ_CDF', '[30,[10403.922, 9768.0029,0]]', ' Paraiso UAZ Spawn 10');
INSERT INTO `object_spawns` VALUES ('11272', 'UAZ_CDF', '[0,[4382.959, 15352.326,0]]', ' Isla del Vassal UAZ Spawn 1');
INSERT INTO `object_spawns` VALUES ('11273', 'UAZ_CDF', '[0,[4527.1357, 15304.811,0]]', ' Isla del Vassal UAZ Spawn 2');
INSERT INTO `object_spawns` VALUES ('11274', 'UAZ_CDF', '[260,[4508.7686, 15523.982,0]]', ' Isla del Vassal UAZ Spawn 3');
INSERT INTO `object_spawns` VALUES ('11275', 'UAZ_CDF', '[260,[4282.6636, 15758.173,0]]', ' Isla del Vassal UAZ Spawn 4');
INSERT INTO `object_spawns` VALUES ('11276', 'UAZ_CDF', '[40,[4636.4204, 15762.74,0]]', ' Isla del Vassal UAZ Spawn 5');
INSERT INTO `object_spawns` VALUES ('11277', 'UAZ_CDF', '[40,[4899.8999, 15477.756,0]]', ' Isla del Vida UAZ Spawn 1');
INSERT INTO `object_spawns` VALUES ('11278', 'UAZ_CDF', '[5,[4938.8486, 15756.64,0]]', ' Isla del Vida UAZ Spawn 2');
INSERT INTO `object_spawns` VALUES ('11279', 'UAZ_CDF', '[90,[4940.6685, 15826.856,0]]', ' Isla del Vida UAZ Spawn 3');
INSERT INTO `object_spawns` VALUES ('11280', 'UAZ_CDF', '[305,[4950.8857, 16043.738,0]]', ' Isla del Vida UAZ Spawn 4');
INSERT INTO `object_spawns` VALUES ('11281', 'UAZ_CDF', '[185,[5074.8735, 15611.265,0]]', ' Isla del Vida UAZ Spawn 5');
INSERT INTO `object_spawns` VALUES ('11282', 'UAZ_CDF', '[20,[8169.3164, 16967.785,0]]', ' Selva Outpost UAZ Spawn 1');
INSERT INTO `object_spawns` VALUES ('11283', 'UAZ_CDF', '[20,[8101.0322, 16977.215,0]]', ' Selva Outpost UAZ Spawn 2');
INSERT INTO `object_spawns` VALUES ('11284', 'UAZ_CDF', '[105,[11852.596, 15388.551,0]]', ' Pesadas UAZ Spawn 01');
INSERT INTO `object_spawns` VALUES ('11285', 'UAZ_CDF', '[105,[11914.395, 15491.206,0]]', ' Pesadas UAZ Spawn 02');
INSERT INTO `object_spawns` VALUES ('11286', 'UAZ_CDF', '[5,[11704.211, 15462.591,0]]', ' Pesadas UAZ Spawn 03');
INSERT INTO `object_spawns` VALUES ('11287', 'UAZ_CDF', '[110,[11808.661, 15067.004,0]]', ' Pesadas UAZ Spawn 04');
INSERT INTO `object_spawns` VALUES ('11288', 'UAZ_CDF', '[110,[12072.247, 15831.567,0]]', ' Pesadas UAZ Spawn 05');
INSERT INTO `object_spawns` VALUES ('11289', 'UAZ_CDF', '[10,[12477.049, 15446.208,0]]', ' Pesadas UAZ Spawn 06');
INSERT INTO `object_spawns` VALUES ('11290', 'UAZ_CDF', '[95,[12250.482, 14895.874,0]]', ' Pesadas UAZ Spawn 07');
INSERT INTO `object_spawns` VALUES ('11291', 'UAZ_CDF', '[120,[11192.342, 14598.487,0]]', ' Pesadas UAZ Spawn 08');
INSERT INTO `object_spawns` VALUES ('11292', 'UAZ_CDF', '[120,[10400.504, 15047.329,0]]', ' Pesadas UAZ Spawn 09');
INSERT INTO `object_spawns` VALUES ('11293', 'UAZ_CDF', '[85,[12849.287, 15853.391,0]]', ' Pesadas UAZ Spawn 10');
INSERT INTO `object_spawns` VALUES ('11294', 'UAZ_CDF', '[90,[12067.305, 17790.977,0]]', ' Cabo Snta Lucia UAZ Spawn 01');
INSERT INTO `object_spawns` VALUES ('11295', 'UAZ_CDF', '[90,[12073.452, 17613.244,0]]', ' Cabo Snta Lucia UAZ Spawn 02');
INSERT INTO `object_spawns` VALUES ('11296', 'UAZ_CDF', '[90,[12417.367, 17440.354,0]]', ' Cabo Snta Lucia UAZ Spawn 03');
INSERT INTO `object_spawns` VALUES ('11297', 'UAZ_CDF', '[90,[12486.919, 17663.492,0]]', ' Cabo Snta Lucia UAZ Spawn 04');
INSERT INTO `object_spawns` VALUES ('11298', 'UAZ_CDF', '[0,[11164.637, 16950.809,0]]', ' Cabo Snta Lucia UAZ Spawn 05');
INSERT INTO `object_spawns` VALUES ('11299', 'UAZ_CDF', '[270,[11119.385, 16258.02,0]]', ' Cabo Snta Lucia UAZ Spawn 06');
INSERT INTO `object_spawns` VALUES ('11300', 'UAZ_CDF', '[340,[11933.774, 17944.188,0]]', ' Cabo Snta Lucia UAZ Spawn 07');
INSERT INTO `object_spawns` VALUES ('11301', 'UAZ_CDF', '[160,[13135.588, 17808.186,0]]', ' Cabo Snta Lucia UAZ Spawn 08');
INSERT INTO `object_spawns` VALUES ('11302', 'UAZ_CDF', '[145,[11496.587, 17280.512,0]]', ' Cabo Snta Lucia UAZ Spawn 09');
INSERT INTO `object_spawns` VALUES ('11303', 'UAZ_CDF', '[320,[11281.665, 17610.881,0]]', ' Cabo Snta Lucia UAZ Spawn 10');
INSERT INTO `object_spawns` VALUES ('11304', 'UAZ_CDF', '[320,[17544.617, 14398.367,0]]', ' Pita UAZ Spawn 01');
INSERT INTO `object_spawns` VALUES ('11305', 'UAZ_CDF', '[75,[17883.352, 14556.688,0]]', ' Pita UAZ Spawn 02');
INSERT INTO `object_spawns` VALUES ('11306', 'UAZ_CDF', '[155,[18661.609, 14614.479,0]]', ' Pita UAZ Spawn 03');
INSERT INTO `object_spawns` VALUES ('11307', 'UAZ_CDF', '[70,[19003.441, 14107.715,0]]', ' Pita UAZ Spawn 04');
INSERT INTO `object_spawns` VALUES ('11308', 'UAZ_CDF', '[30,[19195.965, 13894.599,0]]', ' Pita UAZ Spawn 05');
INSERT INTO `object_spawns` VALUES ('11309', 'UAZ_CDF', '[0,[19204.117, 13672.519,0]]', ' Pita UAZ Spawn 06');
INSERT INTO `object_spawns` VALUES ('11310', 'UAZ_CDF', '[105,[19480.641, 13607.707,0]]', ' Pita UAZ Spawn 07');
INSERT INTO `object_spawns` VALUES ('11311', 'UAZ_CDF', '[180,[17711.525, 12439.023,0]]', ' Pita UAZ Spawn 08');
INSERT INTO `object_spawns` VALUES ('11312', 'UAZ_CDF', '[180,[17178.879, 13600.937,0]]', ' Pita UAZ Spawn 09');
INSERT INTO `object_spawns` VALUES ('11313', 'UAZ_CDF', '[295,[15645.564, 13859.689,0]]', ' Pita UAZ Spawn 10');
INSERT INTO `object_spawns` VALUES ('11314', 'UAZ_CDF', '[280,[2920.2893, 2855.238,0]]', ' Rahmadi UAZ Spawn 1');
INSERT INTO `object_spawns` VALUES ('11315', 'UAZ_CDF', '[320,[3129.4175, 2707.439,0]]', ' Rahmadi UAZ Spawn 2');
INSERT INTO `object_spawns` VALUES ('11316', 'UAZ_CDF', '[65,[2712.4189, 2062.5293,0]]', ' Rahmadi UAZ Spawn 3');
INSERT INTO `object_spawns` VALUES ('11317', 'UAZ_CDF', '[0,[17733.623, 12362.439,0]]', ' Tres Valles UAZ Spawn 1');
INSERT INTO `object_spawns` VALUES ('11318', 'UAZ_CDF', '[0,[17870.922, 12370.672,0]]', ' Tres Valles UAZ Spawn 2');
INSERT INTO `object_spawns` VALUES ('11319', 'UAZ_CDF', '[0,[17706.645, 12311.967,0]]', ' Tres Valles UAZ Spawn 3');
INSERT INTO `object_spawns` VALUES ('11320', 'SkodaBlue', '[0,[9294.9512, 10143.173,0]]', ' ');
INSERT INTO `object_spawns` VALUES ('11321', 'SkodaGreen', '[0,[9288.3477, 10143.085,0]]', ' ');
INSERT INTO `object_spawns` VALUES ('11322', 'SkodaRed', '[0,[9282.5303, 10143.228,0]]', ' ');
INSERT INTO `object_spawns` VALUES ('11323', 'Old_bike_TK_CIV_EP1', '[-85.217308,[10370.564, 9429.9453,0]]', 'bike @ paraiso (west)');
INSERT INTO `object_spawns` VALUES ('11324', 'Old_bike_TK_CIV_EP1', '[-90.487289,[10417.252, 9523.3232,0]]', 'bike @ paraiso (northwest)');
INSERT INTO `object_spawns` VALUES ('11325', 'Old_bike_TK_CIV_EP1', '[91.285843,[10555.114, 9598.6406, 0.03678894]]', 'bike @ paraiso (northwest2)');
INSERT INTO `object_spawns` VALUES ('11326', 'Old_bike_TK_CIV_EP1', '[148.25641,[10380.695, 9587.1885,0]]', 'bike @ paraiso');
INSERT INTO `object_spawns` VALUES ('11327', 'Old_bike_TK_CIV_EP1', '[81.869507,[10778.428, 9631.6748,0]]', 'bike @ paraiso');
INSERT INTO `object_spawns` VALUES ('11328', 'Old_bike_TK_CIV_EP1', '[79.221519,[10833.484, 9383.2568,0]]', 'bike @ paraiso');
INSERT INTO `object_spawns` VALUES ('11329', 'Old_bike_TK_CIV_EP1', '[-41.197311,[10581.705, 9258.7676,0]]', 'bike @ paraiso');
INSERT INTO `object_spawns` VALUES ('11330', 'Old_bike_TK_CIV_EP1', '[-84.456589,[10976.893, 9420.6982,0]]', 'bike @ paraiso');
INSERT INTO `object_spawns` VALUES ('11331', 'Old_bike_TK_CIV_EP1', '[-39.620136,[10876.649, 9469.8564,0]]', 'bike @ paraiso');
INSERT INTO `object_spawns` VALUES ('11332', 'Old_bike_TK_CIV_EP1', '[-89.592476,[10618.183, 9303.5938,0]]', 'bike @ paraiso');
INSERT INTO `object_spawns` VALUES ('11333', 'Old_bike_TK_CIV_EP1', '[-45.966557,[10750.477, 8778.0928,0]]', 'bike west of bonanza');
INSERT INTO `object_spawns` VALUES ('11334', 'Old_bike_TK_CIV_EP1', '[78.7006,[11178.175, 8882.2988,0]]', 'bike @ bonanza');
INSERT INTO `object_spawns` VALUES ('11335', 'Old_bike_TK_CIV_EP1', '[0,[10854.894, 8606.4531, 0]]', 'bike @ woods by bonanza');
INSERT INTO `object_spawns` VALUES ('11336', 'Old_bike_TK_CIV_EP1', '[4,[11635.818, 9072.2285,0]]', 'bike @ corinto');
INSERT INTO `object_spawns` VALUES ('11337', 'Old_bike_TK_CIV_EP1', '[-44.829987,[11444.519, 9098.3994,0]]', 'bike @ corinto');
INSERT INTO `object_spawns` VALUES ('11338', 'Old_bike_TK_CIV_EP1', '[-56.038536,[11946.504, 9342.502,0]]', 'bike @ hiccoras woods');
INSERT INTO `object_spawns` VALUES ('11339', 'Old_bike_TK_CIV_EP1', '[-217.2023,[12378.263, 10360.327,0]]', 'bike @ isla verda');
INSERT INTO `object_spawns` VALUES ('11340', 'Old_bike_TK_CIV_EP1', '[-89.482925,[12493.199, 10838.49,0]]', 'bike @ isla de libertad');
INSERT INTO `object_spawns` VALUES ('11341', 'Old_bike_TK_CIV_EP1', '[-248.19809,[9355.9717, 10965.943,0]]', 'bike west of Rashidah');
INSERT INTO `object_spawns` VALUES ('11342', 'Old_bike_TK_CIV_EP1', '[137.08963,[8322.1543, 9733.1523, 3.4809113e-005]]', 'bike @ playa de palomas');
INSERT INTO `object_spawns` VALUES ('11343', 'Old_bike_TK_CIV_EP1', '[83.668098,[8312.4951, 9725.1777, -3.8146973e-005]]', 'bike @ playa de palomas');
INSERT INTO `object_spawns` VALUES ('11344', 'Old_bike_TK_CIV_EP1', '[80.451363,[8312.2109, 9726.0664, -6.6757202e-006]]', 'bike @ playa de palomas');
INSERT INTO `object_spawns` VALUES ('11345', 'Mi17_Civilian_DZ', '[35,[18865.184, 14314.302 ,0]]', ' Civilian Mi17 Test');
INSERT INTO `object_spawns` VALUES ('11346', 'An2_1_TK_CIV_EP1', '[310,[19261.957, 13971.961 ,0]]', ' Pita An2 Civilian Spawn 1');
INSERT INTO `object_spawns` VALUES ('11347', 'An2_1_TK_CIV_EP1', '[130,[18652.947, 14499.781 ,0]]', ' Pita An2 Civilian Spawn 2');
INSERT INTO `object_spawns` VALUES ('11348', 'C130J_US_EP1', '[0,[9256.1035, 10070.821 ,0]]', ' Paraiso C130 Spawn 1');
INSERT INTO `object_spawns` VALUES ('11349', 'C130J_US_EP1', '[270,[10329.604, 10143.598 ,0]]', ' Paraiso C130 Spawn 2');
INSERT INTO `object_spawns` VALUES ('11350', 'An2_1_TK_CIV_EP1', '[0,[2537.0405, 2448.8245 ,0]]', ' Rahmadi An2 Civilian Spawn 1');
INSERT INTO `object_spawns` VALUES ('11351', 'An2_1_TK_CIV_EP1', '[180,[2549.0581, 2886.7957 ,0]]', ' Rahmadi An2 Civilian Spawn 2');
INSERT INTO `object_spawns` VALUES ('11352', 'An2_1_TK_CIV_EP1', '[165,[18026.404, 18803.309 ,0]]', ' Antigua An2 Civilian Spawn 1');
INSERT INTO `object_spawns` VALUES ('11353', 'UAZ_CDF', '[0,[17733.623, 12362.439 ,0]]', ' Tres Valles UAZ Spawn 1');
INSERT INTO `object_spawns` VALUES ('11354', 'UAZ_CDF', '[0,[17870.922, 12370.672 ,0]]', ' Tres Valles UAZ Spawn 2');
INSERT INTO `object_spawns` VALUES ('11355', 'UAZ_CDF', '[0,[17706.645, 12311.967 ,0]]', ' Tres Valles UAZ Spawn 3');
INSERT INTO `object_spawns` VALUES ('11356', 'UAZ_CDF', '[0,[18820.953, 13696.659 ,0]]', ' Pita W Outpost UAZ Spawn 1');
INSERT INTO `object_spawns` VALUES ('11357', 'V3S_Civ', '[0,[18846.859, 13706.691 ,0]]', ' Pita W Outpost V3S Spawn 1');
INSERT INTO `object_spawns` VALUES ('11358', 'V3S_Civ', '[0,[17527.439, 9530.5361 ,0]]', ' Everone W Outpost V3S Spawn 1');
INSERT INTO `object_spawns` VALUES ('11359', 'V3S_Civ', '[270,[17596.648, 9551.3477 ,0]]', ' Everone W Outpost V3S Spawn 2');
INSERT INTO `object_spawns` VALUES ('11360', 'V3S_Civ', '[270,[16480.42, 8886.9492 ,0]]', ' Everone W Outpost V3S Spawn 3');
INSERT INTO `object_spawns` VALUES ('11361', 'V3S_Civ', '[0,[17744.859, 12373.82 ,0]]', ' Tres Valles V3S Spawn 1');
INSERT INTO `object_spawns` VALUES ('11362', 'V3S_Civ', '[305,[17468.957, 12661.32 ,0]]', ' Tres Valles V3S Spawn 2');
INSERT INTO `object_spawns` VALUES ('11363', 'V3S_Civ', '[270,[17777.047, 12377.736 ,0]]', ' Tres Valles V3S Spawn 3');
INSERT INTO `object_spawns` VALUES ('11364', 'UAZ_CDF', '[180,[17546.502, 9550.4121 ,0]]', ' Everone W Outpost UAZ Spawn 1');
INSERT INTO `object_spawns` VALUES ('11365', 'UAZ_CDF', '[180,[17607.625, 9534.0615 ,0]]', ' Everone W Outpost UAZ Spawn 2');
INSERT INTO `object_spawns` VALUES ('11366', 'UAZ_CDF', '[125,[17680.918, 9591.6934 ,0]]', ' Everone W Outpost UAZ Spawn 3');
INSERT INTO `object_spawns` VALUES ('11367', 'UAZ_CDF', '[305,[18722.082, 13573.166 ,0]]', ' Pita W Outpost UAZ Spawn 2');
INSERT INTO `object_spawns` VALUES ('11368', 'UAZ_CDF', '[35,[18800.354, 13643.576 ,0]]', ' Pita W Outpost UAZ Spawn 3');
INSERT INTO `object_spawns` VALUES ('11369', 'UAZ_CDF', '[35,[18809.715, 13636.333 ,0]]', ' Pita W Outpost V3S Spawn 2');
INSERT INTO `object_spawns` VALUES ('11370', 'Old_moto_TK_Civ_EP1', '[270,[10859.434, 9560.9219,0]]', ' Motorcycle @ Paraiso');
INSERT INTO `object_spawns` VALUES ('11371', 'Old_moto_TK_Civ_EP1', '[311.18985,[10898.999, 9348.5918,0]]', ' Motorcycle @ Paraiso');
INSERT INTO `object_spawns` VALUES ('11372', 'Old_moto_TK_Civ_EP1', '[328.63049,[10366.132, 9395.8965,0]]', ' Motorcycle @ Paraiso');
INSERT INTO `object_spawns` VALUES ('11373', 'Old_moto_TK_Civ_EP1', '[306.12045,[10530.225, 9509.8477,0]]', ' Motorcycle @ Paraiso');
INSERT INTO `object_spawns` VALUES ('11374', 'Old_moto_TK_Civ_EP1', '[341.14816,[10405.983, 9632.627,0]]', ' Motorcycle @ Paraiso');
INSERT INTO `object_spawns` VALUES ('11375', 'Old_moto_TK_Civ_EP1', '[375.57761,[10151.496, 9563.6943,0]]', ' Motorcycle @ Paraiso');
INSERT INTO `object_spawns` VALUES ('11376', 'Old_moto_TK_Civ_EP1', '[372.72055,[10663.656, 9669.2236,0]]', ' Motorcycle @ Paraiso');
INSERT INTO `object_spawns` VALUES ('11377', 'Old_moto_TK_Civ_EP1', '[180,[10676.335, 9228.1133,0]]', ' Motorcycle @ Paraiso');
INSERT INTO `object_spawns` VALUES ('11378', 'Old_moto_TK_Civ_EP1', '[90.001312,[10350.357, 9193.7383,0]]', ' Motorcycle @ Paraiso');
INSERT INTO `object_spawns` VALUES ('11379', 'Old_moto_TK_Civ_EP1', '[270,[10268.525, 9116.4072,0]]', ' Motorcycle @ Paraiso');
INSERT INTO `object_spawns` VALUES ('11380', 'Old_moto_TK_Civ_EP1', '[360.73993,[10361.708, 9209.5898,0]]', ' Motorcycle @ Paraiso');
INSERT INTO `object_spawns` VALUES ('11381', 'Old_moto_TK_Civ_EP1', '[270,[9688.6348, 9786.1133,0]]', ' Motorcycle @ Airfield North of Paraiso');
INSERT INTO `object_spawns` VALUES ('11382', 'Old_moto_TK_Civ_EP1', '[294.90601,[9509.835, 9908.623,0]]', ' Motorcycle @ Airfield North of Paraiso');
INSERT INTO `object_spawns` VALUES ('11383', 'Old_moto_TK_Civ_EP1', '[357.323,[9456.1211, 9801.5654,0]]', ' Motorcycle @ Airfield North of Paraiso');
INSERT INTO `object_spawns` VALUES ('11384', 'Old_moto_TK_Civ_EP1', '[358.79608,[8338.5244, 9053.6836,0]]', ' Motorcycle @ Chantico');
INSERT INTO `object_spawns` VALUES ('11385', 'Old_moto_TK_Civ_EP1', '[500.43362,[8246.6504, 8854.0459,0]]', ' Motorcycle @ Chantico');
INSERT INTO `object_spawns` VALUES ('11386', 'Old_moto_TK_Civ_EP1', '[213.98854,[7835.1563, 9738.0068,0]]', ' Motorcycle @ Cabo Canino');
INSERT INTO `object_spawns` VALUES ('11387', 'Old_moto_TK_Civ_EP1', '[142.33943,[7623.1875, 9099.9619,0]]', ' Motorcycle @ Ambergris');
INSERT INTO `object_spawns` VALUES ('11388', 'Old_moto_TK_Civ_EP1', '[345.52283,[7388.894, 8728.168,0]]', ' Motorcycle @ Cedras');
INSERT INTO `object_spawns` VALUES ('11389', 'Old_moto_TK_Civ_EP1', '[167.62779,[7353.4702, 8725.3496,0]]', ' Motorcycle @ Cedras');
INSERT INTO `object_spawns` VALUES ('11390', 'Old_moto_TK_Civ_EP1', '[396.5437,[7244.0698, 8448.6445,0]]', ' Motorcycle @ Calheta de Cedras');
INSERT INTO `object_spawns` VALUES ('11391', 'Old_moto_TK_Civ_EP1', '[270,[6837.7441, 8062.2646,0]]', ' Motorcycle @ Estrella');
INSERT INTO `object_spawns` VALUES ('11392', 'Old_moto_TK_Civ_EP1', '[174.28995,[6736.8936, 8046.4541,0]]', ' Motorcycle @ Estrella');
INSERT INTO `object_spawns` VALUES ('11393', 'Old_moto_TK_Civ_EP1', '[270,[6416.5547, 7464.8765,0]]', ' Motorcycle @ San Peregrino');
INSERT INTO `object_spawns` VALUES ('11394', 'Old_moto_TK_Civ_EP1', '[367.2374,[6666.6743, 7465.6099,0]]', ' Motorcycle @ San Peregrino');
INSERT INTO `object_spawns` VALUES ('11395', 'Old_moto_TK_Civ_EP1', '[73.681541,[7632.4214, 6343.7485,0]]', ' Motorcycle @ Arcadia');
INSERT INTO `object_spawns` VALUES ('11396', 'Old_moto_TK_Civ_EP1', '[245.95219,[7694.6045, 6267.3838,0]]', ' Motorcycle @ Arcadia');
INSERT INTO `object_spawns` VALUES ('11397', 'Old_moto_TK_Civ_EP1', '[-19.452585,[7731.9312, 6311.5635,0]]', ' Motorcycle @ Arcadia');
INSERT INTO `object_spawns` VALUES ('11398', 'Old_moto_TK_Civ_EP1', '[-84.072205,[8530.9785, 5461.8433,0]]', ' Motorcycle @ Calha de Cayo');
INSERT INTO `object_spawns` VALUES ('11399', 'Old_moto_TK_Civ_EP1', '[264.28189,[9356.3584, 5101.48,0]]', ' Motorcycle @ Tiberia');
INSERT INTO `object_spawns` VALUES ('11400', 'Old_moto_TK_Civ_EP1', '[172.27354,[9390.3799, 5162.2324,0]]', ' Motorcycle @ Tiberia');
INSERT INTO `object_spawns` VALUES ('11401', 'Old_moto_TK_Civ_EP1', '[-20.763149,[9510.1123, 5367.7451,0]]', ' Motorcycle @ Tiberia');
INSERT INTO `object_spawns` VALUES ('11402', 'Old_moto_TK_Civ_EP1', '[40.095337,[9171.1514, 5442.9712,0]]', ' Motorcycle @ Tiberia');
INSERT INTO `object_spawns` VALUES ('11403', 'Old_moto_TK_Civ_EP1', '[136.57152,[9109.3096, 5325.189,0]]', ' Motorcycle @ Tiberia');
INSERT INTO `object_spawns` VALUES ('11404', 'Old_moto_TK_Civ_EP1', '[30.957001,[10628.369, 4738.5386,0]]', ' Motorcycle @ Iguana');
INSERT INTO `object_spawns` VALUES ('11405', 'Old_moto_TK_Civ_EP1', '[30.957001,[10629.726, 4737.3896,0]]', ' Motorcycle @ Iguana');
INSERT INTO `object_spawns` VALUES ('11406', 'Old_moto_TK_Civ_EP1', '[30.957001,[10626.347, 4739.5029,0]]', ' Motorcycle @ Iguana');
INSERT INTO `object_spawns` VALUES ('11407', 'Old_moto_TK_Civ_EP1', '[-8.0339355,[10766.411, 5057.3076,0]]', ' Motorcycle @ Iguana');
INSERT INTO `object_spawns` VALUES ('11408', 'Old_moto_TK_Civ_EP1', '[64.514641,[10286.671, 5868.2432,0]]', ' Motorcycle @ Terra Acorcha');
INSERT INTO `object_spawns` VALUES ('11409', 'Old_moto_TK_Civ_EP1', '[-79.414513,[11457.333, 5542.6748,0]]', ' Motorcycle @ Parato');
INSERT INTO `object_spawns` VALUES ('11410', 'Old_moto_TK_Civ_EP1', '[-2.4035406,[11204.414, 5285.417,0]]', ' Motorcycle @ Parato');
INSERT INTO `object_spawns` VALUES ('11411', 'Old_moto_TK_Civ_EP1', '[30.957001,[11340.73, 5864.3623,0]]', ' Motorcycle @ Dolores');
INSERT INTO `object_spawns` VALUES ('11412', 'Old_moto_TK_Civ_EP1', '[30.957001,[11240.133, 5852.9844,0]]', ' Motorcycle @ Dolores');
INSERT INTO `object_spawns` VALUES ('11413', 'Old_moto_TK_Civ_EP1', '[56.949314,[11318.239, 6155.9019,0]]', ' Motorcycle @ Dolores');
INSERT INTO `object_spawns` VALUES ('11414', 'Old_moto_TK_Civ_EP1', '[30.957001,[11494.869, 6386.6738,0]]', ' Motorcycle @ Dolores');
INSERT INTO `object_spawns` VALUES ('11415', 'Old_moto_TK_Civ_EP1', '[30.957001,[11891.87, 6187.7402,0]]', ' Motorcycle @ Dolores');
INSERT INTO `object_spawns` VALUES ('11416', 'Old_moto_TK_Civ_EP1', '[222.25598,[8823.9668, 7867.7207,0]]', ' Motorcycle @ Gulan');
INSERT INTO `object_spawns` VALUES ('11417', 'Old_moto_TK_Civ_EP1', '[54.011993,[7998.2744, 7954.1416,0]]', ' Motorcycle @ Gulan');
INSERT INTO `object_spawns` VALUES ('11418', 'Old_moto_TK_Civ_EP1', '[80.985542,[9144.2949, 8248.9141,0]]', ' Motorcycle @ Somato');
INSERT INTO `object_spawns` VALUES ('11419', 'Old_moto_TK_Civ_EP1', '[-86.369537,[9088.9492, 8253.251,0]]', ' Motorcycle @ Somato');
INSERT INTO `object_spawns` VALUES ('11420', 'Old_moto_TK_Civ_EP1', '[269.36398,[9195.0166, 8302.8291,0]]', ' Motorcycle @ Somato');
INSERT INTO `object_spawns` VALUES ('11421', 'Old_moto_TK_Civ_EP1', '[30.957001,[8986.1436, 8484.4619,0]]', ' Motorcycle @ Somato');
INSERT INTO `object_spawns` VALUES ('11422', 'Old_moto_TK_Civ_EP1', '[14.24921,[10223.311, 8387.1689,0]]', ' Motorcycle @ Pesto');
INSERT INTO `object_spawns` VALUES ('11423', 'Old_moto_TK_Civ_EP1', '[-39.920162,[11152.25, 8894.8613,0]]', ' Motorcycle @ Bonanza');
INSERT INTO `object_spawns` VALUES ('11424', 'Old_moto_TK_Civ_EP1', '[-198.20724,[11214.704, 8839.4629,0]]', ' Motorcycle @ Bonanza');
INSERT INTO `object_spawns` VALUES ('11425', 'Old_moto_TK_Civ_EP1', '[3.51561,[11627.329, 9207.2217,0]]', ' Motorcycle @ Corinto');
INSERT INTO `object_spawns` VALUES ('11426', 'Old_moto_TK_Civ_EP1', '[3.51561,[11615.867, 9161.8926,0]]', ' Motorcycle @ Corinto');
INSERT INTO `object_spawns` VALUES ('11427', 'Old_moto_TK_Civ_EP1', '[3.51561,[13226.329, 6558.4863,0]]', ' Motorcycle @ Calheta Seca');
INSERT INTO `object_spawns` VALUES ('11428', 'Old_moto_TK_Civ_EP1', '[3.51561,[13233.313, 6846.2051,0]]', ' Motorcycle @ Geraldo');
INSERT INTO `object_spawns` VALUES ('11429', 'Old_moto_TK_Civ_EP1', '[3.51561,[13305.65, 6938.2188,0]]', ' Motorcycle @ Geraldo');
INSERT INTO `object_spawns` VALUES ('11430', 'Old_moto_TK_Civ_EP1', '[3.51561,[12508.215, 7123.8672,0]]', ' Motorcycle @ Ortego');
INSERT INTO `object_spawns` VALUES ('11431', 'Old_moto_TK_Civ_EP1', '[-183.97455,[12218.471, 7142.4829,0]]', ' Motorcycle @ Ortego');
INSERT INTO `object_spawns` VALUES ('11432', 'Old_moto_TK_Civ_EP1', '[18.977875,[12272.01, 7016.1484,0]]', ' Motorcycle @ Ortego');
INSERT INTO `object_spawns` VALUES ('11433', 'Old_moto_TK_Civ_EP1', '[34.484192,[11855.942, 7314.7124,0]]', ' Motorcycle @ Ortego');
INSERT INTO `object_spawns` VALUES ('11434', 'Old_moto_TK_Civ_EP1', '[3.51561,[1567.3268, 1653.8611,0]]', ' Motorcycle @ Isla de la Caja');
INSERT INTO `object_spawns` VALUES ('11435', 'Old_moto_TK_Civ_EP1', '[91.215149,[1624.3542, 2343.1494,0]]', ' Motorcycle @ Isla Arimar');
INSERT INTO `object_spawns` VALUES ('11436', 'Old_moto_TK_Civ_EP1', '[37.202072,[2534.8469, 2999.0881,0]]', ' Motorcycle @ Rahmadi');
INSERT INTO `object_spawns` VALUES ('11437', 'Old_moto_TK_Civ_EP1', '[-138.0657,[2874.1465, 2905.5957,0]]', ' Motorcycle @ Rahmadi');
INSERT INTO `object_spawns` VALUES ('11438', 'Old_moto_TK_Civ_EP1', '[3.51561,[2894.4324, 2871.9189,0]]', ' Motorcycle @ Rahmadi');
INSERT INTO `object_spawns` VALUES ('11439', 'Old_moto_TK_Civ_EP1', '[-101.46629,[2948.9932, 2923.8586,0]]', ' Motorcycle @ Rahmadi');
INSERT INTO `object_spawns` VALUES ('11440', 'Old_moto_TK_Civ_EP1', '[-31.940228,[3316.6338, 3253.9539,0]]', ' Motorcycle @ Rahmadi');
INSERT INTO `object_spawns` VALUES ('11441', 'Old_moto_TK_Civ_EP1', '[55.640766,[3324.0486, 2425.9485,0]]', ' Motorcycle @ Rahmadi');
INSERT INTO `object_spawns` VALUES ('11442', 'Old_moto_TK_Civ_EP1', '[3.51561,[14434.059, 12494.124,0]]', ' Motorcycle @ Bagango');
INSERT INTO `object_spawns` VALUES ('11443', 'Old_moto_TK_Civ_EP1', '[3.51561,[14601.452, 12587.808,0]]', ' Motorcycle @ Bagango');
INSERT INTO `object_spawns` VALUES ('11444', 'Old_moto_TK_Civ_EP1', '[3.51561,[14448.432, 10605.908,0]]', ' Motorcycle @ Obregan');
INSERT INTO `object_spawns` VALUES ('11445', 'Old_moto_TK_Civ_EP1', '[3.51561,[14604.815, 10949.22,0]]', ' Motorcycle @ Obregan');
INSERT INTO `object_spawns` VALUES ('11446', 'Old_moto_TK_Civ_EP1', '[3.51561,[13780.142, 9298.5332,0]]', ' Motorcycle @ Corazol');
INSERT INTO `object_spawns` VALUES ('11447', 'Old_moto_TK_Civ_EP1', '[3.51561,[12778.605, 8639.9258,0]]', ' Motorcycle @ Corazol');
INSERT INTO `object_spawns` VALUES ('11448', 'Old_moto_TK_Civ_EP1', '[3.51561,[13374.251, 8983.8223,0]]', ' Motorcycle @ Corazol');
INSERT INTO `object_spawns` VALUES ('11449', 'Old_moto_TK_Civ_EP1', '[48.516243,[16591.258, 9193.1299,0]]', ' Motorcycle @ Everon');
INSERT INTO `object_spawns` VALUES ('11450', 'Old_moto_TK_Civ_EP1', '[93.515602,[17623.658, 10027.447,0]]', ' Motorcycle @ Mato Virgo');
INSERT INTO `object_spawns` VALUES ('11451', 'Old_moto_TK_Civ_EP1', '[86.893616,[18425.275, 11423.811,0]]', ' Motorcycle @ Sierra de los Pinos');
INSERT INTO `object_spawns` VALUES ('11452', 'Old_moto_TK_Civ_EP1', '[-96.789703,[17623.66, 14268.254,0]]', ' Motorcycle @ Masbete');
INSERT INTO `object_spawns` VALUES ('11453', 'Old_moto_TK_Civ_EP1', '[3.51561,[19304.469, 13673.507,0]]', ' Motorcycle @ Pita');
INSERT INTO `object_spawns` VALUES ('11454', 'Old_moto_TK_Civ_EP1', '[3.51561,[19071.74, 13673.508,0]]', ' Motorcycle @ Pita');
INSERT INTO `object_spawns` VALUES ('11455', 'Old_moto_TK_Civ_EP1', '[64.208672,[12770.049, 15071.819,0]]', ' Motorcycle @ Eponia');
INSERT INTO `object_spawns` VALUES ('11456', 'Old_moto_TK_Civ_EP1', '[3.51561,[13072.55, 15018.153,0]]', ' Motorcycle @ Eponia');
INSERT INTO `object_spawns` VALUES ('11457', 'Old_moto_TK_Civ_EP1', '[-12.639399,[12510.492, 13448.833,0]]', ' Motorcycle @ Carmen');
INSERT INTO `object_spawns` VALUES ('11458', 'Old_moto_TK_Civ_EP1', '[-49.081985,[11365.881, 12406.437,0]]', ' Motorcycle @ Tlaloc');
INSERT INTO `object_spawns` VALUES ('11459', 'Old_moto_TK_Civ_EP1', '[-39.353989,[10549.028, 14632.265,0]]', ' Motorcycle @ Pacamac');
INSERT INTO `object_spawns` VALUES ('11460', 'Old_moto_TK_Civ_EP1', '[-31.915462,[10309.103, 14685.722,0]]', ' Motorcycle @ Pacamac');
INSERT INTO `object_spawns` VALUES ('11461', 'Old_moto_TK_Civ_EP1', '[3.51561,[8521.4375, 15354.316,0]]', ' Motorcycle @ Hunapu');
INSERT INTO `object_spawns` VALUES ('11462', 'Old_moto_TK_Civ_EP1', '[3.51561,[6281.7036, 17233.531,0]]', ' Motorcycle @ Cabo Valiente');
INSERT INTO `object_spawns` VALUES ('11463', 'Old_moto_TK_Civ_EP1', '[3.51561,[12470.533, 18073.279,0]]', ' Motorcycle @ Cabo Santa Lucia');
INSERT INTO `object_spawns` VALUES ('11464', 'Old_moto_TK_Civ_EP1', '[-24.789429,[10544.369, 17042.229,0]]', ' Motorcycle @ Cabo Indice');
INSERT INTO `object_spawns` VALUES ('11465', 'Old_moto_TK_Civ_EP1', '[43.804947,[10827.896, 16123.455,0]]', ' Motorcycle @ Mataredo');
INSERT INTO `object_spawns` VALUES ('11466', 'Old_moto_TK_Civ_EP1', '[3.51561,[10664.498, 15404.491,0]]', ' Motorcycle @ Passo Paradiso');
INSERT INTO `object_spawns` VALUES ('11467', 'Old_moto_TK_Civ_EP1', '[-53.226376,[11710.507, 13000.396,0]]', ' Motorcycle @ Puntas Oriental');
INSERT INTO `object_spawns` VALUES ('11468', 'Old_moto_TK_Civ_EP1', '[41.498711,[11956.648, 14473.627,0]]', ' Motorcycle @ Tandag');
INSERT INTO `object_spawns` VALUES ('11469', 'Old_moto_TK_Civ_EP1', '[-56.193615,[15447.313, 13655.933,0]]', ' Motorcycle @ Benoma');
INSERT INTO `object_spawns` VALUES ('11470', 'Old_moto_TK_Civ_EP1', '[3.51561,[11202.605, 16966.027,0]]', ' Motorcycle @ Isla de Victoria');
INSERT INTO `object_spawns` VALUES ('11471', 'Old_moto_TK_Civ_EP1', '[3.51561,[17853.947, 11989.205,0]]', ' Motorcycle @ Tres Valles');
INSERT INTO `object_spawns` VALUES ('11472', 'Old_moto_TK_Civ_EP1', '[3.51561,[18001.93, 11825.646,0]]', ' Motorcycle @ Tres Valles');
INSERT INTO `object_spawns` VALUES ('11473', 'Old_moto_TK_Civ_EP1', '[-119.49542,[17215.295, 11249.302,0]]', ' Motorcycle @ Sierra de los Pinos');
INSERT INTO `object_spawns` VALUES ('11474', 'Old_moto_TK_Civ_EP1', '[3.51561,[13336.643, 11412.859,0]]', ' Motorcycle @ Mercalillo');
INSERT INTO `object_spawns` VALUES ('11475', 'Old_moto_TK_Civ_EP1', '[-127.23187,[14168.706, 14021.494,0]]', ' Motorcycle @ Terra Marismo');
INSERT INTO `object_spawns` VALUES ('11476', 'Old_moto_TK_Civ_EP1', '[-158.63794,[15307.798, 12334.668,0]]', ' Motorcycle @ Passo San Marco');
INSERT INTO `object_spawns` VALUES ('11477', 'Old_moto_TK_Civ_EP1', '[-23.573015,[15424.803, 9818.2832,0]]', ' Motorcycle @ Valor');
INSERT INTO `object_spawns` VALUES ('11478', 'Old_moto_TK_Civ_EP1', '[3.51561,[15560.249, 8696.4502,0]]', ' Motorcycle @ Bajo Valor');
INSERT INTO `object_spawns` VALUES ('11479', 'Old_moto_TK_Civ_EP1', '[70.384766,[14497.693, 8424.2236,0]]', ' Motorcycle @ Gaula');
INSERT INTO `object_spawns` VALUES ('11480', 'Old_moto_TK_Civ_EP1', '[-75.076279,[14515.256, 9636.0654,0]]', ' Motorcycle @ Modesta');
INSERT INTO `object_spawns` VALUES ('11481', 'Old_moto_TK_Civ_EP1', '[3.51561,[14023.495, 15756.743,0]]', ' Motorcycle @ Passo Epone');
INSERT INTO `object_spawns` VALUES ('11482', 'Old_moto_TK_Civ_EP1', '[-58.183617,[18416.209, 13155.498,0]]', ' Motorcycle @ Sierra Pita');
INSERT INTO `object_spawns` VALUES ('11483', 'Old_moto_TK_Civ_EP1', '[3.51561,[4486.3516, 15562.463,0]]', ' Motorcycle @ Isla del Vassal');
INSERT INTO `object_spawns` VALUES ('11484', 'Old_moto_TK_Civ_EP1', '[3.51561,[5060.5864, 15796.89,0]]', ' Motorcycle @ Isla del Vida');
INSERT INTO `object_spawns` VALUES ('11485', 'Old_moto_TK_Civ_EP1', '[-96.978615,[5700.458, 16473.895,0]]', ' Motorcycle @ Cabo de Fidel');
INSERT INTO `object_spawns` VALUES ('11486', 'Old_moto_TK_Civ_EP1', '[93.543686,[7752.6011, 15784.851,0]]', ' Motorcycle @ Hunapu');
INSERT INTO `object_spawns` VALUES ('11487', 'An2_1_TK_CIV_EP1', '[340,[18189.279, 18038.754,0]]', ' Antigua An2 Civilian Spawn 2');
INSERT INTO `object_spawns` VALUES ('11488', 'SkodaBlue', '[45,[2856.6646, 2879.707,0]]', ' Rahmadi Blue Car Spawn 2');
INSERT INTO `object_spawns` VALUES ('11489', 'SkodaBlue', '[45,[2867.4851, 2904.7437,0]]', ' Rahmadi Blue Car Spawn 1');
INSERT INTO `object_spawns` VALUES ('11490', 'SkodaBlue', '[60,[2869.9722, 2419.9805,0]]', ' Rahmadi Blue Car Spawn 3');
INSERT INTO `object_spawns` VALUES ('11491', 'SkodaBlue', '[95,[9379.2197, 5099.4688,0]]', ' Tiberia Blue Car Spawn 1');
INSERT INTO `object_spawns` VALUES ('11492', 'ATV_US_EP1', '[345,[17380.547, 18263.604,0]]', ' Antigua ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11493', 'ATV_US_EP1', '[150,[18014.412, 17992.965,0]]', ' Antigua ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11494', 'ATV_US_EP1', '[195,[18184.555, 17830.195,0]]', ' Antigua ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11495', 'ATV_US_EP1', '[195,[17861.482, 18907.068,0]]', ' Antigua ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11496', 'ATV_US_EP1', '[145,[12259.225, 18245.035,0]]', ' Cabo Santa Lucia ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11497', 'ATV_US_EP1', '[90,[12872.783, 17840.301,0]]', ' Cabo Santa Lucia ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11498', 'ATV_US_EP1', '[90,[11591.126, 17731.512,0]]', ' Cabo Santa Lucia ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11499', 'ATV_US_EP1', '[60,[12652.463, 17989.709,0]]', ' Cabo Santa Lucia ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11500', 'ATV_US_EP1', '[275,[12271.709, 17503.91,0]]', ' Cabo Santa Lucia ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11501', 'ATV_US_EP1', '[70,[10939.354, 17032.869,0]]', ' Isla De Vicotr ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11502', 'ATV_US_EP1', '[165,[11312.984, 16910.756,0]]', ' Isla De Vicotr ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11503', 'ATV_US_EP1', '[90,[10578.36, 16362.319,0]]', ' Mataredo ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11504', 'ATV_US_EP1', '[290,[10684.803, 16155.376,0]]', ' Mataredo ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11505', 'ATV_US_EP1', '[185,[10500.597, 16140.455,0]]', ' Mataredo ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11506', 'ATV_US_EP1', '[0,[10244.028, 15973.882,0]]', ' Mataredo ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11507', 'ATV_US_EP1', '[290,[8230.4336, 17044.904,0]]', ' Selva Outpost ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11508', 'ATV_US_EP1', '[10,[8398.4688, 17270.848,0]]', ' Selva Outpost ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11509', 'ATV_US_EP1', '[280,[8194.8945, 17330.188,0]]', ' Selva Outpost ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11510', 'ATV_US_EP1', '[280,[7578.4678, 15669.787,0]]', ' Hunapa ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11511', 'ATV_US_EP1', '[10,[7698.6597, 15897.414,0]]', ' Hunapa ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11512', 'ATV_US_EP1', '[185,[7753.5742, 15614.903,0]]', ' Hunapa ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11513', 'ATV_US_EP1', '[95,[10253.148, 15784.257,0]]', ' Passo Paradiso ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11514', 'ATV_US_EP1', '[95,[10404.459, 15809.559,0]]', ' Passo Paradiso ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11515', 'ATV_US_EP1', '[95,[9890.7656, 15509.824,0]]', ' Passo Paradiso ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11516', 'ATV_US_EP1', '[325,[10836.721, 15402.855,0]]', ' Pesadas ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11517', 'ATV_US_EP1', '[245,[11457.726, 15529.814,0]]', ' Pesadas ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11518', 'ATV_US_EP1', '[0,[11633.342, 15447.198,0]]', ' Pesadas ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11519', 'ATV_US_EP1', '[85,[11728.162, 15459.257,0]]', ' Pesadas ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11520', 'ATV_US_EP1', '[105,[11835.16, 15313.992,0]]', ' Pesadas ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11521', 'ATV_US_EP1', '[185,[12384.061, 15624.061,0]]', ' Pesadas ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11522', 'ATV_US_EP1', '[95,[11444.766, 15064.48,0]]', ' Pesadas ATV Spawn 7');
INSERT INTO `object_spawns` VALUES ('11523', 'ATV_US_EP1', '[270,[12357.455, 14935.483,0]]', ' Eponia ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11524', 'ATV_US_EP1', '[90,[12378.846, 15252.655,0]]', ' Eponia ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11525', 'ATV_US_EP1', '[0,[12533.046, 15033.469,0]]', ' Eponia ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11526', 'ATV_US_EP1', '[155,[12723.672, 14910.354,0]]', ' Eponia ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11527', 'ATV_US_EP1', '[90,[12512.755, 14993.653,0]]', ' Eponia ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11528', 'ATV_US_EP1', '[30,[12641.361, 14976.99,0]]', ' Eponia ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11529', 'ATV_US_EP1', '[30,[14006.19, 16465.65,0]]', ' PIco de Rev ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11530', 'ATV_US_EP1', '[41,[13922.67, 16677.576,0]]', ' PIco de Rev ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11531', 'ATV_US_EP1', '[345,[13771.832, 17067.785,0]]', ' PIco de Rev ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11532', 'ATV_US_EP1', '[185,[13343.394, 15961.805,0]]', ' PIco de Rev ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11533', 'ATV_US_EP1', '[5,[13984.737, 15727.688,0]]', ' PIco de Rev ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11534', 'ATV_US_EP1', '[310,[14856.045, 16172.146,0]]', ' PIco de Rev ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11535', 'ATV_US_EP1', '[270,[11331.332, 14567.011,0]]', ' Tandag ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11536', 'ATV_US_EP1', '[140,[11173.348, 14598.836,0]]', ' Tandag ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11537', 'ATV_US_EP1', '[10,[11441.637, 14859.672,0]]', ' Tandag ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11538', 'ATV_US_EP1', '[140,[11523.901, 14431.365,0]]', ' Tandag ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11539', 'ATV_US_EP1', '[200,[10625.654, 14166.037,0]]', ' Tandag ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11540', 'ATV_US_EP1', '[70,[11770.543, 14359.137,0]]', ' Tandag ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11541', 'ATV_US_EP1', '[190,[9689.4385, 14493.54,0]]', ' Pacamac ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11542', 'ATV_US_EP1', '[305,[9130.6465, 14841.538,0]]', ' Pacamac ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11543', 'ATV_US_EP1', '[305,[8716.4443, 15105.802,0]]', ' Pacamac ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11544', 'ATV_US_EP1', '[160,[9699.7969, 14397.961,0]]', ' Pacamac ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11545', 'ATV_US_EP1', '[160,[9813.2412, 14570.07,0]]', ' Pacamac ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11546', 'ATV_US_EP1', '[160,[9895.1699, 14397.479,0]]', ' Pacamac ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11547', 'ATV_US_EP1', '[190,[10096.514, 14111.26,0]]', ' Tlaloc ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11548', 'ATV_US_EP1', '[170,[10462.068, 13900.223,0]]', ' Tlaloc ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11549', 'ATV_US_EP1', '[170,[10545.517, 13506.027,0]]', ' Tlaloc ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11550', 'ATV_US_EP1', '[225,[10564.691, 13006.662,0]]', ' Tlaloc ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11551', 'ATV_US_EP1', '[190,[10826.713, 12616.553,0]]', ' Tlaloc ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11552', 'ATV_US_EP1', '[315,[10908.372, 12561.295,0]]', ' Tlaloc ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11553', 'ATV_US_EP1', '[260,[11588.313, 12133.002,0]]', ' Mercalillo ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11554', 'ATV_US_EP1', '[70,[12171.41, 11460.012,0]]', ' Mercalillo ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11555', 'ATV_US_EP1', '[355,[12160.645, 11723.408,0]]', ' Mercalillo ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11556', 'ATV_US_EP1', '[70,[12932.066, 11645.485,0]]', ' Mercalillo ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11557', 'ATV_US_EP1', '[350,[13192.123, 11492.268,0]]', ' Mercalillo ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11558', 'ATV_US_EP1', '[0,[13771.916, 11487.947,0]]', ' Mercalillo ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11559', 'ATV_US_EP1', '[15,[14715.434, 10725.323,0]]', ' Obregan ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11560', 'ATV_US_EP1', '[290,[13331.195, 10686.248,0]]', ' Obregan ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11561', 'ATV_US_EP1', '[265,[13430.641, 11061.036,0]]', ' Obregan ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11562', 'ATV_US_EP1', '[325,[13731.513, 10641.496,0]]', ' Obregan ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11563', 'ATV_US_EP1', '[315,[14767.403, 11201.049,0]]', ' Obregan ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11578', 'ATV_US_EP1', '[0,[13732.793, 11869.204]]', ' Bagango ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11564', 'ATV_US_EP1', '[110.74698,[8302.1123,9710.0576,0]]', ' atv @ playa de palomas');
INSERT INTO `object_spawns` VALUES ('11565', 'ATV_US_EP1', '[92.591911,[8294.1797,9696.7607,0]]', ' atv @ playa de palomas');
INSERT INTO `object_spawns` VALUES ('11566', 'Old_bike_TK_INS_EP1', '[91.458679,[8281.9424,9685.6914,0]]', ' bike @ playa de palomas');
INSERT INTO `object_spawns` VALUES ('11567', 'Old_bike_TK_INS_EP1', '[135.7144,[8280.6309,9678.333,0]]', ' bike @ playa de palomas');
INSERT INTO `object_spawns` VALUES ('11568', 'Old_bike_TK_INS_EP1', '[-5.3417916,[8273.5547,9669.5059,0]]', ' bike @ playa de palomas');
INSERT INTO `object_spawns` VALUES ('11569', 'M1030_US_DES_EP1', '[-223.55928,[8262.2666,9658.666,0]]', ' motorbike @ playa de palomas');
INSERT INTO `object_spawns` VALUES ('11570', 'M1030_US_DES_EP1', '[-226.30313,[8262.7764,9659.3232,0]]', ' motorbike @ playa de palomas');
INSERT INTO `object_spawns` VALUES ('11571', 'Lada1_TK_CIV_EP1', '[-197.33434,[8241.2959,9515.4678,0]]', ' lada @ playa de palomas');
INSERT INTO `object_spawns` VALUES ('11572', 'Lada1_TK_CIV_EP1', '[55.328445,[8263.4463,9571.1543,0]]', ' lada @ playa de palomas');
INSERT INTO `object_spawns` VALUES ('11573', 'Ural_INS', '[-52.810852,[19288.889,13872.466,0]]', ' Ural @ Pita');
INSERT INTO `object_spawns` VALUES ('11574', 'Ural_INS', '[-49.282665,[19185.73,13959.142,0]]', ' Ural @ Pita');
INSERT INTO `object_spawns` VALUES ('11575', 'Ural_INS', '[-3.1284053,[9689.7842,9967.7783,0]]', ' Ural @ Airfield North of Paraiso');
INSERT INTO `object_spawns` VALUES ('11576', 'policecar', '[-65.740524,[10929.167,5053.0239,0]]', ' Police Car @ Iguana');
INSERT INTO `object_spawns` VALUES ('11577', 'Lada1_TK_CIV_EP1', '[31.440821,[10754.076,5042.9971],0]]', ' Lada @ Iguana');
INSERT INTO `object_spawns` VALUES ('11579', 'ATV_US_EP1', '[30,[14173.046, 11874.826]]', ' Bagango ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11580', 'ATV_US_EP1', '[165,[14621.995, 11875.805]]', ' Bagango ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11581', 'ATV_US_EP1', '[340,[12535.565, 12691.447]]', ' Bagango ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11582', 'ATV_US_EP1', '[275,[13113.127, 13466.992]]', ' Bagango ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11583', 'ATV_US_EP1', '[350,[14022.95, 12895.669]]', ' Bagango ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11584', 'ATV_US_EP1', '[350,[15357.152, 13783.643]]', ' Benoma ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11585', 'ATV_US_EP1', '[310,[15324.236, 14102.392]]', ' Benoma ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11586', 'ATV_US_EP1', '[110,[14750.63, 13959.395]]', ' Benoma ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11587', 'ATV_US_EP1', '[250,[14329.94, 13331.594]]', ' Benoma ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11588', 'ATV_US_EP1', '[250,[15423.657, 12771.717]]', ' Benoma ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11589', 'ATV_US_EP1', '[315,[16875.299, 14351.316]]', ' Masbete ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11590', 'ATV_US_EP1', '[85,[17170.316, 13573.194]]', ' Masbete ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11591', 'ATV_US_EP1', '[325,[16511.139, 13863.115]]', ' Masbete ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11592', 'ATV_US_EP1', '[0,[17379.035, 14098.071]]', ' Masbete ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11593', 'ATV_US_EP1', '[180,[17746.787, 12423.521]]', ' Masbete ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11594', 'ATV_US_EP1', '[280,[17086.889, 14114.72]]', ' Masbete ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11595', 'ATV_US_EP1', '[280,[18788.313, 13699.436]]', ' Pita ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11596', 'ATV_US_EP1', '[270,[19233.328, 13621.528]]', ' Pita ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11597', 'ATV_US_EP1', '[220,[19149.684, 13973.387]]', ' Pita ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11598', 'ATV_US_EP1', '[220,[19373.244, 13329.306]]', ' Pita ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11599', 'ATV_US_EP1', '[85,[18752.859, 14053.574]]', ' Pita ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11600', 'ATV_US_EP1', '[85,[18319.543, 14585.994]]', ' Pita ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11601', 'ATV_US_EP1', '[170,[16457.686, 9407.3047]]', ' Everon ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11602', 'ATV_US_EP1', '[355,[17559.357, 9527.668]]', ' Everon ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11603', 'ATV_US_EP1', '[355,[17462.969, 9747.5684]]', ' Everon ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11604', 'ATV_US_EP1', '[60,[17248.268, 9492.6846]]', ' Everon ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11605', 'ATV_US_EP1', '[60,[16130.468, 9387.7676]]', ' Everon ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11606', 'ATV_US_EP1', '[310,[16441.422, 9273.0723]]', ' Everon ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11607', 'ATV_US_EP1', '[310,[14392.932, 9453.4658]]', ' Modesto ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11608', 'ATV_US_EP1', '[180,[14207.552, 9275.4639]]', ' Modesto ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11609', 'ATV_US_EP1', '[200,[15578.814, 8790.1211]]', ' Modesto ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11610', 'ATV_US_EP1', '[295,[14161.967, 8306.5127]]', ' Modesto ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11611', 'ATV_US_EP1', '[90,[13884.359, 10308.657]]', ' Modesto ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11612', 'ATV_US_EP1', '[90,[15390.302, 9845.292]]', ' Modesto ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11613', 'ATV_US_EP1', '[270,[13559.581, 9748.7197]]', ' Corazol ATV Spawn 03');
INSERT INTO `object_spawns` VALUES ('11614', 'ATV_US_EP1', '[195,[13486.236, 10258.578]]', ' Corazol ATV Spawn 01');
INSERT INTO `object_spawns` VALUES ('11615', 'ATV_US_EP1', '[195,[13275.942, 9896.4834]]', ' Corazol ATV Spawn 02');
INSERT INTO `object_spawns` VALUES ('11616', 'ATV_US_EP1', '[95,[12944.86, 9021.8037]]', ' Corazol Spawn ATV 05');
INSERT INTO `object_spawns` VALUES ('11617', 'ATV_US_EP1', '[180,[13233.57, 9197.9199]]', ' Corazol Spawn 06');
INSERT INTO `object_spawns` VALUES ('11618', 'ATV_US_EP1', '[180,[13537.303, 8705.9971]]', ' Corazol ATV Spawn 05');
INSERT INTO `object_spawns` VALUES ('11619', 'ATV_US_EP1', '[305,[12959.085, 8615.1406]]', ' Corazol ATV Spawn 06');
INSERT INTO `object_spawns` VALUES ('11620', 'ATV_US_EP1', '[270,[13527.632, 7769.0684]]', ' Corazol ATV Spawn 07');
INSERT INTO `object_spawns` VALUES ('11621', 'ATV_US_EP1', '[85,[12330.675, 8502.3789]]', ' Corazol ATV Spawn 08');
INSERT INTO `object_spawns` VALUES ('11622', 'ATV_US_EP1', '[225,[12776.792, 8088.4609]]', ' Corazol ATV Spawn 09');
INSERT INTO `object_spawns` VALUES ('11623', 'ATV_US_EP1', '[225,[13068.459, 7779.9375]]', ' Corazol ATV Spawn 10');
INSERT INTO `object_spawns` VALUES ('11624', 'ATV_US_EP1', '[355,[9935.2119, 9995.6387]]', ' Paraizo ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11625', 'ATV_US_EP1', '[265,[9584.291, 9918.0068]]', ' Paraizo ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11626', 'ATV_US_EP1', '[265,[9074.3545, 10031.754]]', ' Paraizo ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11627', 'ATV_US_EP1', '[50,[8263.5322, 9569.8398]]', ' Paraizo ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11628', 'ATV_US_EP1', '[190,[8631.5781, 10087.42]]', ' Paraizo ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11629', 'ATV_US_EP1', '[190,[10265.806, 9102.2021]]', ' Paraizo ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11630', 'ATV_US_EP1', '[190,[10836.935, 10762.635]]', ' Paraizo ATV Spawn 7');
INSERT INTO `object_spawns` VALUES ('11631', 'ATV_US_EP1', '[270,[10707.213, 8931.9424]]', ' Paraizo ATV Spawn 8');
INSERT INTO `object_spawns` VALUES ('11632', 'ATV_US_EP1', '[270,[10376.319, 8797.7979]]', ' Paraizo ATV Spawn 9');
INSERT INTO `object_spawns` VALUES ('11633', 'ATV_US_EP1', '[90,[9279.1406, 8486.5117]]', ' Samato ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11634', 'ATV_US_EP1', '[0,[9755.3975, 8928.5938]]', ' Samato ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11635', 'ATV_US_EP1', '[333,[9673.2314, 8729.3877]]', ' Samato ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11636', 'ATV_US_EP1', '[325,[7769.2363, 9713.6895]]', ' Samato ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11637', 'ATV_US_EP1', '[170,[8062.3921, 9325.2705]]', ' Samato ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11638', 'ATV_US_EP1', '[75,[7364.7051, 8713.5742]]', ' Samato ATV Spawn 7');
INSERT INTO `object_spawns` VALUES ('11639', 'ATV_US_EP1', '[180,[6735.6646, 8053.2725]]', ' Samato ATV Spawn 7');
INSERT INTO `object_spawns` VALUES ('11640', 'ATV_US_EP1', '[180,[8147.7485, 9030.5508]]', ' Samato ATV Spawn 8');
INSERT INTO `object_spawns` VALUES ('11641', 'ATV_US_EP1', '[10,[7326.9194, 8076.7896]]', ' Samato ATV Spawn 8');
INSERT INTO `object_spawns` VALUES ('11642', 'ATV_US_EP1', '[155,[7749.5542, 8445.165]]', ' Samato ATV Spawn 9');
INSERT INTO `object_spawns` VALUES ('11643', 'ATV_US_EP1', '[330,[7028.0518, 7549.6768]]', ' Samato ATV Spawn 10');
INSERT INTO `object_spawns` VALUES ('11644', 'ATV_US_EP1', '[272,[7992.5854, 7757.7383]]', ' Race Track ATV Spawn 01');
INSERT INTO `object_spawns` VALUES ('11645', 'ATV_US_EP1', '[90,[8174.9712, 7796.0557]]', ' Race Track ATV Spawn 02');
INSERT INTO `object_spawns` VALUES ('11646', 'ATV_US_EP1', '[90,[8175.0313, 7786.3804]]', ' Race Track ATV Spawn 03');
INSERT INTO `object_spawns` VALUES ('11647', 'ATV_US_EP1', '[180,[8227.2891, 7757.6758]]', ' Race Track ATV Spawn 04');
INSERT INTO `object_spawns` VALUES ('11648', 'ATV_US_EP1', '[180,[8224.7012, 7757.7222]]', ' Race Track ATV Spawn 05');
INSERT INTO `object_spawns` VALUES ('11649', 'ATV_US_EP1', '[180,[7703.1064, 7488.0542]]', ' Race Track ATV Spawn 06');
INSERT INTO `object_spawns` VALUES ('11650', 'ATV_US_EP1', '[35,[7605.3423, 7615.3833]]', ' Race Track ATV Spawn 07');
INSERT INTO `object_spawns` VALUES ('11651', 'ATV_US_EP1', '[115,[7784.7666, 7243.9541]]', ' Race Track ATV Spawn 08');
INSERT INTO `object_spawns` VALUES ('11652', 'ATV_US_EP1', '[30,[8286.7441, 7330.126]]', ' Race Track ATV Spawn 09');
INSERT INTO `object_spawns` VALUES ('11653', 'ATV_US_EP1', '[290,[8179.3335, 7410.4541]]', ' Race Track ATV Spawn 10');
INSERT INTO `object_spawns` VALUES ('11654', 'ATV_US_EP1', '[270,[8922.0479, 6116.8076]]', ' Cayo ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11655', 'ATV_US_EP1', '[90,[7455.0259, 6510.6494]]', ' Cayo ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11656', 'ATV_US_EP1', '[250,[7552.7539, 6379.6768]]', ' Cayo ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11657', 'ATV_US_EP1', '[65,[9247.335, 5378.1177]]', ' Cayo ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11658', 'ATV_US_EP1', '[140,[9716.8838, 6651.0176]]', ' Cayo ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11659', 'ATV_US_EP1', '[140,[9224.9209, 5863.1211]]', ' Cayo ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11660', 'ATV_US_EP1', '[270,[10212.307, 6389.4199]]', ' Cayo ATV Spawn 8');
INSERT INTO `object_spawns` VALUES ('11661', 'ATV_US_EP1', '[50,[10612.569, 4731.2642]]', ' Iguana ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11662', 'ATV_US_EP1', '[350,[10765.535, 4908.606]]', ' Iguana ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11663', 'ATV_US_EP1', '[0,[10759.62, 4727.9126]]', ' Iguana ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11664', 'ATV_US_EP1', '[95,[10457.897, 4846.4717]]', ' Iguana ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11665', 'ATV_US_EP1', '[220,[10639.32, 5166.2607]]', ' Iguana ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11666', 'ATV_US_EP1', '[140,[11210.789, 5175.2915]]', ' Iguana ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11667', 'ATV_US_EP1', '[0,[11443.593, 5430.6909]]', ' Iguana ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11668', 'ATV_US_EP1', '[265,[11802.5, 5855.7676]]', ' Dolores ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11669', 'ATV_US_EP1', '[0,[11218.14, 5882.2227]]', ' Dolores ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11670', 'ATV_US_EP1', '[0,[11549.52, 6211.8594]]', ' Dolores ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11671', 'ATV_US_EP1', '[180,[11226.982, 6169.1431]]', ' Dolores ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11672', 'ATV_US_EP1', '[180,[11914.789, 6117.499]]', ' Dolores ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11673', 'ATV_US_EP1', '[225,[11727.537, 6335.4551]]', ' Dolores ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11674', 'ATV_US_EP1', '[265,[11822.31, 7090.0234]]', ' Ortego ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11675', 'ATV_US_EP1', '[265,[11913.512, 7392.7637]]', ' Ortego ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11676', 'ATV_US_EP1', '[175,[12552.689, 7298.541]]', ' Ortego ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11677', 'ATV_US_EP1', '[80,[12183.152, 7055.9189]]', ' Ortego ATV Spawn 4');
INSERT INTO `object_spawns` VALUES ('11678', 'ATV_US_EP1', '[315,[12264.061, 7437.9043]]', ' Ortego ATV Spawn 5');
INSERT INTO `object_spawns` VALUES ('11679', 'ATV_US_EP1', '[20,[12624.957, 7491.2817]]', ' Ortego ATV Spawn 6');
INSERT INTO `object_spawns` VALUES ('11680', 'ATV_US_EP1', '[20,[2855.4546, 2855.3638]]', ' Rahmadi ATV Spawn 1');
INSERT INTO `object_spawns` VALUES ('11681', 'ATV_US_EP1', '[180,[3133.9897, 2747.3169]]', ' Rahmadi ATV Spawn 2');
INSERT INTO `object_spawns` VALUES ('11682', 'ATV_US_EP1', '[310,[2962.665, 2948.0823]]', ' Rahmadi ATV Spawn 3');
INSERT INTO `object_spawns` VALUES ('11683', 'Tractor', '[330,[16718.453, 9483.3604]]', ' Everon Tractor Spawn 1');
INSERT INTO `object_spawns` VALUES ('11684', 'Tractor', '[130,[16437.078, 9294.0234]]', ' Everon Tractor Spawn 2');
INSERT INTO `object_spawns` VALUES ('11685', 'Tractor', '[300,[16096.494, 9383.6465]]', ' Everon Tractor Spawn 3');
INSERT INTO `object_spawns` VALUES ('11686', 'Tractor', '[150,[16040.936, 9493.1719]]', ' Everon Tractor Spawn 4');
INSERT INTO `object_spawns` VALUES ('11687', 'Tractor', '[315,[16658.113, 9195.6494]]', ' Everon Tractor Spawn 5');
INSERT INTO `object_spawns` VALUES ('11688', 'Tractor', '[145,[16058.27, 9290.8359]]', ' Everon Tractor Spawn 6');
INSERT INTO `object_spawns` VALUES ('11689', 'Tractor', '[145,[15987.362, 9351.708]]', ' Everon Tractor Spawn 7');
INSERT INTO `object_spawns` VALUES ('11690', 'Tractor', '[280,[16661.479, 9601.1934]]', ' Everon Tractor Spawn 8');
INSERT INTO `object_spawns` VALUES ('11691', 'Tractor', '[20,[16706.117, 8962.1016]]', ' Everon Tractor Spawn 9');
INSERT INTO `object_spawns` VALUES ('11692', 'Tractor', '[120,[15575.993, 8784.9893]]', ' Everon Tractor Spawn 2');
INSERT INTO `object_spawns` VALUES ('11693', 'Tractor', '[220,[15548.715, 8748.3887]]', ' Everon Tractor Spawn 3');
INSERT INTO `object_spawns` VALUES ('11694', 'Tractor', '[85,[15665.043, 8675.502]]', ' Everon Tractor Spawn 4');
INSERT INTO `object_spawns` VALUES ('11695', 'Tractor', '[85,[15502.667, 9053.0352]]', ' Everon Tractor Spawn 4');
INSERT INTO `object_spawns` VALUES ('11696', 'Tractor', '[85,[15550.704, 9364.5938]]', ' Everon Tractor Spawn 5');
INSERT INTO `object_spawns` VALUES ('11697', 'Tractor', '[85,[14067.707, 9137.8066]]', ' Modesta Tractor Spawn 1');
INSERT INTO `object_spawns` VALUES ('11698', 'Tractor', '[335,[14290.978, 9257.0117]]', ' Modesta Tractor Spawn 2');
INSERT INTO `object_spawns` VALUES ('11699', 'Tractor', '[205,[14175.877, 9404.9277]]', ' Modesta Tractor Spawn 3');
INSERT INTO `object_spawns` VALUES ('11700', 'Tractor', '[320,[14139.916, 9321.6592]]', ' Modesta Tractor Spawn 4');
INSERT INTO `object_spawns` VALUES ('11701', 'Tractor', '[0,[14217.781, 9290.1963]]', ' Modesta Tractor Spawn 5');
INSERT INTO `object_spawns` VALUES ('11702', 'Tractor', '[65,[14162.084, 9450.7402]]', ' Modesta Tractor Spawn 6');
INSERT INTO `object_spawns` VALUES ('11703', 'CAA1_AH6_NAPA', '[65,[14064.463, 9997.1436]]', ' Modesta Tractor Spawn 6');
INSERT INTO `object_spawns` VALUES ('11704', 'Tractor', '[65,[13480.425, 11084.865]]', ' Mercailillo Tractor Spawn 1');
INSERT INTO `object_spawns` VALUES ('11705', 'Tractor', '[75,[13841.589, 10873.508]]', ' Mercailillo Tractor Spawn 2');
INSERT INTO `object_spawns` VALUES ('11706', 'Tractor', '[310,[13377.789, 10725.222]]', ' Mercailillo Tractor Spawn 3');
INSERT INTO `object_spawns` VALUES ('11707', 'Tractor', '[185,[13567.765, 9732.2803]]', ' Mercailillo Tractor Spawn 4');
INSERT INTO `object_spawns` VALUES ('11708', 'Tractor', '[325,[13449.932, 9749.0898]]', ' Mercailillo Tractor Spawn 5');
INSERT INTO `object_spawns` VALUES ('11709', 'Tractor', '[165,[13745.217, 10610.709]]', ' Mercailillo Tractor Spawn 6');
INSERT INTO `object_spawns` VALUES ('11710', 'Tractor', '[60,[9078.6289, 5317.2021]]', ' Tiberia Tactor Spawn 1');
INSERT INTO `object_spawns` VALUES ('11711', 'Tractor', '[0,[9244.0039, 5258.2129]]', ' Tiberia Tactor Spawn 2');
INSERT INTO `object_spawns` VALUES ('11712', 'Tractor', '[310,[9233.5654, 5402.3545]]', ' Tiberia Tactor Spawn 5');
INSERT INTO `object_spawns` VALUES ('11713', 'Tractor', '[90,[9510.1602, 5291.814]]', ' Tiberia Tactor Spawn 6');
INSERT INTO `object_spawns` VALUES ('11714', 'Tractor', '[310,[11263.881, 5310.6763]]', ' Parato Tactor Spawn 1');
INSERT INTO `object_spawns` VALUES ('11715', 'Tractor', '[15,[11455.899, 5441.3906]]', ' Parato Tactor Spawn 2');
INSERT INTO `object_spawns` VALUES ('11716', 'Tractor', '[160,[11196.919, 5193.4238]]', ' Parato Tactor Spawn 3');
INSERT INTO `object_spawns` VALUES ('11717', 'Tractor', '[135,[11211.378, 5387.3389]]', ' Parato Tactor Spawn 4');
INSERT INTO `object_spawns` VALUES ('11718', 'Tractor', '[310,[11389.01, 5467.2998]]', ' Parato Tactor Spawn 5');
INSERT INTO `object_spawns` VALUES ('11719', 'Tractor', '[310,[11461.543, 5567.4204]]', ' Parato Tactor Spawn 6');
INSERT INTO `object_spawns` VALUES ('11720', 'Tractor', '[245,[8948.9141, 7754.7988]]', ' Gulan Tactor Spawn 1');
INSERT INTO `object_spawns` VALUES ('11721', 'Tractor', '[345,[8932.4521, 7711.4063]]', ' Gulan Tactor Spawn 2');
INSERT INTO `object_spawns` VALUES ('11722', 'Tractor', '[5,[8114.6514, 7773.7998]]', ' Gulan Tactor Spawn 3');
INSERT INTO `object_spawns` VALUES ('11723', 'Tractor', '[240,[9655.4014, 8718.3398]]', ' Gulan Tactor Spawn 4');
INSERT INTO `object_spawns` VALUES ('11724', 'Tractor', '[65,[9550.2715, 8663.8438]]', ' Gulan Tactor Spawn 5');
INSERT INTO `object_spawns` VALUES ('11725', 'Tractor', '[5,[9777.8447, 8927.7578]]', ' Gulan Tactor Spawn 6');
INSERT INTO `object_spawns` VALUES ('11726', 'Tractor', '[320,[9757.5615, 8390.9287]]', ' Gulan Tactor Spawn 7');
INSERT INTO `object_spawns` VALUES ('11727', 'Tractor', '[90,[9202.1758, 5095.1836]]', ' Tiberia Tactor Spawn 3');
INSERT INTO `object_spawns` VALUES ('11728', 'Tractor', '[85,[9371.1123, 5312.4634]]', ' Tiberia Tactor Spawn 4');
INSERT INTO `object_spawns` VALUES ('11729', 'SkodaBlue', '[250,[7563.5112, 6287.1182]]', ' Arcadia Blue Car Spawn 5');
INSERT INTO `object_spawns` VALUES ('11730', 'SkodaBlue', '[155,[7642.9409, 6298.7144]]', ' Arcadia Blue Car Spawn 2');
INSERT INTO `object_spawns` VALUES ('11731', 'SkodaBlue', '[155,[7665.3184, 6298.2163]]', ' Arcadia Blue Car Spawn 4');
INSERT INTO `object_spawns` VALUES ('11732', 'SkodaBlue', '[165,[7729.7134, 6308.3081]]', ' Arcadia Blue Car Spawn 3');
INSERT INTO `object_spawns` VALUES ('11733', 'SkodaBlue', '[255,[7742.7593, 6253.5107]]', ' Arcadia Blue Car Spawn 1');
INSERT INTO `object_spawns` VALUES ('11734', 'SkodaBlue', '[290,[7614.0444, 6618.0679]]', ' Arcadia Blue Car Spawn 6');
INSERT INTO `object_spawns` VALUES ('11735', 'SkodaBlue', '[185,[7502.1567, 6531.5503]]', ' Arcadia Blue Car Spawn 7');
INSERT INTO `object_spawns` VALUES ('11736', 'SkodaBlue', '[0,[8912.6455, 6111.417]]', ' Cayo Blue Car Spawn 1');
INSERT INTO `object_spawns` VALUES ('11737', 'SkodaBlue', '[185,[9267.8008, 5891.6187]]', ' Cayo Blue Car Spawn 2');
INSERT INTO `object_spawns` VALUES ('11738', 'SkodaBlue', '[270,[9433.9453, 5815.3887]]', ' Cayo Blue Car Spawn 4');
INSERT INTO `object_spawns` VALUES ('11739', 'SkodaBlue', '[125,[9377.4805, 5803.4731]]', ' Cayo Blue Car Spawn 3');
INSERT INTO `object_spawns` VALUES ('11740', 'SkodaBlue', '[270,[9304.6641, 5953.9004]]', ' Cayo Blue Car Spawn 5');
INSERT INTO `object_spawns` VALUES ('11741', 'SkodaBlue', '[180,[9268.8623, 5256.2656]]', ' Tiberia Blue Car Spawn 1');
INSERT INTO `object_spawns` VALUES ('11742', 'SkodaBlue', '[345,[9304.0107, 5230.3125]]', ' Tiberia Blue Car Spawn 2');
INSERT INTO `object_spawns` VALUES ('11743', 'SkodaBlue', '[120,[10618.417, 4738.5879]]', ' Iguana Blue Car Spawn 1');
INSERT INTO `object_spawns` VALUES ('11744', 'SkodaBlue', '[20,[10543.868, 4802.7974]]', ' Iguana Blue Car Spawn 2');
INSERT INTO `object_spawns` VALUES ('11745', 'SkodaBlue', '[180,[10756.826, 4916.188]]', ' Iguana Blue Car Spawn 3');
INSERT INTO `object_spawns` VALUES ('11746', 'SkodaBlue', '[90,[10710.458, 5064.814]]', ' Iguana Blue Car Spawn 5');
INSERT INTO `object_spawns` VALUES ('11747', 'SkodaBlue', '[90,[10763.692, 4975.6826]]', ' Iguana Blue Car Spawn 4');
INSERT INTO `object_spawns` VALUES ('11748', 'SkodaBlue', '[0,[11266.196, 5230.6924]]', ' Parata Blue Car Spawn 1');
INSERT INTO `object_spawns` VALUES ('11749', 'SkodaBlue', '[205,[11318.961, 5312.1108]]', ' Parata Blue Car Spawn 2');
INSERT INTO `object_spawns` VALUES ('11750', 'SkodaBlue', '[0,[11272.54, 5937.249]]', ' Dolores Blue Car Spawn 1');
INSERT INTO `object_spawns` VALUES ('11751', 'SkodaBlue', '[240,[11580.529, 5863.6816]]', ' Dolores Blue Car Spawn 2');
INSERT INTO `object_spawns` VALUES ('11752', 'SkodaBlue', '[350,[11231.804, 6103.2827]]', ' Dolores Blue Car Spawn 3');
INSERT INTO `object_spawns` VALUES ('11753', 'SkodaBlue', '[0,[11300.517, 6108.7964]]', ' Dolores Blue Car Spawn 4');
INSERT INTO `object_spawns` VALUES ('11754', 'SkodaBlue', '[0,[11451.096, 6099.4961]]', ' Dolores Blue Car Spawn 5');
INSERT INTO `object_spawns` VALUES ('11755', 'SkodaBlue', '[90,[12276.444, 6834.7388]]', ' Ortega Blue Car Spawn 1');
INSERT INTO `object_spawns` VALUES ('11756', 'SkodaBlue', '[185,[12342.341, 7144.5981]]', ' Ortega Blue Car Spawn 2');
INSERT INTO `object_spawns` VALUES ('11757', 'SkodaBlue', '[90,[12258.512, 7126.6123]]', ' Ortega Blue Car Spawn 3');
INSERT INTO `object_spawns` VALUES ('11758', 'SkodaBlue', '[90,[12861.404, 6835.1855]]', ' Ortega Blue Car Spawn 4');
INSERT INTO `object_spawns` VALUES ('11759', 'SkodaBlue', '[270,[12459.404, 7124.3848]]', ' Ortega Blue Car Spawn 5');
INSERT INTO `object_spawns` VALUES ('11760', 'SkodaBlue', '[125,[12344.502, 7300.3057]]', ' Ortega Blue Car Spawn 6');
INSERT INTO `object_spawns` VALUES ('11761', 'SkodaBlue', '[90,[13210.672, 6923.229]]', ' Geraldo Blue Car Spawn 1');
INSERT INTO `object_spawns` VALUES ('11762', 'SkodaBlue', '[275,[13252.3, 6974.7437]]', ' Geraldo Blue Car Spawn 2');
INSERT INTO `object_spawns` VALUES ('11763', 'SkodaBlue', '[100,[13406.417, 6896.7261]]', ' Geraldo Blue Car Spawn 3');
INSERT INTO `object_spawns` VALUES ('11764', 'SkodaBlue', '[60,[11857.912, 7326.9946]]', ' Geraldo Blue Car Spawn 4');
INSERT INTO `object_spawns` VALUES ('11765', 'SkodaBlue', '[280,[10762.789, 7354.1982]]', ' Vallejo Blue Car Spawn 1');
INSERT INTO `object_spawns` VALUES ('11766', 'SkodaBlue', '[270,[8106.1387, 7787.8442]]', ' Gulan Blue Care Spawn 1');
INSERT INTO `object_spawns` VALUES ('11767', 'SkodaBlue', '[270,[8093.269, 7770.5703]]', ' Gulan Blue Care Spawn 2');
INSERT INTO `object_spawns` VALUES ('11768', 'SkodaBlue', '[180,[8179.5273, 7863.2739]]', ' Gulan Blue Care Spawn 3');
INSERT INTO `object_spawns` VALUES ('11769', 'SkodaBlue', '[180,[6949.6538, 8253.6514]]', ' Estrella Blue Care Spawn 1');
INSERT INTO `object_spawns` VALUES ('11770', 'SkodaBlue', '[0,[6794.9419, 8023.7607]]', ' Estrella Blue Care Spawn 2');
INSERT INTO `object_spawns` VALUES ('11771', 'SkodaBlue', '[110,[6863.5786, 8198.332]]', ' Estrella Blue Care Spawn 3');
INSERT INTO `object_spawns` VALUES ('11772', 'SkodaBlue', '[170,[7461.3823, 8800.8506]]', ' Cedras Blue Care Spawn 1');
INSERT INTO `object_spawns` VALUES ('11773', 'SkodaBlue', '[350,[7471.2422, 8795.1895]]', ' Cedras Blue Care Spawn 2');
INSERT INTO `object_spawns` VALUES ('11774', 'SkodaBlue', '[175,[7439.9785, 8921.123]]', ' Cedras Blue Care Spawn 3');
INSERT INTO `object_spawns` VALUES ('11775', 'SkodaBlue', '[330,[7749.4028, 9147.0957]]', ' Ambergris Blue Care Spawn 1');
INSERT INTO `object_spawns` VALUES ('11776', 'SkodaBlue', '[330,[7834.1738, 9195.8271]]', ' Ambergris Blue Care Spawn 2');
INSERT INTO `object_spawns` VALUES ('11777', 'SkodaBlue', '[150,[7659.5835, 9007.3535]]', ' Ambergris Blue Care Spawn 3');
INSERT INTO `object_spawns` VALUES ('11778', 'SkodaBlue', '[95,[8366.542, 9013.3809]]', ' Chantico Blue Care Spawn 1');
INSERT INTO `object_spawns` VALUES ('11779', 'SkodaBlue', '[90,[8253.0293, 8904.4932]]', ' Chantico Blue Care Spawn 2');
INSERT INTO `object_spawns` VALUES ('11780', 'SkodaBlue', '[90,[8107.2534, 9321.9531]]', ' Chantico Blue Care Spawn 3');
INSERT INTO `object_spawns` VALUES ('11781', 'SkodaBlue', '[90,[8085.2783, 9345.835]]', ' Chantico Blue Care Spawn 4');
INSERT INTO `object_spawns` VALUES ('11782', 'SkodaBlue', '[135,[8463.3574, 9432.0459]]', ' Chantico Blue Care Spawn 5');
INSERT INTO `object_spawns` VALUES ('11783', 'SkodaBlue', '[330,[8216.5635, 9636.6172]]', ' Chantico Blue Care Spawn 6');
INSERT INTO `object_spawns` VALUES ('11784', 'SkodaBlue', '[30,[8646.3125, 10059.145]]', ' Chantico Blue Care Spawn 7');
INSERT INTO `object_spawns` VALUES ('11785', 'SkodaBlue', '[0,[8973.957, 8398.6084]]', ' Somato Blue Care Spawn 1');
INSERT INTO `object_spawns` VALUES ('11786', 'SkodaBlue', '[265,[9240.2393, 8142.5918]]', ' Somato Blue Care Spawn 2');
INSERT INTO `object_spawns` VALUES ('11787', 'SkodaBlue', '[265,[9231.5234, 8164.6133]]', ' Somato Blue Care Spawn 3');
INSERT INTO `object_spawns` VALUES ('11788', 'SkodaBlue', '[5,[9191.5957, 8451.4297]]', ' Somato Blue Care Spawn 4');
INSERT INTO `object_spawns` VALUES ('11789', 'SkodaBlue', '[60,[9784.3428, 8693.9785]]', ' Paraiso Blue Care Spawn 1');
INSERT INTO `object_spawns` VALUES ('11790', 'SkodaBlue', '[105,[10181.584, 8416.8457]]', ' Paraiso Blue Care Spawn 2');
INSERT INTO `object_spawns` VALUES ('11791', 'SkodaBlue', '[195,[10156.863, 8317.8672]]', ' Paraiso Blue Care Spawn 3');
INSERT INTO `object_spawns` VALUES ('11792', 'SkodaBlue', '[0,[10646.906, 8963.9746]]', ' Paraiso Blue Care Spawn 4');
INSERT INTO `object_spawns` VALUES ('11793', 'SkodaBlue', '[0,[10602.343, 8964.5107]]', ' Paraiso Blue Care Spawn 5');
INSERT INTO `object_spawns` VALUES ('11794', 'SkodaBlue', '[180,[10607.485, 8926.5039]]', ' Paraiso Blue Care Spawn 6');
INSERT INTO `object_spawns` VALUES ('11795', 'SkodaBlue', '[90,[10147.469, 9342.0107]]', ' Paraiso Blue Care Spawn 7');
INSERT INTO `object_spawns` VALUES ('11796', 'SkodaBlue', '[90,[10841.601, 9613.2051]]', ' Paraiso Blue Care Spawn 8');
INSERT INTO `object_spawns` VALUES ('11797', 'SkodaBlue', '[215,[11191.554, 8838.0908]]', ' Paraiso Blue Care Spawn 9');
INSERT INTO `object_spawns` VALUES ('11798', 'SkodaBlue', '[140,[11569.581, 9122.7725]]', ' Paraiso Blue Care Spawn 10');
INSERT INTO `object_spawns` VALUES ('11799', 'PBX', '[140,[3539.8403, 3597.6135]]', ' Rahmadi PBX 1');
INSERT INTO `object_spawns` VALUES ('11800', 'PBX', '[140,[6105.2007, 6918.9087]]', ' San Peregrino PBX 1');
INSERT INTO `object_spawns` VALUES ('11801', 'PBX', '[140,[8721.9717, 4757.6455]]', ' Tiberia PBX 1');
INSERT INTO `object_spawns` VALUES ('11802', 'PBX', '[140,[9669.8643, 3611.7395]]', ' San Tomas PBX 1');
INSERT INTO `object_spawns` VALUES ('11803', 'PBX', '[140,[10283.182, 4585.8486]]', ' Iguana PBX 1');
INSERT INTO `object_spawns` VALUES ('11804', 'PBX', '[140,[11066.049, 6522.374]]', ' Dolores PBX 1');
INSERT INTO `object_spawns` VALUES ('11805', 'PBX', '[140,[13865.942, 7482.4438]]', ' Geraldo PBX 1');
INSERT INTO `object_spawns` VALUES ('11806', 'PBX', '[140,[14868.072, 8206.791]]', ' Guala PBX 1');
INSERT INTO `object_spawns` VALUES ('11807', 'PBX', '[140,[16882.498, 9387.1523]]', ' Ancon PBX 1');
INSERT INTO `object_spawns` VALUES ('11808', 'PBX', '[140,[19361.262, 12905.132]]', ' Pita PBX 1');
INSERT INTO `object_spawns` VALUES ('11809', 'PBX', '[315,[15735.942, 15140.753]]', ' Amanitas PBX 1');
INSERT INTO `object_spawns` VALUES ('11810', 'PBX', '[315,[14295.548, 17088.723]]', ' Roca del Dror PBX 1');
INSERT INTO `object_spawns` VALUES ('11811', 'PBX', '[60,[12265.299, 18345.73]]', ' Cabo Santa Lucia PBX 1');
INSERT INTO `object_spawns` VALUES ('11812', 'PBX', '[60,[10720.145, 16805.041]]', ' Cabo Indice PBX 1');
INSERT INTO `object_spawns` VALUES ('11813', 'PBX', '[60,[6285.0781, 16747.914]]', ' Golfo Valiente PBX 1');
INSERT INTO `object_spawns` VALUES ('11814', 'PBX', '[270,[4981.1714, 16168.875]]', ' Isla del Vida PBX 1');
INSERT INTO `object_spawns` VALUES ('11815', 'PBX', '[270,[4333.666, 15503.652]]', ' Isla del Vassal PBX 1');
INSERT INTO `object_spawns` VALUES ('11816', 'PBX', '[270,[6242.585, 7990.3672]]', ' Playa Riscal PBX 1');
INSERT INTO `object_spawns` VALUES ('11817', 'PBX', '[270,[9446.3564, 11162.274]]', ' Rashidah PBX 1');
INSERT INTO `object_spawns` VALUES ('11818', 'PBX', '[0,[11859.629, 10182.418]]', ' Corozal PBX 1');
INSERT INTO `object_spawns` VALUES ('11819', 'PBX', '[0,[12427.207, 10453.193]]', ' Isla Verda PBX 1');
INSERT INTO `object_spawns` VALUES ('11820', 'PBX', '[0,[12403.51, 10857.137]]', ' Isla del Libertad PBX 1');
INSERT INTO `object_spawns` VALUES ('11821', 'PBX', '[0,[11800.033, 11482.988]]', ' Mercalillo PBX 1');
INSERT INTO `object_spawns` VALUES ('11822', 'PBX', '[0,[6969.5635, 15854.697]]', ' Hunapu PBX 1');
INSERT INTO `object_spawns` VALUES ('11823', 'PBX', '[0,[17900.205, 19009.08]]', ' Antigua PBX 1');
INSERT INTO `object_spawns` VALUES ('11824', 'Fishing_Boat', '[0,[19259.027, 13636.32]]', ' Pita Fishing Boat Spawn 1');
INSERT INTO `object_spawns` VALUES ('11825', 'Fishing_Boat', '[15,[10693.838, 16309.629]]', ' Mataredo Fishing Boat Spawn 1');
INSERT INTO `object_spawns` VALUES ('11826', 'Fishing_Boat', '[15,[7723.25, 15590.342]]', ' Hunapo Fishing Boat Spawn 1');
INSERT INTO `object_spawns` VALUES ('11827', 'Fishing_Boat', '[220,[10973.569, 12501.482]]', ' Tlaloc Fishing Boat Spawn 1');
INSERT INTO `object_spawns` VALUES ('11828', 'Fishing_Boat', '[220,[13162.255, 9079.1172]]', ' Corazol Fishing Boat Spawn 1');
INSERT INTO `object_spawns` VALUES ('11829', 'Fishing_Boat', '[75,[11620.232, 5986.9375]]', ' Dolores Fishing Boat Spawn 1');
INSERT INTO `object_spawns` VALUES ('11830', 'Fishing_Boat', '[75,[11328.428, 5237.4072]]', ' Parato Fishing Boat Spawn 1');
INSERT INTO `object_spawns` VALUES ('11831', 'Fishing_Boat', '[180,[10676.752, 4818.0654]]', ' Iguana Fishing Boat Spawn 1');
INSERT INTO `object_spawns` VALUES ('11832', 'Fishing_Boat', '[180,[7376.2744, 6359.5986]]', ' Acadia Fishing Boat Spawn 1');
INSERT INTO `object_spawns` VALUES ('11833', 'Fishing_Boat', '[180,[6812.1055, 8167.6162]]', ' Estrella Fishing Boat Spawn 1');
INSERT INTO `object_spawns` VALUES ('11834', 'Fishing_Boat', '[180,[7364.0693, 8903.5078]]', ' Cedras Fishing Boat Spawn 1');

-- ----------------------------
-- Table structure for `player_data`
-- ----------------------------
DROP TABLE IF EXISTS `player_data`;
CREATE TABLE `player_data` (
  `PlayerUID` varchar(32) NOT NULL,
  `PlayerName` varchar(128) CHARACTER SET utf8 NOT NULL,
  `PlayerMorality` int(11) NOT NULL DEFAULT '0',
  `PlayerSex` tinyint(3) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`PlayerUID`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of player_data
-- ----------------------------

-- ----------------------------
-- Table structure for `player_login`
-- ----------------------------
DROP TABLE IF EXISTS `player_login`;
CREATE TABLE `player_login` (
  `LoginID` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `PlayerUID` varchar(32) NOT NULL,
  `CharacterID` int(11) unsigned NOT NULL,
  `Datestamp` datetime NOT NULL,
  `Action` tinyint(3) NOT NULL,
  PRIMARY KEY (`LoginID`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of player_login
-- ----------------------------

-- ----------------------------
-- Procedure structure for `pCleanup`
-- ----------------------------
DROP PROCEDURE IF EXISTS `pCleanup`;
DELIMITER ;;
CREATE DEFINER=`root`@`` PROCEDURE `pCleanup`()
BEGIN

	CALL pCleanupOOB();

	DELETE
		FROM object_data 
		WHERE Damage = '1';	

	DELETE
		FROM object_data
		WHERE DATE(Datestamp) < CURDATE() - INTERVAL 8 DAY
			AND Classname != 'dummy'
			AND Classname != 'TentStorage'
			AND Classname != 'Hedgehog_DZ'
			AND Classname != 'Wire_cat1'
			AND Classname != 'Sandbag1_DZ'
			AND Classname != 'TrapBear';

	DELETE
		FROM object_data
		USING object_data, character_data
		WHERE object_data.Classname = 'TentStorage'
			AND object_data.CharacterID = character_data.CharacterID
			AND character_data.Alive = 0
			AND DATE(character_data.Datestamp) < CURDATE() - INTERVAL 4 DAY;

	DELETE
		FROM object_data
		WHERE Classname = 'TentStorage'
			AND DATE(Datestamp) < CURDATE() - INTERVAL 8 DAY
			AND Inventory = '[[[],[]],[[],[]],[[],[]]]';			
	
	DELETE
		FROM object_data
		WHERE Classname = 'TentStorage'
			AND DATE(Datestamp) < CURDATE() - INTERVAL 8 DAY
			AND Inventory = '[]';		

	DELETE
		FROM object_data
		WHERE Classname = 'Wire_cat1'
			AND DATE(Datestamp) < CURDATE() - INTERVAL 3 DAY;

	DELETE
		FROM object_data
		WHERE Classname = 'Hedgehog_DZ'
			AND DATE(Datestamp) < CURDATE() - INTERVAL 4 DAY;

	DELETE
		FROM object_data
		WHERE Classname = 'Sandbag1_DZ'
			AND DATE(Datestamp) < CURDATE() - INTERVAL 8 DAY;

	DELETE
		FROM object_data
		WHERE Classname = 'TrapBear'
			AND DATE(Datestamp) < CURDATE() - INTERVAL 5 DAY;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `pCleanupOOB`
-- ----------------------------
DROP PROCEDURE IF EXISTS `pCleanupOOB`;
DELIMITER ;;
CREATE DEFINER=`root`@`` PROCEDURE `pCleanupOOB`()
BEGIN
 
    DECLARE intLineCount    INT DEFAULT 0;
    DECLARE intDummyCount    INT DEFAULT 0;
    DECLARE intDoLine            INT DEFAULT 0;
    DECLARE intWest                INT DEFAULT 0;
    DECLARE intNorth            INT DEFAULT 0;
 
    SELECT COUNT(*)
        INTO intLineCount
        FROM object_data;
 
    SELECT COUNT(*)
        INTO intDummyCount
        FROM object_data
        WHERE Classname = 'dummy';
 
    WHILE (intLineCount > intDummyCount) DO
   
        SET intDoLine = intLineCount - 1;
 
        SELECT ObjectUID, Worldspace
            INTO @rsObjectUID, @rsWorldspace
            FROM object_data
            LIMIT intDoLine, 1;
 
        SELECT REPLACE(@rsWorldspace, '[', '') INTO @rsWorldspace;
        SELECT REPLACE(@rsWorldspace, ']', '') INTO @rsWorldspace;
        SELECT REPLACE(SUBSTRING(SUBSTRING_INDEX(@rsWorldspace, ',', 2), LENGTH(SUBSTRING_INDEX(@rsWorldspace, ',', 2 -1)) + 1), ',', '') INTO @West;
        SELECT REPLACE(SUBSTRING(SUBSTRING_INDEX(@rsWorldspace, ',', 3), LENGTH(SUBSTRING_INDEX(@rsWorldspace, ',', 3 -1)) + 1), ',', '') INTO @North;
 
        SELECT INSTR(@West, '-') INTO intWest;
        SELECT INSTR(@North, '-') INTO intNorth;
 
        IF (intNorth = 0) THEN
            IF (@North = NULL) THEN
                SET @North = '';
                SELECT CONVERT(@North, DECIMAL(16,8)) INTO intNorth;
            END IF;
            IF (@North != NULL) THEN
                SELECT CONVERT(@North, DECIMAL(16,8)) INTO intNorth;
            END IF;
        END IF;
 
        IF (intWest > 0 OR intNorth > 15360) THEN
            DELETE FROM object_data
                WHERE ObjectUID = @rsObjectUID;
        END IF;
       
        SET intLineCount = intLineCount - 1;
 
    END WHILE;
 
END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `pFixMaxNum`
-- ----------------------------
DROP PROCEDURE IF EXISTS `pFixMaxNum`;
DELIMITER ;;
CREATE DEFINER=`root`@`` PROCEDURE `pFixMaxNum`()
BEGIN

	DECLARE iCounter INT DEFAULT 0;

	SELECT COUNT(*) INTO @iClassesCount FROM object_classes WHERE Classname<>'';
	WHILE (iCounter < @iClassesCount) DO
		SELECT Classname, MaxNum INTO @Classname, @MaxNum FROM object_classes LIMIT iCounter,1;
		SELECT COUNT(*) INTO @iMaxClassSpawn FROM object_spawns WHERE Classname LIKE @Classname;
		IF (@MaxNum > @iMaxClassSpawn) THEN
			UPDATE object_classes SET MaxNum = @iMaxClassSpawn WHERE Classname = @Classname;
		END IF;
		SET iCounter = iCounter + 1;
	END WHILE;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `pMain`
-- ----------------------------
DROP PROCEDURE IF EXISTS `pMain`;
DELIMITER ;;
CREATE DEFINER=`root`@`` PROCEDURE `pMain`()
BEGIN

	DECLARE iSpawnNumVeh SMALLINT(3) DEFAULT 11;		
	
	CALL pCleanup();
	CALL pFixMaxNum;

	SELECT SUM(MaxNum) FROM object_classes INTO @iMaxNumTotal;
	IF (iSpawnNumVeh > @iMaxNumTotal) THEN
		SET iSpawnNumVeh = @iMaxNumTotal;
	END IF;

	WHILE (fGetVehCount() < iSpawnNumVeh) DO
		CALL pSpawn();
	END WHILE;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `pSpawn`
-- ----------------------------
DROP PROCEDURE IF EXISTS `pSpawn`;
DELIMITER ;;
CREATE DEFINER=`root`@`` PROCEDURE `pSpawn`()
BEGIN
    DECLARE bSpawned        TINYINT(1) DEFAULT 0;
    DECLARE iLID                INT DEFAULT 0;
 
    WHILE (bSpawned = 0) DO
 
        SET iLID = LAST_INSERT_ID();
 
        INSERT INTO object_data (ObjectUID, Instance, Classname, Damage, CharacterID, Worldspace, Inventory, Hitpoints, Fuel, Datestamp)
        SELECT ot.ObjectUID, '1', ot.Classname, ot.Damage, '0', ot.Worldspace, '[]', ot.Hitpoints, '0.05', SYSDATE()
            FROM (SELECT oc.Classname, oc.Chance, oc.MaxNum, oc.Damage, oc.Hitpoints, os.ObjectUID, os.Worldspace
                FROM object_classes AS oc
                INNER JOIN object_spawns AS os
                ON oc.Classname = os.Classname
                ORDER BY RAND()) AS ot
            WHERE NOT EXISTS (SELECT od.ObjectUID
                            FROM object_data AS od
                            WHERE ot.ObjectUID = od.ObjectUID)
            AND fGetClassCount(ot.Classname) < ot.MaxNum
            AND fGetSpawnFromChance(ot.Chance) = 1
            LIMIT 1;
     
            IF (LAST_INSERT_ID() <> iLID) THEN
                SET bSpawned = 1;
            END IF;
     
    END WHILE;
END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `pSpawnVehicles`
-- ----------------------------
DROP PROCEDURE IF EXISTS `pSpawnVehicles`;
DELIMITER ;;
CREATE DEFINER=`root`@`` PROCEDURE `pSpawnVehicles`()
BEGIN
 
    DECLARE iCurrentVehicles INT(4) DEFAULT 0;
    DECLARE loopCounter INT(4) DEFAULT 0;
    DECLARE iSpawnAttempts INT(4) DEFAULT 0;
    DECLARE iTotalClasses INT(4) DEFAULT 0;                 
 
    CALL pCleanup();
    CALL pFixMaxNum;
 
    SET iCurrentVehicles = fGetVehCount();
 
    SELECT COUNT(*)
                    INTO iTotalClasses
                    FROM object_classes;
 
    SELECT SUM(MaxNum) FROM object_classes INTO @iMaxNumTotal;
		/*SELECT 500 INTO @iMaxNumTotal;*/
    IF (iCurrentVehicles > @iMaxNumTotal) THEN
        SET iSpawnAttempts = @iMaxNumTotal - iCurrentVehicles;
    END IF;
 
 
 
 
    WHILE (loopCounter < iTotalClasses) DO
 
            SELECT Classname, Chance, MaxNum, Damage, MaxFuel, Inventory, Hitpoints
                        INTO @rsClassname, @rsChance, @rsMaxNum, @rsDamage, @rsMaxFuel, @rsInventory, @rsHitpoints
                        FROM object_classes
                        LIMIT loopCounter, 1;
 
            SET @initialClassCount = fGetClassCount(@rsClassname);
 
            IF (@initialClassCount < @rsMaxNum) THEN
 
                SET @classloop = 0;
                SET @attemptsAtClass = @rsMaxNum - @initialClassCount;
 
                WHILE (@classloop < @attemptsAtClass) DO
                    SET @luckyDip = fGetSpawnFromChance(@rsChance + (RAND() / 10000));
 
                    IF (@luckyDip = 1) THEN
 
                                SELECT ObjectUID, Worldspace
                                                INTO @spawnUID, @spawnWorldspace
                                                FROM object_spawns o
                                                WHERE Classname = @rsClassname AND NOT EXISTS (SELECT 1 FROM object_data e WHERE e.ObjectUID = o.ObjectUID)
                                                ORDER BY RAND()
                                                LIMIT 1;
 
                                SET @fuel = (FLOOR( (RAND()*@rsMaxFuel) * 10000) / 10000);
 
                                INSERT INTO object_data (ObjectUID, Instance, Landmark, Classname, Damage, CharacterID, Worldspace, Inventory, Hitpoints, Fuel, Datestamp)
                                                    VALUES (@spawnUID, '1', '0', @rsClassname, @rsDamage, '0', @spawnWorldspace, @rsInventory, @rsHitpoints, @fuel, SYSDATE());
                                                                                                                     
 
                    END IF;
                    SET @classloop = @classloop + 1;
                END WHILE;
            END IF;
        SET loopCounter = loopCounter + 1;
    END WHILE;
 
END
;;
DELIMITER ;

-- ----------------------------
-- Function structure for `fGetClassCount`
-- ----------------------------
DROP FUNCTION IF EXISTS `fGetClassCount`;
DELIMITER ;;
CREATE DEFINER=`root`@`` FUNCTION `fGetClassCount`(`clname` varchar(32)) RETURNS smallint(3)
    READS SQL DATA
BEGIN

	DECLARE iClassCount SMALLINT(3) DEFAULT 0;

	SELECT COUNT(*) 
		INTO iClassCount 
		FROM object_data 
		WHERE Classname = clname;

	RETURN iClassCount;
END
;;
DELIMITER ;

-- ----------------------------
-- Function structure for `fGetSpawnFromChance`
-- ----------------------------
DROP FUNCTION IF EXISTS `fGetSpawnFromChance`;
DELIMITER ;;
CREATE DEFINER=`root`@`` FUNCTION `fGetSpawnFromChance`(`chance` DECIMAL(6,5)) RETURNS tinyint(1)
    NO SQL
BEGIN
 
DECLARE bspawn TINYINT(1) DEFAULT 0;
 
IF (RAND() <= chance) THEN
SET bspawn = 1;
END IF;
 
RETURN bspawn;
 
END
;;
DELIMITER ;

-- ----------------------------
-- Function structure for `fGetVehCount`
-- ----------------------------
DROP FUNCTION IF EXISTS `fGetVehCount`;
DELIMITER ;;
CREATE DEFINER=`root`@`` FUNCTION `fGetVehCount`() RETURNS smallint(3)
    READS SQL DATA
BEGIN
 
    DECLARE iVehCount    SMALLINT(3) DEFAULT 0;
 
    SELECT COUNT(*)
        INTO iVehCount
        FROM object_data
            WHERE
                Landmark = '0'
                AND Classname != 'dummy'
                AND Classname != 'TentStorage'
                AND Classname != 'Hedgehog_DZ'
                AND Classname != 'Wire_cat1'
                AND Classname != 'Sandbag1_DZ'
                AND Classname != 'TrapBear';
 
    RETURN iVehCount;
END
;;
DELIMITER ;
