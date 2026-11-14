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

// Function: sub_00420DD8
// Address: 0x420dd8 - 0x420e20
void sub_00420DD8_0x420dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420DD8_0x420dd8");
#endif

    switch (ctx->pc) {
        case 0x420e04u: goto label_420e04;
        case 0x420e14u: goto label_420e14;
        default: break;
    }

    ctx->pc = 0x420dd8u;

    // 0x420dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x420dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x420ddc: 0x8f82be18  lw          $v0, -0x41E8($gp)
    ctx->pc = 0x420ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
    // 0x420de0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x420de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x420de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x420de8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x420de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x420dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x420decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x420df0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x420df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x420df4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x420DF4u;
    {
        const bool branch_taken_0x420df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x420df4) {
            ctx->pc = 0x420E0Cu;
            goto label_420e0c;
        }
    }
    ctx->pc = 0x420DFCu;
    // 0x420dfc: 0xc107c7c  jal         func_41F1F0
    ctx->pc = 0x420DFCu;
    SET_GPR_U32(ctx, 31, 0x420E04u);
    ctx->pc = 0x41F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F1F0u, 0x420DFCu, 0x420E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420E04u;
label_420e04:
    // 0x420e04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x420E04u;
    {
        const bool branch_taken_0x420e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420E04u;
        // 0x420e08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420e04) {
            ctx->pc = 0x420E18u;
            goto label_420e18;
        }
    }
    ctx->pc = 0x420E0Cu;
label_420e0c:
    // 0x420e0c: 0xc107bde  jal         func_41EF78
    ctx->pc = 0x420E0Cu;
    SET_GPR_U32(ctx, 31, 0x420E14u);
    ctx->pc = 0x41EF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EF78u, 0x420E0Cu, 0x420E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420E14u;
label_420e14:
    // 0x420e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_420e18:
    // 0x420e18: 0x3e00008  jr          $ra
    ctx->pc = 0x420E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420E18u;
        // 0x420e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420E20u;
}
