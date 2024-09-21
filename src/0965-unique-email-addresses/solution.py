class Solution:
    def getUniqueEmailAddress(self, email: str) -> str:
        local_name, domain_name = email.split("@")
        local_name = local_name.split("+")[0].replace(".", "")
        return f"{local_name}@{domain_name}"

    def numUniqueEmails(self, emails: List[str]) -> int:
         return len({self.getUniqueEmailAddress(email) for email in emails})
