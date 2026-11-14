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

// Function: sub_0049F670
// Address: 0x49f670 - 0x49f6b0
void sub_0049F670_0x49f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F670_0x49f670");
#endif

    switch (ctx->pc) {
        case 0x49f684u: goto label_49f684;
        case 0x49f68cu: goto label_49f68c;
        case 0x49f698u: goto label_49f698;
        case 0x49f6a0u: goto label_49f6a0;
        default: break;
    }

    ctx->pc = 0x49f670u;

    // 0x49f670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49f670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49f674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49f678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49f67c: 0xc12a858  jal         func_4AA160
    ctx->pc = 0x49F67Cu;
    SET_GPR_U32(ctx, 31, 0x49F684u);
    ctx->pc = 0x49F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F67Cu;
    // 0x49f680: 0xaf82b824  sw          $v0, -0x47DC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948900), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA160u, 0x49F67Cu, 0x49F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F684u;
label_49f684:
    // 0x49f684: 0xc127114  jal         func_49C450
    ctx->pc = 0x49F684u;
    SET_GPR_U32(ctx, 31, 0x49F68Cu);
    ctx->pc = 0x49C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C450u, 0x49F684u, 0x49F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F68Cu;
label_49f68c:
    // 0x49f68c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49f68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f690: 0xc1270c8  jal         func_49C320
    ctx->pc = 0x49F690u;
    SET_GPR_U32(ctx, 31, 0x49F698u);
    ctx->pc = 0x49F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F690u;
    // 0x49f694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C320u, 0x49F690u, 0x49F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F698u;
label_49f698:
    // 0x49f698: 0xc12a562  jal         func_4A9588
    ctx->pc = 0x49F698u;
    SET_GPR_U32(ctx, 31, 0x49F6A0u);
    ctx->pc = 0x4A9588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9588u, 0x49F698u, 0x49F6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F6A0u;
label_49f6a0:
    // 0x49f6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x49F6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F6A4u;
        // 0x49f6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F6ACu;
    // 0x49f6ac: 0x0  nop
    ctx->pc = 0x49f6acu;
    // NOP
    ctx->pc = 0x49f6b0u;
}
