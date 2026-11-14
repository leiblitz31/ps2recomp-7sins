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

// Function: sub_004E6020
// Address: 0x4e6020 - 0x4e6040
void sub_004E6020_0x4e6020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6020_0x4e6020");
#endif

    ctx->pc = 0x4e6020u;

    // 0x4e6020: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6020u;
    {
        const bool branch_taken_0x4e6020 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6020) {
            ctx->pc = 0x4E6024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6020u;
            // 0x4e6024: 0x6d696e61  ldr         $t1, 0x6E61($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5015C8u;
            return;
        }
    }
    ctx->pc = 0x4E6028u;
    // 0x4e6028: 0x72676c61  .word       0x72676C61                   # maddu1      $t5, $s3, $a3 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e6028u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 7); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4e602c: 0x656c6c69  daddiu      $t4, $t3, 0x6C69
    ctx->pc = 0x4e602cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27753);
    // 0x4e6030: 0x3564  .word       0x00003564                   # and         $a2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x4e6034: 0x0  nop
    ctx->pc = 0x4e6034u;
    // NOP
    // 0x4e6038: 0x0  nop
    ctx->pc = 0x4e6038u;
    // NOP
    // 0x4e603c: 0x0  nop
    ctx->pc = 0x4e603cu;
    // NOP
    ctx->pc = 0x4e6040u;
}
