#pragma once

#include <string>

/// # class Foo
///
/// Dolor aute incididunt laboris eiusmod do deserunt officia nisi duis
/// deserunt laborum occaecat Lorem. Cillum cupidatat reprehenderit
/// laborevoluptate Lorem do irure enim nostrud incididunt ut occaecat Lorem.
/// Fugiat eu sit ipsum sint incididunt sint do anim cillum sint magna.
class Foo {
public:
	/// ## Constructors
	/// ```cpp
	/// Foo();
	/// explicit Foo(const std::string &name);
	/// Foo(const Foo &rhs);
	/// ```
	/// Construct a new Foo.
	///
	/// * Default constructor.
	/// * Construct a Foo with a `std::string`.
	/// * Copy constructor.
	Foo();

	/// ## Destructor
	/// Destruct the Foo.
	~Foo();

public:
	/// ## Foo::fromString
	/// ```cpp
	/// static Foo fromString(const std::string &);
	/// ```
	/// Create a Foo given a `std::string`.
	///
	/// ### Parameters
	/// * `const std::string &` - the name.
	///
	/// ### Returns
	/// A `Foo`.
	///
	/// ### Exceptions
	/// Randomly throws `std::exception`.
	///
	/// ### Example
	/// ```cpp
	/// #include <foo.hpp>
	///
	/// int main() {
	///     auto foo = Foo::fromString("bar");
	///     return 0;
	/// }
	/// ```
	static Foo fromString(const std::string &name);

public:
	/// ## Foo#bar
	/// ```cpp
	/// void bar() const;
	/// ```
	/// Dreamscape calling via bio-feedback.
	void bar() const;

	/// ## Foo#qux
	/// ```cpp
	/// double qux(int a, int b);
	/// ```
	/// Shakti alignment with spiritual non-locality.
	///
	/// ### Parameters
	/// * `int a` - amount of prana.
	/// * `int b` - quantum leap of flow.
	///
	/// ### Return
	/// The result of prana squared by a given quantum leap of flow modulo PI.
	///
	/// ### Example
	/// ```cpp
	/// #include <foo.h>
	/// #include <iostream>
	///
	/// int main() {
	///     std::cout << Foo::fromString("tardigrade").qux(3.141592, 1.618033); << std::endl;
	///     return 0;
	/// }
	/// ```
	double qux(int a, int b);
};
