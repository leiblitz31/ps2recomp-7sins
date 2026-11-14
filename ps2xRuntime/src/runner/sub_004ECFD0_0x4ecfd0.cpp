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

// Function: sub_004ECFD0
// Address: 0x4ecfd0 - 0x4ecff0
void sub_004ECFD0_0x4ecfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECFD0_0x4ecfd0");
#endif

    ctx->pc = 0x4ecfd0u;

    // 0x4ecfd0: 0x612e7866  daddi       $t6, $t1, 0x7866
    ctx->pc = 0x4ecfd0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4ecfd4: 0x2e6d696e  sltiu       $t5, $s3, 0x696E
    ctx->pc = 0x4ecfd4u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26990) ? 1 : 0);
    // 0x4ecfd8: 0x65766e69  daddiu      $s6, $t3, 0x6E69
    ctx->pc = 0x4ecfd8u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
    // 0x4ecfdc: 0x612e7472  daddi       $t6, $t1, 0x7472
    ctx->pc = 0x4ecfdcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29810; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4ecfe0: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecfe0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
    // 0x4ecfe4: 0x0  nop
    ctx->pc = 0x4ecfe4u;
    // NOP
    // 0x4ecfe8: 0x0  nop
    ctx->pc = 0x4ecfe8u;
    // NOP
    // 0x4ecfec: 0x0  nop
    ctx->pc = 0x4ecfecu;
    // NOP
    ctx->pc = 0x4ecff0u;
}
