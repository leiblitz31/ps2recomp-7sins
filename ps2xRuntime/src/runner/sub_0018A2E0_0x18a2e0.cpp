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

// Function: sub_0018A2E0
// Address: 0x18a2e0 - 0x18a370
void sub_0018A2E0_0x18a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A2E0_0x18a2e0");
#endif

    switch (ctx->pc) {
        case 0x18a2fcu: goto label_18a2fc;
        case 0x18a318u: goto label_18a318;
        case 0x18a32cu: goto label_18a32c;
        case 0x18a350u: goto label_18a350;
        default: break;
    }

    ctx->pc = 0x18a2e0u;

    // 0x18a2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a2e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18a2ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a2f0: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x18a2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x18a2f4: 0xc0628ac  jal         func_18A2B0
    ctx->pc = 0x18A2F4u;
    SET_GPR_U32(ctx, 31, 0x18A2FCu);
    ctx->pc = 0x18A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2B0u, 0x18A2F4u, 0x18A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A2FCu;
label_18a2fc:
    // 0x18a2fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18A2FCu;
    {
        const bool branch_taken_0x18a2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a2fc) {
            ctx->pc = 0x18A340u;
            goto label_18a340;
        }
    }
    ctx->pc = 0x18A304u;
    // 0x18a304: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18a304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a308: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x18a308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x18a30c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a310: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A310u;
    SET_GPR_U32(ctx, 31, 0x18A318u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A310u, 0x18A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A318u;
label_18a318:
    // 0x18a318: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a31c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a320: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18a320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18a324: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x18A324u;
    SET_GPR_U32(ctx, 31, 0x18A32Cu);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x18A324u, 0x18A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A32Cu;
label_18a32c:
    // 0x18a32c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A32Cu;
    {
        const bool branch_taken_0x18a32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a32c) {
            ctx->pc = 0x18A340u;
            goto label_18a340;
        }
    }
    ctx->pc = 0x18A334u;
    // 0x18a334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a338: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A338u;
    {
        const bool branch_taken_0x18a338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a338) {
            ctx->pc = 0x18A358u;
            goto label_18a358;
        }
    }
    ctx->pc = 0x18A340u;
label_18a340:
    // 0x18a340: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a344: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x18a344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x18a348: 0xc0628ac  jal         func_18A2B0
    ctx->pc = 0x18A348u;
    SET_GPR_U32(ctx, 31, 0x18A350u);
    ctx->pc = 0x18A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2B0u, 0x18A348u, 0x18A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A350u;
label_18a350:
    // 0x18a350: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18a350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18a354: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18a354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_18a358:
    // 0x18a358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a35c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18a35cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18a360: 0x3e00008  jr          $ra
    ctx->pc = 0x18A360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A368u;
    // 0x18a368: 0x0  nop
    ctx->pc = 0x18a368u;
    // NOP
    // 0x18a36c: 0x0  nop
    ctx->pc = 0x18a36cu;
    // NOP
    ctx->pc = 0x18a370u;
}
