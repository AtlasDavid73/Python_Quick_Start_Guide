import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

# ===== User Input =====
your_email = input("Enter your email (Gmail/Outlook/Yahoo): ")
your_password = input("Enter your App Password: ")
receiver_email = input("Enter recipient's email: ")
subject = input("Enter email subject: ")
body = input("Enter your message: ")

# ===== Build Email =====
msg = MIMEMultipart()
msg["From"] = your_email
msg["To"] = receiver_email
msg["Subject"] = subject
msg.attach(MIMEText(body, "plain"))

# ===== Send Email =====
try:
    server = smtplib.SMTP("smtp.gmail.com", 587)  # Change if not Gmail
    server.starttls()
    server.login(your_email, your_password)
    server.sendmail(your_email, receiver_email, msg.as_string())
    print("✅ Email sent successfully!")
    server.quit()
except Exception as e:
    print("❌ Error:", e)
