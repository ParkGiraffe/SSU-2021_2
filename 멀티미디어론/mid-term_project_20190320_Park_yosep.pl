use(productivity) :- (  purpose(study); purpose(drawing); purpose(video_editing); purpose(photo_editing);	).
use(simwork_comsum) :- (    purpose(movie); purpose(e-book); purpose(web_surf); purpose(edit_docs);	).
use(game) :- (  purpose(game);	).
use(etc) :- (   purpose(child_edu); purpose(smart_home); purpose(car_nav);	).

use_env(indoor) :- ( use_loc(home); use_loc(company_hold); use_loc(car); ).
use_env(outdoor) :- ( use_loc(school); use_loc(cafe); use_loc(company_commute); ).

brand(apple) :- (   prefOS(iPad_OS);   ).
brand(samsung) :- (  prefOS(android);    ).

tablet(iPad_pro_12.9_5gen_apple_pencil) :- ( use(productivity), use_env(indoor), brand(apple) ).
tablet(Galaxy_tab_S7_plus) :- ( use(productivity), use_env(indoor), brand(samsung) ). 
tablet(iPad_pro_11_3gen_apple_pencil) :- ( use(productivity), use_env(outdoor), brand(apple) ). 
tablet(Galaxy_tab_S7) :- ( use(productivity), use_env(outdoor), brand(samsung) ). 

tablet(iPad_air_4gen) :- ( use(simwork_comsum), use_env(indoor), brand(apple) ).
tablet(Galaxy_tab_S7_FE) :- ( use(simwork_comsum), use_env(indoor), brand(samsung) ).
tablet(iPad_mini_6gen) :- ( use(simwork_comsum), use_env(outdoor), brand(apple) ).
tablet(Galaxy_tab_S5e) :- ( use(simwork_comsum), use_env(outdoor), brand(samsung) ).

tablet(iPad_pro_11_3gen) :- ( use(game), use_env(indoor) ).
tablet(iPad_mini_6gen) :- ( use(game), use_env(outdoor) ).

tablet(iPad_9gen) :- ( use(etc), brand(apple) ).
tablet(Galaxy_tab_A7_Lite) :- ( use(etc), brand(samsung) ).


