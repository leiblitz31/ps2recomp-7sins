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

// Function: sub_004E4D50
// Address: 0x4e4d50 - 0x4e4d70
void sub_004E4D50_0x4e4d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4D50_0x4e4d50");
#endif

    switch (ctx->pc) {
        case 0x4e4d58u: goto label_4e4d58;
        default: break;
    }

    ctx->pc = 0x4e4d50u;

    // 0x4e4d50: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e4d50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e4d54: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e4d54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e4d58:
    // 0x4e4d58: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4d58u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4D58 raw=0x7469625C");
    // 0x4e4d5c: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e4d5cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E4D5C raw=0x7370616D");
    // 0x4e4d60: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4e4d60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
    // 0x4e4d64: 0x6475685c  daddiu      $s5, $v1, 0x685C
    ctx->pc = 0x4e4d64u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26716);
    // 0x4e4d68: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4d68u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4E4D68 raw=0x0000005C");
    // 0x4e4d6c: 0x0  nop
    ctx->pc = 0x4e4d6cu;
    // NOP
    ctx->pc = 0x4e4d70u;
}
