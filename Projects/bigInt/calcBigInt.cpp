#include <iostream>
#include <string>
#include <ctime>

#include "BigInt.hpp"

using namespace std;


int main() {

	BigInt a = 5000;
	BigInt b = 10;
	
	cout << "Int\n";	
	int n, m;
	cin >> n >> m;
	cout << n % m << '\n';

	cout << "BigInt\n";
	cin >> a >> b;
	BigInt c = a / b;
	BigInt d = a % b;
	// cout << "\n Div = " << c << '\n';
	// cout << "\n Mod = " << d << '\n';
	cout << d << '\n';
	// BigInt a("12341234123412341234123412341234123412341237648791236472137864591230582346597812652930174123956891203645789123719235");
	// BigInt b(numeric_limits<long long>::min() / 11);
	// BigInt c(a * b);
	// cout << c << '\n';
	// string s1("48923475982672983405782940376982570912341234123412341234123412341234123412341234123412341234234546674567685675868768986793245983724502385902310239845703984729837580923745892037629803579234639185672365892374982037450283745098237698375489234759826729834057829403769825709123412341234123412341234123412341234123412341234123412342345466745676856758687689867932459837245023859023102398457039847298375809237458920376298035792346391856723658923749820374502837450982376983754892347598267298340578294037698257091234123412341234123412341234123412341234123412341234123423454667456768567586876898679324598372450238590231023984570398472983758092374589203762980357923463918567236589237498203745028374509823769837548923475982672983405782940376982570912341234123412341234123412341234123412341234123412341234234546674567685675868768986793245983724502385902310239845703984729837580923745892037629803579234639185672365892374982037450283745098237698375489234759826729834057829403769825709123412341234123412341234123412341234123412341234123412342345466745676856758687689867932459837245023859023102398457039847298375809237458920376298035792346391856723658923749820374502837450982376983754892347598267298340578294037698257091234123412341234123412341234123412341234123412341234123423454667456768567586876898679324598372450238590231023984570398472983758092374589203762980357923463918567236589237498203745028374509823769837548923475982672983405782940376982570912341234123412341234123412341234123412341234123412341234234546674567685675868768986793245983724502385902310239845703984729837580923745892037629803579234639185672365892374982037450283745098237698375489234759826729834057829403769825709123412341234123412341234123412341234123412341234123412342345466745676856758687689867932459837245023859023102398457039847298375809237458920376298035792346391856723658923749820374502837450982376983754892347598267298340578294037698257091234123412341234123412341234123412341234123412341234123423454667456768567586876898679324598372450238590231023984570398472983758092374589203762980357923463918567236589237498203745028374509823769837548923475982672983405782940376982570912341234123412341234123412341234123412341234123412341234234546674567685675868768986793245983724502385902310239845703984729837580923745892037629803579234639185672365892374982037450283745098237698375489234759826729834057829403769825709123412341234123412341234123412341234123412341234123412342345466745676856758687689867932459837245023859023102398457039847298375809237458920376298035792346391856723658923749820374502837450982376983754892347598267298340578294037698257091234123412341234123412341234123412341234123412341234123423454667456768567586876898679324598372450238590231023984570398472983758092374589203762980357923463918567236589237498203745028374509823769837548923475982672983405782940376982570912341234123412341234123412341234123412341234123412341234234546674567685675868768986793245983724502385902310239845703984729837580923745892037629803579234639185672365892374982037450283745098237698375489234759826729834057829403769825709123412341234123412341234123412341234123412341234123412342345466745676856758687689867932459837245023859023102398457039847298375809237458920376298035792346391856723658923749820374502837450982376983754892347598267298340578294037698257091234123412341234123412341234123412341234123412341234123423454667456768567586876898679324598372450238590231023984570398472983758092374589203762980357923463918567236589237498203745028374509823769837548923475982672983405782940376982570912341234123412341234123412341234123412341234123412341234234546674567685675868768986793245983724502385902310239845703984729837580923745892037629803579234639185672365892374982037450283745098237698375489234759826729834057829403769825709123412341234123412341234123412341234123412341234123412342345466745676856758687689867932459837245023859023102398457039847298375809237458920376298035792346391856723658923749820374502837450982376983754892347598267298340578294037698257091234123412341234123412341234123412341234123412341234123423454667456768567586876898679324598372450238590231023984570398472983758092374589203762980357923463918567236589237498203745028374509823769837548923475982672983405782940376982570912341234123412341234123412341234123412341234123412341234234546674567685675868768986793245983724502385902310239845703984729837580923745892037629803579234639185672365892374982037450283745098237698375489234759826729834057829403769825709123412341234123412341234123412341234123412341234123412342345466745676856758687689867932459837245023859023102398457039847298375809237458920376298035792346391856723658923749820374502837450982376983754892347598267298340578294037698257091234123412341234123412341234123412341234123412341234123423454667456768567586876898679324598372450238590231023984570398472983758092374589203762980357923463918567236589237498203745028374509823769837548923475982672983405782940376982570912341234123412341234123412341234123412341234123412341234234546674567685675868768986793245983724502385902310239845703984729837580923745892037629803579234639185672365892374982037450283745098237698375489234759826729834057829403769825709123412341234123412341234123412341234123412341234123412342345466745676856758687689867932459837245023859023102398457039847298375809237458920376298035792346391856723658923749820374502837450982376983754892347598267298340578294037698257091234123412341234123412341234123412341234123412341234123423454667456768567586876898679324598372450238590231023984570398472983758092374589203762980357923463918567236589237498203745028374509823769837548923475982672983405782940376982570912341234123412341234123412341234123412341234123412341234234546674567685675868768986793245983724502385902310239845703984729837580923745892037629803579234639185672365892374982037450283745098237698375489234759826729834057829403769825709123412341234123412341234123412341234123412341234123412342345466745676856758687689867932459837245023859023102398457039847298375809237458920376298035792346391856723658923749820374502837450982376983754892347598267298340578294037698257091234123412341234123412341234123412341234123412341234123423454667456768567586876898679324598372450238590231023984570398472983758092374589203762980357923463918567236589237498203745028374509823769837548923475982672983405782940376982570912341234123412341234123412341234123412341234123412341234234546674567685675868768986793245983724502385902310239845703984729837580923745892037629803579234639185672365892374982037450283745098237698375489234759826729834057829403769825709123412341234123412341234123412341234123412341234123412342345466745676856758687689867932459837245023859023102398457039847298375809237458920376298035792346391856723658923749820374502837450982376983754892347598267298340578294037698257091234123412341234123412341234123412341234123412341234123423454667456768567586876898679324598372450238590231023984570398472983758092374589203762980357923463918567236589237");
	// string s2("62983562893746528374562389746578293465783246523889273598892735987238956237894562783465278394562837945628734956238975623987456283749567823965734278562983562893746528374562389746578293465783246523889273598723895623789456278346527839456283794562873495623897562398745628374956782396573427856298356289374652837456238974657829346578324652388927359872389562378945627834652783945628379456287349562389756239874562837495678239657342785629835628937465283745623897465782934657832465238892735987238956237894562783465278394562837945628734956238975623987456283749567823965734278562983562893746528374562389746578293465783246523889273598723895623789456278346527839456283794562873495623897562398745628374956782396573427856298356289374652837456238974657829346578324652388927359872389562378945627834652783945628379456287349562389756239874562837495678239657342785629835628937465283745623897465782934657832465238892735987238956237894562783465278394562837945628734956238975623987456283749567823965734278562983562893746528374562389746578293465783246523889273598723895623789456278346527839456283794562873495623897562398745628374956782396573427856298356289374652837456238974657829346578324652388927359872389562378945627834652783945628379456287349562389756239874562837495678239657342785629835628937465283745623897465782934657832465238892735987238956237894562783465278394562837945628734956238975623987456283749567823965734278562983562893746528374562389746578293465783246523889273598892735987238956237894562783465278394562837945628734956238975623987456283749567823965734278562983562893746528374562389746578293465783246523889273598723895623789456278346527839456283794562873495623897562398745628374956782396573427856298356289374652837456238974657829346578324652388927359872389562378945627834652783945628379456287349562389756239874562837495678239657342785629835628937465283745623897465782934657832465238892735987238956237894562783465278394562837945628734956238975623987456283749567823965734278562983562893746528374562389746578293465783246523889273598723895623789456278346527839456283794562873495623897562398745628374956782396573427856298356289374652837456238974657829346578324652388927359872389562378945627834652783945628379456287349562389756239874562837495678239657342785629835628937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745623897465782934657832465238892735987238956237893746528374562389746578293465783246523889273598723895623789374652837456238974657829346578324652388927359872389562378937465283745624");

	// BigInt a(s1);
	// BigInt b(s2);
	// // BigInt c, d;
	// string s3, s4;
	// string s5 = "3081374826535381591593362140875423691321668119784079783921475864836629244092171053517266043507079599933150208992000881006095148084853022858915376434503784643015313958896707683494315111408930017531254453006378641834816830071878872778560880229714318406600947703467293384988519367053968414640805007907073756357109845884201451835294841520636895382856969187311825727288097508276772643277529524517251435680244540833300385671216220355471569455934532809966981835621667867808013354427682513359705514759760358493841921639301572039657217887780567172698844858677737974065640433222271446415644331034999610763168889085008181645829228174542118129311187872728676653588350992879632475430328289012444458339789024249349335345867074392304519063785738933967210616617061241701965471814766048977862695026344659428275283264714392551254739401627460105988923447977001996617317207616167572911925413630165906558288062059335654047999320615211869227354618211255381246707838552632874799765603789175395561878862630432922147305222299651659980440551360596523208045701076854882151166525017065455562031355958809291089952947144636641893894119874004636852082422183605799187457122340254041302337582336599333772471678463289125248530284331321235306407505236820899560150519087794063802762748163092152260616035694419567903284063705557434760335964140223450228823167484091506363585155468015130408717471003866701704180351148940248746831536058011353627209371707530414366656333601126355304530265422141933231366429514071806109433403160897019970316648754197936315039950362989590445695716817787153158422861843120439511099352059115593630597556407674037094117498349423200426875480796143602753542681665989157748621875159338855731158781838220922562923002604634249229683060400370423748687792935272300110776754504142344024236855796750464075906705529500486388457518948390493432895744235765296811921375113045539171633947983840579665966145953587615211306176237345285280349706275458393437939855655470238696666327459416929504893831845310075746929426394913728156370798422717694691996424898777372627039585156701810517746767274433839102174663905095375288685051107607598249910718243340068301197111402244253027542584059977227316358933805576633406230554281788173981429996540199053560571727947494516120834904407335971845834995379392539805298730707040509729598212073632087059471686541561383235800330750833684142643914412882403182024393357454095668005425753149655510737974767533705817396715423824228964635719896144122516570509147432280256991168382162786309279848180262163423616623518893305124574684205143654026501958405052466034540370439981690247222003385170914098587112083839900543421911237789719592261825961262692862194988556093219540743535726811854482153579682151395133380506605059648185787920436298171299097880037753834105003188933714883443528882994388027999109997564301784550505959486397368820188971768293391770984483007213644410826088205190397444733317346025184846069033805181476466384617604373207680687344393774991156823067730635419284143285259616626975666577564983152286218724330217045361729292091506053333652158332796471633674810672372551386381893003781292929043741308250856725676351969550792324057991758107929148728254329657711495101278255600841462617014071724822157881340803994862320134598433263307955176681935846990680224565763881316195777930210243059515257405667588881517525223202297811368723338717196795091081370625402309577345288210395739975490371889140583773796214341101404064803817254311153223662228822807879548228262675811588850710682726123613095410142520891447883413990330264913003503951062225580545881548471466321515825950640790734342598799243461729449989945035602248575686578147752720016305321920312984511405826249404696721504366514004430170510461075966818401493164026606760270549913416743071397608726086080915128028949255932342521747129563483998017515853290185686604497291378480662153605743520507367835151707112215427997371070133024231450823633123363415703251493732607770527888042544761173453565316803130534350347954950289970322969539203987660579233355926977131510635780516918266100793221129691183895902808171143386906686751653561886180109634590977063405495794319680948184773394165279005853297796582424587557223603956910678399020821737598507988361627788825337917923226357727535686719896035141944422806293377011253571401034080343624052017520345110406129799161384439644660352692792048977233467242140672849501440234817274940611263891458934103406553890499001170326973588005301528371824106480816848002015695362368346305832636888482375872911754552971792060892619146614749819119066818757767591156098726474732529161616148324090185602315793065260385031664621237613941231478058163817497323997979450336946272942984660132539023924064515362298500132132982406921694022591116923213999623815643555297154025783998428085577004952948305228009475472575917855084984266672686949012596564329140913248291061196922271571127463916518151749278738366737116435723011086207468525166279841850819319172259718455553705596540485680628204066748999021794323689625077270294403726066545983924943575508618434897732121009905378789069829010945115425647395494047508641345962866999499368422681770004136534986546559350282513844226267241291624976815586623189213593028336501655102823526746337100221580074760071646807404914371753003734317833372109983665549044416904717785084626874821783572922443148303678976928451453426778777216256333717902412797110442323607997698609554691259428277454810095259789636576529501433106521193098059230050118598530610854410814514346846485831386162313663305478273875954140167289479945285280767374073252265896046116166792877446297071106426704832730421135589305314365902620783774746912133704442487289363266995081743502538893804494449415083932971078295547177784682206400109707134644482392979937061081938050700616758167106559100838225614600944886095849895763092313900605450603813697933527804381260972251589676660530900906430033863506570169732882462283846171797301291376429182508220081899335145500528357165581953424730749564487598445137231436900553918436436220324830744353838041424427321741062708231995493139714674042266922892633392581772243648883652187573599282498433355403621989107720540003898647601992126142933130713379688220375912888104307742075900059113698767883157407358444172860901425134893156264321239670591155495753805591618898794764800446715833713808412211743357124716670839726665887211321098924665536339565413228631549944842704693214424296572430558740822060525891898203618256938019266022010083372528305096262720544513416444721498322340599782791855906846083374284413375096474785626291950709997040069950140182359648310746887526309587008244474915145571846330705390110653541909587673241114513769743801060322108204068420494537951763619669387727997834761582652655043575786874820611350344161450272376520670813896392705083702366356317282977844580332895426970836528969389034567326827437381353151534888218957465313482213497781774454145926218431813645509506988377164610625635327553817041279260675347333295014215630484456681950913446587106498097829232172576503554434285225932607461287227989229591861352785504441386770250120316602910057557259721244004874376281657286597129713593155531685295580626159689489289506560860306680816163675442182564942686326107071763686517349850069183452253338391722094629914408297424955656355244227567813328825061680797903822055793990712842683996455888893401006687955639913585627313303462724820103042657432159115759401957608417765005691601611297179147526899474329592324255966874902676908401029252447238813050787735682574300743183072392856927834143230265471855458475002812832324683506041906076430719917594681764519970455711486787794960096950842548264495719385951369130995687585335749827911223386659413296069237189575240978725589731108772166627431947650426749540254582605022630604357441721766168914927400035731213982296814896028530063512295822996156548611962057349479321633146829094600416276327887902152342743498692724571626140571355565978429562636549124510895480837510008099909220011599951900887264773203198372407414778413207597396111421441550726587501671589536691305599101531735284560199292045858751568973696934309494216272847319569995322150284133882100297525268146484468037734789349921562307071300239148046706530293371426416839794968427818988297012120481081324917958269262696737404737379533770525011450097785727056444378788103922741982250876047856375180465663936496667945142424865243289408887581999940364782832612446368595137076842752676012973549771135348406984714133683917751868030905427892108561101317172729545782864118979522768766569881525724648841372741027739120567016631387095842205668461988357194827790896377885843885404224810097765762330326937646968036725486612331685773596592396967034182413231554474725316693090398475676435696913835719316505094542058152826732746429587423860321135377424627601505430536735294771062035576727626795467380493499522077257654203560060125997514111762337325702481158637223562497398941706861082620847039184330779589217337619657299452653543841912112203917486945368628523010204121076024295592361010809537683556758023423853922129486350347626146168893347863001219905525654110828415689589518088554231447970408355179564814100810719250067146845195570721031240423810903171898442846386268358435010133676550621579107392167604297803113081637816040473971192189697621689669074345862129107024159771144325565159782748014463716711170404488435096456938770406526156800308771424442312337004925380821222395046847401978698408198606237176659478909943398203586609286771688495974305548255085098690531351380599572914369152188425841817924925434630948120992909423092999502713471885757331419644156036837580337250027222438717959603609430592299521995975950853064215958910756322586024272722789999714274822672267632643070778670243320381987256462168331330911532394864713492947582026665078728149437288525766228587311502944871359703918393645607680297194223043816663219392111984331725024510507191858365347281576958307803191089563501764983621207177751094763480105471680143328066859457916873485899411246692642406309097498527711975445192314741285641890793438178518147786867264179264495441337312381114994529522887684190230700179840251355972242062709091272326747129195194433923510117284987780912032931641495384100098078202524752537402842271477171746418698172969589149533866095775192020675775254765636552637005414111414201352881318105986178855405660929200352509275235790791599345321041732152751094647969622747964905723597561136843517008884348922943929144360849293214901403169846485796959300498942831003532955793985480383541839845701873003203331372991066707479632610543485144571735018021808075840435685631103685922605499264475873282081464068352629512310743944140753939335782997423734127677168669716236312077205941691246824881914122260854759041563210821513827128261569477715361036917603136469878269053797187047485191053198535833172689628629806106165563186939594966380991424770824340630584272718639416318051780793666824900127704375571092925322807100240191436511610617690490538777967709982979144263070769545486382687945278304206976985374205430651635997830030865808560173518174985755606451298879573019827592656438047957053526054909581855649912889879616611336878811596583909708302839335174233134363045685099200224013237276613878740676215172288141058756377476992889199337365410324194768708104859405768929458369442326951146455937158065800043767437360934645303593321414587803438637093091002346928964900053137142590505226628974208268324407670421485863488390444547517211312899406209133775256244165010834941735989705009788560061503668826022066902463670209019658854207814218177221761671654853929869210446022802728337190360393646825307327409261175976652735594012929775152639158647163220970485672286348152568203762394863656521809381158302644253593457226881972898660544165093497900901561396041016018025701498199450626346521099286982019827647920496678453846552298803854841114965592214841295688712448066998465899780766468443265033506950779571189514457225868442142787762402455926159290589947228458791156189334262702196708083355492103128619350583762347136445666067638152970595248451906292732760359221598725195236953967655889790164356357594678609817237148307788668013478237600262642827899981872113897272705967507623928507667313157568366636661675399340736327773063115326122427066014407558662502168153214806937829409213013746757087215572004930361099344227306581229366751268416181180115319845413488447975655356457701196611772137490385912235253969912472845253457218873729173843450031225284287971681450582744847626677822484316429572429215475792565986561525219410519234491321817144483973897347834145065986281931101319995448034687695061263843851610084488799394953251828553073171969182748084470212980918541842486117828035440535349111896448775810811868546065716144750799060487530244429112554760388400028578473394955532137784480955174727891739744004964019383963970232968291047168320651592571321672720210754925813662640189816446469970682165873499629511052673174600430627158782594341678862244744459493015467438152534321215819498423313483909140751627964051182395557235075002105089909444722136788002037931450751344663661590694045989045971354488766330921238131724641483794119704242473128387758608670698257091017309566772806300856174399480902357709248530904627590066176083201427009284120513492279030340683522339820146033955415662716253939491291600744682123383773737122336638238838482738696004673264093246671001593172414611600773779176377652853121458003329830849434724449883791909864804078293215408856055668247830269625292432968297780240112455275126154290373586110785895412591324737251371981521065094411058851783466770335322382334408773339690471006492478888326507038703284722826050813593475092581645290006314752375879917707626104907990040305834320374661654134233725485728847740443730937985678809470194555893754120352968794583543423262879835457342861998189457383520871820694950217541758066115141995080983666657744131491952429334546257450810830851481986869545656131022848765393944971587489521797412023190060796173684248888";
	// clock_t start = clock();
	// BigInt c = a * b ;
	// clock_t end = clock();
	
	// cout << "New Result: " <<  "\n 	Time 1: " << double(end - start) / CLOCKS_PER_SEC << '\n';

	// // 2 is OLD
	// start = clock();
	// BigInt d = a / b;
	// end = clock();
	// cout << "Old Result: " <<  "\n 	Time 2: " << double(end - start) / CLOCKS_PER_SEC << '\n';s3 = c.toString();
	// s3 = c.toString();
	// s4 = d.toString();
	// if(s3 == s5) {
	// 	cout << "1: CORRECT\n";
	// }
	// else {
	// 	cout << "1: INCORRECT\n";	
	// }

	// if(s4 == s5) {
	// 	cout << "2: CORRECT\n";
	// }
	// else {
	// 	cout << "2: INCORRECT\n";	
	// }

	// while(cin >> a >> b) {
	// 	cout << a << " - " << b << " = " <<  (a - b) << '\n';	
	// }
}





