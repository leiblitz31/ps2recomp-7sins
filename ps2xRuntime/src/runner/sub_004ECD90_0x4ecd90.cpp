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

// Function: sub_004ECD90
// Address: 0x4ecd90 - 0x4ecdb0
void sub_004ECD90_0x4ecd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECD90_0x4ecd90");
#endif

    switch (ctx->pc) {
        case 0x4ecd98u: goto label_4ecd98;
        default: break;
    }

    ctx->pc = 0x4ecd90u;

    // 0x4ecd90: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ecd90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ecd94: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ecd94u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ecd98:
    // 0x4ecd98: 0x7463615c  .word       0x7463615C                   # INVALID     $v1, $v1, 0x615C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecd98u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECD98 raw=0x7463615C");
    // 0x4ecd9c: 0x736e6f69  .word       0x736E6F69                   # INVALID     $k1, $t6, 0x6F69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4ecd9cu;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x4ECD9C raw=0x736E6F69");
    // 0x4ecda0: 0x2e73255c  sltiu       $s3, $s3, 0x255C
    ctx->pc = 0x4ecda0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9564) ? 1 : 0);
    // 0x4ecda4: 0x746361  .word       0x00746361                   # addu        $t4, $v1, $s4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecda4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4ecda8: 0x0  nop
    ctx->pc = 0x4ecda8u;
    // NOP
    // 0x4ecdac: 0x0  nop
    ctx->pc = 0x4ecdacu;
    // NOP
    ctx->pc = 0x4ecdb0u;
}
