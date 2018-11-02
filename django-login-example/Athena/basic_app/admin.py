from django.contrib import admin
from basic_app.models import UserProfileInfo, User,mail
from django.contrib import admin


# Register your models here.
admin.site.register(UserProfileInfo)
admin.site.register(mail)




class EmailTemplateAdmin(admin.ModelAdmin):
    list_display = ['template_key', 'subject', 'from_email', 'to_email']
    save_as = True
