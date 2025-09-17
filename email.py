import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

# ====== STEP 1: Fill in your info ======
your_email = "dsmith74066@gmail.com"       # sender email
your_password = "wtgx hzdy bqmt ngml"       # Gmail/Outlook/Yahoo App Password
receiver_email = "smith74066@outlook.com"     # recipient email

# ====== STEP 2: Build the email ======
msg = MIMEMultipart()
msg["From"] = your_email
msg["To"] = receiver_email
msg["Subject"] = "Hello from Python!"     # subject line
body = "Hello David this is a test of your programming skills."  
msg.attach(MIMEText(body, "plain"))

# ====== STEP 3: Send the email ======
try:
    # Gmail SMTP server; change if using Outlook/Yahoo/etc.
    server = smtplib.SMTP("smtp.gmail.com", 587)
    server.starttls()  # upgrade connection to secure
    server.login(your_email, your_password)
    server.sendmail(your_email, receiver_email, msg.as_string())
    print("✅ Email sent successfully!")
    server.quit()
except Exception as e:
    print("❌ Error:", e)
