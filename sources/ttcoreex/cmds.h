#ifndef _CMDS_H_
#define _CMDS_H_ 
jmc_cmdi jmc_cmds[JMC_CMDS_NUM]={
		   {"variable",&var_command,"\0"},
		   {"action",&action_command,"\0"},
		   {"alias",&alias_command,"\0"},
		   {"read",&read_command,"\0"},
		   {"if",&if_command,"\0"},
		   {"group",&group_command,"\0"},
		   {"loop",&loop_command,"cycle"},
		   {"tolower",&tolower_command,"tovar"},
		   {"toupper",&toupper_command,"tovar"},
		   {"antisubstitute",&parse_antisub,"\0"},
		   {"drop",&drop_command,"action"},
		   {"nodrop",&nodrop_command,"action"},
		   {"cr",&cr_command,"\0"},
		   {"echo",&echo_command,"\0"},
		   {"highlight",&parse_high,"\0"},
		   {"ignore",&ignore_command,"\0"},
		   {"info",&display_info,"\0"},
		   {"killall",&killall_command,"\0"},
		   {"kickall",&kickall_command,"killall"},
		   {"log",&log_command,"\0"},
		   {"map",&map_command,"\0"},
		   {"mark",&mark_command,"\0"},
		   {"math",&math_command,"\0"},
		   {"message",&message_command,"\0"},
		   {"output",&output_command,"\0"},
		   {"path",&path_command,"\0"},
		   {"pathdir",&pathdir_command,"\0"},
		   {"presub",&presub_command,"action"},
		   {"return",&return_command,"\0"},
		   {"scriptlet",&script_command,"scripts"},
		   {"savepath",&savepath_command,"\0"},
		   {"showme",&showme_command,"\0"},
		   {"speedwalk",&speedwalk_command,"\0"},
		   {"textin",&read_file,"\0"},
		   {"substitute",&parse_sub,"\0"},
		   {"gag",&gag_command,"\0"},
		   {"tick",&tick_command,"ticks"},
		   {"tickon",&tickon_command,"ticks"},
		   {"tickoff",&tickoff_command,"ticks"},
		   {"tickset",&tickset_command,"ticks"},
		   {"ticksize",&ticksize_command,"ticks"},
		   {"togglesubs",&togglesubs_command,"\0"},
		   {"unaction",&unaction_command,"\0"},
		   {"unalias",&unalias_command,"alias"},
		   {"unantisubstitute",&unantisubstitute_command,"\0"},
		   {"unpath",&unpath_command,"\0"},
		   {"unvar",&unvar_command,"variable"},
		   {"write",&write_command,"\0"},
		   {"zap",&zap_command,"\0"},
		   {"hotkey",&SetHotKey,"\0"},
		   {"unhotkey",&Unhotkey,"\0"},
		   {"connect",&connect_command,"\0"},
		   {"bell",&bell_command,"\0"},
		   {"char",&char_command,"\0"},
		   {"status",&status_command,"\0"},
		   {"tabadd",&tabadd_command,"\0"},
		   {"tabdel",&tabdel_command,"\0"},
		   {"multiaction",&MultiactionCommand,"action"},
		   {"multisubstitute",&MultiSub_command,"\0"},
		   {"multihighlight",&MultiHlightCommand,"\0"},
		   {"verbatim",&verbatim_command,"alias"},
		   {"nope",&nope_command,"\0"},
		   {"quit",&quit_command,"\0"},
		   {"hidewindow",&hidewindow_command,"\0"},
		   {"restorewindow",&restorewindow_command,"\0"},
		   {"tray",&systray_command,"\0"},
		   {"reloadscripts",&reloadscripts_command,"\0"},
		   {"use",&use_command,"scripts"},
		   {"unuse",&unuse_command,"scripts"},
		   {"systemexec",&systemexec_command,"system"},
		   {"ps",&systemlist_command,"system"},
		   {"tslist",&systemlist_command,"system"},
		   {"terminate",&systemkill_command,"system"},
		   {"tskill",&systemkill_command,"system"},
		   {"play",&play_command,"\0"},
		   {"woutput",&woutput_command,"\0"},
		   {"wdock",&wdock_command,"\0"},
		   {"wshow",&wshow_command,"\0"},
		   {"wpos",&wpos_command,"\0"},
		   {"wlog",&wlog_command,"\0"},
		   {"wname",&wname_command,"\0"},
		   {"logadd",&logadd_command,"\0"},
		   {"logpass",&logpass_command,"action"},
		   {"flash",&flash_command,"\0"},
		   {"next",&next_command,"\0"},
		   {"daa",&daa_command,"\0"},
		   {"whisper",&daa_command,"daa"},
		   {"hide",&daa_command,"daa"},
		   {"race",&race_command,"\0"},
		   {"spit",&spit_command,"\0"},
		   {"stick",&spit_command,"spit"},
		   {"lick",&spit_command,"spit"},
		   {"feed",&spit_command,"spit"},
		   {"colon",&colon_command,"\0"},
		   {"wait",&wt_command,"\0"},
		   {"wt",&wt_command,"wait"},
		   {"break",&break_timer_command,"cycle"},
		   {"abort",&abort_timer_command,"cycle"},
		   {"pinch",&continue_timer_command,"cycle"},
		   {"resume",&continue_timer_command,"cycle"},
		   {"tmlist",&tm_list_command,"cycle"},
		   {"llist",&tm_list_command,"cycle"},
		   {"unsubstitute",&unsubstitute_command,"\0"},
		   {"comment",&comment_command,"\0"},
		   {"race",&race_command,"\0"},
		   {"sos",&sos_command,"\0"},
		   {"grab",&grab_command,"\0"},
		   {"help",&help_command,"\0"},
		   {"clean",&clean_command,"\0"},
		   {"prefix",&prefix_command,"\0"},
		   {"winamp",&winamp_command,"winamp"},
		   {"wamp",&winamp_command,"winamp"},
		   {"autoreconnect",&autoreconnect_command,"autoreconnect"},
           {"run",&run_command,"\0"},
		   {"clear",&clear_command,"\0"},
		   {"wclear",&wclear_command,"\0"},
		   {"strcmp",&strcmp_command,"\0"}
	   };
#endif