module.exports = {
  preset: 'ts-jest',
  roots: ['<rootDir>/__tests__'],
  transformIgnorePatterns: ['node_modules/(?!(jest-)?bs-platform|@glennsl/|@wino/*)'],
  testRegex: '.*_spec.ts$',
  transform: {
    '^.+\\.jsx?$': require.resolve('babel-jest'),
    '^.+\\.tsx?$': 'ts-jest',
  },
  moduleFileExtensions: ['tsx', 'js', 'ts', 'jsx'],
  globals: {
    'ts-jest': {
      diagnostics: false,
    },
  },
}
