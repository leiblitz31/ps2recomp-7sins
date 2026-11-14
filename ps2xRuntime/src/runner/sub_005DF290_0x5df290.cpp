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

// Function: sub_005DF290
// Address: 0x5df290 - 0x5df2b0
void sub_005DF290_0x5df290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF290_0x5df290");
#endif

    ctx->pc = 0x5df290u;

    // 0x5df290: 0x446d756e  .word       0x446D756E                   # INVALID     $v1, $t5, 0x756E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df290u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x2E at 0x5DF290 raw=0x446D756E");
    // 0x5df294: 0x54737269  bnel        $v1, $s3, . + 4 + (0x7269 << 2)
    ctx->pc = 0x5DF294u;
    {
        const bool branch_taken_0x5df294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x5df294) {
            ctx->pc = 0x5DF298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF294u;
            // 0x5df298: 0x696b536f  ldl         $t3, 0x536F($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 21359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FBC3Cu;
            return;
        }
    }
    ctx->pc = 0x5DF29Cu;
    // 0x5df29c: 0x3d3e2070  .word       0x3D3E2070                   # lui         $fp, 0x2070 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df29cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8304 << 16));
    // 0x5df2a0: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x5df2a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x5df2a4: 0x0  nop
    ctx->pc = 0x5df2a4u;
    // NOP
    // 0x5df2a8: 0x0  nop
    ctx->pc = 0x5df2a8u;
    // NOP
    // 0x5df2ac: 0x0  nop
    ctx->pc = 0x5df2acu;
    // NOP
    ctx->pc = 0x5df2b0u;
}
