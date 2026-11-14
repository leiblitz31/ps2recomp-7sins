#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E6C68
// Address: 0x4e6c68 - 0x4e6c80
void sub_004E6C68_0x4e6c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6C68_0x4e6c68");
#endif

    ctx->pc = 0x4e6c68u;

    // 0x4e6c68: 0x4c4c4557  .word       0x4C4C4557                   # INVALID     $v0, $t4, 0x4557 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6c68u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6C68 raw=0x4C4C4557");
    // 0x4e6c6c: 0x4e4f4420  .word       0x4E4F4420                   # INVALID     $s2, $t7, 0x4420 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6c6cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6C6C raw=0x4E4F4420");
    // 0x4e6c70: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6c70u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E6C70 raw=0x00000045");
    // 0x4e6c74: 0x0  nop
    ctx->pc = 0x4e6c74u;
    // NOP
    // 0x4e6c78: 0x0  nop
    ctx->pc = 0x4e6c78u;
    // NOP
    // 0x4e6c7c: 0x0  nop
    ctx->pc = 0x4e6c7cu;
    // NOP
    ctx->pc = 0x4e6c80u;
}
