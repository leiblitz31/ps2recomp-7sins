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

// Function: sub_004E5F00
// Address: 0x4e5f00 - 0x4e5f20
void sub_004E5F00_0x4e5f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5F00_0x4e5f00");
#endif

    ctx->pc = 0x4e5f00u;

    // 0x4e5f00: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5F00u;
    {
        const bool branch_taken_0x4e5f00 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5f00) {
            ctx->pc = 0x4E5F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5F00u;
            // 0x4e5f04: 0x6d696e61  ldr         $t1, 0x6E61($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5014A8u;
            return;
        }
    }
    ctx->pc = 0x4E5F08u;
    // 0x4e5f08: 0x68776c61  ldl         $s7, 0x6C61($v1)
    ctx->pc = 0x4e5f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x4e5f0c: 0x656b6361  daddiu      $t3, $t3, 0x6361
    ctx->pc = 0x4e5f0cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25441);
    // 0x4e5f10: 0x3264  .word       0x00003264                   # and         $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5f10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x4e5f14: 0x0  nop
    ctx->pc = 0x4e5f14u;
    // NOP
    // 0x4e5f18: 0x0  nop
    ctx->pc = 0x4e5f18u;
    // NOP
    // 0x4e5f1c: 0x0  nop
    ctx->pc = 0x4e5f1cu;
    // NOP
    ctx->pc = 0x4e5f20u;
}
