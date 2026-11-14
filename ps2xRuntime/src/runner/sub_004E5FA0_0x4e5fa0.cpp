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

// Function: sub_004E5FA0
// Address: 0x4e5fa0 - 0x4e5fc0
void sub_004E5FA0_0x4e5fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5FA0_0x4e5fa0");
#endif

    ctx->pc = 0x4e5fa0u;

    // 0x4e5fa0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5FA0u;
    {
        const bool branch_taken_0x4e5fa0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5fa0) {
            ctx->pc = 0x4E5FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5FA0u;
            // 0x4e5fa4: 0x6d696e61  ldr         $t1, 0x6E61($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501548u;
            return;
        }
    }
    ctx->pc = 0x4E5FA8u;
    // 0x4e5fa8: 0x72676c61  .word       0x72676C61                   # maddu1      $t5, $s3, $a3 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5fa8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 7); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4e5fac: 0x656c6c69  daddiu      $t4, $t3, 0x6C69
    ctx->pc = 0x4e5facu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27753);
    // 0x4e5fb0: 0x3164  .word       0x00003164                   # and         $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x4e5fb4: 0x0  nop
    ctx->pc = 0x4e5fb4u;
    // NOP
    // 0x4e5fb8: 0x0  nop
    ctx->pc = 0x4e5fb8u;
    // NOP
    // 0x4e5fbc: 0x0  nop
    ctx->pc = 0x4e5fbcu;
    // NOP
    ctx->pc = 0x4e5fc0u;
}
