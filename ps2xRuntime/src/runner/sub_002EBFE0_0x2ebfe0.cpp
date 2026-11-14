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

// Function: sub_002EBFE0
// Address: 0x2ebfe0 - 0x2ec008
void sub_002EBFE0_0x2ebfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBFE0_0x2ebfe0");
#endif

    ctx->pc = 0x2ebfe0u;

    // 0x2ebfe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ebfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ebfe4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2ebfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2ebfe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebfec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebfecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebff0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ebff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebff4: 0x8c44ea90  lw          $a0, -0x1570($v0)
    ctx->pc = 0x2ebff4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2ebff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebffc: 0x80bafc0  j           func_2EBF00
    ctx->pc = 0x2EBFFCu;
    ctx->pc = 0x2EC000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFFCu;
    // 0x2ec000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF00u, 0x2EBFFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2EC004u;
    // 0x2ec004: 0x0  nop
    ctx->pc = 0x2ec004u;
    // NOP
    ctx->pc = 0x2ec008u;
}
