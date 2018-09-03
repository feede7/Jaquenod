var banner = {
	adDiv: null,
	tweenDelay: .4,
	bookNowBtn: document.getElementById("book-now-bg"),
	text1: document.getElementById("text-1"),
	text2Container: document.getElementById("text-2-container"),
	text2: document.getElementById("text-2"),
	latteBgContainer: document.getElementById("latte-bg-container"),
	planeContainer: document.getElementById("plane-container"),
	path: document.getElementById("path"),
	plane: document.getElementById("plane"),
	text3a: document.getElementById("text-3a"),
	text3b: document.getElementById("text-3b"),
	uaBg: document.getElementById("ua-bg"),
	routesContainer: document.getElementById("routes-container"),
	routes: document.getElementById("routes"),
	text4a: document.getElementById("text-4a"),
	text4b: document.getElementById("text-4b"),
	loop: 1,

	init: function(){
		banner.adDiv = document.getElementById("ad");
		banner.adDiv.style.display = "block";
		banner.adDiv.addEventListener("mouseover", banner.onMouseOver);
		banner.adDiv.addEventListener("mouseout", banner.onMouseOut);
		banner.adDiv.addEventListener("click", banner.onBannerClick);

		banner.startAd();
	},

	startAd: function(){
		TweenLite.from(banner.text4a, .4, {opacity:0, delay:banner.tweenDelay});
		banner.tweenDelay += .8;
		TweenLite.from(banner.text4b, .4, {opacity:0, delay:banner.tweenDelay});
		banner.tweenDelay += .4;
		TweenLite.from(banner.routesContainer, .5, {left:"57px", top:"70px", width:"0px", height:"0px", delay:banner.tweenDelay});
		TweenLite.from(banner.routes, .5, {top: "-245px", left: "-386px", delay:banner.tweenDelay});
		banner.tweenDelay += 2;
		TweenLite.to(banner.uaBg, .4, {opacity:0, delay:banner.tweenDelay});
		TweenLite.to(banner.text4a, .4, {opacity:0, delay:banner.tweenDelay, overwrite:0});
		TweenLite.to(banner.text4b, .4, {opacity:0, delay:banner.tweenDelay, overwrite:0});
		TweenLite.to(banner.routesContainer, .4, {opacity:0, delay:banner.tweenDelay, overwrite:0});
		TweenLite.from(banner.text1, .4, {opacity:0, delay:banner.tweenDelay});
		banner.tweenDelay += 1.8;
		TweenLite.to(banner.latteBgContainer, 3, {width:"0px", delay:banner.tweenDelay});
		TweenLite.to(banner.text1, 3, {left:"-360px", delay:banner.tweenDelay, overwrite:0});
		TweenLite.from(banner.text2, 3, {right:"-110px", delay:banner.tweenDelay});
		TweenLite.to(banner.planeContainer, 3, {left:"-215px", width:"930px", delay:banner.tweenDelay});
		TweenLite.to(banner.path, 3, {left:"190px", delay:banner.tweenDelay});
		TweenLite.to(banner.plane, 3, {left:"640px", delay:banner.tweenDelay});
		banner.tweenDelay += 3.8;
		TweenLite.to(banner.planeContainer, .4, {opacity:0, delay:banner.tweenDelay, overwrite:0});
		banner.tweenDelay += 1.8;
		TweenLite.to(banner.uaBg, .4, {opacity:1, delay:banner.tweenDelay, overwrite:0, onComplete:banner.reset});
	},

	reset: function(){
		if(banner.loop < 3){
			banner.loop++;
			banner.latteBgContainer.style.width = "368px";
			banner.text1.style.left = "20px";
			banner.planeContainer.style.left = "165px";
			banner.planeContainer.style.width = "617px";
			banner.planeContainer.style.opacity = 1;
			banner.path.style.left = "-480px";
			banner.plane.style.left = "-40px";
			banner.text4a.style.opacity = banner.text4b.style.opacity = 1;
			banner.routesContainer.style.opacity = 1;
			banner.tweenDelay = .4;
			banner.startAd();
		}else{
			banner.routesContainer.style.opacity = 1;
			banner.tweenDelay = 0;
			TweenLite.to(banner.text4a, .4, {opacity:1, delay:banner.tweenDelay});
			banner.tweenDelay += .8;
			TweenLite.to(banner.text4b, .4, {opacity:1, delay:banner.tweenDelay});
			banner.tweenDelay += .4;
			TweenLite.from(banner.routesContainer, .5, {left:"57px", top:"70px", width:"0px", height:"0px", delay:banner.tweenDelay});
			TweenLite.from(banner.routes, .5, {top: "-245px", left: "-386px", delay:banner.tweenDelay});
		}
	},

	onMouseOver: function(){
		TweenLite.to(banner.bookNowBtn, .25, {scaleX:1.1, scaleY:1.1, backgroundColor:"#ffbf28"});
	},

	onMouseOut: function(){
		TweenLite.to(banner.bookNowBtn, .25, {scaleX:1, scaleY:1, backgroundColor:"#eaaf25"});
	},

	onBannerClick: function(){
		window.open(clickTag);
	}
}

window.addEventListener("load", banner.init);
