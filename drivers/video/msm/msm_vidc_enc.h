


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>android_kernel_htc_m7/include/linux/msm_vidc_enc.h at 9fc1014b8ccc89239b8ffd05455726eaff1abdf2 · CyanogenMod/android_kernel_htc_m7</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="https://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <meta property="og:image" content="https://github.global.ssl.fastly.net/images/modules/logos_page/Octocat.png">
    <meta name="hostname" content="github-fe120-cp1-prd.iad.github.net">
    <meta name="ruby" content="ruby 2.1.0p0-github-tcmalloc (60139581e1) [x86_64-linux]">
    <link rel="assets" href="https://github.global.ssl.fastly.net/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035/">
    <link rel="xhr-socket" href="/_sockets" />
    


    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="7BF3D9A4:3EA7:10BD4D2:52CF96EA" name="octolytics-dimension-request_id" /><meta content="2610476" name="octolytics-actor-id" /><meta content="bkcokota" name="octolytics-actor-login" /><meta content="e8d603dffbe76956d4dfcb06fb460ed9274b4b2c9e7ae15cf1c1c97b925ddcfc" name="octolytics-actor-hash" />
    

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="cKVF+rQ7PAKIIutV6yf2yr0SO7rUs2jFgkuk6FkKsRQ=" name="csrf-token" />

    <link href="https://github.global.ssl.fastly.net/assets/github-69f23071d49e5b28d4e1316418e8767d07878f5d.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://github.global.ssl.fastly.net/assets/github2-298f96e5c96fcb0084869ba9d879a580003e76b3.css" media="all" rel="stylesheet" type="text/css" />
    

    

      <script src="https://github.global.ssl.fastly.net/assets/frameworks-d4d23eefcbed557582cde6209ccd824fb98255d8.js" type="text/javascript"></script>
      <script src="https://github.global.ssl.fastly.net/assets/github-c6b1cfc0feb5d17fc72e38875020d018d3cafd44.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="c95e9a3f6a52db65cbd4b4ddcbe4b7fd">

        <link data-pjax-transient rel='permalink' href='/CyanogenMod/android_kernel_htc_m7/blob/9fc1014b8ccc89239b8ffd05455726eaff1abdf2/include/linux/msm_vidc_enc.h'>
  <meta property="og:title" content="android_kernel_htc_m7"/>
  <meta property="og:type" content="githubog:gitrepository"/>
  <meta property="og:url" content="https://github.com/CyanogenMod/android_kernel_htc_m7"/>
  <meta property="og:image" content="https://github.global.ssl.fastly.net/images/gravatars/gravatar-user-420.png"/>
  <meta property="og:site_name" content="GitHub"/>
  <meta property="og:description" content="android_kernel_htc_m7 - HTC One"/>

  <meta name="description" content="android_kernel_htc_m7 - HTC One" />

  <meta content="317721" name="octolytics-dimension-user_id" /><meta content="CyanogenMod" name="octolytics-dimension-user_login" /><meta content="9979977" name="octolytics-dimension-repository_id" /><meta content="CyanogenMod/android_kernel_htc_m7" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="true" name="octolytics-dimension-repository_is_fork" /><meta content="9830257" name="octolytics-dimension-repository_parent_id" /><meta content="htc-msm8960/android_kernel_htc_m7" name="octolytics-dimension-repository_parent_nwo" /><meta content="9830257" name="octolytics-dimension-repository_network_root_id" /><meta content="htc-msm8960/android_kernel_htc_m7" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/CyanogenMod/android_kernel_htc_m7/commits/9fc1014b8ccc89239b8ffd05455726eaff1abdf2.atom" rel="alternate" title="Recent Commits to android_kernel_htc_m7:9fc1014b8ccc89239b8ffd05455726eaff1abdf2" type="application/atom+xml" />

  </head>


  <body class="logged_in  env-production linux vis-public fork page-blob">
    <div class="wrapper">
      
      
      
      


      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-octicon octicon-mark-github"></span>
</a>

    
    <a href="/notifications" class="notification-indicator tooltipped downwards" data-gotokey="n" title="You have no unread notifications">
        <span class="mail-status all-read"></span>
</a>

      <div class="command-bar js-command-bar  in-repository">
          <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<input type="text" data-hotkey=" s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    data-username="bkcokota"
      data-repo="CyanogenMod/android_kernel_htc_m7"
      data-branch="9fc1014b8ccc89239b8ffd05455726eaff1abdf2"
      data-sha="863bde89462f8b7f1e641b4db901e67de7de066d"
  >

    <input type="hidden" name="nwo" value="CyanogenMod/android_kernel_htc_m7" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="octicon help tooltipped downwards" title="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
        <ul class="top-nav">
          <li class="explore"><a href="/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="https://help.github.com">Help</a></li>
        </ul>
      </div>

    


  <ul id="user-links">
    <li>
      <a href="/bkcokota" class="name">
        <img height="20" src="https://1.gravatar.com/avatar/93f934956267dc98fdf56ce847185c03?d=https%3A%2F%2Fidenticons.github.com%2Fe60ca2f32c9bd7f255a5dab0d545d636.png&amp;r=x&amp;s=140" width="20" /> bkcokota
      </a>
    </li>

      <li class="new-menu dropdown-toggle js-menu-container">
        <a href="#" class="js-menu-target tooltipped downwards" title="Create new…">
          <span class="octicon octicon-plus"></span>
          <span class="dropdown-arrow"></span>
        </a>

        <div class="js-menu-content">
        </div>
      </li>

      <li>
        <a href="/settings/profile" id="account_settings"
          class="tooltipped downwards"
          aria-label="Account settings "
          title="Account settings ">
          <span class="octicon octicon-tools"></span>
        </a>
      </li>
      <li>
        <a class="tooltipped downwards" href="/logout" data-method="post" id="logout" title="Sign out" aria-label="Sign out">
          <span class="octicon octicon-log-out"></span>
        </a>
      </li>

  </ul>

<div class="js-new-dropdown-contents hidden">
  

<ul class="dropdown-menu">
  <li>
    <a href="/new"><span class="octicon octicon-repo-create"></span> New repository</a>
  </li>
  <li>
    <a href="/organizations/new"><span class="octicon octicon-organization"></span> New organization</a>
  </li>



</ul>

</div>


    
  </div>
</div>

      

      




          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        

<ul class="pagehead-actions">

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="cKVF+rQ7PAKIIutV6yf2yr0SO7rUs2jFgkuk6FkKsRQ=" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="9979977" />

    <div class="select-menu js-menu-container js-select-menu">
      <a class="social-count js-social-count" href="/CyanogenMod/android_kernel_htc_m7/watchers">
        28
      </a>
      <span class="minibutton select-menu-button with-count js-menu-target" role="button" tabindex="0">
        <span class="js-select-button">
          <span class="octicon octicon-eye-watch"></span>
          Watch
        </span>
      </span>

      <div class="select-menu-modal-holder">
        <div class="select-menu-modal subscription-menu-modal js-menu-content">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container" role="menu">

            <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for conversations in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-watch"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

  <li>
  

  <div class="js-toggler-container js-social-container starring-container ">
    <a href="/CyanogenMod/android_kernel_htc_m7/unstar"
      class="minibutton with-count js-toggler-target star-button starred upwards"
      title="Unstar this repository" data-remote="true" data-method="post" rel="nofollow">
      <span class="octicon octicon-star-delete"></span><span class="text">Unstar</span>
    </a>

    <a href="/CyanogenMod/android_kernel_htc_m7/star"
      class="minibutton with-count js-toggler-target star-button unstarred upwards"
      title="Star this repository" data-remote="true" data-method="post" rel="nofollow">
      <span class="octicon octicon-star"></span><span class="text">Star</span>
    </a>

      <a class="social-count js-social-count" href="/CyanogenMod/android_kernel_htc_m7/stargazers">
        20
      </a>
  </div>

  </li>


        <li>
          <a href="/CyanogenMod/android_kernel_htc_m7/fork" class="minibutton with-count js-toggler-target fork-button lighter upwards" title="Fork this repo" rel="nofollow" data-method="post">
            <span class="octicon octicon-git-branch-create"></span><span class="text">Fork</span>
          </a>
          <a href="/CyanogenMod/android_kernel_htc_m7/network" class="social-count">100</a>
        </li>


</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="repo-label"><span>public</span></span>
          <span class="mega-octicon octicon-repo-forked"></span>
          <span class="author">
            <a href="/CyanogenMod" class="url fn" itemprop="url" rel="author"><span itemprop="title">CyanogenMod</span></a>
          </span>
          <span class="repohead-name-divider">/</span>
          <strong><a href="/CyanogenMod/android_kernel_htc_m7" class="js-current-repository js-repo-home-link">android_kernel_htc_m7</a></strong>

          <span class="page-context-loader">
            <img alt="Octocat-spinner-32" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

            <span class="fork-flag">
              <span class="text">forked from <a href="/htc-msm8960/android_kernel_htc_m7">htc-msm8960/android_kernel_htc_m7</a></span>
            </span>
        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      

      <div class="repository-with-sidebar repo-container  ">

        <div class="repository-sidebar">
            

<div class="sunken-menu vertical-right repo-nav js-repo-nav js-repository-container-pjax js-octicon-loaders">
  <div class="sunken-menu-contents">
    <ul class="sunken-menu-group">
      <li class="tooltipped leftwards" title="Code">
        <a href="/CyanogenMod/android_kernel_htc_m7" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-gotokey="c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /CyanogenMod/android_kernel_htc_m7">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


      <li class="tooltipped leftwards" title="Pull Requests">
        <a href="/CyanogenMod/android_kernel_htc_m7/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-gotokey="p" data-selected-links="repo_pulls /CyanogenMod/android_kernel_htc_m7/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class='counter'>0</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


        <li class="tooltipped leftwards" title="Wiki">
          <a href="/CyanogenMod/android_kernel_htc_m7/wiki" aria-label="Wiki" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_wiki /CyanogenMod/android_kernel_htc_m7/wiki">
            <span class="octicon octicon-book"></span> <span class="full-word">Wiki</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>
    </ul>
    <div class="sunken-menu-separator"></div>
    <ul class="sunken-menu-group">

      <li class="tooltipped leftwards" title="Pulse">
        <a href="/CyanogenMod/android_kernel_htc_m7/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="pulse /CyanogenMod/android_kernel_htc_m7/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped leftwards" title="Graphs">
        <a href="/CyanogenMod/android_kernel_htc_m7/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_graphs repo_contributors /CyanogenMod/android_kernel_htc_m7/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped leftwards" title="Network">
        <a href="/CyanogenMod/android_kernel_htc_m7/network" aria-label="Network" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-selected-links="repo_network /CyanogenMod/android_kernel_htc_m7/network">
          <span class="octicon octicon-git-branch"></span> <span class="full-word">Network</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


  </div>
</div>

            <div class="only-with-full-nav">
              

  

<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><strong>HTTPS</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/CyanogenMod/android_kernel_htc_m7.git" readonly="readonly">

    <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/CyanogenMod/android_kernel_htc_m7.git" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=clone">
  <h3><strong>SSH</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="git@github.com:CyanogenMod/android_kernel_htc_m7.git" readonly="readonly">

    <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="git@github.com:CyanogenMod/android_kernel_htc_m7.git" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><strong>Subversion</strong> checkout URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/CyanogenMod/android_kernel_htc_m7" readonly="readonly">

    <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/CyanogenMod/android_kernel_htc_m7" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>,
      <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>,
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <span class="octicon help tooltipped upwards" title="Get help on which URL is right for you.">
    <a href="https://help.github.com/articles/which-remote-url-should-i-use">
    <span class="octicon octicon-question"></span>
    </a>
  </span>
</p>



              <a href="/CyanogenMod/android_kernel_htc_m7/archive/9fc1014b8ccc89239b8ffd05455726eaff1abdf2.zip"
                 class="minibutton sidebar-button"
                 title="Download this repository as a zip file"
                 rel="nofollow">
                <span class="octicon octicon-cloud-download"></span>
                Download ZIP
              </a>
            </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:ad7962c0c255e4c8700f2b545d43ebf9 -->

<p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

<a href="/CyanogenMod/android_kernel_htc_m7/find/9fc1014b8ccc89239b8ffd05455726eaff1abdf2" data-pjax data-hotkey="t" class="js-show-file-finder" style="display:none">Show File Finder</a>

<div class="file-navigation">
  

<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target" data-hotkey="w"
    data-master-branch="cm-10.2"
    data-ref=""
    role="button" aria-label="Switch branches or tags" tabindex="0">
    <span class="octicon octicon-git-branch"></span>
    <i>tree:</i>
    <span class="js-select-button">9fc1014b8c</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax>

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-remove-close js-menu-close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/CyanogenMod/android_kernel_htc_m7/blob/cm-10.1/include/linux/msm_vidc_enc.h"
                 data-name="cm-10.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="cm-10.1">cm-10.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/CyanogenMod/android_kernel_htc_m7/blob/cm-10.2/include/linux/msm_vidc_enc.h"
                 data-name="cm-10.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="cm-10.2">cm-10.2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/CyanogenMod/android_kernel_htc_m7/blob/cm-11.0/include/linux/msm_vidc_enc.h"
                 data-name="cm-11.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="cm-11.0">cm-11.0</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/CyanogenMod/android_kernel_htc_m7/tree/cm-10.2-M1/include/linux/msm_vidc_enc.h"
                 data-name="cm-10.2-M1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="cm-10.2-M1">cm-10.2-M1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/CyanogenMod/android_kernel_htc_m7/tree/cm-10.2.0/include/linux/msm_vidc_enc.h"
                 data-name="cm-10.2.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="cm-10.2.0">cm-10.2.0</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/CyanogenMod/android_kernel_htc_m7/tree/cm-10.1.3-RC2/include/linux/msm_vidc_enc.h"
                 data-name="cm-10.1.3-RC2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="cm-10.1.3-RC2">cm-10.1.3-RC2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/CyanogenMod/android_kernel_htc_m7/tree/cm-10.1.3-RC1/include/linux/msm_vidc_enc.h"
                 data-name="cm-10.1.3-RC1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="cm-10.1.3-RC1">cm-10.1.3-RC1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/CyanogenMod/android_kernel_htc_m7/tree/cm-10.1.3/include/linux/msm_vidc_enc.h"
                 data-name="cm-10.1.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="cm-10.1.3">cm-10.1.3</a>
            </div> <!-- /.select-menu-item -->
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/CyanogenMod/android_kernel_htc_m7/tree/9fc1014b8ccc89239b8ffd05455726eaff1abdf2" data-branch="9fc1014b8ccc89239b8ffd05455726eaff1abdf2" data-direction="back" data-pjax="true" itemscope="url" rel="nofollow"><span itemprop="title">android_kernel_htc_m7</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/CyanogenMod/android_kernel_htc_m7/tree/9fc1014b8ccc89239b8ffd05455726eaff1abdf2/include" data-branch="9fc1014b8ccc89239b8ffd05455726eaff1abdf2" data-direction="back" data-pjax="true" itemscope="url" rel="nofollow"><span itemprop="title">include</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/CyanogenMod/android_kernel_htc_m7/tree/9fc1014b8ccc89239b8ffd05455726eaff1abdf2/include/linux" data-branch="9fc1014b8ccc89239b8ffd05455726eaff1abdf2" data-direction="back" data-pjax="true" itemscope="url" rel="nofollow"><span itemprop="title">linux</span></a></span><span class="separator"> / </span><strong class="final-path">msm_vidc_enc.h</strong> <span class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="include/linux/msm_vidc_enc.h" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


  <div class="commit commit-loader file-history-tease js-deferred-content" data-url="/CyanogenMod/android_kernel_htc_m7/contributors/9fc1014b8ccc89239b8ffd05455726eaff1abdf2/include/linux/msm_vidc_enc.h">
    Fetching contributors…

    <div class="participation">
      <p class="loader-loading"><img alt="Octocat-spinner-32-eaf2f5" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32-EAF2F5.gif" width="16" /></p>
      <p class="loader-error">Cannot retrieve contributors at this time</p>
    </div>
  </div>

<div id="files" class="bubble">
  <div class="file">
    <div class="meta">
      <div class="info">
        <span class="icon"><b class="octicon octicon-file-text"></b></span>
        <span class="mode" title="File Mode">file</span>
          <span>624 lines (497 sloc)</span>
        <span>20.398 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
              <a class="minibutton disabled tooltipped leftwards" href="#"
                 title="You must be on a branch to make or propose changes to this file">Edit</a>
          <a href="/CyanogenMod/android_kernel_htc_m7/raw/9fc1014b8ccc89239b8ffd05455726eaff1abdf2/include/linux/msm_vidc_enc.h" class="button minibutton " id="raw-url">Raw</a>
            <a href="/CyanogenMod/android_kernel_htc_m7/blame/9fc1014b8ccc89239b8ffd05455726eaff1abdf2/include/linux/msm_vidc_enc.h" class="button minibutton ">Blame</a>
          <a href="/CyanogenMod/android_kernel_htc_m7/commits/9fc1014b8ccc89239b8ffd05455726eaff1abdf2/include/linux/msm_vidc_enc.h" class="button minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->
          <a class="minibutton danger disabled empty-icon tooltipped leftwards" href="#"
             title="You must be on a branch to make or propose changes to this file">
          Delete
        </a>
      </div><!-- /.actions -->

    </div>
        <div class="blob-wrapper data type-c js-blob-data">
        <table class="file-code file-diff">
          <tr class="file-code-line">
            <td class="blob-line-nums">
              <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>
<span id="L567" rel="#L567">567</span>
<span id="L568" rel="#L568">568</span>
<span id="L569" rel="#L569">569</span>
<span id="L570" rel="#L570">570</span>
<span id="L571" rel="#L571">571</span>
<span id="L572" rel="#L572">572</span>
<span id="L573" rel="#L573">573</span>
<span id="L574" rel="#L574">574</span>
<span id="L575" rel="#L575">575</span>
<span id="L576" rel="#L576">576</span>
<span id="L577" rel="#L577">577</span>
<span id="L578" rel="#L578">578</span>
<span id="L579" rel="#L579">579</span>
<span id="L580" rel="#L580">580</span>
<span id="L581" rel="#L581">581</span>
<span id="L582" rel="#L582">582</span>
<span id="L583" rel="#L583">583</span>
<span id="L584" rel="#L584">584</span>
<span id="L585" rel="#L585">585</span>
<span id="L586" rel="#L586">586</span>
<span id="L587" rel="#L587">587</span>
<span id="L588" rel="#L588">588</span>
<span id="L589" rel="#L589">589</span>
<span id="L590" rel="#L590">590</span>
<span id="L591" rel="#L591">591</span>
<span id="L592" rel="#L592">592</span>
<span id="L593" rel="#L593">593</span>
<span id="L594" rel="#L594">594</span>
<span id="L595" rel="#L595">595</span>
<span id="L596" rel="#L596">596</span>
<span id="L597" rel="#L597">597</span>
<span id="L598" rel="#L598">598</span>
<span id="L599" rel="#L599">599</span>
<span id="L600" rel="#L600">600</span>
<span id="L601" rel="#L601">601</span>
<span id="L602" rel="#L602">602</span>
<span id="L603" rel="#L603">603</span>
<span id="L604" rel="#L604">604</span>
<span id="L605" rel="#L605">605</span>
<span id="L606" rel="#L606">606</span>
<span id="L607" rel="#L607">607</span>
<span id="L608" rel="#L608">608</span>
<span id="L609" rel="#L609">609</span>
<span id="L610" rel="#L610">610</span>
<span id="L611" rel="#L611">611</span>
<span id="L612" rel="#L612">612</span>
<span id="L613" rel="#L613">613</span>
<span id="L614" rel="#L614">614</span>
<span id="L615" rel="#L615">615</span>
<span id="L616" rel="#L616">616</span>
<span id="L617" rel="#L617">617</span>
<span id="L618" rel="#L618">618</span>
<span id="L619" rel="#L619">619</span>
<span id="L620" rel="#L620">620</span>
<span id="L621" rel="#L621">621</span>
<span id="L622" rel="#L622">622</span>
<span id="L623" rel="#L623">623</span>

            </td>
            <td class="blob-line-code">
                    <div class="code-body highlight"><pre><div class='line' id='LC1'><span class="cp">#ifndef _MSM_VIDC_ENC_H_</span></div><div class='line' id='LC2'><span class="cp">#define _MSM_VIDC_ENC_H_</span></div><div class='line' id='LC3'><br/></div><div class='line' id='LC4'><span class="cp">#include &lt;linux/types.h&gt;</span></div><div class='line' id='LC5'><span class="cp">#include &lt;linux/ioctl.h&gt;</span></div><div class='line' id='LC6'><br/></div><div class='line' id='LC7'><span class="cm">/** STATUS CODES*/</span></div><div class='line' id='LC8'><span class="cm">/* Base value for status codes */</span></div><div class='line' id='LC9'><span class="cp">#define VEN_S_BASE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x00000000</span></div><div class='line' id='LC10'><span class="cp">#define VEN_S_SUCCESS&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE)</span><span class="cm">/* Success */</span><span class="cp"></span></div><div class='line' id='LC11'><span class="cp">#define VEN_S_EFAIL&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+1)</span><span class="cm">/* General failure */</span><span class="cp"></span></div><div class='line' id='LC12'><span class="cp">#define VEN_S_EFATAL&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+2)</span><span class="cm">/* Fatal irrecoverable failure*/</span><span class="cp"></span></div><div class='line' id='LC13'><span class="cp">#define VEN_S_EBADPARAM&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+3)</span><span class="cm">/* Error passed parameters*/</span><span class="cp"></span></div><div class='line' id='LC14'><span class="cm">/*Command called in invalid state*/</span></div><div class='line' id='LC15'><span class="cp">#define VEN_S_EINVALSTATE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+4)</span></div><div class='line' id='LC16'><span class="cp">#define VEN_S_ENOSWRES&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+5)</span><span class="cm">/* Insufficient OS resources*/</span><span class="cp"></span></div><div class='line' id='LC17'><span class="cp">#define VEN_S_ENOHWRES&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+6)</span><span class="cm">/*Insufficient HW resources */</span><span class="cp"></span></div><div class='line' id='LC18'><span class="cp">#define VEN_S_EBUFFREQ&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+7)</span><span class="cm">/* Buffer requirements were not met*/</span><span class="cp"></span></div><div class='line' id='LC19'><span class="cp">#define VEN_S_EINVALCMD&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+8)</span><span class="cm">/* Invalid command called */</span><span class="cp"></span></div><div class='line' id='LC20'><span class="cp">#define VEN_S_ETIMEOUT&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+9)</span><span class="cm">/* Command timeout. */</span><span class="cp"></span></div><div class='line' id='LC21'><span class="cm">/*Re-attempt was made when multiple invocation not supported for API.*/</span></div><div class='line' id='LC22'><span class="cp">#define VEN_S_ENOREATMPT&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+10)</span></div><div class='line' id='LC23'><span class="cp">#define VEN_S_ENOPREREQ&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+11)</span><span class="cm">/*Pre-requirement is not met for API*/</span><span class="cp"></span></div><div class='line' id='LC24'><span class="cp">#define VEN_S_ECMDQFULL&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+12)</span><span class="cm">/*Command queue is full*/</span><span class="cp"></span></div><div class='line' id='LC25'><span class="cp">#define VEN_S_ENOTSUPP&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+13)</span><span class="cm">/*Command not supported*/</span><span class="cp"></span></div><div class='line' id='LC26'><span class="cp">#define VEN_S_ENOTIMPL&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+14)</span><span class="cm">/*Command not implemented.*/</span><span class="cp"></span></div><div class='line' id='LC27'><span class="cp">#define VEN_S_ENOTPMEM&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+15)</span><span class="cm">/*Buffer is not from PMEM*/</span><span class="cp"></span></div><div class='line' id='LC28'><span class="cp">#define VEN_S_EFLUSHED&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+16)</span><span class="cm">/*returned buffer was flushed*/</span><span class="cp"></span></div><div class='line' id='LC29'><span class="cp">#define VEN_S_EINSUFBUF&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+17)</span><span class="cm">/*provided buffer size insufficient*/</span><span class="cp"></span></div><div class='line' id='LC30'><span class="cp">#define VEN_S_ESAMESTATE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+18)</span></div><div class='line' id='LC31'><span class="cp">#define VEN_S_EINVALTRANS&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(VEN_S_BASE+19)</span></div><div class='line' id='LC32'><br/></div><div class='line' id='LC33'><span class="cp">#define VEN_INTF_VER&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1</span></div><div class='line' id='LC34'><br/></div><div class='line' id='LC35'><span class="cm">/*Asynchronous messages from driver*/</span></div><div class='line' id='LC36'><span class="cp">#define VEN_MSG_INDICATION&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0</span></div><div class='line' id='LC37'><span class="cp">#define VEN_MSG_INPUT_BUFFER_DONE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1</span></div><div class='line' id='LC38'><span class="cp">#define VEN_MSG_OUTPUT_BUFFER_DONE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2</span></div><div class='line' id='LC39'><span class="cp">#define VEN_MSG_NEED_OUTPUT_BUFFER&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3</span></div><div class='line' id='LC40'><span class="cp">#define VEN_MSG_FLUSH_INPUT_DONE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4</span></div><div class='line' id='LC41'><span class="cp">#define VEN_MSG_FLUSH_OUPUT_DONE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5</span></div><div class='line' id='LC42'><span class="cp">#define VEN_MSG_START&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;6</span></div><div class='line' id='LC43'><span class="cp">#define VEN_MSG_STOP&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7</span></div><div class='line' id='LC44'><span class="cp">#define VEN_MSG_PAUSE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8</span></div><div class='line' id='LC45'><span class="cp">#define VEN_MSG_RESUME&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;9</span></div><div class='line' id='LC46'><span class="cp">#define VEN_MSG_STOP_READING_MSG&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10</span></div><div class='line' id='LC47'><br/></div><div class='line' id='LC48'><span class="cm">/*Buffer flags bits masks*/</span></div><div class='line' id='LC49'><span class="cp">#define VEN_BUFFLAG_EOS&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x00000001</span></div><div class='line' id='LC50'><span class="cp">#define VEN_BUFFLAG_ENDOFFRAME&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x00000010</span></div><div class='line' id='LC51'><span class="cp">#define VEN_BUFFLAG_SYNCFRAME&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x00000020</span></div><div class='line' id='LC52'><span class="cp">#define VEN_BUFFLAG_EXTRADATA&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x00000040</span></div><div class='line' id='LC53'><span class="cp">#define VEN_BUFFLAG_CODECCONFIG&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x00000080</span></div><div class='line' id='LC54'><br/></div><div class='line' id='LC55'><span class="cm">/*Post processing flags bit masks*/</span></div><div class='line' id='LC56'><span class="cp">#define VEN_EXTRADATA_NONE          0x001</span></div><div class='line' id='LC57'><span class="cp">#define VEN_EXTRADATA_QCOMFILLER    0x002</span></div><div class='line' id='LC58'><span class="cp">#define VEN_EXTRADATA_SLICEINFO     0x100</span></div><div class='line' id='LC59'><br/></div><div class='line' id='LC60'><span class="cm">/*ENCODER CONFIGURATION CONSTANTS*/</span></div><div class='line' id='LC61'><br/></div><div class='line' id='LC62'><span class="cm">/*Encoded video frame types*/</span></div><div class='line' id='LC63'><span class="cp">#define VEN_FRAME_TYPE_I&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1</span><span class="cm">/* I frame type */</span><span class="cp"></span></div><div class='line' id='LC64'><span class="cp">#define VEN_FRAME_TYPE_P&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2</span><span class="cm">/* P frame type */</span><span class="cp"></span></div><div class='line' id='LC65'><span class="cp">#define VEN_FRAME_TYPE_B&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3</span><span class="cm">/* B frame type */</span><span class="cp"></span></div><div class='line' id='LC66'><br/></div><div class='line' id='LC67'><span class="cm">/*Video codec types*/</span></div><div class='line' id='LC68'><span class="cp">#define VEN_CODEC_MPEG4&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1</span><span class="cm">/* MPEG4 Codec */</span><span class="cp"></span></div><div class='line' id='LC69'><span class="cp">#define VEN_CODEC_H264&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2</span><span class="cm">/* H.264 Codec */</span><span class="cp"></span></div><div class='line' id='LC70'><span class="cp">#define VEN_CODEC_H263&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3</span><span class="cm">/* H.263 Codec */</span><span class="cp"></span></div><div class='line' id='LC71'><br/></div><div class='line' id='LC72'><span class="cm">/*Video codec profile types.*/</span></div><div class='line' id='LC73'><span class="cp">#define VEN_PROFILE_MPEG4_SP      1</span><span class="cm">/* 1 - MPEG4 SP profile      */</span><span class="cp"></span></div><div class='line' id='LC74'><span class="cp">#define VEN_PROFILE_MPEG4_ASP     2</span><span class="cm">/* 2 - MPEG4 ASP profile     */</span><span class="cp"></span></div><div class='line' id='LC75'><span class="cp">#define VEN_PROFILE_H264_BASELINE 3</span><span class="cm">/* 3 - H264 Baseline profile&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;*/</span><span class="cp"></span></div><div class='line' id='LC76'><span class="cp">#define VEN_PROFILE_H264_MAIN     4</span><span class="cm">/* 4 - H264 Main profile     */</span><span class="cp"></span></div><div class='line' id='LC77'><span class="cp">#define VEN_PROFILE_H264_HIGH     5</span><span class="cm">/* 5 - H264 High profile     */</span><span class="cp"></span></div><div class='line' id='LC78'><span class="cp">#define VEN_PROFILE_H263_BASELINE 6</span><span class="cm">/* 6 - H263 Baseline profile */</span><span class="cp"></span></div><div class='line' id='LC79'><br/></div><div class='line' id='LC80'><span class="cm">/*Video codec profile level types.*/</span></div><div class='line' id='LC81'><span class="cp">#define VEN_LEVEL_MPEG4_0&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x1</span><span class="cm">/* MPEG4 Level 0  */</span><span class="cp"></span></div><div class='line' id='LC82'><span class="cp">#define VEN_LEVEL_MPEG4_1&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x2</span><span class="cm">/* MPEG4 Level 1  */</span><span class="cp"></span></div><div class='line' id='LC83'><span class="cp">#define VEN_LEVEL_MPEG4_2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x3</span><span class="cm">/* MPEG4 Level 2  */</span><span class="cp"></span></div><div class='line' id='LC84'><span class="cp">#define VEN_LEVEL_MPEG4_3&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x4</span><span class="cm">/* MPEG4 Level 3  */</span><span class="cp"></span></div><div class='line' id='LC85'><span class="cp">#define VEN_LEVEL_MPEG4_4&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x5</span><span class="cm">/* MPEG4 Level 4  */</span><span class="cp"></span></div><div class='line' id='LC86'><span class="cp">#define VEN_LEVEL_MPEG4_5&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x6</span><span class="cm">/* MPEG4 Level 5  */</span><span class="cp"></span></div><div class='line' id='LC87'><span class="cp">#define VEN_LEVEL_MPEG4_3b&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x7</span><span class="cm">/* MPEG4 Level 3b */</span><span class="cp"></span></div><div class='line' id='LC88'><span class="cp">#define VEN_LEVEL_MPEG4_6&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x8</span><span class="cm">/* MPEG4 Level 6  */</span><span class="cp"></span></div><div class='line' id='LC89'><br/></div><div class='line' id='LC90'><span class="cp">#define VEN_LEVEL_H264_1&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x9</span><span class="cm">/* H.264 Level 1   */</span><span class="cp"></span></div><div class='line' id='LC91'><span class="cp">#define VEN_LEVEL_H264_1b        0xA</span><span class="cm">/* H.264 Level 1b  */</span><span class="cp"></span></div><div class='line' id='LC92'><span class="cp">#define VEN_LEVEL_H264_1p1&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0xB</span><span class="cm">/* H.264 Level 1.1 */</span><span class="cp"></span></div><div class='line' id='LC93'><span class="cp">#define VEN_LEVEL_H264_1p2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0xC</span><span class="cm">/* H.264 Level 1.2 */</span><span class="cp"></span></div><div class='line' id='LC94'><span class="cp">#define VEN_LEVEL_H264_1p3&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0xD</span><span class="cm">/* H.264 Level 1.3 */</span><span class="cp"></span></div><div class='line' id='LC95'><span class="cp">#define VEN_LEVEL_H264_2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0xE</span><span class="cm">/* H.264 Level 2   */</span><span class="cp"></span></div><div class='line' id='LC96'><span class="cp">#define VEN_LEVEL_H264_2p1&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0xF</span><span class="cm">/* H.264 Level 2.1 */</span><span class="cp"></span></div><div class='line' id='LC97'><span class="cp">#define VEN_LEVEL_H264_2p2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x10</span><span class="cm">/* H.264 Level 2.2 */</span><span class="cp"></span></div><div class='line' id='LC98'><span class="cp">#define VEN_LEVEL_H264_3&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x11</span><span class="cm">/* H.264 Level 3   */</span><span class="cp"></span></div><div class='line' id='LC99'><span class="cp">#define VEN_LEVEL_H264_3p1&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x12</span><span class="cm">/* H.264 Level 3.1 */</span><span class="cp"></span></div><div class='line' id='LC100'><span class="cp">#define VEN_LEVEL_H264_3p2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x13</span><span class="cm">/* H.264 Level 3.2 */</span><span class="cp"></span></div><div class='line' id='LC101'><span class="cp">#define VEN_LEVEL_H264_4&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x14</span><span class="cm">/* H.264 Level 4   */</span><span class="cp"></span></div><div class='line' id='LC102'><br/></div><div class='line' id='LC103'><span class="cp">#define VEN_LEVEL_H263_10&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x15</span><span class="cm">/* H.263 Level 10  */</span><span class="cp"></span></div><div class='line' id='LC104'><span class="cp">#define VEN_LEVEL_H263_20&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x16</span><span class="cm">/* H.263 Level 20  */</span><span class="cp"></span></div><div class='line' id='LC105'><span class="cp">#define VEN_LEVEL_H263_30&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x17</span><span class="cm">/* H.263 Level 30  */</span><span class="cp"></span></div><div class='line' id='LC106'><span class="cp">#define VEN_LEVEL_H263_40&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x18</span><span class="cm">/* H.263 Level 40  */</span><span class="cp"></span></div><div class='line' id='LC107'><span class="cp">#define VEN_LEVEL_H263_45&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x19</span><span class="cm">/* H.263 Level 45  */</span><span class="cp"></span></div><div class='line' id='LC108'><span class="cp">#define VEN_LEVEL_H263_50&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x1A</span><span class="cm">/* H.263 Level 50  */</span><span class="cp"></span></div><div class='line' id='LC109'><span class="cp">#define VEN_LEVEL_H263_60&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x1B</span><span class="cm">/* H.263 Level 60  */</span><span class="cp"></span></div><div class='line' id='LC110'><span class="cp">#define VEN_LEVEL_H263_70&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x1C</span><span class="cm">/* H.263 Level 70  */</span><span class="cp"></span></div><div class='line' id='LC111'><br/></div><div class='line' id='LC112'><span class="cm">/*Entropy coding model selection for H.264 encoder.*/</span></div><div class='line' id='LC113'><span class="cp">#define VEN_ENTROPY_MODEL_CAVLC&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1</span></div><div class='line' id='LC114'><span class="cp">#define VEN_ENTROPY_MODEL_CABAC&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2</span></div><div class='line' id='LC115'><span class="cm">/*Cabac model number (0,1,2) for encoder.*/</span></div><div class='line' id='LC116'><span class="cp">#define VEN_CABAC_MODEL_0&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1</span><span class="cm">/* CABAC Model 0. */</span><span class="cp"></span></div><div class='line' id='LC117'><span class="cp">#define VEN_CABAC_MODEL_1&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2</span><span class="cm">/* CABAC Model 1. */</span><span class="cp"></span></div><div class='line' id='LC118'><span class="cp">#define VEN_CABAC_MODEL_2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3</span><span class="cm">/* CABAC Model 2. */</span><span class="cp"></span></div><div class='line' id='LC119'><br/></div><div class='line' id='LC120'><span class="cm">/*Deblocking filter control type for encoder.*/</span></div><div class='line' id='LC121'><span class="cp">#define VEN_DB_DISABLE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1</span><span class="cm">/* 1 - Disable deblocking filter*/</span><span class="cp"></span></div><div class='line' id='LC122'><span class="cp">#define VEN_DB_ALL_BLKG_BNDRY&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2</span><span class="cm">/* 2 - All blocking boundary filtering*/</span><span class="cp"></span></div><div class='line' id='LC123'><span class="cp">#define VEN_DB_SKIP_SLICE_BNDRY&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3</span><span class="cm">/* 3 - Filtering except sliceboundary*/</span><span class="cp"></span></div><div class='line' id='LC124'><br/></div><div class='line' id='LC125'><span class="cm">/*Different methods of Multi slice selection.*/</span></div><div class='line' id='LC126'><span class="cp">#define VEN_MSLICE_OFF&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1</span></div><div class='line' id='LC127'><span class="cp">#define VEN_MSLICE_CNT_MB&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 </span><span class="cm">/*number of MBscount per slice*/</span><span class="cp"></span></div><div class='line' id='LC128'><span class="cp">#define VEN_MSLICE_CNT_BYTE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 </span><span class="cm">/*number of bytes count per slice.*/</span><span class="cp"></span></div><div class='line' id='LC129'><span class="cp">#define VEN_MSLICE_GOB&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 </span><span class="cm">/*Multi slice by GOB for H.263 only.*/</span><span class="cp"></span></div><div class='line' id='LC130'><br/></div><div class='line' id='LC131'><span class="cm">/*Different modes for Rate Control.*/</span></div><div class='line' id='LC132'><span class="cp">#define VEN_RC_OFF&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1</span></div><div class='line' id='LC133'><span class="cp">#define VEN_RC_VBR_VFR&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2</span></div><div class='line' id='LC134'><span class="cp">#define VEN_RC_VBR_CFR&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3</span></div><div class='line' id='LC135'><span class="cp">#define VEN_RC_CBR_VFR&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4</span></div><div class='line' id='LC136'><span class="cp">#define VEN_RC_CBR_CFR&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5</span></div><div class='line' id='LC137'><br/></div><div class='line' id='LC138'><span class="cm">/*Different modes for flushing buffers*/</span></div><div class='line' id='LC139'><span class="cp">#define VEN_FLUSH_INPUT&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1</span></div><div class='line' id='LC140'><span class="cp">#define VEN_FLUSH_OUTPUT&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2</span></div><div class='line' id='LC141'><span class="cp">#define VEN_FLUSH_ALL&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3</span></div><div class='line' id='LC142'><br/></div><div class='line' id='LC143'><span class="cm">/*Different input formats for YUV data.*/</span></div><div class='line' id='LC144'><span class="cp">#define VEN_INPUTFMT_NV12&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1</span><span class="cm">/* NV12 Linear */</span><span class="cp"></span></div><div class='line' id='LC145'><span class="cp">#define VEN_INPUTFMT_NV21&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2</span><span class="cm">/* NV21 Linear */</span><span class="cp"></span></div><div class='line' id='LC146'><span class="cp">#define VEN_INPUTFMT_NV12_16M2KA&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3</span><span class="cm">/* NV12 Linear */</span><span class="cp"></span></div><div class='line' id='LC147'><span class="cp">#define VEN_INPUTFMT_NV21_16M2KA&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4</span></div><div class='line' id='LC148'><br/></div><div class='line' id='LC149'><br/></div><div class='line' id='LC150'><span class="cm">/*Different allowed rotation modes.*/</span></div><div class='line' id='LC151'><span class="cp">#define VEN_ROTATION_0&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1</span><span class="cm">/* 0 degrees */</span><span class="cp"></span></div><div class='line' id='LC152'><span class="cp">#define VEN_ROTATION_90&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2</span><span class="cm">/* 90 degrees */</span><span class="cp"></span></div><div class='line' id='LC153'><span class="cp">#define VEN_ROTATION_180&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3</span><span class="cm">/* 180 degrees */</span><span class="cp"></span></div><div class='line' id='LC154'><span class="cp">#define VEN_ROTATION_270&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4</span><span class="cm">/* 270 degrees */</span><span class="cp"></span></div><div class='line' id='LC155'><br/></div><div class='line' id='LC156'><span class="cm">/*IOCTL timeout values*/</span></div><div class='line' id='LC157'><span class="cp">#define VEN_TIMEOUT_INFINITE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0xffffffff</span></div><div class='line' id='LC158'><br/></div><div class='line' id='LC159'><span class="cm">/*Different allowed intra refresh modes.*/</span></div><div class='line' id='LC160'><span class="cp">#define VEN_IR_OFF&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1</span></div><div class='line' id='LC161'><span class="cp">#define VEN_IR_CYCLIC&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2</span></div><div class='line' id='LC162'><span class="cp">#define VEN_IR_RANDOM&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3</span></div><div class='line' id='LC163'><br/></div><div class='line' id='LC164'><span class="cm">/*IOCTL BASE CODES Not to be used directly by the client.*/</span></div><div class='line' id='LC165'><span class="cm">/* Base value for ioctls that are not related to encoder configuration.*/</span></div><div class='line' id='LC166'><span class="cp">#define VEN_IOCTLBASE_NENC&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x800</span></div><div class='line' id='LC167'><span class="cm">/* Base value for encoder configuration ioctls*/</span></div><div class='line' id='LC168'><span class="cp">#define VEN_IOCTLBASE_ENC&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0x850</span></div><div class='line' id='LC169'><br/></div><div class='line' id='LC170'><span class="k">struct</span> <span class="n">venc_ioctl_msg</span><span class="p">{</span></div><div class='line' id='LC171'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">__user</span> <span class="o">*</span><span class="n">in</span><span class="p">;</span></div><div class='line' id='LC172'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">__user</span> <span class="o">*</span><span class="n">out</span><span class="p">;</span></div><div class='line' id='LC173'><span class="p">};</span></div><div class='line' id='LC174'><br/></div><div class='line' id='LC175'><span class="cm">/*NON ENCODER CONFIGURATION IOCTLs*/</span></div><div class='line' id='LC176'><br/></div><div class='line' id='LC177'><span class="cm">/*IOCTL params:SET: InputData - unsigned long, OutputData - NULL*/</span></div><div class='line' id='LC178'><span class="cp">#define VEN_IOCTL_SET_INTF_VERSION \</span></div><div class='line' id='LC179'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 0, struct venc_ioctl_msg)</span></div><div class='line' id='LC180'><br/></div><div class='line' id='LC181'><span class="cm">/*IOCTL params:CMD: InputData - venc_timeout, OutputData - venc_msg*/</span></div><div class='line' id='LC182'><span class="cp">#define VEN_IOCTL_CMD_READ_NEXT_MSG \</span></div><div class='line' id='LC183'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOWR(VEN_IOCTLBASE_NENC, 1, struct venc_ioctl_msg)</span></div><div class='line' id='LC184'><br/></div><div class='line' id='LC185'><span class="cm">/*IOCTL params:CMD: InputData - NULL, OutputData - NULL*/</span></div><div class='line' id='LC186'><span class="cp">#define VEN_IOCTL_CMD_STOP_READ_MSG&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IO(VEN_IOCTLBASE_NENC, 2)</span></div><div class='line' id='LC187'><br/></div><div class='line' id='LC188'><span class="cm">/*IOCTL params:SET: InputData - venc_allocatorproperty, OutputData - NULL</span></div><div class='line' id='LC189'><span class="cm"> GET: InputData - NULL, OutputData - venc_allocatorproperty*/</span></div><div class='line' id='LC190'><span class="cp">#define VEN_IOCTL_SET_INPUT_BUFFER_REQ \</span></div><div class='line' id='LC191'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 3, struct venc_ioctl_msg)</span></div><div class='line' id='LC192'><span class="cp">#define VEN_IOCTL_GET_INPUT_BUFFER_REQ \</span></div><div class='line' id='LC193'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_NENC, 4, struct venc_ioctl_msg)</span></div><div class='line' id='LC194'><br/></div><div class='line' id='LC195'><span class="cm">/*IOCTL params:CMD: InputData - venc_bufferpayload, OutputData - NULL*/</span></div><div class='line' id='LC196'><span class="cp">#define VEN_IOCTL_CMD_ALLOC_INPUT_BUFFER \</span></div><div class='line' id='LC197'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 5, struct venc_ioctl_msg)</span></div><div class='line' id='LC198'><br/></div><div class='line' id='LC199'><span class="cm">/*IOCTL params:CMD: InputData - venc_bufferpayload, OutputData - NULL*/</span></div><div class='line' id='LC200'><span class="cp">#define VEN_IOCTL_SET_INPUT_BUFFER \</span></div><div class='line' id='LC201'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 6, struct venc_ioctl_msg)</span></div><div class='line' id='LC202'><br/></div><div class='line' id='LC203'><span class="cm">/*IOCTL params: CMD: InputData - venc_bufferpayload, OutputData - NULL*/</span></div><div class='line' id='LC204'><span class="cp">#define VEN_IOCTL_CMD_FREE_INPUT_BUFFER \</span></div><div class='line' id='LC205'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 7, struct venc_ioctl_msg)</span></div><div class='line' id='LC206'><br/></div><div class='line' id='LC207'><span class="cm">/*IOCTL params:SET: InputData - venc_allocatorproperty, OutputData - NULL</span></div><div class='line' id='LC208'><span class="cm"> GET: InputData - NULL, OutputData - venc_allocatorproperty*/</span></div><div class='line' id='LC209'><span class="cp">#define VEN_IOCTL_SET_OUTPUT_BUFFER_REQ \</span></div><div class='line' id='LC210'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 8, struct venc_ioctl_msg)</span></div><div class='line' id='LC211'><span class="cp">#define VEN_IOCTL_GET_OUTPUT_BUFFER_REQ \</span></div><div class='line' id='LC212'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_NENC, 9, struct venc_ioctl_msg)</span></div><div class='line' id='LC213'><br/></div><div class='line' id='LC214'><span class="cm">/*IOCTL params:CMD: InputData - venc_bufferpayload, OutputData - NULL*/</span></div><div class='line' id='LC215'><span class="cp">#define VEN_IOCTL_CMD_ALLOC_OUTPUT_BUFFER \</span></div><div class='line' id='LC216'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 10, struct venc_ioctl_msg)</span></div><div class='line' id='LC217'><br/></div><div class='line' id='LC218'><br/></div><div class='line' id='LC219'><span class="cm">/*IOCTL params:CMD: InputData - venc_bufferpayload, OutputData - NULL*/</span></div><div class='line' id='LC220'><span class="cp">#define VEN_IOCTL_SET_OUTPUT_BUFFER \</span></div><div class='line' id='LC221'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 11, struct venc_ioctl_msg)</span></div><div class='line' id='LC222'><br/></div><div class='line' id='LC223'><span class="cm">/*IOCTL params:CMD: InputData - venc_bufferpayload, OutputData - NULL.*/</span></div><div class='line' id='LC224'><span class="cp">#define VEN_IOCTL_CMD_FREE_OUTPUT_BUFFER \</span></div><div class='line' id='LC225'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 12, struct venc_ioctl_msg)</span></div><div class='line' id='LC226'><br/></div><div class='line' id='LC227'><br/></div><div class='line' id='LC228'><span class="cm">/* Asynchronous respone message code:* VEN_MSG_START*/</span></div><div class='line' id='LC229'><span class="cp">#define VEN_IOCTL_CMD_START&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IO(VEN_IOCTLBASE_NENC, 13)</span></div><div class='line' id='LC230'><br/></div><div class='line' id='LC231'><br/></div><div class='line' id='LC232'><span class="cm">/*IOCTL params:CMD: InputData - venc_buffer, OutputData - NULL</span></div><div class='line' id='LC233'><span class="cm"> Asynchronous respone message code:VEN_MSG_INPUT_BUFFER_DONE*/</span></div><div class='line' id='LC234'><span class="cp">#define VEN_IOCTL_CMD_ENCODE_FRAME \</span></div><div class='line' id='LC235'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 14, struct venc_ioctl_msg)</span></div><div class='line' id='LC236'><br/></div><div class='line' id='LC237'><br/></div><div class='line' id='LC238'><span class="cm">/*IOCTL params:CMD: InputData - venc_buffer, OutputData - NULL</span></div><div class='line' id='LC239'><span class="cm"> Asynchronous response message code:VEN_MSG_OUTPUT_BUFFER_DONE*/</span></div><div class='line' id='LC240'><span class="cp">#define VEN_IOCTL_CMD_FILL_OUTPUT_BUFFER \</span></div><div class='line' id='LC241'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 15, struct venc_ioctl_msg)</span></div><div class='line' id='LC242'><br/></div><div class='line' id='LC243'><span class="cm">/*IOCTL params:CMD: InputData - venc_bufferflush, OutputData - NULL</span></div><div class='line' id='LC244'><span class="cm"> * Asynchronous response message code:VEN_MSG_INPUT_BUFFER_DONE*/</span></div><div class='line' id='LC245'><span class="cp">#define VEN_IOCTL_CMD_FLUSH \</span></div><div class='line' id='LC246'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 16, struct venc_ioctl_msg)</span></div><div class='line' id='LC247'><br/></div><div class='line' id='LC248'><br/></div><div class='line' id='LC249'><span class="cm">/*Asynchronous respone message code:VEN_MSG_PAUSE*/</span></div><div class='line' id='LC250'><span class="cp">#define VEN_IOCTL_CMD_PAUSE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IO(VEN_IOCTLBASE_NENC, 17)</span></div><div class='line' id='LC251'><br/></div><div class='line' id='LC252'><span class="cm">/*Asynchronous respone message code:VEN_MSG_RESUME*/</span></div><div class='line' id='LC253'><span class="cp">#define VEN_IOCTL_CMD_RESUME _IO(VEN_IOCTLBASE_NENC, 18)</span></div><div class='line' id='LC254'><br/></div><div class='line' id='LC255'><span class="cm">/* Asynchronous respone message code:VEN_MSG_STOP*/</span></div><div class='line' id='LC256'><span class="cp">#define VEN_IOCTL_CMD_STOP _IO(VEN_IOCTLBASE_NENC, 19)</span></div><div class='line' id='LC257'><br/></div><div class='line' id='LC258'><span class="cp">#define VEN_IOCTL_SET_RECON_BUFFER \</span></div><div class='line' id='LC259'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 20, struct venc_ioctl_msg)</span></div><div class='line' id='LC260'><br/></div><div class='line' id='LC261'><span class="cp">#define VEN_IOCTL_FREE_RECON_BUFFER \</span></div><div class='line' id='LC262'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 21, struct venc_ioctl_msg)</span></div><div class='line' id='LC263'><br/></div><div class='line' id='LC264'><span class="cp">#define VEN_IOCTL_GET_RECON_BUFFER_SIZE \</span></div><div class='line' id='LC265'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_NENC, 22, struct venc_ioctl_msg)</span></div><div class='line' id='LC266'><br/></div><div class='line' id='LC267'><br/></div><div class='line' id='LC268'><br/></div><div class='line' id='LC269'><span class="cm">/*ENCODER PROPERTY CONFIGURATION &amp; CAPABILITY IOCTLs*/</span></div><div class='line' id='LC270'><br/></div><div class='line' id='LC271'><span class="cm">/*IOCTL params:SET: InputData - venc_basecfg, OutputData - NULL</span></div><div class='line' id='LC272'><span class="cm"> GET: InputData - NULL, OutputData - venc_basecfg*/</span></div><div class='line' id='LC273'><span class="cp">#define VEN_IOCTL_SET_BASE_CFG \</span></div><div class='line' id='LC274'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 1, struct venc_ioctl_msg)</span></div><div class='line' id='LC275'><span class="cp">#define VEN_IOCTL_GET_BASE_CFG \</span></div><div class='line' id='LC276'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 2, struct venc_ioctl_msg)</span></div><div class='line' id='LC277'><br/></div><div class='line' id='LC278'><span class="cm">/*IOCTL params:SET: InputData - venc_switch, OutputData - NULL</span></div><div class='line' id='LC279'><span class="cm">  GET: InputData - NULL, OutputData - venc_switch*/</span></div><div class='line' id='LC280'><span class="cp">#define VEN_IOCTL_SET_LIVE_MODE \</span></div><div class='line' id='LC281'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 3, struct venc_ioctl_msg)</span></div><div class='line' id='LC282'><span class="cp">#define VEN_IOCTL_GET_LIVE_MODE \</span></div><div class='line' id='LC283'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 4, struct venc_ioctl_msg)</span></div><div class='line' id='LC284'><br/></div><div class='line' id='LC285'><br/></div><div class='line' id='LC286'><span class="cm">/*IOCTL params:SET: InputData - venc_profile, OutputData - NULL</span></div><div class='line' id='LC287'><span class="cm">  GET: InputData - NULL, OutputData - venc_profile*/</span></div><div class='line' id='LC288'><span class="cp">#define VEN_IOCTL_SET_CODEC_PROFILE \</span></div><div class='line' id='LC289'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 5, struct venc_ioctl_msg)</span></div><div class='line' id='LC290'><span class="cp">#define VEN_IOCTL_GET_CODEC_PROFILE \</span></div><div class='line' id='LC291'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 6, struct venc_ioctl_msg)</span></div><div class='line' id='LC292'><br/></div><div class='line' id='LC293'><br/></div><div class='line' id='LC294'><span class="cm">/*IOCTL params:SET: InputData - ven_profilelevel, OutputData - NULL</span></div><div class='line' id='LC295'><span class="cm">  GET: InputData - NULL, OutputData - ven_profilelevel*/</span></div><div class='line' id='LC296'><span class="cp">#define VEN_IOCTL_SET_PROFILE_LEVEL \</span></div><div class='line' id='LC297'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 7, struct venc_ioctl_msg)</span></div><div class='line' id='LC298'><br/></div><div class='line' id='LC299'><span class="cp">#define VEN_IOCTL_GET_PROFILE_LEVEL \</span></div><div class='line' id='LC300'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 8, struct venc_ioctl_msg)</span></div><div class='line' id='LC301'><br/></div><div class='line' id='LC302'><span class="cm">/*IOCTL params:SET: InputData - venc_switch, OutputData - NULL</span></div><div class='line' id='LC303'><span class="cm"> GET: InputData - NULL, OutputData - venc_switch*/</span></div><div class='line' id='LC304'><span class="cp">#define VEN_IOCTL_SET_SHORT_HDR \</span></div><div class='line' id='LC305'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 9, struct venc_ioctl_msg)</span></div><div class='line' id='LC306'><span class="cp">#define VEN_IOCTL_GET_SHORT_HDR \</span></div><div class='line' id='LC307'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 10, struct venc_ioctl_msg)</span></div><div class='line' id='LC308'><br/></div><div class='line' id='LC309'><br/></div><div class='line' id='LC310'><span class="cm">/*IOCTL params: SET: InputData - venc_sessionqp, OutputData - NULL</span></div><div class='line' id='LC311'><span class="cm">  GET: InputData - NULL, OutputData - venc_sessionqp*/</span></div><div class='line' id='LC312'><span class="cp">#define VEN_IOCTL_SET_SESSION_QP \</span></div><div class='line' id='LC313'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 11, struct venc_ioctl_msg)</span></div><div class='line' id='LC314'><span class="cp">#define VEN_IOCTL_GET_SESSION_QP \</span></div><div class='line' id='LC315'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 12, struct venc_ioctl_msg)</span></div><div class='line' id='LC316'><br/></div><div class='line' id='LC317'><br/></div><div class='line' id='LC318'><span class="cm">/*IOCTL params:SET: InputData - venc_intraperiod, OutputData - NULL</span></div><div class='line' id='LC319'><span class="cm">  GET: InputData - NULL, OutputData - venc_intraperiod*/</span></div><div class='line' id='LC320'><span class="cp">#define VEN_IOCTL_SET_INTRA_PERIOD \</span></div><div class='line' id='LC321'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 13, struct venc_ioctl_msg)</span></div><div class='line' id='LC322'><span class="cp">#define VEN_IOCTL_GET_INTRA_PERIOD \</span></div><div class='line' id='LC323'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 14, struct venc_ioctl_msg)</span></div><div class='line' id='LC324'><br/></div><div class='line' id='LC325'><br/></div><div class='line' id='LC326'><span class="cm">/* Request an Iframe*/</span></div><div class='line' id='LC327'><span class="cp">#define VEN_IOCTL_CMD_REQUEST_IFRAME _IO(VEN_IOCTLBASE_ENC, 15)</span></div><div class='line' id='LC328'><br/></div><div class='line' id='LC329'><span class="cm">/*IOCTL params:GET: InputData - NULL, OutputData - venc_capability*/</span></div><div class='line' id='LC330'><span class="cp">#define VEN_IOCTL_GET_CAPABILITY \</span></div><div class='line' id='LC331'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 16, struct venc_ioctl_msg)</span></div><div class='line' id='LC332'><br/></div><div class='line' id='LC333'><br/></div><div class='line' id='LC334'><span class="cm">/*IOCTL params:GET: InputData - NULL, OutputData - venc_seqheader*/</span></div><div class='line' id='LC335'><span class="cp">#define VEN_IOCTL_GET_SEQUENCE_HDR \</span></div><div class='line' id='LC336'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 17, struct venc_ioctl_msg)</span></div><div class='line' id='LC337'><br/></div><div class='line' id='LC338'><span class="cm">/*IOCTL params:SET: InputData - venc_entropycfg, OutputData - NULL</span></div><div class='line' id='LC339'><span class="cm"> GET: InputData - NULL, OutputData - venc_entropycfg*/</span></div><div class='line' id='LC340'><span class="cp">#define VEN_IOCTL_SET_ENTROPY_CFG \</span></div><div class='line' id='LC341'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 18, struct venc_ioctl_msg)</span></div><div class='line' id='LC342'><span class="cp">#define VEN_IOCTL_GET_ENTROPY_CFG \</span></div><div class='line' id='LC343'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 19, struct venc_ioctl_msg)</span></div><div class='line' id='LC344'><br/></div><div class='line' id='LC345'><span class="cm">/*IOCTL params:SET: InputData - venc_dbcfg, OutputData - NULL</span></div><div class='line' id='LC346'><span class="cm"> GET: InputData - NULL, OutputData - venc_dbcfg*/</span></div><div class='line' id='LC347'><span class="cp">#define VEN_IOCTL_SET_DEBLOCKING_CFG \</span></div><div class='line' id='LC348'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 20, struct venc_ioctl_msg)</span></div><div class='line' id='LC349'><span class="cp">#define VEN_IOCTL_GET_DEBLOCKING_CFG \</span></div><div class='line' id='LC350'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 21, struct venc_ioctl_msg)</span></div><div class='line' id='LC351'><br/></div><div class='line' id='LC352'><br/></div><div class='line' id='LC353'><span class="cm">/*IOCTL params:SET: InputData - venc_intrarefresh, OutputData - NULL</span></div><div class='line' id='LC354'><span class="cm">  GET: InputData - NULL, OutputData - venc_intrarefresh*/</span></div><div class='line' id='LC355'><span class="cp">#define VEN_IOCTL_SET_INTRA_REFRESH \</span></div><div class='line' id='LC356'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 22, struct venc_ioctl_msg)</span></div><div class='line' id='LC357'><span class="cp">#define VEN_IOCTL_GET_INTRA_REFRESH \</span></div><div class='line' id='LC358'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 23, struct venc_ioctl_msg)</span></div><div class='line' id='LC359'><br/></div><div class='line' id='LC360'><br/></div><div class='line' id='LC361'><span class="cm">/*IOCTL params:SET: InputData - venc_multiclicecfg, OutputData - NULL</span></div><div class='line' id='LC362'><span class="cm">  GET: InputData - NULL, OutputData - venc_multiclicecfg*/</span></div><div class='line' id='LC363'><span class="cp">#define VEN_IOCTL_SET_MULTI_SLICE_CFG \</span></div><div class='line' id='LC364'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 24, struct venc_ioctl_msg)</span></div><div class='line' id='LC365'><span class="cp">#define VEN_IOCTL_GET_MULTI_SLICE_CFG \</span></div><div class='line' id='LC366'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 25, struct venc_ioctl_msg)</span></div><div class='line' id='LC367'><br/></div><div class='line' id='LC368'><span class="cm">/*IOCTL params:SET: InputData - venc_ratectrlcfg, OutputData - NULL</span></div><div class='line' id='LC369'><span class="cm"> GET: InputData - NULL, OutputData - venc_ratectrlcfg*/</span></div><div class='line' id='LC370'><span class="cp">#define VEN_IOCTL_SET_RATE_CTRL_CFG \</span></div><div class='line' id='LC371'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 26, struct venc_ioctl_msg)</span></div><div class='line' id='LC372'><span class="cp">#define VEN_IOCTL_GET_RATE_CTRL_CFG \</span></div><div class='line' id='LC373'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 27, struct venc_ioctl_msg)</span></div><div class='line' id='LC374'><br/></div><div class='line' id='LC375'><br/></div><div class='line' id='LC376'><span class="cm">/*IOCTL params:SET: InputData - venc_voptimingcfg, OutputData - NULL</span></div><div class='line' id='LC377'><span class="cm">  GET: InputData - NULL, OutputData - venc_voptimingcfg*/</span></div><div class='line' id='LC378'><span class="cp">#define VEN_IOCTL_SET_VOP_TIMING_CFG \</span></div><div class='line' id='LC379'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 28, struct venc_ioctl_msg)</span></div><div class='line' id='LC380'><span class="cp">#define VEN_IOCTL_GET_VOP_TIMING_CFG \</span></div><div class='line' id='LC381'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 29, struct venc_ioctl_msg)</span></div><div class='line' id='LC382'><br/></div><div class='line' id='LC383'><br/></div><div class='line' id='LC384'><span class="cm">/*IOCTL params:SET: InputData - venc_framerate, OutputData - NULL</span></div><div class='line' id='LC385'><span class="cm"> GET: InputData - NULL, OutputData - venc_framerate*/</span></div><div class='line' id='LC386'><span class="cp">#define VEN_IOCTL_SET_FRAME_RATE \</span></div><div class='line' id='LC387'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 30, struct venc_ioctl_msg)</span></div><div class='line' id='LC388'><span class="cp">#define VEN_IOCTL_GET_FRAME_RATE \</span></div><div class='line' id='LC389'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 31, struct venc_ioctl_msg)</span></div><div class='line' id='LC390'><br/></div><div class='line' id='LC391'><br/></div><div class='line' id='LC392'><span class="cm">/*IOCTL params:SET: InputData - venc_targetbitrate, OutputData - NULL</span></div><div class='line' id='LC393'><span class="cm"> GET: InputData - NULL, OutputData - venc_targetbitrate*/</span></div><div class='line' id='LC394'><span class="cp">#define VEN_IOCTL_SET_TARGET_BITRATE \</span></div><div class='line' id='LC395'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 32, struct venc_ioctl_msg)</span></div><div class='line' id='LC396'><span class="cp">#define VEN_IOCTL_GET_TARGET_BITRATE \</span></div><div class='line' id='LC397'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 33, struct venc_ioctl_msg)</span></div><div class='line' id='LC398'><br/></div><div class='line' id='LC399'><br/></div><div class='line' id='LC400'><span class="cm">/*IOCTL params:SET: InputData - venc_rotation, OutputData - NULL</span></div><div class='line' id='LC401'><span class="cm">  GET: InputData - NULL, OutputData - venc_rotation*/</span></div><div class='line' id='LC402'><span class="cp">#define VEN_IOCTL_SET_ROTATION \</span></div><div class='line' id='LC403'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 34, struct venc_ioctl_msg)</span></div><div class='line' id='LC404'><span class="cp">#define VEN_IOCTL_GET_ROTATION \</span></div><div class='line' id='LC405'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 35, struct venc_ioctl_msg)</span></div><div class='line' id='LC406'><br/></div><div class='line' id='LC407'><br/></div><div class='line' id='LC408'><span class="cm">/*IOCTL params:SET: InputData - venc_headerextension, OutputData - NULL</span></div><div class='line' id='LC409'><span class="cm"> GET: InputData - NULL, OutputData - venc_headerextension*/</span></div><div class='line' id='LC410'><span class="cp">#define VEN_IOCTL_SET_HEC \</span></div><div class='line' id='LC411'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 36, struct venc_ioctl_msg)</span></div><div class='line' id='LC412'><span class="cp">#define VEN_IOCTL_GET_HEC \</span></div><div class='line' id='LC413'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 37, struct venc_ioctl_msg)</span></div><div class='line' id='LC414'><br/></div><div class='line' id='LC415'><span class="cm">/*IOCTL params:SET: InputData - venc_switch, OutputData - NULL</span></div><div class='line' id='LC416'><span class="cm"> GET: InputData - NULL, OutputData - venc_switch*/</span></div><div class='line' id='LC417'><span class="cp">#define VEN_IOCTL_SET_DATA_PARTITION \</span></div><div class='line' id='LC418'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 38, struct venc_ioctl_msg)</span></div><div class='line' id='LC419'><span class="cp">#define VEN_IOCTL_GET_DATA_PARTITION \</span></div><div class='line' id='LC420'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 39, struct venc_ioctl_msg)</span></div><div class='line' id='LC421'><br/></div><div class='line' id='LC422'><span class="cm">/*IOCTL params:SET: InputData - venc_switch, OutputData - NULL</span></div><div class='line' id='LC423'><span class="cm"> GET: InputData - NULL, OutputData - venc_switch*/</span></div><div class='line' id='LC424'><span class="cp">#define VEN_IOCTL_SET_RVLC \</span></div><div class='line' id='LC425'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 40, struct venc_ioctl_msg)</span></div><div class='line' id='LC426'><span class="cp">#define VEN_IOCTL_GET_RVLC \</span></div><div class='line' id='LC427'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 41, struct venc_ioctl_msg)</span></div><div class='line' id='LC428'><br/></div><div class='line' id='LC429'><br/></div><div class='line' id='LC430'><span class="cm">/*IOCTL params:SET: InputData - venc_switch, OutputData - NULL</span></div><div class='line' id='LC431'><span class="cm"> GET: InputData - NULL, OutputData - venc_switch*/</span></div><div class='line' id='LC432'><span class="cp">#define VEN_IOCTL_SET_AC_PREDICTION \</span></div><div class='line' id='LC433'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 42, struct venc_ioctl_msg)</span></div><div class='line' id='LC434'><span class="cp">#define VEN_IOCTL_GET_AC_PREDICTION \</span></div><div class='line' id='LC435'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 43, struct venc_ioctl_msg)</span></div><div class='line' id='LC436'><br/></div><div class='line' id='LC437'><br/></div><div class='line' id='LC438'><span class="cm">/*IOCTL params:SET: InputData - venc_qprange, OutputData - NULL</span></div><div class='line' id='LC439'><span class="cm"> GET: InputData - NULL, OutputData - venc_qprange*/</span></div><div class='line' id='LC440'><span class="cp">#define VEN_IOCTL_SET_QP_RANGE \</span></div><div class='line' id='LC441'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 44, struct venc_ioctl_msg)</span></div><div class='line' id='LC442'><span class="cp">#define VEN_IOCTL_GET_QP_RANGE \</span></div><div class='line' id='LC443'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 45, struct venc_ioctl_msg)</span></div><div class='line' id='LC444'><br/></div><div class='line' id='LC445'><span class="cp">#define VEN_IOCTL_GET_NUMBER_INSTANCES \</span></div><div class='line' id='LC446'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 46, struct venc_ioctl_msg)</span></div><div class='line' id='LC447'><br/></div><div class='line' id='LC448'><span class="cp">#define VEN_IOCTL_SET_METABUFFER_MODE \</span></div><div class='line' id='LC449'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 47, struct venc_ioctl_msg)</span></div><div class='line' id='LC450'><br/></div><div class='line' id='LC451'><br/></div><div class='line' id='LC452'><span class="cm">/*IOCTL params:SET: InputData - unsigned int, OutputData - NULL.*/</span></div><div class='line' id='LC453'><span class="cp">#define VEN_IOCTL_SET_EXTRADATA \</span></div><div class='line' id='LC454'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 48, struct venc_ioctl_msg)</span></div><div class='line' id='LC455'><span class="cm">/*IOCTL params:GET: InputData - NULL, OutputData - unsigned int.*/</span></div><div class='line' id='LC456'><span class="cp">#define VEN_IOCTL_GET_EXTRADATA \</span></div><div class='line' id='LC457'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOR(VEN_IOCTLBASE_ENC, 49, struct venc_ioctl_msg)</span></div><div class='line' id='LC458'><br/></div><div class='line' id='LC459'><span class="cm">/*IOCTL params:SET: InputData - NULL, OutputData - NULL.*/</span></div><div class='line' id='LC460'><span class="cp">#define VEN_IOCTL_SET_SLICE_DELIVERY_MODE \</span></div><div class='line' id='LC461'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IO(VEN_IOCTLBASE_ENC, 50)</span></div><div class='line' id='LC462'><br/></div><div class='line' id='LC463'><span class="cm">/*IOCTL params:SET: InputData - unsigned int, OutputData - NULL*/</span></div><div class='line' id='LC464'><span class="cp">#define VEN_IOCTL_SET_SPS_PPS_FOR_IDR \</span></div><div class='line' id='LC465'><span class="cp">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_IOW(VEN_IOCTLBASE_ENC, 51, struct venc_ioctl_msg)</span></div><div class='line' id='LC466'><br/></div><div class='line' id='LC467'><span class="k">struct</span> <span class="n">venc_switch</span><span class="p">{</span></div><div class='line' id='LC468'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">char</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status</span><span class="p">;</span></div><div class='line' id='LC469'><span class="p">};</span></div><div class='line' id='LC470'><br/></div><div class='line' id='LC471'><span class="k">struct</span> <span class="n">venc_allocatorproperty</span><span class="p">{</span></div><div class='line' id='LC472'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <span class="n">mincount</span><span class="p">;</span></div><div class='line' id='LC473'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <span class="n">maxcount</span><span class="p">;</span></div><div class='line' id='LC474'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <span class="n">actualcount</span><span class="p">;</span></div><div class='line' id='LC475'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <span class="n">datasize</span><span class="p">;</span></div><div class='line' id='LC476'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <span class="n">suffixsize</span><span class="p">;</span></div><div class='line' id='LC477'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <span class="n">alignment</span><span class="p">;</span></div><div class='line' id='LC478'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <span class="n">bufpoolid</span><span class="p">;</span></div><div class='line' id='LC479'><span class="p">};</span></div><div class='line' id='LC480'><br/></div><div class='line' id='LC481'><span class="k">struct</span> <span class="n">venc_bufferpayload</span><span class="p">{</span></div><div class='line' id='LC482'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">char</span> <span class="o">*</span><span class="n">pbuffer</span><span class="p">;</span></div><div class='line' id='LC483'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">size_t</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sz</span><span class="p">;</span></div><div class='line' id='LC484'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">fd</span><span class="p">;</span></div><div class='line' id='LC485'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">offset</span><span class="p">;</span></div><div class='line' id='LC486'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">maped_size</span><span class="p">;</span></div><div class='line' id='LC487'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">filled_len</span><span class="p">;</span></div><div class='line' id='LC488'><span class="p">};</span></div><div class='line' id='LC489'><br/></div><div class='line' id='LC490'><span class="k">struct</span> <span class="n">venc_buffer</span><span class="p">{</span></div><div class='line' id='LC491'>&nbsp;<span class="kt">unsigned</span> <span class="kt">char</span> <span class="o">*</span><span class="n">ptrbuffer</span><span class="p">;</span></div><div class='line' id='LC492'>&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sz</span><span class="p">;</span></div><div class='line' id='LC493'>&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">len</span><span class="p">;</span></div><div class='line' id='LC494'>&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">offset</span><span class="p">;</span></div><div class='line' id='LC495'>&nbsp;<span class="kt">long</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">timestamp</span><span class="p">;</span></div><div class='line' id='LC496'>&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">flags</span><span class="p">;</span></div><div class='line' id='LC497'>&nbsp;<span class="kt">void</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span><span class="n">clientdata</span><span class="p">;</span></div><div class='line' id='LC498'><span class="p">};</span></div><div class='line' id='LC499'><br/></div><div class='line' id='LC500'><span class="k">struct</span> <span class="n">venc_basecfg</span><span class="p">{</span></div><div class='line' id='LC501'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">input_width</span><span class="p">;</span></div><div class='line' id='LC502'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">input_height</span><span class="p">;</span></div><div class='line' id='LC503'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">dvs_width</span><span class="p">;</span></div><div class='line' id='LC504'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">dvs_height</span><span class="p">;</span></div><div class='line' id='LC505'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">codectype</span><span class="p">;</span></div><div class='line' id='LC506'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">fps_num</span><span class="p">;</span></div><div class='line' id='LC507'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">fps_den</span><span class="p">;</span></div><div class='line' id='LC508'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">targetbitrate</span><span class="p">;</span></div><div class='line' id='LC509'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">inputformat</span><span class="p">;</span></div><div class='line' id='LC510'><span class="p">};</span></div><div class='line' id='LC511'><br/></div><div class='line' id='LC512'><span class="k">struct</span> <span class="n">venc_profile</span><span class="p">{</span></div><div class='line' id='LC513'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">profile</span><span class="p">;</span></div><div class='line' id='LC514'><span class="p">};</span></div><div class='line' id='LC515'><span class="k">struct</span> <span class="n">ven_profilelevel</span><span class="p">{</span></div><div class='line' id='LC516'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">level</span><span class="p">;</span></div><div class='line' id='LC517'><span class="p">};</span></div><div class='line' id='LC518'><br/></div><div class='line' id='LC519'><span class="k">struct</span> <span class="n">venc_sessionqp</span><span class="p">{</span></div><div class='line' id='LC520'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">iframeqp</span><span class="p">;</span></div><div class='line' id='LC521'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pframqp</span><span class="p">;</span></div><div class='line' id='LC522'><span class="p">};</span></div><div class='line' id='LC523'><br/></div><div class='line' id='LC524'><span class="k">struct</span> <span class="n">venc_qprange</span><span class="p">{</span></div><div class='line' id='LC525'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">maxqp</span><span class="p">;</span></div><div class='line' id='LC526'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">minqp</span><span class="p">;</span></div><div class='line' id='LC527'><span class="p">};</span></div><div class='line' id='LC528'><span class="k">struct</span> <span class="n">venc_intraperiod</span><span class="p">{</span></div><div class='line' id='LC529'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">num_pframes</span><span class="p">;</span></div><div class='line' id='LC530'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">num_bframes</span><span class="p">;</span></div><div class='line' id='LC531'><span class="p">};</span></div><div class='line' id='LC532'><span class="k">struct</span> <span class="n">venc_seqheader</span><span class="p">{</span></div><div class='line' id='LC533'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">char</span> <span class="o">*</span><span class="n">hdrbufptr</span><span class="p">;</span></div><div class='line' id='LC534'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">bufsize</span><span class="p">;</span></div><div class='line' id='LC535'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">hdrlen</span><span class="p">;</span></div><div class='line' id='LC536'><span class="p">};</span></div><div class='line' id='LC537'><br/></div><div class='line' id='LC538'><span class="k">struct</span> <span class="n">venc_capability</span><span class="p">{</span></div><div class='line' id='LC539'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">codec_types</span><span class="p">;</span></div><div class='line' id='LC540'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">maxframe_width</span><span class="p">;</span></div><div class='line' id='LC541'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">maxframe_height</span><span class="p">;</span></div><div class='line' id='LC542'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">maxtarget_bitrate</span><span class="p">;</span></div><div class='line' id='LC543'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">maxframe_rate</span><span class="p">;</span></div><div class='line' id='LC544'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">input_formats</span><span class="p">;</span></div><div class='line' id='LC545'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">char</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">dvs</span><span class="p">;</span></div><div class='line' id='LC546'><span class="p">};</span></div><div class='line' id='LC547'><br/></div><div class='line' id='LC548'><span class="k">struct</span> <span class="n">venc_entropycfg</span><span class="p">{</span></div><div class='line' id='LC549'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="n">longentropysel</span><span class="p">;</span></div><div class='line' id='LC550'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cabacmodel</span><span class="p">;</span></div><div class='line' id='LC551'><span class="p">};</span></div><div class='line' id='LC552'><br/></div><div class='line' id='LC553'><span class="k">struct</span> <span class="n">venc_dbcfg</span><span class="p">{</span></div><div class='line' id='LC554'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">db_mode</span><span class="p">;</span></div><div class='line' id='LC555'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">slicealpha_offset</span><span class="p">;</span></div><div class='line' id='LC556'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">slicebeta_offset</span><span class="p">;</span></div><div class='line' id='LC557'><span class="p">};</span></div><div class='line' id='LC558'><br/></div><div class='line' id='LC559'><span class="k">struct</span> <span class="n">venc_intrarefresh</span><span class="p">{</span></div><div class='line' id='LC560'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">irmode</span><span class="p">;</span></div><div class='line' id='LC561'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mbcount</span><span class="p">;</span></div><div class='line' id='LC562'><span class="p">};</span></div><div class='line' id='LC563'><br/></div><div class='line' id='LC564'><span class="k">struct</span> <span class="n">venc_multiclicecfg</span><span class="p">{</span></div><div class='line' id='LC565'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mslice_mode</span><span class="p">;</span></div><div class='line' id='LC566'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mslice_size</span><span class="p">;</span></div><div class='line' id='LC567'><span class="p">};</span></div><div class='line' id='LC568'><br/></div><div class='line' id='LC569'><span class="k">struct</span> <span class="n">venc_bufferflush</span><span class="p">{</span></div><div class='line' id='LC570'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">flush_mode</span><span class="p">;</span></div><div class='line' id='LC571'><span class="p">};</span></div><div class='line' id='LC572'><br/></div><div class='line' id='LC573'><span class="k">struct</span> <span class="n">venc_ratectrlcfg</span><span class="p">{</span></div><div class='line' id='LC574'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rcmode</span><span class="p">;</span></div><div class='line' id='LC575'><span class="p">};</span></div><div class='line' id='LC576'><br/></div><div class='line' id='LC577'><span class="k">struct</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">venc_voptimingcfg</span><span class="p">{</span></div><div class='line' id='LC578'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">voptime_resolution</span><span class="p">;</span></div><div class='line' id='LC579'><span class="p">};</span></div><div class='line' id='LC580'><span class="k">struct</span> <span class="n">venc_framerate</span><span class="p">{</span></div><div class='line' id='LC581'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">fps_denominator</span><span class="p">;</span></div><div class='line' id='LC582'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">fps_numerator</span><span class="p">;</span></div><div class='line' id='LC583'><span class="p">};</span></div><div class='line' id='LC584'><br/></div><div class='line' id='LC585'><span class="k">struct</span> <span class="n">venc_targetbitrate</span><span class="p">{</span></div><div class='line' id='LC586'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">target_bitrate</span><span class="p">;</span></div><div class='line' id='LC587'><span class="p">};</span></div><div class='line' id='LC588'><br/></div><div class='line' id='LC589'><br/></div><div class='line' id='LC590'><span class="k">struct</span> <span class="n">venc_rotation</span><span class="p">{</span></div><div class='line' id='LC591'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rotation</span><span class="p">;</span></div><div class='line' id='LC592'><span class="p">};</span></div><div class='line' id='LC593'><br/></div><div class='line' id='LC594'><span class="k">struct</span> <span class="n">venc_timeout</span><span class="p">{</span></div><div class='line' id='LC595'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">millisec</span><span class="p">;</span></div><div class='line' id='LC596'><span class="p">};</span></div><div class='line' id='LC597'><br/></div><div class='line' id='LC598'><span class="k">struct</span> <span class="n">venc_headerextension</span><span class="p">{</span></div><div class='line' id='LC599'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">header_extension</span><span class="p">;</span></div><div class='line' id='LC600'><span class="p">};</span></div><div class='line' id='LC601'><br/></div><div class='line' id='LC602'><span class="k">struct</span> <span class="n">venc_msg</span><span class="p">{</span></div><div class='line' id='LC603'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">statuscode</span><span class="p">;</span></div><div class='line' id='LC604'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">msgcode</span><span class="p">;</span></div><div class='line' id='LC605'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">venc_buffer</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">;</span></div><div class='line' id='LC606'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">msgdata_size</span><span class="p">;</span></div><div class='line' id='LC607'><span class="p">};</span></div><div class='line' id='LC608'><br/></div><div class='line' id='LC609'><span class="k">struct</span> <span class="n">venc_recon_addr</span><span class="p">{</span></div><div class='line' id='LC610'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">char</span> <span class="o">*</span><span class="n">pbuffer</span><span class="p">;</span></div><div class='line' id='LC611'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">buffer_size</span><span class="p">;</span></div><div class='line' id='LC612'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">pmem_fd</span><span class="p">;</span></div><div class='line' id='LC613'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">offset</span><span class="p">;</span></div><div class='line' id='LC614'><span class="p">};</span></div><div class='line' id='LC615'><br/></div><div class='line' id='LC616'><span class="k">struct</span> <span class="n">venc_recon_buff_size</span><span class="p">{</span></div><div class='line' id='LC617'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">width</span><span class="p">;</span></div><div class='line' id='LC618'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">height</span><span class="p">;</span></div><div class='line' id='LC619'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">size</span><span class="p">;</span></div><div class='line' id='LC620'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">alignment</span><span class="p">;</span></div><div class='line' id='LC621'><span class="p">};</span></div><div class='line' id='LC622'><br/></div><div class='line' id='LC623'><span class="cp">#endif </span><span class="cm">/* _MSM_VIDC_ENC_H_ */</span><span class="cp"></span></div></pre></div>
            </td>
          </tr>
        </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2014 <span title="0.11487s from github-fe120-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/CyanogenMod/android_kernel_htc_m7/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-remove-close close ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>

  </body>
</html>

