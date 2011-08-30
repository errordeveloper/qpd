TEMPLATE_REPO = git://github.com/errordeveloper/qpd.git
TEMPLATE_BRANCH = qpd-new-project-template
GET_TEMPLATE = git clone $(TEMPLATE_REPO) -b $(TEMPLATE_BRANCH)

%:
	$(GET_TEMPLATE) $@ && cd $@
