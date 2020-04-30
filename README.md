# FinanceCalculator
This is a Computer Programming 2019 Mini Project.

## Introduction
เนื่องจากการคิดคำนวณเกี่ยวกับการเงินนั้นมีความซับซ้อน และมีความยุ่งยากในการคำนวณ เช่น การคำนวณอัตราดอกเบี้ยแบบลดต้นลดดอก(Effective Rate) การคำนวณเงินอนาคต(Future Value) และอื่นๆ เราจึงเล็งเห็นถึงโปรแกรมคิดคำนวณที่จะเข้ามาช่วยในส่วนนี้ โดยประยุกต์ใช้ภาษา C ในการพัฒนาโปรแกรม เพื่อให้การคำนวณเป็นเรื่องง่าย สะดวก และนำเลขที่ได้จากการคำนวณนั้นไปประยุกต์ใช้ และวางแผนในเรื่องต่างๆในชีวิตประจำวันของผู้ใช้งาน

## Why C?
* เป็นภาษาที่มีความรวดเร็วในการทำงานสูง
* เป็นภาษาโครงสร้าง ทำให้ผู้เขียนโปรแกรม ต้องออกแบบโปรแกรมอย่างเป็นระเบียบ ทำให้วิเคราะห์ และปรับปรุงแก้ไขโปรแกรมได้ง่าย
* เป็นภาษาที่เหมาะกับทรัพยากรในระดับคอนโทรลเลอร์

## What we expect?
* ได้พัฒนาโปรแกรมที่ตอบโจทย์ และสามารถนำไปประยุกต์ต่อได้ในอนาคต
* ได้ฝึกฝนทักษะการเขียนโปรแกรมด้วยภาษา C
* ได้ศึกษาและเรียนรู้ศาสตร์เกี่ยวกับการเงิน
* ได้เรียนรู้และฝึกฝนทักษะการทำงานเป็นทีม
* ได้ศึกษาการใช้ tool ต่างๆ ในการทำโปรเจค เช่น git, photoshop ในการทำโปสเตอร์โปรเจค, การตัดต่อวิดีโอโปรเจค

***
## About this program
โปรแกรมคำนวณการเงินนี้ จะช่วยผู้ใช้คิดคำนวณการเงินประเภทต่างๆ โดยมีฟังก์ชั่นภายในโปรแกรมดังนี้

#### Calculate Future Value : ช่วยให้ผู้ใช้คำนวณเงินในอนาคต โดยผู้ใช้จะต้องกรอก
* ช่วงเวลา(period)
* อัตราดอกเบี้ยต่อช่วงเวลา(interest rate per period)
* เงินงวด(perodic payment)
* ช่วงเวลาที่ลงทุน(PMT made at)

#### Calculate Perodic Payment : ช่วยให้ผู้ใช้คำนวณเงินงวด โดยผู้ใช้จะต้องกรอก
* ช่วงเวลา(period)
* อัตราดอกเบี้ยต่อช่วงเวลา(interest rate per period)
* เงินในอนาคต(Future Value)
* ช่วงเวลาที่ลงทุน(PMT made at)

#### Calculate Interest Rate Per Period : ช่วยให้ผู้ใช้คำนวณอัตราดอกเบี้ยต่อช่วงเวลา โดยผู้ใช้จะต้องกรอก
* อัตราดอกเบี้ยที่คิดมากกว่า 1 ครั้ง ในหนึ่งช่วงเวลา(nominal interest rate)
* จำนวนครั้งที่คิดดอกเบี้ย(number of compounding period)
> เช่น ดอกเบี้ย 6% ต่อปี ปีละ 2 ครั้ง จะได้ อัตราดอกเบี้ยที่คิดมากกว่า 1 ครัั้ง คือ 6%, จำนวนครั้งที่คิดดอกเบี้ย คือ 2 ครั้ง เป็นต้น

#### Find Number of Periods : ช่วยให้ผู้ใช้หาช่วงเวลา โดยผูู้ใช้จะต้องกรอก
* เงินในอนาคต(Future Value)
* อัตราดอกเบี้ยต่อช่วงเวลา(interest rate per period)
* เงินงวด(perodic payment)
* ช่วงเวลาที่ลงทุน(PMT made at)

***
## Members
ID | Name | Last Name
--- | --- | ---
62070018 | กุลสตรี | ดุลย์
62070046 | ชัยวัฒน์ | รุ่งเรือง
62070109 | บุญทักษิณ | สัมฤทธิ์
