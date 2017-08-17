Action()
{

//	web_add_cookie("SRCHD=AF=IETR02; DOMAIN=www.bing.com");
//
//	web_add_cookie("SRCHUSR=AUTOREDIR=0&GEOVAR=&DOB=20150616; DOMAIN=www.bing.com");
//
//	web_add_cookie("_EDGE_V=1; DOMAIN=www.bing.com");
//
//	web_add_cookie("MUID=3D9BE6B17055620914AFE17971DF635E; DOMAIN=www.bing.com");
//
//	web_add_cookie("SRCHHPGUSR=CW=783&CH=517&DPR=1&UTC=-360; DOMAIN=www.bing.com");
//
//	web_add_cookie("_UR=D=1; DOMAIN=www.bing.com");
//
//	web_add_cookie("SRCHUID=V=2&GUID=757D922E9D5440D78AF16BC3DA6C45C8; DOMAIN=www.bing.com");
//
//	web_add_cookie("MUIDB=3D9BE6B17055620914AFE17971DF635E; DOMAIN=www.bing.com");
//
//	web_url("favicon.ico", 
//		"URL=http://www.bing.com/favicon.ico", 
//		"Resource=1", 
//		"RecContentType=image/x-icon", 
//		"Referer=", 
//		"Snapshot=t1.inf", 
//		LAST);

lr_start_transaction("Connect");

			web_url("{Instance}", 
		"URL=http://{Server}/{Instance}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=styles.fa906dba8df5460f75ba.bundle.css", ENDITEM, 
		"Url=inline.9cab63a947700c373539.bundle.js", ENDITEM, 
		"Url=polyfills.b7bb9d75137731166c02.bundle.js", ENDITEM, 
		"Url=scripts.b1edfed8e69b7c42962c.bundle.js", ENDITEM, 
		"Url=vendor.b758265485607a1c5bff.bundle.js", ENDITEM, 
		"Url=main.fa22abaf752923e5fd7c.bundle.js", ENDITEM, 
		"Url=docs/default/js/scripts.js", ENDITEM, 
		"Url=docs/pics/hitachi-white.png", ENDITEM, 
		"Url=docs/default/js/qrcode.js", ENDITEM, 
		"Url=docs/pics/spacer.gif", ENDITEM, 
		"Url=docs/pics/icon_info.png", ENDITEM, 
		"Url=docs/pics/icon_my_profile.png", ENDITEM, 
		"Url=docs/pics/icon_security_otheruser.png", ENDITEM, 
		"Url=docs/pics/icon_requests.png", ENDITEM, 
		"Url=docs/pics/icon_passwords.png", ENDITEM, 
		LAST);

	web_add_cookie("HITACHI-ID=9207077c-7ab4-415c-8721-f59be5ceba9e; DOMAIN={Server}");

/*Correlation comment - Do not change!  Original value='ZUE4P9puuKQoAlPP5JQyDvuPpgR5M6svPpKoqjHuSYXJqB1ldOzpGQAGagI+07F1PvfdjQb7ZgGGef5mML7yDz8vZRKWU7R02xMmUNQhXDeCpply3lCEX8DZdnZMLEoP' Name ='sessionData' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=sessionData",
		"RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ ",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/psf.exe*",
		LAST);

	web_url("psf.exe", 
		"URL=http://{Server}/{Instance}/cgi/psf.exe", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{Server}/{Instance}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("ajax.exe",
		"Action=http://{Server}/{Instance}/cgi/ajax.exe?language:list",
		"Method=POST",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/",
		"Snapshot=t4.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=skin", "Value=default", ENDITEM,
		"Name=action", "Value=language", ENDITEM,
		"Name=subAction", "Value=list", ENDITEM,
		"Name=language", "Value=en-US", ENDITEM,
		"Name=sessionData", "Value={sessionData}", ENDITEM,
		"Name=transaction", "Value=C_AUTHCHAIN_LOGIN", ENDITEM,
		LAST);

	lr_end_transaction("Connect", LR_AUTO);


	web_reg_save_param_regexp(
		"ParamName=sessionData_11",
		"RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ ",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
lr_start_transaction("Login-Total");

		
lr_start_transaction("Login-SetUser");

			web_submit_data("psf.exe_2",
		"Action=http://{Server}/{Instance}/cgi/psf.exe",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://{Server}/{Instance}/",
		"Snapshot=t5.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=TRANSACTION", "Value=C_AUTHCHAIN_LOGIN", ENDITEM,
		"Name=SESSDATA", "Value={sessionData}", ENDITEM,
		"Name=SKIN", "Value=default", ENDITEM,
		"Name=LANG", "Value=en-US", ENDITEM,
		"Name=HOSTID", "Value=AD", ENDITEM,
		"Name=USER_IDENT", "Value={UserID}", ENDITEM,
		"Name=SUBMIT-TOKENS.x", "Value=Continue", ENDITEM,
		"Name=SETTABLEFIELDSDB", "Value=", ENDITEM,
		"Name=SETTABLEFIELDSCOOKIE", "Value=", ENDITEM,
		LAST);

	lr_end_transaction("Login-SetUser", LR_AUTO);


	web_reg_save_param_regexp(
		"ParamName=sessionData_12",
		"RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ ",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
		
	web_convert_param("sessionData_11",
		//"SourceString=sessionData_1",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);
lr_start_transaction("Login-SetPasswd");

		
	web_custom_request("psf.exe_3", 
		"URL=http://{Server}/{Instance}/cgi/psf.exe", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{Server}/{Instance}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"Body=TRANSACTION=C_AUTHCHAIN_LOGIN&SESSDATA={sessionData_11}&SKIN=default&LANG=en-US&_MYPW={Password}&SUBMIT-VERIFY.x=Log%20in&SETTABLEFIELDSDB=&SETTABLEFIELDSCOOKIE=", 
		LAST);


	lr_end_transaction("Login-SetPasswd", LR_AUTO);


	lr_end_transaction("Login-Total", LR_AUTO);

/*Correlation comment - Do not change!  Original value='b1fyvt7ilhJXgRjDY20q/3ug3I5ieshR7EdmQJKi/aHXFkkjvODPVmcD4mktMXB8QrDW3IFNzm+yuUc5oUZeDddXL75wMjVcGtAEQOc7FmVXIaBdqyG/6tdq8RFWJ7LS' Name ='sessionData_1' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=sessionData_1",
		"RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ ",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

//	web_convert_param("sessionData_12",
//		//"SourceString=sessionData_1",
//		"SourceEncoding=HTML",
//		"TargetEncoding=URL",
//		LAST);
lr_start_transaction("Click-Help-others");

				
	web_submit_data("ida.exe", 
		"Action=http://{Server}/{Instance}/cgi/ida.exe", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{Server}/{Instance}/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=TRANSACTION", "Value=CGI_JUMP", ENDITEM, 
		"Name=SUBMIT-REQ-MAIN.x", "Value=", ENDITEM, 
		"Name=0_CURRENT", "Value=REQ-MAIN", ENDITEM, 
		"Name=LANG", "Value=en-US", ENDITEM, 
		"Name=SKIN", "Value=default", ENDITEM, 
		"Name=SESSDATA", "Value={sessionData_12}", ENDITEM, 
		EXTRARES, 
		"Url=../docs/pics/search.png", "Referer=http://{Server}/{Instance}/help-users", ENDITEM, 
		"Url=../docs/pics/spinner.gif", "Referer=http://{Server}/{Instance}/help-users", ENDITEM, 
		LAST);


	lr_end_transaction("Click-Help-others", LR_AUTO);

//
//	web_submit_data("ajax.exe_2",
//		"Action=http://{Server}/{Instance}/cgi/ajax.exe?search:init",
//		"Method=POST",
//		"RecContentType=text/json",
//		"Referer=http://{Server}/{Instance}/help-users",
//		"Snapshot=t8.inf",
//		"Mode=HTML",
//		ITEMDATA,
//		"Name=getHeader", "Value=", ENDITEM,
//		"Name=action", "Value=search", ENDITEM,
//		"Name=subAction", "Value=init", ENDITEM,
//		"Name=language", "Value=en-US", ENDITEM,
//		"Name=sessionData", "Value={sessionData_1}", ENDITEM,
//		"Name=skin", "Value=default", ENDITEM,
//		"Name=transaction", "Value=C_SELECT_USER", ENDITEM,
//		LAST);
//
//	web_submit_data("ajax.exe_3",
//		"Action=http://{Server}/{Instance}/cgi/ajax.exe?search",
//		"Method=POST",
//		"RecContentType=text/json",
//		"Referer=http://{Server}/{Instance}/help-users",
//		"Snapshot=t9.inf",
//		"Mode=HTML",
//		ITEMDATA,
//		"Name=draw", "Value=2", ENDITEM,
//		"Name=columns", "Value=4", ENDITEM,
//		"Name=order", "Value=0", ENDITEM,
//		"Name=start", "Value=0", ENDITEM,
//		"Name=length", "Value=20", ENDITEM,
//		"Name=search", "Value=", ENDITEM,
//		"Name=orderDir", "Value=asc", ENDITEM,
//		"Name=searchId", "Value=2084", ENDITEM,
//		"Name=getData", "Value=", ENDITEM,
//		"Name=tableSettings", "Value={\"time\":1494013003318,\"start\":0,\"length\":20,\"order\":[[1,\"asc\"]],\"search\":{\"search\":\"\"},\"columns\":[{\"visible\":true},{\"visible\":true},{\"visible\":true},{\"visible\":true}]}", ENDITEM,
//		"Name=action", "Value=search", ENDITEM,
//		"Name=language", "Value=en-US", ENDITEM,
//		"Name=sessionData", "Value={sessionData_1}", ENDITEM,
//		"Name=skin", "Value=default", ENDITEM,
//		"Name=transaction", "Value=C_SELECT_USER", ENDITEM,
//		EXTRARES,
//		"URL=../docs/pics/select.png", "Referer=http://{Server}/{Instance}/help-users", ENDITEM,
//		LAST);

//	web_set_sockets_option("SSL_VERSION", "2&3");
//
//	web_add_cookie("SRCHUSR=AUTOREDIR=0&GEOVAR=&DOB=20150518; DOMAIN=iecvlist.microsoft.com");
//
//	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");
//
//	web_add_cookie("WT_FPC=id=233701e3e4a8612b7691486147558997:lv=1486147748133:ss=1486147558997; DOMAIN=iecvlist.microsoft.com");
//
//	web_add_cookie("MSFPC=ID=5538f4e0ad5921459d163b3430462d45&CS=1&LV=201702&V=1; DOMAIN=iecvlist.microsoft.com");
//
//	web_add_cookie("MC1=GUID=19ca2f9b59fd4d49833c79a667fb09e9&HASH=9b2f&LV=201702&V=4&LU=1486151162202; DOMAIN=iecvlist.microsoft.com");
//
//	web_add_cookie("A=I&I=AxUFAAAAAAAZCgAAQXMa9R5LkxS7gvaiuz+WQg!!&V=4; DOMAIN=iecvlist.microsoft.com");
//
//	web_add_cookie("MUID=3D9BE6B17055620914AFE17971DF635E; DOMAIN=iecvlist.microsoft.com");
//
//	lr_think_time(4);
//
//	web_url("iecompatviewlist.xml", 
//		"URL=https://iecvlist.microsoft.com/IE11/1434748155000/iecompatviewlist.xml", 
//		"Resource=0", 
//		"RecContentType=text/xml", 
//		"Referer=", 
//		"Snapshot=t10.inf", 
//		"Mode=HTML", 
//		LAST);

	web_convert_param("sessionData_1",
		//"SourceString=sessionData_1",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);
lr_start_transaction("ajax-Search-IdContains");

		
	web_custom_request("ajax.exe_4",
		"URL=http://{Server}/{Instance}/cgi/ajax.exe?search:init",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/help-users",
		"Snapshot=t11.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=advSearch=%7B%22criteria%22%3A%5B%7B%22field%22%3A%22userid%22%2C%22operator%22%3A%22~%22%2C%22value%22%3A%22{OtherName}%22%7D%5D%2C%22search%22%3A%22%22%7D&getHeader=&searchName=&search=&action=search&subAction=init&language=en-US&sessionData={sessionData_1}&skin=default&transaction=C_SELECT_USER",
		LAST);

	web_submit_data("ajax.exe_5",
		"Action=http://{Server}/{Instance}/cgi/ajax.exe?session:extend",
		"Method=POST",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/help-users",
		"Snapshot=t12.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=action", "Value=session", ENDITEM,
		"Name=subAction", "Value=extend", ENDITEM,
		"Name=language", "Value=en-US", ENDITEM,
		"Name=sessionData", "Value={sessionData_1}", ENDITEM,
		"Name=skin", "Value=default", ENDITEM,
		"Name=transaction", "Value=C_SELECT_USER", ENDITEM,
		LAST);

	web_submit_data("ajax.exe_6",
		"Action=http://{Server}/{Instance}/cgi/ajax.exe?search",
		"Method=POST",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/help-users",
		"Snapshot=t13.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=tableSettings", "Value={\"time\":1494013029775,\"start\":0,\"length\":20,\"order\":[[1,\"asc\"]],\"search\":{\"search\":\"\"},\"columns\":[{\"visible\":true},{\"visible\":true},{\"visible\":true},{\"visible\":true}]}", ENDITEM,
		"Name=searchId", "Value=2085", ENDITEM,
		"Name=action", "Value=search", ENDITEM,
		"Name=language", "Value=en-US", ENDITEM,
		"Name=sessionData", "Value={sessionData_1}", ENDITEM,
		"Name=skin", "Value=default", ENDITEM,
		"Name=transaction", "Value=C_SELECT_USER", ENDITEM,
		LAST);

	web_submit_data("ajax.exe_7",
		"Action=http://{Server}/{Instance}/cgi/ajax.exe?search",
		"Method=POST",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/help-users",
		"Snapshot=t14.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=draw", "Value=1", ENDITEM,
		"Name=columns", "Value=4", ENDITEM,
		"Name=order", "Value=0", ENDITEM,
		"Name=start", "Value=0", ENDITEM,
		"Name=length", "Value=20", ENDITEM,
		"Name=search", "Value=", ENDITEM,
		"Name=orderDir", "Value=asc", ENDITEM,
		"Name=searchId", "Value=2085", ENDITEM,
		"Name=getData", "Value=", ENDITEM,
		"Name=tableSettings", "Value={\"time\":1494013029775,\"start\":0,\"length\":20,\"order\":[[1,\"asc\"]],\"search\":{\"search\":\"\"},\"columns\":[{\"visible\":true},{\"visible\":true},{\"visible\":true},{\"visible\":true}]}", ENDITEM,
		"Name=action", "Value=search", ENDITEM,
		"Name=language", "Value=en-US", ENDITEM,
		"Name=sessionData", "Value={sessionData_1}", ENDITEM,
		"Name=skin", "Value=default", ENDITEM,
		"Name=transaction", "Value=C_SELECT_USER", ENDITEM,
		LAST);

	web_submit_data("ajax.exe_8",
		"Action=http://{Server}/{Instance}/cgi/ajax.exe?search",
		"Method=POST",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/help-users",
		"Snapshot=t15.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=draw", "Value=2", ENDITEM,
		"Name=columns", "Value=4", ENDITEM,
		"Name=order", "Value=0", ENDITEM,
		"Name=start", "Value=0", ENDITEM,
		"Name=length", "Value=20", ENDITEM,
		"Name=search", "Value=", ENDITEM,
		"Name=orderDir", "Value=asc", ENDITEM,
		"Name=searchId", "Value=2085", ENDITEM,
		"Name=getData", "Value=", ENDITEM,
		"Name=tableSettings", "Value={\"time\":1494013029921,\"start\":0,\"length\":20,\"order\":[[1,\"asc\"]],\"search\":{\"search\":\"\"},\"columns\":[{\"visible\":true},{\"visible\":true},{\"visible\":true},{\"visible\":true}]}", ENDITEM,
		"Name=action", "Value=search", ENDITEM,
		"Name=language", "Value=en-US", ENDITEM,
		"Name=sessionData", "Value={sessionData_1}", ENDITEM,
		"Name=skin", "Value=default", ENDITEM,
		"Name=transaction", "Value=C_SELECT_USER", ENDITEM,
		LAST);


	lr_end_transaction("ajax-Search-IdContains", LR_AUTO);

/*Correlation comment - Do not change!  Original value='iTseAHwFdps5jYZcuuPyhZhNf7TjbUczpjizCAw0eyTvN9xhgOydvsU+etzSFV2TSmbY9UZbqQnHjGVKjngscuz1J+7tWE60gnDxnHEzwl65fSi5hCKkofrd2WKUihKz' Name ='sessionData_2' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=sessionData_2",
		"RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ ",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
		
//	web_convert_param("sessionData_1",
//		//"SourceString=sessionData_1",
//		"SourceEncoding=HTML",
//		"TargetEncoding=URL",
//		LAST);
lr_start_transaction("Ida-SelectOtherUser");

		
	web_custom_request("ida.exe_2",
		"URL=http://{Server}/{Instance}/cgi/ida.exe",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{Server}/{Instance}/help-users",
		"Snapshot=t16.inf",
		"Mode=HTML",
		"Body=TRANSACTION=C_SELECT_USER&SESSDATA={sessionData_1}&SKIN=default&LANG=en-US&DataTables_Table_0_length=20&SEARCHFIELD_OPERATOR_TYPE=and&clearButton=Clear%20all&SearchButton=Search&SUBMIT-SELECT-{OtherGUID}.x=0&SETTABLEFIELDSDB=NUM_RECORDS_USER%3Atrue%3Atrue%3A20&SETTABLEFIELDSCOOKIE=NUM_RECORDS_USER%3Atrue%3Atrue%3A20",
		EXTRARES,
		"URL=../docs/pics/bullet.png", "Referer=http://{Server}/{Instance}/help-users/r~{OtherGUID}", ENDITEM,
		LAST);

	lr_end_transaction("Ida-SelectOtherUser", LR_AUTO);



	lr_think_time(6);
lr_start_transaction("ajax-checkPasswordRules");

		
	web_submit_data("ajax.exe_9",
		"Action=http://{Server}/{Instance}/cgi/ajax.exe?checkPasswordRules:checkRules",
		"Method=POST",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/help-users/r~{OtherGUID}",
		"Snapshot=t17.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=pass", "Value=5", ENDITEM,
		"Name=checkoutId", "Value=", ENDITEM,
		"Name=action", "Value=checkPasswordRules", ENDITEM,
		"Name=subAction", "Value=checkRules", ENDITEM,
		"Name=language", "Value=en-US", ENDITEM,
		"Name=sessionData", "Value={sessionData_2}", ENDITEM,
		"Name=skin", "Value=default", ENDITEM,
		"Name=transaction", "Value=C_CHANGE", ENDITEM,
		EXTRARES,
		"URL=../docs/pics/greenlight.png", "Referer=http://{Server}/{Instance}/help-users/r~{OtherGUID}", ENDITEM,
		"URL=../docs/pics/redlight.png", "Referer=http://{Server}/{Instance}/help-users/r~{OtherGUID}", ENDITEM,
		LAST);

	web_submit_data("ajax.exe_10",
		"Action=http://{Server}/{Instance}/cgi/ajax.exe?checkPasswordRules:checkRules",
		"Method=POST",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/help-users/r~{OtherGUID}",
		"Snapshot=t18.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=pass", "Value=5*", ENDITEM,
		"Name=checkoutId", "Value=", ENDITEM,
		"Name=action", "Value=checkPasswordRules", ENDITEM,
		"Name=subAction", "Value=checkRules", ENDITEM,
		"Name=language", "Value=en-US", ENDITEM,
		"Name=sessionData", "Value={sessionData_2}", ENDITEM,
		"Name=skin", "Value=default", ENDITEM,
		"Name=transaction", "Value=C_CHANGE", ENDITEM,
		LAST);

	web_submit_data("ajax.exe_11",
		"Action=http://{Server}/{Instance}/cgi/ajax.exe?checkPasswordRules:checkRules",
		"Method=POST",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/help-users/r~{OtherGUID}",
		"Snapshot=t19.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=pass", "Value=5*H", ENDITEM,
		"Name=checkoutId", "Value=", ENDITEM,
		"Name=action", "Value=checkPasswordRules", ENDITEM,
		"Name=subAction", "Value=checkRules", ENDITEM,
		"Name=language", "Value=en-US", ENDITEM,
		"Name=sessionData", "Value={sessionData_2}", ENDITEM,
		"Name=skin", "Value=default", ENDITEM,
		"Name=transaction", "Value=C_CHANGE", ENDITEM,
		LAST);

	web_submit_data("ajax.exe_12",
		"Action=http://{Server}/{Instance}/cgi/ajax.exe?checkPasswordRules:checkRules",
		"Method=POST",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/help-users/r~{OtherGUID}",
		"Snapshot=t20.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=pass", "Value=5*Ho", ENDITEM,
		"Name=checkoutId", "Value=", ENDITEM,
		"Name=action", "Value=checkPasswordRules", ENDITEM,
		"Name=subAction", "Value=checkRules", ENDITEM,
		"Name=language", "Value=en-US", ENDITEM,
		"Name=sessionData", "Value={sessionData_2}", ENDITEM,
		"Name=skin", "Value=default", ENDITEM,
		"Name=transaction", "Value=C_CHANGE", ENDITEM,
		LAST);

	web_submit_data("ajax.exe_13",
		"Action=http://{Server}/{Instance}/cgi/ajax.exe?checkPasswordRules:checkRules",
		"Method=POST",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/help-users/r~{OtherGUID}",
		"Snapshot=t21.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=pass", "Value=5*Hot", ENDITEM,
		"Name=checkoutId", "Value=", ENDITEM,
		"Name=action", "Value=checkPasswordRules", ENDITEM,
		"Name=subAction", "Value=checkRules", ENDITEM,
		"Name=language", "Value=en-US", ENDITEM,
		"Name=sessionData", "Value={sessionData_2}", ENDITEM,
		"Name=skin", "Value=default", ENDITEM,
		"Name=transaction", "Value=C_CHANGE", ENDITEM,
		LAST);

	web_submit_data("ajax.exe_14",
		"Action=http://{Server}/{Instance}/cgi/ajax.exe?checkPasswordRules:checkRules",
		"Method=POST",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/help-users/r~{OtherGUID}",
		"Snapshot=t22.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=pass", "Value={Password}", ENDITEM,
		"Name=checkoutId", "Value=", ENDITEM,
		"Name=action", "Value=checkPasswordRules", ENDITEM,
		"Name=subAction", "Value=checkRules", ENDITEM,
		"Name=language", "Value=en-US", ENDITEM,
		"Name=sessionData", "Value={sessionData_2}", ENDITEM,
		"Name=skin", "Value=default", ENDITEM,
		"Name=transaction", "Value=C_CHANGE", ENDITEM,
		LAST);


	lr_end_transaction("ajax-checkPasswordRules", LR_AUTO);

	web_convert_param("sessionData_2",
		//"SourceString=sessionData_2",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);

lr_start_transaction("Ida-Reset");

		
	web_custom_request("ida.exe_3",
		"URL=http://{Server}/{Instance}/cgi/ida.exe",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{Server}/{Instance}/help-users/r~{OtherGUID}",
		"Snapshot=t23.inf",
		"Mode=HTML",
		"Body=TRANSACTION=C_CHANGE&SESSDATA={sessionData_2}&SKIN=default&LANG=en-US&CHECK_{Host}_{OtherName}=on&CHECK_{Host2}_{OtherName}=on&NUMCHOICES=10&C00000=cIew7wiji&C00001=ij1mitT&C00002=nOc3beshi&C00003=hak9vaS&C00004=ux3latoO&C00005=Hu9wririt&C00006=biS7ens&C00007=trAg5fuen&C00008=Cud9gim&C00009=wy6ragbeD&_NEWP1={Password}&_NEWP2={Password}&SUBMIT-CHANGE.x=Change%20passwords&SETTABLEFIELDSDB=NUM_RECORDS_USER%3Atrue%3Atrue%3A20&SETTABLEFIELDSCOOKIE=NUM_RECORDS_USER%3Atrue%3Atrue%3A20",
		LAST);


	lr_end_transaction("Ida-Reset", LR_AUTO);

/*Correlation comment - Do not change!  Original value='VWP3zImhCh/tcv+qkuAejgDW5jW0lF9Yl2vzqFJfXd0vVdlIs33GpDb15YwUYGcsW3x1hoSF/eVBrLcg3Z8JeCS1xXAtokVYAviEmhCy2PaL8WhZc9i6TfMHh+n56VBg' Name ='sessionData_3' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=sessionData_3",
		"RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ ",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/psf.exe*",
		LAST);

lr_start_transaction("Logout");

			web_submit_form("ida.exe_4", 
		"Snapshot=t24.inf", 
		ITEMDATA, 
		"Name=SUBMIT-LOGOUT.x", "Value=Logout", ENDITEM, 
		LAST);

	lr_end_transaction("Logout", LR_AUTO);


lr_start_transaction("Re-login-page");

			web_submit_data("ajax.exe_15",
		"Action=http://{Server}/{Instance}/cgi/ajax.exe?language:list",
		"Method=POST",
		"RecContentType=text/json",
		"Referer=http://{Server}/{Instance}/",
		"Snapshot=t25.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=skin", "Value=default", ENDITEM,
		"Name=action", "Value=language", ENDITEM,
		"Name=subAction", "Value=list", ENDITEM,
		"Name=language", "Value=en-US", ENDITEM,
		"Name=sessionData", "Value={sessionData_3}", ENDITEM,
		"Name=transaction", "Value=C_AUTHCHAIN_LOGIN", ENDITEM,
		LAST);


	lr_end_transaction("Re-login-page", LR_AUTO);

	return 0;
}