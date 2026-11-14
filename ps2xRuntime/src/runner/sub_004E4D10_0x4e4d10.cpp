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

// Function: sub_004E4D10
// Address: 0x4e4d10 - 0x4e4d30
void sub_004E4D10_0x4e4d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4D10_0x4e4d10");
#endif

    switch (ctx->pc) {
        case 0x4e4d1cu: goto label_4e4d1c;
        default: break;
    }

    ctx->pc = 0x4e4d10u;

    // 0x4e4d10: 0x695f6975  ldl         $ra, 0x6975($t2)
    ctx->pc = 0x4e4d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 26997); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
    // 0x4e4d14: 0x5f6f666e  .word       0x5F6F666E                   # bgtzl       $k1, . + 4 + (0x666E << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4D14u;
    {
        const bool branch_taken_0x4e4d14 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4d14) {
            ctx->pc = 0x4E4D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4D14u;
            // 0x4e4d18: 0x646e6977  daddiu      $t6, $v1, 0x6977 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26999);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE6D0u;
            return;
        }
    }
    ctx->pc = 0x4E4D1Cu;
label_4e4d1c:
    // 0x4e4d1c: 0x695f776f  ldl         $ra, 0x776F($t2)
    ctx->pc = 0x4e4d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 30575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
    // 0x4e4d20: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4d20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x4e4d24: 0x0  nop
    ctx->pc = 0x4e4d24u;
    // NOP
    // 0x4e4d28: 0x0  nop
    ctx->pc = 0x4e4d28u;
    // NOP
    // 0x4e4d2c: 0x0  nop
    ctx->pc = 0x4e4d2cu;
    // NOP
    ctx->pc = 0x4e4d30u;
}
