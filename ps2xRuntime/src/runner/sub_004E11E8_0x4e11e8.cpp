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

// Function: sub_004E11E8
// Address: 0x4e11e8 - 0x4e11f8
void sub_004E11E8_0x4e11e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E11E8_0x4e11e8");
#endif

    ctx->pc = 0x4e11e8u;

    // 0x4e11e8: 0x4e554f53  .word       0x4E554F53                   # INVALID     $s2, $s5, 0x4F53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e11e8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E11E8 raw=0x4E554F53");
    // 0x4e11ec: 0x20202044  addi        $zero, $at, 0x2044
    ctx->pc = 0x4e11ecu;
    // NOP (addi to $zero)
    // 0x4e11f0: 0x4f202020  .word       0x4F202020                   # INVALID     $t9, $zero, 0x2020 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e11f0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E11F0 raw=0x4F202020");
    // 0x4e11f4: 0xa4e  .word       0x00000A4E                   # INVALID     $zero, $zero, 0xA4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e11f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E11F4 raw=0x00000A4E");
    ctx->pc = 0x4e11f8u;
}
