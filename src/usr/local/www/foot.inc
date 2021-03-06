<?php
/*
 * foot.inc
 *
 * part of pfSense (https://www.pfsense.org)
 * Copyright (c) 2004-2016 Rubicon Communications, LLC (Netgate)
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * We put jquery in the footer; it is the preferred position for speed
 * and helps developers to use events[] instead of executing scripts directly.
 */
?>
	</div>
	<footer class="footer">
		<div class="container">
			<p class="text-muted">
				<a id="tpl" style="display: none;" href="#" title="<?=gettext('Top of page')?>"><i class="fa fa-caret-square-o-up pull-left"></i></a>
				<a target="_blank" href="<?=$g['product_website_footer']?>"><?=$g['product_name']?></a> is &copy;
				<?=$g['product_copyright_years']?> by <a href="<?=$g['product_copyright_url']?>" class="tblnk"><?=$g['product_copyright']?></a>. All Rights Reserved.
				[<a href="/license.php" class="tblnk">view license</a>]
				<a id="tpr" style="display: none;" href="#" title="<?=gettext('Top of page')?>"><i class="fa fa-caret-square-o-up pull-right"></i></a>
			</p>
		</div>
	</footer>

	<script src="/vendor/jquery/jquery-1.12.0.min.js"></script>
	<script src="/vendor/jquery/jquery-ui-1.11.4.min.js"></script>
	<script src="/vendor/bootstrap/js/bootstrap.min.js"></script>
	<script src="/js/pfSense.js"></script>
	<script src="/js/pfSenseHelpers.js"></script>
	<script src="/js/polyfills.js"></script>
	<script src="/vendor/sortable/sortable.js"></script>

	<script type="text/javascript">
	//<![CDATA[
		// Un-hide the "Top of page" icons if the page is larger than the window
		if ($(document).height() > $(window).height()) {
		    $('[id^=tp]').show();
		}
	//]]>
	</script>
</body>
</html>
