## File Structure for Simple React/Next.js Project

A sample file structure for simple React project. File structure usually either groups by nature or group by usage. For most code this is just a personal preference, but for static assets, they need to be later served by server, so it would usually be better to be grouped together. Subgrouping code by usage within group by nature is advised if codebase becomes large.

Last revised: 22 Nov 2021

## React project file structure

- app root
  - pages
  - api
  - src
    - pages
    - components
  - public      (images, pdf, static assets)
  - styles      (for global CSS properties)
  - hooks
  - contexts
  - utils
  - *types
  - *stores
  - *tests
  - *graphql
  - *effects
  - *locales
  - *client/orm

*: If using [ Typescript | Redux, MobX etc. | testing libraries, e.g. Jest, cypress | GraphQL | animation, transition libraries, e.g. framer-motion | localization packages, e.g. react-i18next | GraphQL client/Object-relational mapping, e.g.
Apollo Client, Prisma ]

If you use enum, class, interface extensively, you might want to have files dedicated to them too.

app-wide settings, such as secret key, password, token can be put into .env or configured in production. They should not be commited to repository.

If scalability is of high concern, anything that is used more than once should be organized and reusable.