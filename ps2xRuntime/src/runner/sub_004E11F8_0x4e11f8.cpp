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

// Function: sub_004E11F8
// Address: 0x4e11f8 - 0x4e1210
void sub_004E11F8_0x4e11f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E11F8_0x4e11f8");
#endif

    ctx->pc = 0x4e11f8u;

    // 0x4e11f8: 0x45525453  .word       0x45525453                   # INVALID     $t2, $s2, 0x5453 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e11f8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x13 at 0x4E11F8 raw=0x45525453");
    // 0x4e11fc: 0x20204d41  addi        $zero, $at, 0x4D41
    ctx->pc = 0x4e11fcu;
    // NOP (addi to $zero)
    // 0x4e1200: 0x4f202020  .word       0x4F202020                   # INVALID     $t9, $zero, 0x2020 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1200u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E1200 raw=0x4F202020");
    // 0x4e1204: 0xa4e  .word       0x00000A4E                   # INVALID     $zero, $zero, 0xA4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1204u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E1204 raw=0x00000A4E");
    // 0x4e1208: 0x0  nop
    ctx->pc = 0x4e1208u;
    // NOP
    // 0x4e120c: 0x0  nop
    ctx->pc = 0x4e120cu;
    // NOP
    ctx->pc = 0x4e1210u;
}
