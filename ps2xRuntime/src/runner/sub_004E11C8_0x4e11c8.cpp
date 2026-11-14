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

// Function: sub_004E11C8
// Address: 0x4e11c8 - 0x4e11d8
void sub_004E11C8_0x4e11c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E11C8_0x4e11c8");
#endif

    ctx->pc = 0x4e11c8u;

    // 0x4e11c8: 0x4e595341  .word       0x4E595341                   # INVALID     $s2, $t9, 0x5341 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e11c8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E11C8 raw=0x4E595341");
    // 0x4e11cc: 0x20202043  addi        $zero, $at, 0x2043
    ctx->pc = 0x4e11ccu;
    // NOP (addi to $zero)
    // 0x4e11d0: 0x4f202020  .word       0x4F202020                   # INVALID     $t9, $zero, 0x2020 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e11d0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E11D0 raw=0x4F202020");
    // 0x4e11d4: 0xa4e  .word       0x00000A4E                   # INVALID     $zero, $zero, 0xA4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e11d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E11D4 raw=0x00000A4E");
    ctx->pc = 0x4e11d8u;
}
