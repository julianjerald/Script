Action()
{
	
	int itr = atoi(lr_eval_string("{iteration}"));
	int i=0;
	lr_start_transaction("01_homepage");
	
	lr_think_time(2);
	
	for(i=0;i<itr;i++)
	{
	web_custom_request("web_custom_request",
		"URL=http://demo.testfire.net/",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);
	}

		
	lr_end_transaction("01_homepage", LR_AUTO);
	

		
	lr_start_transaction("02_ViewBookingsflowPage");
	
	for(i=0;i<itr+2;i++)
	{
	web_custom_request("web_custom_request",
		"URL=http://demo.testfire.net/",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);
	}
	
	lr_end_transaction("02_ViewBookingsflowPage", LR_AUTO);
	
	lr_think_time(2);
	
	lr_start_transaction("03_BookNowPage");
	
	for(i=0;i<itr+3;i++)
	{
	web_custom_request("web_custom_request",
		"URL=http://demo.testfire.net/",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);
	}
	
	lr_end_transaction("03_BookNowPage", LR_AUTO);
	
	lr_think_time(2);
	
	lr_start_transaction("04_SubmitBookingPage ");
	
	for(i=0;i<itr+4;i++)
	{
	web_custom_request("web_custom_request",
		"URL=http://demo.testfire.net/",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);
	}
	
	lr_end_transaction("04_SubmitBookingPage ", LR_AUTO);
	
	
	return 0;
}
