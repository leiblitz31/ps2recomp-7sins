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

// Function: sub_00314930
// Address: 0x314930 - 0x314960
void sub_00314930_0x314930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314930_0x314930");
#endif

    switch (ctx->pc) {
        case 0x31494cu: goto label_31494c;
        default: break;
    }

    ctx->pc = 0x314930u;

    // 0x314930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314934: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x314934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x314938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x314938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31493c: 0x24a54dd0  addiu       $a1, $a1, 0x4DD0
    ctx->pc = 0x31493cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19920));
    // 0x314940: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x314940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x314944: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x314944u;
    SET_GPR_U32(ctx, 31, 0x31494Cu);
    ctx->pc = 0x314948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314944u;
    // 0x314948: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x314944u, 0x31494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31494Cu;
label_31494c:
    // 0x31494c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x31494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x314950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314954: 0x3e00008  jr          $ra
    ctx->pc = 0x314954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314954u;
        // 0x314958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31495Cu;
    // 0x31495c: 0x0  nop
    ctx->pc = 0x31495cu;
    // NOP
    ctx->pc = 0x314960u;
}
