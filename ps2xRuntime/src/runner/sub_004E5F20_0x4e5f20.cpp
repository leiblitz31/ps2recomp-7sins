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

// Function: sub_004E5F20
// Address: 0x4e5f20 - 0x4e5f40
void sub_004E5F20_0x4e5f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5F20_0x4e5f20");
#endif

    ctx->pc = 0x4e5f20u;

    // 0x4e5f20: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5F20u;
    {
        const bool branch_taken_0x4e5f20 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5f20) {
            ctx->pc = 0x4E5F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5F20u;
            // 0x4e5f24: 0x6d696e61  ldr         $t1, 0x6E61($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5014C8u;
            return;
        }
    }
    ctx->pc = 0x4E5F28u;
    // 0x4e5f28: 0x68776c61  ldl         $s7, 0x6C61($v1)
    ctx->pc = 0x4e5f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x4e5f2c: 0x656b6361  daddiu      $t3, $t3, 0x6361
    ctx->pc = 0x4e5f2cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25441);
    // 0x4e5f30: 0x3364  .word       0x00003364                   # and         $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x4e5f34: 0x0  nop
    ctx->pc = 0x4e5f34u;
    // NOP
    // 0x4e5f38: 0x0  nop
    ctx->pc = 0x4e5f38u;
    // NOP
    // 0x4e5f3c: 0x0  nop
    ctx->pc = 0x4e5f3cu;
    // NOP
    ctx->pc = 0x4e5f40u;
}
