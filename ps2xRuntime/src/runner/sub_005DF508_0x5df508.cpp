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

// Function: sub_005DF508
// Address: 0x5df508 - 0x5df520
void sub_005DF508_0x5df508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF508_0x5df508");
#endif

    ctx->pc = 0x5df508u;

    // 0x5df508: 0x20727450  addi        $s2, $v1, 0x7450
    ctx->pc = 0x5df508u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29776, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    // 0x5df50c: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df50cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF50C raw=0x4E203D21");
    // 0x5df510: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df510u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5DF510 raw=0x004C4C55");
    // 0x5df514: 0x0  nop
    ctx->pc = 0x5df514u;
    // NOP
    // 0x5df518: 0x0  nop
    ctx->pc = 0x5df518u;
    // NOP
    // 0x5df51c: 0x0  nop
    ctx->pc = 0x5df51cu;
    // NOP
    ctx->pc = 0x5df520u;
}
