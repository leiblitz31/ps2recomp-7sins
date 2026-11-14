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

// Function: sub_0039E070
// Address: 0x39e070 - 0x39e118
void sub_0039E070_0x39e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E070_0x39e070");
#endif

    switch (ctx->pc) {
        case 0x39e0b0u: goto label_39e0b0;
        case 0x39e0c0u: goto label_39e0c0;
        case 0x39e0d0u: goto label_39e0d0;
        case 0x39e0e0u: goto label_39e0e0;
        case 0x39e0f0u: goto label_39e0f0;
        case 0x39e0f8u: goto label_39e0f8;
        case 0x39e100u: goto label_39e100;
        case 0x39e108u: goto label_39e108;
        default: break;
    }

    ctx->pc = 0x39e070u;

    // 0x39e070: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x39e070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x39e074: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39e074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x39e078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39e078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39e07c: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x39e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x39e080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39e080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39e084: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39e088: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x39e088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x39e08c: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x39e08cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x39e090: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x39e090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x39e094: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x39e094u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x39e098: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x39e098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x39e09c: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x39e09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x39e0a0: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x39e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x39e0a4: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x39e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x39e0a8: 0xc0e9b02  jal         func_3A6C08
    ctx->pc = 0x39E0A8u;
    SET_GPR_U32(ctx, 31, 0x39E0B0u);
    ctx->pc = 0x39E0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E0A8u;
    // 0x39e0ac: 0xac600058  sw          $zero, 0x58($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C08u, 0x39E0A8u, 0x39E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0B0u;
label_39e0b0:
    // 0x39e0b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x39E0B0u;
    {
        const bool branch_taken_0x39e0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e0b0) {
            ctx->pc = 0x39E0E8u;
            goto label_39e0e8;
        }
    }
    ctx->pc = 0x39E0B8u;
    // 0x39e0b8: 0xc0e9b42  jal         func_3A6D08
    ctx->pc = 0x39E0B8u;
    SET_GPR_U32(ctx, 31, 0x39E0C0u);
    ctx->pc = 0x3A6D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6D08u, 0x39E0B8u, 0x39E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0C0u;
label_39e0c0:
    // 0x39e0c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39E0C0u;
    {
        const bool branch_taken_0x39e0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e0c0) {
            ctx->pc = 0x39E0E8u;
            goto label_39e0e8;
        }
    }
    ctx->pc = 0x39E0C8u;
    // 0x39e0c8: 0xc0e9b22  jal         func_3A6C88
    ctx->pc = 0x39E0C8u;
    SET_GPR_U32(ctx, 31, 0x39E0D0u);
    ctx->pc = 0x3A6C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C88u, 0x39E0C8u, 0x39E0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0D0u;
label_39e0d0:
    // 0x39e0d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E0D0u;
    {
        const bool branch_taken_0x39e0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e0d0) {
            ctx->pc = 0x39E0E8u;
            goto label_39e0e8;
        }
    }
    ctx->pc = 0x39E0D8u;
    // 0x39e0d8: 0xc0e788e  jal         func_39E238
    ctx->pc = 0x39E0D8u;
    SET_GPR_U32(ctx, 31, 0x39E0E0u);
    ctx->pc = 0x39E238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E238u, 0x39E0D8u, 0x39E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0E0u;
label_39e0e0:
    // 0x39e0e0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39E0E0u;
    {
        const bool branch_taken_0x39e0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0E0u;
        // 0x39e0e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0e0) {
            ctx->pc = 0x39E10Cu;
            goto label_39e10c;
        }
    }
    ctx->pc = 0x39E0E8u;
label_39e0e8:
    // 0x39e0e8: 0xc0e78ea  jal         func_39E3A8
    ctx->pc = 0x39E0E8u;
    SET_GPR_U32(ctx, 31, 0x39E0F0u);
    ctx->pc = 0x39E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E3A8u, 0x39E0E8u, 0x39E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0F0u;
label_39e0f0:
    // 0x39e0f0: 0xc0e9b72  jal         func_3A6DC8
    ctx->pc = 0x39E0F0u;
    SET_GPR_U32(ctx, 31, 0x39E0F8u);
    ctx->pc = 0x3A6DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6DC8u, 0x39E0F0u, 0x39E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0F8u;
label_39e0f8:
    // 0x39e0f8: 0xc0e9b6a  jal         func_3A6DA8
    ctx->pc = 0x39E0F8u;
    SET_GPR_U32(ctx, 31, 0x39E100u);
    ctx->pc = 0x3A6DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6DA8u, 0x39E0F8u, 0x39E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E100u;
label_39e100:
    // 0x39e100: 0xc0e9b62  jal         func_3A6D88
    ctx->pc = 0x39E100u;
    SET_GPR_U32(ctx, 31, 0x39E108u);
    ctx->pc = 0x3A6D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6D88u, 0x39E100u, 0x39E108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E108u;
label_39e108:
    // 0x39e108: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39e108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e10c:
    // 0x39e10c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39e10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e110: 0x3e00008  jr          $ra
    ctx->pc = 0x39E110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E110u;
        // 0x39e114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E118u;
}
