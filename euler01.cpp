

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


typedef unsigned long long ULONG;

//vector<ULONG> numbers;
// numbers (1000)
vector<ULONG> numbers = {233333166668ull,933331666668ull,2099998500000ull,3733332666668ull,5833329166668ull,8399997000000ull,11433332166668ull,14933326666668ull,18899995500000ull,23333331666668ull,28233324166668ull,33599994000000ull,39433331166668ull,45733321666668ull,52499992500000ull,59733330666668ull,67433319166668ull,75599991000000ull,84233330166668ull,93333316666668ull,102899989500000ull,112933329666668ull,123433314166668ull,134399988000000ull,145833329166668ull,157733311666668ull,170099986500000ull,182933328666668ull,196233309166668ull,209999985000000ull,224233328166668ull,238933306666668ull,254099983500000ull,269733327666668ull,285833304166668ull,302399982000000ull,319433327166668ull,336933301666668ull,354899980500000ull,373333326666668ull,392233299166668ull,411599979000000ull,431433326166668ull,451733296666668ull,472499977500000ull,493733325666668ull,515433294166668ull,537599976000000ull,560233325166668ull,583333291666668ull,606899974500000ull,630933324666668ull,655433289166668ull,680399973000000ull,705833324166668ull,731733286666668ull,758099971500000ull,784933323666668ull,812233284166668ull,839999970000000ull,868233323166668ull,896933281666668ull,926099968500000ull,955733322666668ull,985833279166668ull,1016399967000000ull,1047433322166668ull,1078933276666668ull,1110899965500000ull,1143333321666668ull,1176233274166668ull,1209599964000000ull,1243433321166668ull,1277733271666668ull,1312499962500000ull,1347733320666668ull,1383433269166668ull,1419599961000000ull,1456233320166668ull,1493333266666668ull,1530899959500000ull,1568933319666668ull,1607433264166668ull,1646399958000000ull,1685833319166668ull,1725733261666668ull,1766099956500000ull,1806933318666668ull,1848233259166668ull,1889999955000000ull,1932233318166668ull,1974933256666668ull,2018099953500000ull,2061733317666668ull,2105833254166668ull,2150399952000000ull,2195433317166668ull,2240933251666668ull,2286899950500000ull,2333333316666668ull,2380233249166668ull,2427599949000000ull,2475433316166668ull,2523733246666668ull,2572499947500000ull,2621733315666668ull,2671433244166668ull,2721599946000000ull,2772233315166668ull,2823333241666668ull,2874899944500000ull,2926933314666668ull,2979433239166668ull,3032399943000000ull,3085833314166668ull,3139733236666668ull,3194099941500000ull,3248933313666668ull,3304233234166668ull,3359999940000000ull,3416233313166668ull,3472933231666668ull,3530099938500000ull,3587733312666668ull,3645833229166668ull,3704399937000000ull,3763433312166668ull,3822933226666668ull,3882899935500000ull,3943333311666668ull,4004233224166668ull,4065599934000000ull,4127433311166668ull,4189733221666668ull,4252499932500000ull,4315733310666668ull,4379433219166668ull,4443599931000000ull,4508233310166668ull,4573333216666668ull,4638899929500000ull,4704933309666668ull,4771433214166668ull,4838399928000000ull,4905833309166668ull,4973733211666668ull,5042099926500000ull,5110933308666668ull,5180233209166668ull,5249999925000000ull,5320233308166668ull,5390933206666668ull,5462099923500000ull,5533733307666668ull,5605833204166668ull,5678399922000000ull,5751433307166668ull,5824933201666668ull,5898899920500000ull,5973333306666668ull,6048233199166668ull,6123599919000000ull,6199433306166668ull,6275733196666668ull,6352499917500000ull,6429733305666668ull,6507433194166668ull,6585599916000000ull,6664233305166668ull,6743333191666668ull,6822899914500000ull,6902933304666668ull,6983433189166668ull,7064399913000000ull,7145833304166668ull,7227733186666668ull,7310099911500000ull,7392933303666668ull,7476233184166668ull,7559999910000000ull,7644233303166668ull,7728933181666668ull,7814099908500000ull,7899733302666668ull,7985833179166668ull,8072399907000000ull,8159433302166668ull,8246933176666668ull,8334899905500000ull,8423333301666668ull,8512233174166668ull,8601599904000000ull,8691433301166668ull,8781733171666668ull,8872499902500000ull,8963733300666668ull,9055433169166668ull,9147599901000000ull,9240233300166668ull,9333333166666668ull,9426899899500000ull,9520933299666668ull,9615433164166668ull,9710399898000000ull,9805833299166668ull,9901733161666668ull,9998099896500000ull,10094933298666668ull,10192233159166668ull,10289999895000000ull,10388233298166668ull,10486933156666668ull,10586099893500000ull,10685733297666668ull,10785833154166668ull,10886399892000000ull,10987433297166668ull,11088933151666668ull,11190899890500000ull,11293333296666668ull,11396233149166668ull,11499599889000000ull,11603433296166668ull,11707733146666668ull,11812499887500000ull,11917733295666668ull,12023433144166668ull,12129599886000000ull,12236233295166668ull,12343333141666668ull,12450899884500000ull,12558933294666668ull,12667433139166668ull,12776399883000000ull,12885833294166668ull,12995733136666668ull,13106099881500000ull,13216933293666668ull,13328233134166668ull,13439999880000000ull,13552233293166668ull,13664933131666668ull,13778099878500000ull,13891733292666668ull,14005833129166668ull,14120399877000000ull,14235433292166668ull,14350933126666668ull,14466899875500000ull,14583333291666668ull,14700233124166668ull,14817599874000000ull,14935433291166668ull,15053733121666668ull,15172499872500000ull,15291733290666668ull,15411433119166668ull,15531599871000000ull,15652233290166668ull,15773333116666668ull,15894899869500000ull,16016933289666668ull,16139433114166668ull,16262399868000000ull,16385833289166668ull,16509733111666668ull,16634099866500000ull,16758933288666668ull,16884233109166668ull,17009999865000000ull,17136233288166668ull,17262933106666668ull,17390099863500000ull,17517733287666668ull,17645833104166668ull,17774399862000000ull,17903433287166668ull,18032933101666668ull,18162899860500000ull,18293333286666668ull,18424233099166668ull,18555599859000000ull,18687433286166668ull,18819733096666668ull,18952499857500000ull,19085733285666668ull,19219433094166668ull,19353599856000000ull,19488233285166668ull,19623333091666668ull,19758899854500000ull,19894933284666668ull,20031433089166668ull,20168399853000000ull,20305833284166668ull,20443733086666668ull,20582099851500000ull,20720933283666668ull,20860233084166668ull,20999999850000000ull,21140233283166668ull,21280933081666668ull,21422099848500000ull,21563733282666668ull,21705833079166668ull,21848399847000000ull,21991433282166668ull,22134933076666668ull,22278899845500000ull,22423333281666668ull,22568233074166668ull,22713599844000000ull,22859433281166668ull,23005733071666668ull,23152499842500000ull,23299733280666668ull,23447433069166668ull,23595599841000000ull,23744233280166668ull,23893333066666668ull,24042899839500000ull,24192933279666668ull,24343433064166668ull,24494399838000000ull,24645833279166668ull,24797733061666668ull,24950099836500000ull,25102933278666668ull,25256233059166668ull,25409999835000000ull,25564233278166668ull,25718933056666668ull,25874099833500000ull,26029733277666668ull,26185833054166668ull,26342399832000000ull,26499433277166668ull,26656933051666668ull,26814899830500000ull,26973333276666668ull,27132233049166668ull,27291599829000000ull,27451433276166668ull,27611733046666668ull,27772499827500000ull,27933733275666668ull,28095433044166668ull,28257599826000000ull,28420233275166668ull,28583333041666668ull,28746899824500000ull,28910933274666668ull,29075433039166668ull,29240399823000000ull,29405833274166668ull,29571733036666668ull,29738099821500000ull,29904933273666668ull,30072233034166668ull,30239999820000000ull,30408233273166668ull,30576933031666668ull,30746099818500000ull,30915733272666668ull,31085833029166668ull,31256399817000000ull,31427433272166668ull,31598933026666668ull,31770899815500000ull,31943333271666668ull,32116233024166668ull,32289599814000000ull,32463433271166668ull,32637733021666668ull,32812499812500000ull,32987733270666668ull,33163433019166668ull,33339599811000000ull,33516233270166668ull,33693333016666668ull,33870899809500000ull,34048933269666668ull,34227433014166668ull,34406399808000000ull,34585833269166668ull,34765733011666668ull,34946099806500000ull,35126933268666668ull,35308233009166668ull,35489999805000000ull,35672233268166668ull,35854933006666668ull,36038099803500000ull,36221733267666668ull,36405833004166668ull,36590399802000000ull,36775433267166668ull,36960933001666668ull,37146899800500000ull,37333333266666668ull,37520232999166668ull,37707599799000000ull,37895433266166668ull,38083732996666668ull,38272499797500000ull,38461733265666668ull,38651432994166668ull,38841599796000000ull,39032233265166668ull,39223332991666668ull,39414899794500000ull,39606933264666668ull,39799432989166668ull,39992399793000000ull,40185833264166668ull,40379732986666668ull,40574099791500000ull,40768933263666668ull,40964232984166668ull,41159999790000000ull,41356233263166668ull,41552932981666668ull,41750099788500000ull,41947733262666668ull,42145832979166668ull,42344399787000000ull,42543433262166668ull,42742932976666668ull,42942899785500000ull,43143333261666668ull,43344232974166668ull,43545599784000000ull,43747433261166668ull,43949732971666668ull,44152499782500000ull,44355733260666668ull,44559432969166668ull,44763599781000000ull,44968233260166668ull,45173332966666668ull,45378899779500000ull,45584933259666668ull,45791432964166668ull,45998399778000000ull,46205833259166668ull,46413732961666668ull,46622099776500000ull,46830933258666668ull,47040232959166668ull,47249999775000000ull,47460233258166668ull,47670932956666668ull,47882099773500000ull,48093733257666668ull,48305832954166668ull,48518399772000000ull,48731433257166668ull,48944932951666668ull,49158899770500000ull,49373333256666668ull,49588232949166668ull,49803599769000000ull,50019433256166668ull,50235732946666668ull,50452499767500000ull,50669733255666668ull,50887432944166668ull,51105599766000000ull,51324233255166668ull,51543332941666668ull,51762899764500000ull,51982933254666668ull,52203432939166668ull,52424399763000000ull,52645833254166668ull,52867732936666668ull,53090099761500000ull,53312933253666668ull,53536232934166668ull,53759999760000000ull,53984233253166668ull,54208932931666668ull,54434099758500000ull,54659733252666668ull,54885832929166668ull,55112399757000000ull,55339433252166668ull,55566932926666668ull,55794899755500000ull,56023333251666668ull,56252232924166668ull,56481599754000000ull,56711433251166668ull,56941732921666668ull,57172499752500000ull,57403733250666668ull,57635432919166668ull,57867599751000000ull,58100233250166668ull,58333332916666668ull,58566899749500000ull,58800933249666668ull,59035432914166668ull,59270399748000000ull,59505833249166668ull,59741732911666668ull,59978099746500000ull,60214933248666668ull,60452232909166668ull,60689999745000000ull,60928233248166668ull,61166932906666668ull,61406099743500000ull,61645733247666668ull,61885832904166668ull,62126399742000000ull,62367433247166668ull,62608932901666668ull,62850899740500000ull,63093333246666668ull,63336232899166668ull,63579599739000000ull,63823433246166668ull,64067732896666668ull,64312499737500000ull,64557733245666668ull,64803432894166668ull,65049599736000000ull,65296233245166668ull,65543332891666668ull,65790899734500000ull,66038933244666668ull,66287432889166668ull,66536399733000000ull,66785833244166668ull,67035732886666668ull,67286099731500000ull,67536933243666668ull,67788232884166668ull,68039999730000000ull,68292233243166668ull,68544932881666668ull,68798099728500000ull,69051733242666668ull,69305832879166668ull,69560399727000000ull,69815433242166668ull,70070932876666668ull,70326899725500000ull,70583333241666668ull,70840232874166668ull,71097599724000000ull,71355433241166668ull,71613732871666668ull,71872499722500000ull,72131733240666668ull,72391432869166668ull,72651599721000000ull,72912233240166668ull,73173332866666668ull,73434899719500000ull,73696933239666668ull,73959432864166668ull,74222399718000000ull,74485833239166668ull,74749732861666668ull,75014099716500000ull,75278933238666668ull,75544232859166668ull,75809999715000000ull,76076233238166668ull,76342932856666668ull,76610099713500000ull,76877733237666668ull,77145832854166668ull,77414399712000000ull,77683433237166668ull,77952932851666668ull,78222899710500000ull,78493333236666668ull,78764232849166668ull,79035599709000000ull,79307433236166668ull,79579732846666668ull,79852499707500000ull,80125733235666668ull,80399432844166668ull,80673599706000000ull,80948233235166668ull,81223332841666668ull,81498899704500000ull,81774933234666668ull,82051432839166668ull,82328399703000000ull,82605833234166668ull,82883732836666668ull,83162099701500000ull,83440933233666668ull,83720232834166668ull,83999999700000000ull,84280233233166668ull,84560932831666668ull,84842099698500000ull,85123733232666668ull,85405832829166668ull,85688399697000000ull,85971433232166668ull,86254932826666668ull,86538899695500000ull,86823333231666668ull,87108232824166668ull,87393599694000000ull,87679433231166668ull,87965732821666668ull,88252499692500000ull,88539733230666668ull,88827432819166668ull,89115599691000000ull,89404233230166668ull,89693332816666668ull,89982899689500000ull,90272933229666668ull,90563432814166668ull,90854399688000000ull,91145833229166668ull,91437732811666668ull,91730099686500000ull,92022933228666668ull,92316232809166668ull,92609999685000000ull,92904233228166668ull,93198932806666668ull,93494099683500000ull,93789733227666668ull,94085832804166668ull,94382399682000000ull,94679433227166668ull,94976932801666668ull,95274899680500000ull,95573333226666668ull,95872232799166668ull,96171599679000000ull,96471433226166668ull,96771732796666668ull,97072499677500000ull,97373733225666668ull,97675432794166668ull,97977599676000000ull,98280233225166668ull,98583332791666668ull,98886899674500000ull,99190933224666668ull,99495432789166668ull,99800399673000000ull,100105833224166668ull,100411732786666668ull,100718099671500000ull,101024933223666668ull,101332232784166668ull,101639999670000000ull,101948233223166668ull,102256932781666668ull,102566099668500000ull,102875733222666668ull,103185832779166668ull,103496399667000000ull,103807433222166668ull,104118932776666668ull,104430899665500000ull,104743333221666668ull,105056232774166668ull,105369599664000000ull,105683433221166668ull,105997732771666668ull,106312499662500000ull,106627733220666668ull,106943432769166668ull,107259599661000000ull,107576233220166668ull,107893332766666668ull,108210899659500000ull,108528933219666668ull,108847432764166668ull,109166399658000000ull,109485833219166668ull,109805732761666668ull,110126099656500000ull,110446933218666668ull,110768232759166668ull,111089999655000000ull,111412233218166668ull,111734932756666668ull,112058099653500000ull,112381733217666668ull,112705832754166668ull,113030399652000000ull,113355433217166668ull,113680932751666668ull,114006899650500000ull,114333333216666668ull,114660232749166668ull,114987599649000000ull,115315433216166668ull,115643732746666668ull,115972499647500000ull,116301733215666668ull,116631432744166668ull,116961599646000000ull,117292233215166668ull,117623332741666668ull,117954899644500000ull,118286933214666668ull,118619432739166668ull,118952399643000000ull,119285833214166668ull,119619732736666668ull,119954099641500000ull,120288933213666668ull,120624232734166668ull,120959999640000000ull,121296233213166668ull,121632932731666668ull,121970099638500000ull,122307733212666668ull,122645832729166668ull,122984399637000000ull,123323433212166668ull,123662932726666668ull,124002899635500000ull,124343333211666668ull,124684232724166668ull,125025599634000000ull,125367433211166668ull,125709732721666668ull,126052499632500000ull,126395733210666668ull,126739432719166668ull,127083599631000000ull,127428233210166668ull,127773332716666668ull,128118899629500000ull,128464933209666668ull,128811432714166668ull,129158399628000000ull,129505833209166668ull,129853732711666668ull,130202099626500000ull,130550933208666668ull,130900232709166668ull,131249999625000000ull,131600233208166668ull,131950932706666668ull,132302099623500000ull,132653733207666668ull,133005832704166668ull,133358399622000000ull,133711433207166668ull,134064932701666668ull,134418899620500000ull,134773333206666668ull,135128232699166668ull,135483599619000000ull,135839433206166668ull,136195732696666668ull,136552499617500000ull,136909733205666668ull,137267432694166668ull,137625599616000000ull,137984233205166668ull,138343332691666668ull,138702899614500000ull,139062933204666668ull,139423432689166668ull,139784399613000000ull,140145833204166668ull,140507732686666668ull,140870099611500000ull,141232933203666668ull,141596232684166668ull,141959999610000000ull,142324233203166668ull,142688932681666668ull,143054099608500000ull,143419733202666668ull,143785832679166668ull,144152399607000000ull,144519433202166668ull,144886932676666668ull,145254899605500000ull,145623333201666668ull,145992232674166668ull,146361599604000000ull,146731433201166668ull,147101732671666668ull,147472499602500000ull,147843733200666668ull,148215432669166668ull,148587599601000000ull,148960233200166668ull,149333332666666668ull,149706899599500000ull,150080933199666668ull,150455432664166668ull,150830399598000000ull,151205833199166668ull,151581732661666668ull,151958099596500000ull,152334933198666668ull,152712232659166668ull,153089999595000000ull,153468233198166668ull,153846932656666668ull,154226099593500000ull,154605733197666668ull,154985832654166668ull,155366399592000000ull,155747433197166668ull,156128932651666668ull,156510899590500000ull,156893333196666668ull,157276232649166668ull,157659599589000000ull,158043433196166668ull,158427732646666668ull,158812499587500000ull,159197733195666668ull,159583432644166668ull,159969599586000000ull,160356233195166668ull,160743332641666668ull,161130899584500000ull,161518933194666668ull,161907432639166668ull,162296399583000000ull,162685833194166668ull,163075732636666668ull,163466099581500000ull,163856933193666668ull,164248232634166668ull,164639999580000000ull,165032233193166668ull,165424932631666668ull,165818099578500000ull,166211733192666668ull,166605832629166668ull,167000399577000000ull,167395433192166668ull,167790932626666668ull,168186899575500000ull,168583333191666668ull,168980232624166668ull,169377599574000000ull,169775433191166668ull,170173732621666668ull,170572499572500000ull,170971733190666668ull,171371432619166668ull,171771599571000000ull,172172233190166668ull,172573332616666668ull,172974899569500000ull,173376933189666668ull,173779432614166668ull,174182399568000000ull,174585833189166668ull,174989732611666668ull,175394099566500000ull,175798933188666668ull,176204232609166668ull,176609999565000000ull,177016233188166668ull,177422932606666668ull,177830099563500000ull,178237733187666668ull,178645832604166668ull,179054399562000000ull,179463433187166668ull,179872932601666668ull,180282899560500000ull,180693333186666668ull,181104232599166668ull,181515599559000000ull,181927433186166668ull,182339732596666668ull,182752499557500000ull,183165733185666668ull,183579432594166668ull,183993599556000000ull,184408233185166668ull,184823332591666668ull,185238899554500000ull,185654933184666668ull,186071432589166668ull,186488399553000000ull,186905833184166668ull,187323732586666668ull,187742099551500000ull,188160933183666668ull,188580232584166668ull,188999999550000000ull,189420233183166668ull,189840932581666668ull,190262099548500000ull,190683733182666668ull,191105832579166668ull,191528399547000000ull,191951433182166668ull,192374932576666668ull,192798899545500000ull,193223333181666668ull,193648232574166668ull,194073599544000000ull,194499433181166668ull,194925732571666668ull,195352499542500000ull,195779733180666668ull,196207432569166668ull,196635599541000000ull,197064233180166668ull,197493332566666668ull,197922899539500000ull,198352933179666668ull,198783432564166668ull,199214399538000000ull,199645833179166668ull,200077732561666668ull,200510099536500000ull,200942933178666668ull,201376232559166668ull,201809999535000000ull,202244233178166668ull,202678932556666668ull,203114099533500000ull,203549733177666668ull,203985832554166668ull,204422399532000000ull,204859433177166668ull,205296932551666668ull,205734899530500000ull,206173333176666668ull,206612232549166668ull,207051599529000000ull,207491433176166668ull,207931732546666668ull,208372499527500000ull,208813733175666668ull,209255432544166668ull,209697599526000000ull,210140233175166668ull,210583332541666668ull,211026899524500000ull,211470933174666668ull,211915432539166668ull,212360399523000000ull,212805833174166668ull,213251732536666668ull,213698099521500000ull,214144933173666668ull,214592232534166668ull,215039999520000000ull,215488233173166668ull,215936932531666668ull,216386099518500000ull,216835733172666668ull,217285832529166668ull,217736399517000000ull,218187433172166668ull,218638932526666668ull,219090899515500000ull,219543333171666668ull,219996232524166668ull,220449599514000000ull,220903433171166668ull,221357732521666668ull,221812499512500000ull,222267733170666668ull,222723432519166668ull,223179599511000000ull,223636233170166668ull,224093332516666668ull,224550899509500000ull,225008933169666668ull,225467432514166668ull,225926399508000000ull,226385833169166668ull,226845732511666668ull,227306099506500000ull,227766933168666668ull,228228232509166668ull,228689999505000000ull,229152233168166668ull,229614932506666668ull,230078099503500000ull,230541733167666668ull,231005832504166668ull,231470399502000000ull,231935433167166668ull,232400932501666668ull,232866899500500000ull,233333333166666668ull,};



template<class T>
void print(const string& name, const vector<T>& arr) {
    cout << "// " << name << " (" << arr.size() << ")" << endl;
    cout << "vector<ULONG> " << name << " = {";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << ",";
    }
    cout << "};" << endl;
}


void prep_numbers() {

    const int step = 1000000; // 1M
    int n = step;

    int m3 = 3;
    int m5 = 5;
    int mul3 = 1;
    int mul5 = 1;
    ULONG sum = 0;

    vector<int> visited(step, 0);

    while (n <= 1000000000) {
        while (m3 < n && m5 < n) {
//        cout << m3 << endl
//             << m5 << endl;

            int idx3 = m3 - n + step;
            int idx5 = m5 - n + step;

            if (!visited[idx3]++)
                sum += m3;

            if (!visited[idx5]++) 
                sum += m5;

            ++mul3;        
            ++mul5;
            m3 = 3 * mul3;
            m5 = 5 * mul5;
        }

        while (m3 < n) {
//        cout << m3 << endl;

            int idx3 = m3 - n + step;

            if (!visited[idx3]++) 
                sum += m3;

            ++mul3;
            m3 = 3 * mul3;
        }

        numbers.push_back(sum);
        n += step;

        visited.assign(step, 0);
    }
}


void solve(int n, ULONG& sum) {
    const int step = 1000000;   // 1M
    int start_idx = n / step - 1;
    sum = 0;

    if (0 == (n % step)) {
        sum = numbers[start_idx];
    }
    else {
        int mul3 = 1;
        int mul5 = 1;
        int m3 = 3;
        int m5 = 5;

        if (start_idx >= 0) {
            mul3 = (start_idx + 1) * step / 3 + 1;
            mul5 = ((start_idx + 1) * step - 1) / 5 + 1;
            m3 = 3 * mul3;
            m5 = 5 * mul5;
            sum = numbers[start_idx];
        }

        vector<int> visited(step, 0);

        int shift = n < step ? 0 : n / step * step;

        while (m3 < n && m5 < n) {
            int idx3 = m3 - shift;
            int idx5 = m5 - shift;

            if (!visited[idx3]++)
                sum += m3;

            if (!visited[idx5]++) 
                sum += m5;

            ++mul3;        
            ++mul5;
            m3 = 3 * mul3;
            m5 = 5 * mul5;
        }

        while (m3 < n) {
            int idx3 = m3 - shift;

            if (!visited[idx3]++) 
                sum += m3;

            ++mul3;
            m3 = 3 * mul3;
        }
    }
}

int main(int argc, const char* argv[]) {

    string line;

    std::getline(cin, line);
    int T = atoi(line.c_str());

    while (T && std::getline(cin, line)) {
        int N = atoi(line.c_str());


        ULONG sum = 0;
        solve(N, sum);
        cout << sum << endl;

//        prep_numbers();
//        print ("numbers", numbers);

        --T;
    }

    return 0;
}


