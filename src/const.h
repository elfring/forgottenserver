/**
 * The Forgotten Server - a free and open-source MMORPG server emulator
 * Copyright (C) 2013  Mark Samman <mark.samman@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef CONST_H
#define CONST_H

#define NETWORKMESSAGE_MAXSIZE 24590

enum MagicEffectClasses {
	NM_ME_FIRST			= 0x00,
	NM_ME_DRAW_BLOOD		= NM_ME_FIRST,
	NM_ME_LOSE_ENERGY		= 0x01,
	NM_ME_POFF			= 0x02,
	NM_ME_BLOCKHIT			= 0x03,
	NM_ME_EXPLOSION_AREA		= 0x04,
	NM_ME_EXPLOSION_DAMAGE		= 0x05,
	NM_ME_FIRE_AREA			= 0x06,
	NM_ME_YELLOW_RINGS		= 0x07,
	NM_ME_POISON_RINGS		= 0x08,
	NM_ME_HIT_AREA			= 0x09,
	NM_ME_TELEPORT			= 0x0A, //10
	NM_ME_ENERGY_DAMAGE		= 0x0B, //11
	NM_ME_MAGIC_ENERGY		= 0x0C, //12
	NM_ME_MAGIC_BLOOD		= 0x0D, //13
	NM_ME_MAGIC_POISON		= 0x0E, //14
	NM_ME_HITBY_FIRE		= 0x0F, //15
	NM_ME_POISON			= 0x10, //16
	NM_ME_MORT_AREA			= 0x11, //17
	NM_ME_SOUND_GREEN		= 0x12, //18
	NM_ME_SOUND_RED			= 0x13, //19
	NM_ME_POISON_AREA		= 0x14, //20
	NM_ME_SOUND_YELLOW		= 0x15, //21
	NM_ME_SOUND_PURPLE		= 0x16, //22
	NM_ME_SOUND_BLUE		= 0x17, //23
	NM_ME_SOUND_WHITE		= 0x18, //24
	NM_ME_BUBBLES			= 0x19, //25
	NM_ME_CRAPS			= 0x1A, //26
	NM_ME_GIFT_WRAPS		= 0x1B, //27
	NM_ME_FIREWORK_YELLOW		= 0x1C, //28
	NM_ME_FIREWORK_RED		= 0x1D, //29
	NM_ME_FIREWORK_BLUE		= 0x1E, //30
	NM_ME_STUN			= 0x1F, //31
	NM_ME_SLEEP			= 0x20, //32
	NM_ME_WATERCREATURE		= 0x21, //33
	NM_ME_GROUNDSHAKER		= 0x22, //34
	NM_ME_HEARTS			= 0x23, //35
	NM_ME_FIREATTACK		= 0x24, //36
	NM_ME_ENERGY_AREA		= 0x25, //37
	NM_ME_SMALLCLOUDS		= 0x26, //38
	NM_ME_HOLYDAMAGE		= 0x27, //39
	NM_ME_BIGCLOUDS			= 0x28, //40
	NM_ME_ICEAREA			= 0x29, //41
	NM_ME_ICETORNADO		= 0x2A, //42
	NM_ME_ICEATTACK			= 0x2B, //43
	NM_ME_STONES			= 0x2C, //44
	NM_ME_SMALLPLANTS		= 0x2D, //45
	NM_ME_CARNIPHILA		= 0x2E, //46
	NM_ME_PURPLEENERGY		= 0x2F, //47
	NM_ME_YELLOWENERGY		= 0x30, //48
	NM_ME_HOLYAREA			= 0x31, //49
	NM_ME_BIGPLANTS			= 0x32, //50
	NM_ME_CAKE			= 0x33, //51
	NM_ME_GIANTICE			= 0x34, //52
	NM_ME_WATERSPLASH		= 0x35, //53
	NM_ME_PLANTATTACK		= 0x36, //54
	NM_ME_TUTORIALARROW		= 0x37, //55
	NM_ME_TUTORIALSQUARE		= 0x38, //56
	NM_ME_MIRRORHORIZONTAL		= 0x39, //57
	NM_ME_MIRRORVERTICAL		= 0x3A, //58
	NM_ME_SKULLHORIZONTAL		= 0x3B, //59
	NM_ME_SKULLVERTICAL		= 0x3C, //60
	NM_ME_ASSASSIN			= 0x3D, //61
	NM_ME_STEPSHORIZONTAL		= 0x3E, //62
	NM_ME_BLOODYSTEPS		= 0x3F, //63
	NM_ME_STEPSVERTICAL		= 0x40, //64
	NM_ME_YALAHARIGHOST		= 0x41, //65
	NM_ME_BATS			= 0x42, //66
	NM_ME_SMOKE			= 0x43, //67
	NM_ME_INSECTS			= 0x44, //68
	NM_ME_DRAGONHEAD		= 0x45, //69
	NM_ME_ORCSHAMAN			= 0x46, //70
	NM_ME_ORCSHAMAN_FIRE		= 0x47, //71
	NM_ME_THUNDER			= 0x48, //72
	NM_ME_FERUMBRAS			= 0x49, //73
	NM_ME_CONFETTI_HORIZONTAL	= 0x4A, //74
	NM_ME_CONFETTI_VERTICAL 	= 0x4B, //75
	// 76-156 are empty
	NM_ME_BLACKSMOKE		= 0x9D, //157
	NM_ME_LAST			= NM_ME_BLACKSMOKE,

	//for internal use, dont send to client
	NM_ME_NONE             = 0xFF,
	NM_ME_UNK              = 0xFFFF
};

enum ShootType_t {
	NM_SHOOT_FIRST			= 0x00,
	NM_SHOOT_SPEAR			= NM_SHOOT_FIRST,
	NM_SHOOT_BOLT			= 0x01,
	NM_SHOOT_ARROW			= 0x02,
	NM_SHOOT_FIRE			= 0x03,
	NM_SHOOT_ENERGY			= 0x04,
	NM_SHOOT_POISONARROW		= 0x05,
	NM_SHOOT_BURSTARROW		= 0x06,
	NM_SHOOT_THROWINGSTAR		= 0x07,
	NM_SHOOT_THROWINGKNIFE		= 0x08,
	NM_SHOOT_SMALLSTONE		= 0x09,
	NM_SHOOT_DEATH			= 0x0A, //10
	NM_SHOOT_LARGEROCK		= 0x0B, //11
	NM_SHOOT_SNOWBALL		= 0x0C, //12
	NM_SHOOT_POWERBOLT		= 0x0D, //13
	NM_SHOOT_POISONFIELD		= 0x0E, //14
	NM_SHOOT_INFERNALBOLT		= 0x0F, //15
	NM_SHOOT_HUNTINGSPEAR		= 0x10, //16
	NM_SHOOT_ENCHANTEDSPEAR		= 0x11, //17
	NM_SHOOT_REDSTAR		= 0x12, //18
	NM_SHOOT_GREENSTAR		= 0x13, //19
	NM_SHOOT_ROYALSPEAR		= 0x14, //20
	NM_SHOOT_SNIPERARROW		= 0x15, //21
	NM_SHOOT_ONYXARROW		= 0x16, //22
	NM_SHOOT_PIERCINGBOLT		= 0x17, //23
	NM_SHOOT_WHIRLWINDSWORD		= 0x18, //24
	NM_SHOOT_WHIRLWINDAXE		= 0x19, //25
	NM_SHOOT_WHIRLWINDCLUB		= 0x1A, //26
	NM_SHOOT_ETHEREALSPEAR		= 0x1B, //27
	NM_SHOOT_ICE			= 0x1C, //28
	NM_SHOOT_EARTH			= 0x1D, //29
	NM_SHOOT_HOLY			= 0x1E, //30
	NM_SHOOT_SUDDENDEATH		= 0x1F, //31
	NM_SHOOT_FLASHARROW		= 0x20, //32
	NM_SHOOT_FLAMMINGARROW		= 0x21, //33
	NM_SHOOT_SHIVERARROW		= 0x22, //34
	NM_SHOOT_ENERGYBALL		= 0x23, //35
	NM_SHOOT_SMALLICE		= 0x24, //36
	NM_SHOOT_SMALLHOLY		= 0x25, //37
	NM_SHOOT_SMALLEARTH		= 0x26, //38
	NM_SHOOT_EARTHARROW		= 0x27, //39
	NM_SHOOT_EXPLOSION		= 0x28, //40
	NM_SHOOT_CAKE			= 0x29, //41
	NM_SHOOT_UNK1			= 0x2A, //42 DEBUG!
	NM_SHOOT_TARSALARROW		= 0x2B, //43
	NM_SHOOT_VORTEXBOLT		= 0x2C, //44
	NM_SHOOT_UNK2			= 0x2D, //45 DEBUG!
	NM_SHOOT_UNK3			= 0x2E, //46 DEBUG!
	NM_SHOOT_PRISMATICBOLT		= 0x2F, //47
	NM_SHOOT_CRYSTALLINEARROW	= 0x30, //48
	NM_SHOOT_DRILLBOLT		= 0x31, //49
	NM_SHOOT_ENVENOMEDARROW		= 0x32, //50
	NM_SHOOT_LAST			= NM_SHOOT_ENVENOMEDARROW,

	//for internal use, dont send to client
	NM_SHOOT_WEAPONTYPE		= 0xFE, //254
	NM_SHOOT_NONE			= 0xFF,
	NM_SHOOT_UNK			= 0xFFFF
};

enum SpeakClasses {
	SPEAK_SAY		= 0x01,
	SPEAK_WHISPER		= 0x02,
	SPEAK_YELL		= 0x03,
	SPEAK_PRIVATE_FROM	= 0x04,
	SPEAK_PRIVATE_TO	= 0x05,
	SPEAK_CHANNEL_Y		= 0x07,
	SPEAK_CHANNEL_O		= 0x08,
	SPEAK_PRIVATE_NP	= 0x0A,
	SPEAK_PRIVATE_PN	= 0x0B,
	SPEAK_BROADCAST		= 0x0C,
	SPEAK_CHANNEL_R1        = 0x0D, //red - #c text
	SPEAK_PRIVATE_RED_FROM	= 0x0E, //@name@text
	SPEAK_PRIVATE_RED_TO	= 0x0F, //@name@text
	SPEAK_MONSTER_SAY	= 0x22,
	SPEAK_MONSTER_YELL	= 0x23,

	SPEAK_CHANNEL_R2	= 0xFF + 1, //#d
	SPEAK_CHANNEL_W		= 0xFF + 2
};

enum MessageClasses {
	MSG_STATUS_CONSOLE_BLUE		= 0x04, /*FIXME Blue message in the console*/
	MSG_STATUS_CONSOLE_RED		= 0x0C, /*Red message in the console*/
	MSG_STATUS_DEFAULT		= 0x10, /*White message at the bottom of the game window and in the console*/
	MSG_STATUS_WARNING		= 0x11, /*Red message in game window and in the console*/
	MSG_EVENT_ADVANCE		= 0x12, /*White message in game window and in the console*/
	MSG_STATUS_SMALL		= 0x13, /*White message at the bottom of the game window"*/
	MSG_INFO_DESCR			= 0x14, /*Green message in game window and in the console*/
	MSG_DAMAGE_DEALT		= 0x15,
	MSG_DAMAGE_RECEIVED		= 0x16,
	MSG_HEALED			= 0x17,
	MSG_EXPERIENCE			= 0x18,
	MSG_DAMAGE_OTHERS		= 0x19,
	MSG_HEALED_OTHERS		= 0x1A,
	MSG_EXPERIENCE_OTHERS		= 0x1B,
	MSG_EVENT_DEFAULT		= 0x1C, /*White message at the bottom of the game window and in the console*/
	MSG_LOOT			= 0x1D,
	MSG_EVENT_ORANGE		= 0x22, /*Orange message in the console*/
	MSG_STATUS_CONSOLE_ORANGE	= 0x23  /*Orange message in the console*/
};

enum FluidColors_t {
	FLUID_EMPTY	= 0x00,
	FLUID_BLUE	= 0x01,
	FLUID_RED	= 0x02,
	FLUID_BROWN	= 0x03,
	FLUID_GREEN	= 0x04,
	FLUID_YELLOW	= 0x05,
	FLUID_WHITE	= 0x06,
	FLUID_PURPLE	= 0x07
};

enum FluidTypes_t {
	FLUID_NONE		= FLUID_EMPTY,
	FLUID_WATER		= FLUID_BLUE,
	FLUID_BLOOD		= FLUID_RED,
	FLUID_BEER		= FLUID_BROWN,
	FLUID_SLIME		= FLUID_GREEN,
	FLUID_LEMONADE		= FLUID_YELLOW,
	FLUID_MILK		= FLUID_WHITE,
	FLUID_MANA		= FLUID_PURPLE,

	FLUID_LIFE		= FLUID_RED + 8,
	FLUID_OIL		= FLUID_BROWN + 8,
	FLUID_URINE		= FLUID_YELLOW + 8,
	FLUID_COCONUTMILK	= FLUID_WHITE + 8,
	FLUID_WINE		= FLUID_PURPLE + 8,

	FLUID_MUD		= FLUID_BROWN + 16,
	FLUID_FRUITJUICE	= FLUID_YELLOW + 16,

	FLUID_LAVA		= FLUID_RED + 24,
	FLUID_RUM		= FLUID_BROWN + 24,
	FLUID_SWAMP		= FLUID_GREEN + 24,

	FLUID_TEA		= FLUID_BROWN + 32,
	FLUID_MEAD		= FLUID_BROWN + 40
};

const uint8_t reverseFluidMap[] = {
	FLUID_EMPTY,
	FLUID_WATER,
	FLUID_MANA,
	FLUID_BEER,
	FLUID_EMPTY,
	FLUID_BLOOD,
	FLUID_SLIME,
	FLUID_EMPTY,
	FLUID_LEMONADE,
	FLUID_MILK
};

const uint8_t clientToServerFluidMap[] = {
	FLUID_EMPTY,
	FLUID_WATER,
	FLUID_MANA,
	FLUID_BEER,
	FLUID_MUD,
	FLUID_BLOOD,
	FLUID_SLIME,
	FLUID_RUM,
	FLUID_LEMONADE,
	FLUID_MILK,
	FLUID_WINE,
	FLUID_LIFE,
	FLUID_URINE,
	FLUID_OIL,
	FLUID_FRUITJUICE,
	FLUID_COCONUTMILK,
	FLUID_TEA,
	FLUID_MEAD
};

enum ClientFluidTypes_t {
	CLIENTFLUID_EMPTY	= 0x00,
	CLIENTFLUID_BLUE	= 0x01,
	CLIENTFLUID_PURPLE	= 0x02,
	CLIENTFLUID_BROWN_1	= 0x03,
	CLIENTFLUID_BROWN_2	= 0x04,
	CLIENTFLUID_RED		= 0x05,
	CLIENTFLUID_GREEN	= 0x06,
	CLIENTFLUID_BROWN	= 0x07,
	CLIENTFLUID_YELLOW	= 0x08,
	CLIENTFLUID_WHITE	= 0x09
};

const uint8_t fluidMap[] = {
	CLIENTFLUID_EMPTY,
	CLIENTFLUID_BLUE,
	CLIENTFLUID_RED,
	CLIENTFLUID_BROWN_1,
	CLIENTFLUID_GREEN,
	CLIENTFLUID_YELLOW,
	CLIENTFLUID_WHITE,
	CLIENTFLUID_PURPLE
};

enum SquareColor_t {
	SQ_COLOR_NONE = 256,
	SQ_COLOR_BLACK = 0
};

enum TextColor_t {
	TEXTCOLOR_BLUE		= 5,
	TEXTCOLOR_GREEN		= 18,
	TEXTCOLOR_LIGHTGREEN	= 30,
	TEXTCOLOR_LIGHTBLUE	= 35,
	TEXTCOLOR_TEAL		= 65,
	TEXTCOLOR_MAYABLUE	= 95,
	TEXTCOLOR_DARKRED	= 108,
	TEXTCOLOR_LIGHTGREY	= 129,
	TEXTCOLOR_SKYBLUE	= 143,
	TEXTCOLOR_PURPLE	= 154,
	TEXTCOLOR_RED		= 180,
	TEXTCOLOR_ORANGE	= 198,
	TEXTCOLOR_YELLOW	= 210,
	TEXTCOLOR_WHITE_EXP	= 215,
	TEXTCOLOR_NONE		= 255
};

enum Icons_t {
	ICON_POISON = 1,
	ICON_BURN = 2,
	ICON_ENERGY =  4,
	ICON_DRUNK = 8,
	ICON_MANASHIELD = 16,
	ICON_PARALYZE = 32,
	ICON_HASTE = 64,
	ICON_SWORDS = 128,
	ICON_DROWNING = 256,
	ICON_FREEZING = 512,
	ICON_DAZZLED = 1024,
	ICON_CURSED = 2048,
	ICON_PARTY_BUFF = 4096,
	ICON_REDSWORDS = 8192,
	ICON_PIGEON = 16384,
	ICON_BLEEDING = 32768
};

enum WeaponType_t {
	WEAPON_NONE = 0,
	WEAPON_SWORD = 1,
	WEAPON_CLUB = 2,
	WEAPON_AXE = 3,
	WEAPON_SHIELD = 4,
	WEAPON_DIST = 5,
	WEAPON_WAND = 6,
	WEAPON_AMMO = 7
};

enum Ammo_t {
	AMMO_NONE = 0,
	AMMO_BOLT = 1,
	AMMO_ARROW = 2,
	AMMO_SPEAR = 3,
	AMMO_THROWINGSTAR = 4,
	AMMO_THROWINGKNIFE = 5,
	AMMO_STONE = 6,
	AMMO_SNOWBALL = 7
};

enum AmmoAction_t {
	AMMOACTION_NONE,
	AMMOACTION_REMOVECOUNT,
	AMMOACTION_REMOVECHARGE,
	AMMOACTION_MOVE,
	AMMOACTION_MOVEBACK
};

enum WieldInfo_t {
	WIELDINFO_LEVEL = 1,
	WIELDINFO_MAGLV = 2,
	WIELDINFO_VOCREQ = 4,
	WIELDINFO_PREMIUM = 8
};

enum Skulls_t {
	SKULL_NONE = 0,
	SKULL_YELLOW = 1,
	SKULL_GREEN = 2,
	SKULL_WHITE = 3,
	SKULL_RED = 4,
	SKULL_BLACK = 5,
	SKULL_ORANGE = 6,
	SKULL_LAST = SKULL_ORANGE
};

enum PartyShields_t {
	SHIELD_NONE = 0,
	SHIELD_WHITEYELLOW = 1,
	SHIELD_WHITEBLUE = 2,
	SHIELD_BLUE = 3,
	SHIELD_YELLOW = 4,
	SHIELD_BLUE_SHAREDEXP = 5,
	SHIELD_YELLOW_SHAREDEXP = 6,
	SHIELD_BLUE_NOSHAREDEXP_BLINK = 7,
	SHIELD_YELLOW_NOSHAREDEXP_BLINK = 8,
	SHIELD_BLUE_NOSHAREDEXP = 9,
	SHIELD_YELLOW_NOSHAREDEXP = 10,
	SHIELD_GRAY = 11
};

enum GuildEmblems_t {
	GUILDEMBLEM_NONE = 0,
	GUILDEMBLEM_ALLY = 1,
	GUILDEMBLEM_ENEMY = 2,
	GUILDEMBLEM_NEUTRAL = 3,
	GUILDEMBLEM_MEMBER = 4,
	GUILDEMBLEM_OTHER = 5
};

enum item_t {
	ITEM_BROWSEFIELD = 460, // for internal use

	ITEM_FIREFIELD_PVP_FULL	= 1487,
	ITEM_FIREFIELD_PVP_MEDIUM	= 1488,
	ITEM_FIREFIELD_PVP_SMALL	= 1489,
	ITEM_FIREFIELD_PERSISTENT_FULL = 1492,
	ITEM_FIREFIELD_PERSISTENT_MEDIUM = 1493,
	ITEM_FIREFIELD_PERSISTENT_SMALL = 1494,
	ITEM_FIREFIELD_NOPVP	= 1500,

	ITEM_POISONFIELD_PVP	= 1490,
	ITEM_POISONFIELD_PERSISTENT = 1496,
	ITEM_POISONFIELD_NOPVP	= 1503,

	ITEM_ENERGYFIELD_PVP	= 1491,
	ITEM_ENERGYFIELD_PERSISTENT = 1495,
	ITEM_ENERGYFIELD_NOPVP	= 1504,

	ITEM_MAGICWALL		= 1497,
	ITEM_MAGICWALL_PERSISTENT = 1498,
	ITEM_MAGICWALL_SAFE	= 11098,

	ITEM_WILDGROWTH		= 1499,
	ITEM_WILDGROWTH_PERSISTENT = 2721,
	ITEM_WILDGROWTH_SAFE	= 11099,

	ITEM_BAG		= 1987,

	ITEM_COINS_GOLD		= 2148,
	ITEM_COINS_PLATINUM	= 2152,
	ITEM_COINS_CRYSTAL	= 2160,

	ITEM_DEPOT		= 2594,
	ITEM_LOCKER1		= 2589,
	ITEM_INBOX		= 14404,
	ITEM_MARKET		= 14405,

	ITEM_MALE_CORPSE	= 3058,
	ITEM_FEMALE_CORPSE	= 3065,

	ITEM_MEAT		= 2666,
	ITEM_HAM		= 2671,
	ITEM_GRAPE		= 2681,
	ITEM_APPLE		= 2674,
	ITEM_BREAD		= 2689,
	ITEM_ROLL		= 2690,
	ITEM_CHEESE		= 2696,

	ITEM_FULLSPLASH		= 2016,
	ITEM_SMALLSPLASH	= 2019,

	ITEM_PARCEL		= 2595,
	ITEM_PARCEL_STAMPED	= 2596,
	ITEM_LETTER		= 2597,
	ITEM_LETTER_STAMPED	= 2598,
	ITEM_LABEL		= 2599,

	ITEM_AMULETOFLOSS	= 2173,

	ITEM_DOCUMENT_RO	= 1968 //read-only
};

enum PlayerFlags {
	PlayerFlag_CannotUseCombat = 0,         //2^0 = 1
	PlayerFlag_CannotAttackPlayer,          //2^1 = 2
	PlayerFlag_CannotAttackMonster,         //2^2 = 4
	PlayerFlag_CannotBeAttacked,            //2^3 = 8
	PlayerFlag_CanConvinceAll,              //2^4 = 16
	PlayerFlag_CanSummonAll,                //2^5 = 32
	PlayerFlag_CanIllusionAll,              //2^6 = 64
	PlayerFlag_CanSenseInvisibility,        //2^7 = 128
	PlayerFlag_IgnoredByMonsters,           //2^8 = 256
	PlayerFlag_NotGainInFight,              //2^9 = 512
	PlayerFlag_HasInfiniteMana,             //2^10 = 1024
	PlayerFlag_HasInfiniteSoul,             //2^11 = 2048
	PlayerFlag_HasNoExhaustion,             //2^12 = 4096
	PlayerFlag_CannotUseSpells,             //2^13 = 8192
	PlayerFlag_CannotPickupItem,            //2^14 = 16384
	PlayerFlag_CanAlwaysLogin,              //2^15 = 32768
	PlayerFlag_CanBroadcast,                //2^16 = 65536
	PlayerFlag_CanEditHouses,               //2^17 = 131072
	PlayerFlag_CannotBeBanned,              //2^18 = 262144
	PlayerFlag_CannotBePushed,              //2^19 = 524288
	PlayerFlag_HasInfiniteCapacity,         //2^20 = 1048576
	PlayerFlag_CanPushAllCreatures,         //2^21 = 2097152
	PlayerFlag_CanTalkRedPrivate,           //2^22 = 4194304
	PlayerFlag_CanTalkRedChannel,           //2^23 = 8388608
	PlayerFlag_TalkOrangeHelpChannel,       //2^24 = 16777216
	PlayerFlag_NotGainExperience,           //2^25 = 33554432
	PlayerFlag_NotGainMana,                 //2^26 = 67108864
	PlayerFlag_NotGainHealth,               //2^27 = 134217728
	PlayerFlag_NotGainSkill,                //2^28 = 268435456
	PlayerFlag_SetMaxSpeed,                 //2^29 = 536870912
	PlayerFlag_SpecialVIP,                  //2^30 = 1073741824
	PlayerFlag_NotGenerateLoot,             //2^31 = 2147483648
	PlayerFlag_CanTalkRedChannelAnonymous,  //2^32 = 4294967296
	PlayerFlag_IgnoreProtectionZone,        //2^33 = 8589934592
	PlayerFlag_IgnoreSpellCheck,            //2^34 = 17179869184
	PlayerFlag_IgnoreWeaponCheck,           //2^35 = 34359738368
	PlayerFlag_CannotBeMuted,               //2^36 = 68719476736
	PlayerFlag_IsAlwaysPremium,             //2^37 = 137438953472

	//add new flags here
	PlayerFlag_LastFlag
};

#define CHANNEL_GUILD 0x00
#define CHANNEL_PARTY 0x01
#define CHANNEL_TUTOR 0x02
#define CHANNEL_WORLDCHAT 0x03
#define CHANNEL_ENGLISHCHAT 0x04
#define CHANNEL_ADVERTISING 0x05
#define CHANNEL_ADVERTISINGROOKGAARD 0x06
#define CHANNEL_HELP 0x07
#define CHANNEL_GAMEMASTER 0x08
#define CHANNEL_PRIVATE 0xFFFF

//Reserved player storage key ranges
//[10000000 - 20000000]
#define PSTRG_RESERVED_RANGE_START  10000000
#define PSTRG_RESERVED_RANGE_SIZE   10000000
//[1000 - 1500]
#define PSTRG_OUTFITS_RANGE_START   (PSTRG_RESERVED_RANGE_START + 1000)
#define PSTRG_OUTFITS_RANGE_SIZE    500
//[2001 - 2011]
#define PSTRG_MOUNTS_RANGE_START   (PSTRG_RESERVED_RANGE_START + 2001)
#define PSTRG_MOUNTS_RANGE_SIZE    10
#define PSTRG_MOUNTS_CURRENTMOUNT (PSTRG_MOUNTS_RANGE_START + 10)

#define IS_IN_KEYRANGE(key, range) (key >= PSTRG_##range##_START && ((key - PSTRG_##range##_START) <= PSTRG_##range##_SIZE))

#endif
