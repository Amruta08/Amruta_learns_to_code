# import scrapy
# from scrapy.crawler import CrawlerProcess
# import pandas as pd
# import os


# class BlogspiderSpider(scrapy.Spider):
#     name = "blogspider"                                                                                                                                                                              
#     allowed_domains = ["www.geeksforgeeks.org", "howtogeek.com", "finxter.com", "en.wikipedia.org"]
#     #start_urls = ["https://www.geeksforgeeks.org/axiomatic-approach-to-probability/"]
#     start_urls = ["https://blog.finxter.com/how-to-run-a-scrapy-spider-from-a-python-script/"]
#     #start_urls = ["https://www.howtogeek.com/838004/what-is-moores-law/"]
#     #start_urls = ["https://en.wikipedia.org/wiki/Bubble_sort"]
#     def parse(self, response):
#         # texts = response.css('div.text p ::text')
#         texts = response.css('div p ::text')
        
#         for text in texts:
#             yield{''
#                 'content': text.get()
#             }
# process = CrawlerProcess(settings={
#     "FEEDS":{
#         "blogdata.csv":{
#             "format":"csv"
#         },
#     },
# })

# process.crawl(BlogspiderSpider)
# process.start()

# df = pd.read_csv('././blogdata.csv')
# Total_text = ''.join(df['content'])
# print(Total_text)

# os.remove('././blogdata.csv')

############################################

# import scrapy
# from scrapy.crawler import CrawlerProcess
# import pandas as pd
# import os

# a = ["www.geeksforgeeks.org", "howtogeek.com", "finxter.com", "en.wikipedia.org", "www.tutorialspoint.com", "javatpoint.com"]
# urls = ["https://www.geeksforgeeks.org/axiomatic-approach-to-probability/", 
#         "https://www.howtogeek.com/838004/what-is-moores-law/", 
#         "https://en.wikipedia.org/wiki/Bubble_sort", 
#         "https://www.tutorialspoint.com/discrete_mathematics/discrete_mathematics_group_theory.htm", 
#         "https://www.tutorialspoint.com/cloud_computing/cloud_computing_technologies.htm",
#         "https://www.javatpoint.com/protein-folding-using-machine-learning"
#         ]   


# class BlogspiderSpider(scrapy.Spider):
#     name = "blogspider"                                                                                                                                                                              
#     allowed_domains = a
#     start_urls = urls
    
#     def __init__(self, url):
#         self.start_urls = [url]

#     def parse(self, response):
#         # texts = response.css('div.text p ::text')
#         texts = response.css('div p ::text').getall()
#         content = ' '.join(texts)
#         yield{
#             'url': response,
#             'content': content
#         }

# def scrape_urls(urls):
#     for url in urls:
#         process = CrawlerProcess(settings={
#             "FEEDS":{
#                 "blogdata.csv":{
#                     "format":"csv"
#                 },
#             },
#         })
    
#     for url in urls:
#         process.crawl(BlogspiderSpider, url=url)
        
#     process.start()
#     print("#########################################")
#     df = pd.read_csv('././blogdata.csv')
#     Total_text = ''.join(df['content'])
#     print(Total_text)
#     os.remove('././blogdata.csv')
        

# scrape_urls(urls)




#####################################\

import scrapy
from scrapy.crawler import CrawlerProcess
import pandas as pd
import os
from googlesearch import search

class BlogspiderSpider(scrapy.Spider):
    name = "blogspider"
    
    def __init__(self, url):
        self.start_urls = [url]
        self.output_file = f"{self.get_filename(url)}.csv"

    def parse(self, response):
        try:
            texts = response.css('div p ::text').getall()
            if texts:
                content = ' '.join(texts)
                yield {
                    'content': content
                }
            else:
                self.logger.warning(f"No content found on {response.url}")
        except Exception as e:
            self.logger.error(f"Error occurred while parsing {response.url}: {str(e)}")
    
    def get_filename(self, url):
        return f"{url.split('//')[-1].split('/')[0]}.csv"
    
def scrape_urls(urls):
    process = CrawlerProcess(settings={
        "FEEDS": {},
    })
    for url in urls:
        process.settings["FEEDS"][BlogspiderSpider(url).output_file] = {
            "format": "csv"
        }
        process.crawl(BlogspiderSpider, url=url)
    
    process.start()

    for url in urls:
        filename = BlogspiderSpider(url).output_file
        df = pd.read_csv(filename)
        Total_text = ''.join(df['content'])
        print(Total_text)
        #os.remove(filename)

urls = []

query = "Nevertheless, technologists have internalized Moore’s Law and grown accustomed to believing computer speed doubles every 18 months as Moore observed over 50 years ago"
#query = "The Project Management Professional (PMP)® Certification from PMI is an acclaimed industry-recognized certification for project managers"
num_results = 4
for j in search(query, num_results=num_results, advanced=True, sleep_interval=5):
  urls.append(j.url)

scrape_urls(urls)   



