use(productivity) :- (  purpose(study); purpose(drawing); purpose(video_editing); purpose(photo_editing);	).
use(simwork_comsum) :- (    purpose(movie); purpose(e-book); purpose(web_surf); purpose(edit_docs);	).
use(game) :- (  purpose(game);	).
use(etc) :- (   purpose(child_edu); purpose(smart_home); purpose(car_nav);	).

use_env(indoor) :- ( use_loc(home); use_loc(company_hold); use_loc(car); ).
use_env(outdoor) :- ( use_loc(school); use_loc(cafe); use_loc(company_commute); ).

brand(apple) :- (   prefOS(iPad_OS);   ).
brand(google) :- (  prefOS(android);    ).



