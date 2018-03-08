const char HTTP_HEAD[] PROGMEM            = "<!DOCTYPE html><html lang=\"en\"><head><meta name=\"viewport\"content=\"width=device-width,initial-scale=1,user-scalable=no\"/><title>{v}</title>";
const char HTTP_STYLE2[] PROGMEM           = "<style> .c{text-align:center;}div,input{padding:5px;font-size:1em;}input{width:95%;}body{text-align:center;font-family:verdana;}button{border:0;border-radius:0.3rem;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%;} .q{float:right;width:64px;text-align:right;} .l{background:url(\"data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAMAAABEpIrGAAAALVBMVEX///8EBwfBwsLw8PAzNjaCg4NTVVUjJiZDRUUUFxdiZGSho6OSk5Pg4eFydHTCjaf3AAAAZElEQVQ4je2NSw7AIAhEBamKn97/uMXEGBvozkWb9C2Zx4xzWykBhFAeYp9gkLyZE0zIMno9n4g19hmdY39scwqVkOXaxph0ZCXQcqxSpgQpONa59wkRDOL93eAXvimwlbPbwwVAegLS1HGfZAAAAABJRU5ErkJggg==\")no-repeat left center;background-size:1em;} </style>";
const char HTTP_STYLE[] PROGMEM           = "<style>* {  -webkit-transition-property: all; -webkit-transition-duration: .2s;-moz-transition-timing-function: cubic-bezier(100,50,21,6);  -moz-transition-property: all;-moz-transition-timing-function: cubic-bezier(100,50,21,6);}body{background:#1b1b2b;padding:75px;text-align:center;font-family: 'Oswald', sans-serif;}h1{color:#c0c0c0;font-weight:100;}.btn{color:#999;background:rgba(0, 0, 0, 0.5);padding:10px 20px;font-size:12px;text-decoration:none;letter-spacing:2px;text-transform:uppercase;}.btn:hover{border:none;background:rgba(0, 0, 0, 0.4);background:#fff;padding:20px 20px; #000;color:#1b1b1b;}.footer{font-size:8px;color:#fff;clear:both;display:block;letter-spacing:5px;border:1px solid #fff;padding:5px;text-decoration:none;width:210px;margin:auto;margin-top:400px;}</style>";
const char HTTP_SCRIPT[] PROGMEM          = "<script>function c(l){document.getElementById('s').value=l.innerText||l.textContent;document.getElementById('p').focus();} </script>";
const char HTTP_HEAD_END[] PROGMEM        = "</head><body><div style=\"text-align:left;display:inline-block;min-width:260px;\">";
const char HTTP_PORTAL_OPTIONS[] PROGMEM  = "<form action=\"/wifi\"method=\"get\"><button>Configure WiFi</button></form><br/><form action=\"/0wifi\"method=\"get\"><button>Configure WiFi(No Scan)</button></form><br/><form action=\"/i\"method=\"get\"><button>Info</button></form><br/><form action=\"/r\"method=\"post\"><button>Reset</button></form>";
const char HTTP_ITEM[] PROGMEM            = "<div><a href='#p'onclick='c(this)'>{v}</a>&nbsp;<span class='q{i}'>{r}%</span></div>";
const char HTTP_FORM_START[] PROGMEM      = "<form method='get'action='wifisave'><input id='s'name='s'length=32 placeholder='SSID'><br/><input id='p'name='p'length=64 type='password'placeholder='password'><br/>";
const char HTTP_FORM_PARAM[] PROGMEM      = "<br/><input id='{i}'name='{n}'length={l}placeholder='{p}'value='{v}' {c}>";
const char HTTP_FORM_END[] PROGMEM        = "<br/><button type='submit'>save</button></form>";
const char HTTP_SCAN_LINK[] PROGMEM       = "<br/><div class=\"c\"><a href=\"/wifi\">Scan</a></div>";
const char HTTP_SAVED[] PROGMEM           = "<div>Credentials Saved<br/>Trying to connect ESP to network.<br/>If it fails reconnect to AP to try again</div>";
const char HTTP_END[] PROGMEM             = "</div></body></html>";
