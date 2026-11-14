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

// Function: sub_005E0BE0
// Address: 0x5e0be0 - 0x5e0c00
void sub_005E0BE0_0x5e0be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005E0BE0_0x5e0be0");
#endif

    switch (ctx->pc) {
        case 0x5e0bf4u: goto label_5e0bf4;
        case 0x5e0bfcu: goto label_5e0bfc;
        default: break;
    }

    ctx->pc = 0x5e0be0u;

    // 0x5e0be0: 0x4f705f6d  .word       0x4F705F6D                   # INVALID     $k1, $s0, 0x5F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0be0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E0BE0 raw=0x4F705F6D");
    // 0x5e0be4: 0x63656a62  daddi       $a1, $k1, 0x6A62
    ctx->pc = 0x5e0be4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27234; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x5e0be8: 0x3d212074  .word       0x3D212074                   # lui         $at, 0x2074 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8308 << 16));
    // 0x5e0bec: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0becu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E0BEC raw=0x4C554E20");
    // 0x5e0bf0: 0x4c  syscall     1
    ctx->pc = 0x5e0bf0u;
    ctx->pc = 0x5E0BF4u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5e0bf4:
    // 0x5e0bf4: 0x0  nop
    ctx->pc = 0x5e0bf4u;
    // NOP
    // 0x5e0bf8: 0x0  nop
    ctx->pc = 0x5e0bf8u;
    // NOP
label_5e0bfc:
    // 0x5e0bfc: 0x0  nop
    ctx->pc = 0x5e0bfcu;
    // NOP
    ctx->pc = 0x5e0c00u;
}
