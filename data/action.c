Action()
{

	web_add_cookie("SRCHD=AF=IETR02; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUSR=AUTOREDIR=0&GEOVAR=&DOB=20150616; DOMAIN=www.bing.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=www.bing.com");

	web_add_cookie("MUID=3D9BE6B17055620914AFE17971DF635E; DOMAIN=www.bing.com");

	web_add_cookie("SRCHHPGUSR=CW=783&CH=517&DPR=1&UTC=-360; DOMAIN=www.bing.com");

	web_add_cookie("_UR=D=1; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=757D922E9D5440D78AF16BC3DA6C45C8; DOMAIN=www.bing.com");

	web_add_cookie("MUIDB=3D9BE6B17055620914AFE17971DF635E; DOMAIN=www.bing.com");

	web_url("favicon.ico", 
		"URL=http://www.bing.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("fox1010r-1522", 
		"URL=http://qa-stress190-vm/fox1010r-1522/", 
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

	web_add_cookie("HITACHI-ID=9207077c-7ab4-415c-8721-f59be5ceba9e; DOMAIN=qa-stress190-vm");

	web_url("psf.exe", 
		"URL=http://qa-stress190-vm/fox1010r-1522/cgi/psf.exe", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("ajax.exe", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?language:list", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=action", "Value=language", ENDITEM, 
		"Name=subAction", "Value=list", ENDITEM, 
		"Name=language", "Value=en-US", ENDITEM, 
		"Name=sessionData", "Value=ZUE4P9puuKQoAlPP5JQyDvuPpgR5M6svPpKoqjHuSYXJqB1ldOzpGQAGagI+07F1PvfdjQb7ZgGGef5mML7yDz8vZRKWU7R02xMmUNQhXDeCpply3lCEX8DZdnZMLEoP", ENDITEM, 
		"Name=transaction", "Value=C_AUTHCHAIN_LOGIN", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_submit_data("psf.exe_2", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/psf.exe", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=TRANSACTION", "Value=C_AUTHCHAIN_LOGIN", ENDITEM, 
		"Name=SESSDATA", "Value=ZUE4P9puuKQoAlPP5JQyDvuPpgR5M6svPpKoqjHuSYXJqB1ldOzpGQAGagI+07F1PvfdjQb7ZgGGef5mML7yDz8vZRKWU7R02xMmUNQhXDeCpply3lCEX8DZdnZMLEoP", ENDITEM, 
		"Name=SKIN", "Value=default", ENDITEM, 
		"Name=LANG", "Value=en-US", ENDITEM, 
		"Name=HOSTID", "Value=AD", ENDITEM, 
		"Name=USER_IDENT", "Value=abbe000", ENDITEM, 
		"Name=SUBMIT-TOKENS.x", "Value=Continue", ENDITEM, 
		"Name=SETTABLEFIELDSDB", "Value=", ENDITEM, 
		"Name=SETTABLEFIELDSCOOKIE", "Value=", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_custom_request("psf.exe_3", 
		"URL=http://qa-stress190-vm/fox1010r-1522/cgi/psf.exe", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"Body=TRANSACTION=C_AUTHCHAIN_LOGIN&SESSDATA=77CJrWJTnTZlbi%2BTa9fNUbojnQ37ZMLrVmchc%2FZ%2BzcZZaUxkXf4ygPIYGbqDm9zCtfNN23QKY45LEL6PQP%2BTQShNMATVU3POidSrkqsxBTsNE8veIzxtTR6CjQIf5mEh&SKIN=default&LANG=en-US&_MYPW=5*Hotel&SUBMIT-VERIFY.x=Log%20in&SETTABLEFIELDSDB=&SETTABLEFIELDSCOOKIE=", 
		LAST);

	web_submit_data("ida.exe", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ida.exe", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=TRANSACTION", "Value=CGI_JUMP", ENDITEM, 
		"Name=SUBMIT-REQ-MAIN.x", "Value=", ENDITEM, 
		"Name=0_CURRENT", "Value=REQ-MAIN", ENDITEM, 
		"Name=LANG", "Value=en-US", ENDITEM, 
		"Name=SKIN", "Value=default", ENDITEM, 
		"Name=SESSDATA", "Value=ZAl+Hd0bV49G+/w2u1FOXMjvotL4MaVFCERlt0Pu7Lj86n7nLXy+RhrAFACEqur5fbpxCVoDGP6xHx8BCuk05YQ1u0O41cAgSVnfCB9HJ52/5d+gwZeAY7hv7eCUmbt6", ENDITEM, 
		EXTRARES, 
		"Url=../docs/pics/search.png", "Referer=http://qa-stress190-vm/fox1010r-1522/help-users", ENDITEM, 
		"Url=../docs/pics/spinner.gif", "Referer=http://qa-stress190-vm/fox1010r-1522/help-users", ENDITEM, 
		LAST);

	web_submit_data("ajax.exe_2", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?search:init", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=getHeader", "Value=", ENDITEM, 
		"Name=action", "Value=search", ENDITEM, 
		"Name=subAction", "Value=init", ENDITEM, 
		"Name=language", "Value=en-US", ENDITEM, 
		"Name=sessionData", "Value=b1fyvt7ilhJXgRjDY20q/3ug3I5ieshR7EdmQJKi/aHXFkkjvODPVmcD4mktMXB8QrDW3IFNzm+yuUc5oUZeDddXL75wMjVcGtAEQOc7FmVXIaBdqyG/6tdq8RFWJ7LS", ENDITEM, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=transaction", "Value=C_SELECT_USER", ENDITEM, 
		LAST);

	web_submit_data("ajax.exe_3", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?search", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=draw", "Value=2", ENDITEM, 
		"Name=columns", "Value=4", ENDITEM, 
		"Name=order", "Value=0", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=20", ENDITEM, 
		"Name=search", "Value=", ENDITEM, 
		"Name=orderDir", "Value=asc", ENDITEM, 
		"Name=searchId", "Value=2084", ENDITEM, 
		"Name=getData", "Value=", ENDITEM, 
		"Name=tableSettings", "Value={\"time\":1494013003318,\"start\":0,\"length\":20,\"order\":[[1,\"asc\"]],\"search\":{\"search\":\"\"},\"columns\":[{\"visible\":true},{\"visible\":true},{\"visible\":true},{\"visible\":true}]}", ENDITEM, 
		"Name=action", "Value=search", ENDITEM, 
		"Name=language", "Value=en-US", ENDITEM, 
		"Name=sessionData", "Value=b1fyvt7ilhJXgRjDY20q/3ug3I5ieshR7EdmQJKi/aHXFkkjvODPVmcD4mktMXB8QrDW3IFNzm+yuUc5oUZeDddXL75wMjVcGtAEQOc7FmVXIaBdqyG/6tdq8RFWJ7LS", ENDITEM, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=transaction", "Value=C_SELECT_USER", ENDITEM, 
		EXTRARES, 
		"Url=../docs/pics/select.png", "Referer=http://qa-stress190-vm/fox1010r-1522/help-users", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("SRCHUSR=AUTOREDIR=0&GEOVAR=&DOB=20150518; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("WT_FPC=id=233701e3e4a8612b7691486147558997:lv=1486147748133:ss=1486147558997; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MSFPC=ID=5538f4e0ad5921459d163b3430462d45&CS=1&LV=201702&V=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MC1=GUID=19ca2f9b59fd4d49833c79a667fb09e9&HASH=9b2f&LV=201702&V=4&LU=1486151162202; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAAAZCgAAQXMa9R5LkxS7gvaiuz+WQg!!&V=4; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MUID=3D9BE6B17055620914AFE17971DF635E; DOMAIN=iecvlist.microsoft.com");

	lr_think_time(4);

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1434748155000/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ajax.exe_4", 
		"URL=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?search:init", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=advSearch=%7B%22criteria%22%3A%5B%7B%22field%22%3A%22userid%22%2C%22operator%22%3A%22~%22%2C%22value%22%3A%22tera000%22%7D%5D%2C%22search%22%3A%22%22%7D&getHeader=&searchName=&search=&action=search&subAction=init&language=en-US&sessionData=b1fyvt7ilhJXgRjDY20q%2F3ug3I5ieshR7EdmQJKi%2FaHXFkkjvODPVmcD4mktMXB8QrDW3IFNzm%2ByuUc5oUZeDddXL75wMjVcGtAEQOc7FmVXIaBdqyG%2F6tdq8RFWJ7LS&skin=default&transaction=C_SELECT_USER", 
		LAST);

	web_submit_data("ajax.exe_5", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?session:extend", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=action", "Value=session", ENDITEM, 
		"Name=subAction", "Value=extend", ENDITEM, 
		"Name=language", "Value=en-US", ENDITEM, 
		"Name=sessionData", "Value=b1fyvt7ilhJXgRjDY20q/3ug3I5ieshR7EdmQJKi/aHXFkkjvODPVmcD4mktMXB8QrDW3IFNzm+yuUc5oUZeDddXL75wMjVcGtAEQOc7FmVXIaBdqyG/6tdq8RFWJ7LS", ENDITEM, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=transaction", "Value=C_SELECT_USER", ENDITEM, 
		LAST);

	web_submit_data("ajax.exe_6", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?search", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=tableSettings", "Value={\"time\":1494013029775,\"start\":0,\"length\":20,\"order\":[[1,\"asc\"]],\"search\":{\"search\":\"\"},\"columns\":[{\"visible\":true},{\"visible\":true},{\"visible\":true},{\"visible\":true}]}", ENDITEM, 
		"Name=searchId", "Value=2085", ENDITEM, 
		"Name=action", "Value=search", ENDITEM, 
		"Name=language", "Value=en-US", ENDITEM, 
		"Name=sessionData", "Value=b1fyvt7ilhJXgRjDY20q/3ug3I5ieshR7EdmQJKi/aHXFkkjvODPVmcD4mktMXB8QrDW3IFNzm+yuUc5oUZeDddXL75wMjVcGtAEQOc7FmVXIaBdqyG/6tdq8RFWJ7LS", ENDITEM, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=transaction", "Value=C_SELECT_USER", ENDITEM, 
		LAST);

	web_submit_data("ajax.exe_7", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?search", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users", 
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
		"Name=sessionData", "Value=b1fyvt7ilhJXgRjDY20q/3ug3I5ieshR7EdmQJKi/aHXFkkjvODPVmcD4mktMXB8QrDW3IFNzm+yuUc5oUZeDddXL75wMjVcGtAEQOc7FmVXIaBdqyG/6tdq8RFWJ7LS", ENDITEM, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=transaction", "Value=C_SELECT_USER", ENDITEM, 
		LAST);

	web_submit_data("ajax.exe_8", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?search", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users", 
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
		"Name=sessionData", "Value=b1fyvt7ilhJXgRjDY20q/3ug3I5ieshR7EdmQJKi/aHXFkkjvODPVmcD4mktMXB8QrDW3IFNzm+yuUc5oUZeDddXL75wMjVcGtAEQOc7FmVXIaBdqyG/6tdq8RFWJ7LS", ENDITEM, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=transaction", "Value=C_SELECT_USER", ENDITEM, 
		LAST);

	web_custom_request("ida.exe_2", 
		"URL=http://qa-stress190-vm/fox1010r-1522/cgi/ida.exe", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"Body=TRANSACTION=C_SELECT_USER&SESSDATA=b1fyvt7ilhJXgRjDY20q%2F3ug3I5ieshR7EdmQJKi%2FaHXFkkjvODPVmcD4mktMXB8QrDW3IFNzm%2ByuUc5oUZeDddXL75wMjVcGtAEQOc7FmVXIaBdqyG%2F6tdq8RFWJ7LS&SKIN=default&LANG=en-US&DataTables_Table_0_length=20&SEARCHFIELD_OPERATOR_TYPE=and&clearButton=Clear%20all&SearchButton=Search&SUBMIT-SELECT-f0416b00-fa4c-4fa0-aa1e-e6dd89b7f3cd.x=0&SETTABLEFIELDSDB=NUM_RECORDS_USER%3Atrue%3Atrue%3A20&SETTABLEFIELDSCOOKIE=NUM_RECORDS_USER%3Atrue%3Atrue%3A20", 
		EXTRARES, 
		"Url=../docs/pics/bullet.png", "Referer=http://qa-stress190-vm/fox1010r-1522/help-users/r~f0416b00-fa4c-4fa0-aa1e-e6dd89b7f3cd", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_submit_data("ajax.exe_9", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?checkPasswordRules:checkRules", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users/r~f0416b00-fa4c-4fa0-aa1e-e6dd89b7f3cd", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pass", "Value=5", ENDITEM, 
		"Name=checkoutId", "Value=", ENDITEM, 
		"Name=action", "Value=checkPasswordRules", ENDITEM, 
		"Name=subAction", "Value=checkRules", ENDITEM, 
		"Name=language", "Value=en-US", ENDITEM, 
		"Name=sessionData", "Value=iTseAHwFdps5jYZcuuPyhZhNf7TjbUczpjizCAw0eyTvN9xhgOydvsU+etzSFV2TSmbY9UZbqQnHjGVKjngscuz1J+7tWE60gnDxnHEzwl65fSi5hCKkofrd2WKUihKz", ENDITEM, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=transaction", "Value=C_CHANGE", ENDITEM, 
		EXTRARES, 
		"Url=../docs/pics/greenlight.png", "Referer=http://qa-stress190-vm/fox1010r-1522/help-users/r~f0416b00-fa4c-4fa0-aa1e-e6dd89b7f3cd", ENDITEM, 
		"Url=../docs/pics/redlight.png", "Referer=http://qa-stress190-vm/fox1010r-1522/help-users/r~f0416b00-fa4c-4fa0-aa1e-e6dd89b7f3cd", ENDITEM, 
		LAST);

	web_submit_data("ajax.exe_10", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?checkPasswordRules:checkRules", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users/r~f0416b00-fa4c-4fa0-aa1e-e6dd89b7f3cd", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pass", "Value=5*", ENDITEM, 
		"Name=checkoutId", "Value=", ENDITEM, 
		"Name=action", "Value=checkPasswordRules", ENDITEM, 
		"Name=subAction", "Value=checkRules", ENDITEM, 
		"Name=language", "Value=en-US", ENDITEM, 
		"Name=sessionData", "Value=iTseAHwFdps5jYZcuuPyhZhNf7TjbUczpjizCAw0eyTvN9xhgOydvsU+etzSFV2TSmbY9UZbqQnHjGVKjngscuz1J+7tWE60gnDxnHEzwl65fSi5hCKkofrd2WKUihKz", ENDITEM, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=transaction", "Value=C_CHANGE", ENDITEM, 
		LAST);

	web_submit_data("ajax.exe_11", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?checkPasswordRules:checkRules", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users/r~f0416b00-fa4c-4fa0-aa1e-e6dd89b7f3cd", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pass", "Value=5*H", ENDITEM, 
		"Name=checkoutId", "Value=", ENDITEM, 
		"Name=action", "Value=checkPasswordRules", ENDITEM, 
		"Name=subAction", "Value=checkRules", ENDITEM, 
		"Name=language", "Value=en-US", ENDITEM, 
		"Name=sessionData", "Value=iTseAHwFdps5jYZcuuPyhZhNf7TjbUczpjizCAw0eyTvN9xhgOydvsU+etzSFV2TSmbY9UZbqQnHjGVKjngscuz1J+7tWE60gnDxnHEzwl65fSi5hCKkofrd2WKUihKz", ENDITEM, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=transaction", "Value=C_CHANGE", ENDITEM, 
		LAST);

	web_submit_data("ajax.exe_12", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?checkPasswordRules:checkRules", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users/r~f0416b00-fa4c-4fa0-aa1e-e6dd89b7f3cd", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pass", "Value=5*Ho", ENDITEM, 
		"Name=checkoutId", "Value=", ENDITEM, 
		"Name=action", "Value=checkPasswordRules", ENDITEM, 
		"Name=subAction", "Value=checkRules", ENDITEM, 
		"Name=language", "Value=en-US", ENDITEM, 
		"Name=sessionData", "Value=iTseAHwFdps5jYZcuuPyhZhNf7TjbUczpjizCAw0eyTvN9xhgOydvsU+etzSFV2TSmbY9UZbqQnHjGVKjngscuz1J+7tWE60gnDxnHEzwl65fSi5hCKkofrd2WKUihKz", ENDITEM, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=transaction", "Value=C_CHANGE", ENDITEM, 
		LAST);

	web_submit_data("ajax.exe_13", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?checkPasswordRules:checkRules", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users/r~f0416b00-fa4c-4fa0-aa1e-e6dd89b7f3cd", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pass", "Value=5*Hot", ENDITEM, 
		"Name=checkoutId", "Value=", ENDITEM, 
		"Name=action", "Value=checkPasswordRules", ENDITEM, 
		"Name=subAction", "Value=checkRules", ENDITEM, 
		"Name=language", "Value=en-US", ENDITEM, 
		"Name=sessionData", "Value=iTseAHwFdps5jYZcuuPyhZhNf7TjbUczpjizCAw0eyTvN9xhgOydvsU+etzSFV2TSmbY9UZbqQnHjGVKjngscuz1J+7tWE60gnDxnHEzwl65fSi5hCKkofrd2WKUihKz", ENDITEM, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=transaction", "Value=C_CHANGE", ENDITEM, 
		LAST);

	web_submit_data("ajax.exe_14", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?checkPasswordRules:checkRules", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users/r~f0416b00-fa4c-4fa0-aa1e-e6dd89b7f3cd", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pass", "Value=5*Hotel", ENDITEM, 
		"Name=checkoutId", "Value=", ENDITEM, 
		"Name=action", "Value=checkPasswordRules", ENDITEM, 
		"Name=subAction", "Value=checkRules", ENDITEM, 
		"Name=language", "Value=en-US", ENDITEM, 
		"Name=sessionData", "Value=iTseAHwFdps5jYZcuuPyhZhNf7TjbUczpjizCAw0eyTvN9xhgOydvsU+etzSFV2TSmbY9UZbqQnHjGVKjngscuz1J+7tWE60gnDxnHEzwl65fSi5hCKkofrd2WKUihKz", ENDITEM, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=transaction", "Value=C_CHANGE", ENDITEM, 
		LAST);

	lr_think_time(8);

	web_custom_request("ida.exe_3", 
		"URL=http://qa-stress190-vm/fox1010r-1522/cgi/ida.exe", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/help-users/r~f0416b00-fa4c-4fa0-aa1e-e6dd89b7f3cd", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"Body=TRANSACTION=C_CHANGE&SESSDATA=iTseAHwFdps5jYZcuuPyhZhNf7TjbUczpjizCAw0eyTvN9xhgOydvsU%2BetzSFV2TSmbY9UZbqQnHjGVKjngscuz1J%2B7tWE60gnDxnHEzwl65fSi5hCKkofrd2WKUihKz&SKIN=default&LANG=en-US&CHECK_AD_TERA000=on&NUMCHOICES=10&C00000=cIew7wiji&C00001=ij1mitT&C00002=nOc3beshi&C00003=hak9vaS&C00004=ux3latoO&C00005=Hu9wririt&C00006=biS7ens&C00007=trAg5fuen&C00008=Cud9gim&C00009=wy6ragbeD&_NEWP1=5*Hotel&_NEWP2=5*Hotel&SUBMIT-CHANGE.x=Change%20passwords&SETTABLEFIELDSDB="
		"NUM_RECORDS_USER%3Atrue%3Atrue%3A20&SETTABLEFIELDSCOOKIE=NUM_RECORDS_USER%3Atrue%3Atrue%3A20", 
		LAST);

	web_submit_form("ida.exe_4", 
		"Snapshot=t24.inf", 
		ITEMDATA, 
		"Name=SUBMIT-LOGOUT.x", "Value=Logout", ENDITEM, 
		LAST);

	web_submit_data("ajax.exe_15", 
		"Action=http://qa-stress190-vm/fox1010r-1522/cgi/ajax.exe?language:list", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://qa-stress190-vm/fox1010r-1522/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=skin", "Value=default", ENDITEM, 
		"Name=action", "Value=language", ENDITEM, 
		"Name=subAction", "Value=list", ENDITEM, 
		"Name=language", "Value=en-US", ENDITEM, 
		"Name=sessionData", "Value=VWP3zImhCh/tcv+qkuAejgDW5jW0lF9Yl2vzqFJfXd0vVdlIs33GpDb15YwUYGcsW3x1hoSF/eVBrLcg3Z8JeCS1xXAtokVYAviEmhCy2PaL8WhZc9i6TfMHh+n56VBg", ENDITEM, 
		"Name=transaction", "Value=C_AUTHCHAIN_LOGIN", ENDITEM, 
		LAST);

	return 0;
}