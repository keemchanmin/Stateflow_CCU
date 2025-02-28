function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["Vehicle_State0.c:rtM_"] = {file: "C:\\Users\\A\\Desktop\\stateflow_final\\Vehicle_State0_ert_rtw\\Vehicle_State0.c",
	size: 4};
	 this.metricsArray.var["rtDW"] = {file: "C:\\Users\\A\\Desktop\\stateflow_final\\Vehicle_State0_ert_rtw\\Vehicle_State0.c",
	size: 4};
	 this.metricsArray.var["rtU"] = {file: "C:\\Users\\A\\Desktop\\stateflow_final\\Vehicle_State0_ert_rtw\\Vehicle_State0.c",
	size: 28};
	 this.metricsArray.var["rtY"] = {file: "C:\\Users\\A\\Desktop\\stateflow_final\\Vehicle_State0_ert_rtw\\Vehicle_State0.c",
	size: 20};
	 this.metricsArray.fcn["State_Control"] = {file: "C:\\Users\\A\\Desktop\\stateflow_final\\Vehicle_State0_ert_rtw\\Vehicle_State_Controller.c",
	stack: 48,
	stackTotal: 48};
	 this.metricsArray.fcn["State_Control_Init"] = {file: "C:\\Users\\A\\Desktop\\stateflow_final\\Vehicle_State0_ert_rtw\\Vehicle_State_Controller.c",
	stack: 20,
	stackTotal: 20};
	 this.metricsArray.fcn["Vehicle_State0_initialize"] = {file: "C:\\Users\\A\\Desktop\\stateflow_final\\Vehicle_State0_ert_rtw\\Vehicle_State0.c",
	stack: 0,
	stackTotal: 20};
	 this.metricsArray.fcn["Vehicle_State0_step"] = {file: "C:\\Users\\A\\Desktop\\stateflow_final\\Vehicle_State0_ert_rtw\\Vehicle_State0.c",
	stack: 0,
	stackTotal: 48};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'Vehicle_State0_metrics\'});">Global Memory: 56(bytes) Maximum Stack: 48(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
