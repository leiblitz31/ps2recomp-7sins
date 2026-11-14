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

// Function: sub_004E7068
// Address: 0x4e7068 - 0x4e7080
void sub_004E7068_0x4e7068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7068_0x4e7068");
#endif

    switch (ctx->pc) {
        case 0x4e7070u: goto label_4e7070;
        default: break;
    }

    ctx->pc = 0x4e7068u;

    // 0x4e7068: 0x53747874  beql        $k1, $s4, . + 4 + (0x7874 << 2)
    ctx->pc = 0x4E7068u;
    {
        const bool branch_taken_0x4e7068 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 20));
        if (branch_taken_0x4e7068) {
            ctx->pc = 0x4E706Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7068u;
            // 0x4e706c: 0x6b636974  ldl         $v1, 0x6974($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x50523Cu;
            return;
        }
    }
    ctx->pc = 0x4E7070u;
label_4e7070:
    // 0x4e7070: 0x0  nop
    ctx->pc = 0x4e7070u;
    // NOP
    // 0x4e7074: 0x0  nop
    ctx->pc = 0x4e7074u;
    // NOP
    // 0x4e7078: 0x0  nop
    ctx->pc = 0x4e7078u;
    // NOP
    // 0x4e707c: 0x0  nop
    ctx->pc = 0x4e707cu;
    // NOP
    ctx->pc = 0x4e7080u;
}
