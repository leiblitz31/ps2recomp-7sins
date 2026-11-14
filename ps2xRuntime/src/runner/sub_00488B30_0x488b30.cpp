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

// Function: sub_00488B30
// Address: 0x488b30 - 0x488c60
void sub_00488B30_0x488b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488B30_0x488b30");
#endif

    switch (ctx->pc) {
        case 0x488b40u: goto label_488b40;
        case 0x488b5cu: goto label_488b5c;
        case 0x488b80u: goto label_488b80;
        case 0x488b8cu: goto label_488b8c;
        case 0x488ba8u: goto label_488ba8;
        case 0x488bb4u: goto label_488bb4;
        case 0x488bd0u: goto label_488bd0;
        case 0x488bdcu: goto label_488bdc;
        case 0x488bf8u: goto label_488bf8;
        case 0x488c04u: goto label_488c04;
        case 0x488c1cu: goto label_488c1c;
        case 0x488c30u: goto label_488c30;
        case 0x488c44u: goto label_488c44;
        case 0x488c4cu: goto label_488c4c;
        default: break;
    }

    ctx->pc = 0x488b30u;

    // 0x488b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x488b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x488b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x488b38: 0xc124b58  jal         func_492D60
    ctx->pc = 0x488B38u;
    SET_GPR_U32(ctx, 31, 0x488B40u);
    ctx->pc = 0x492D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492D60u, 0x488B38u, 0x488B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488B40u;
label_488b40:
    // 0x488b40: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x488B40u;
    {
        const bool branch_taken_0x488b40 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x488b40) {
            ctx->pc = 0x488B68u;
            goto label_488b68;
        }
    }
    ctx->pc = 0x488B48u;
    // 0x488b48: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x488b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x488b4c: 0x24844400  addiu       $a0, $a0, 0x4400
    ctx->pc = 0x488b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17408));
    // 0x488b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x488b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488b54: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x488B54u;
    SET_GPR_U32(ctx, 31, 0x488B5Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x488B54u, 0x488B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488B5Cu;
label_488b5c:
    // 0x488b5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x488b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x488b60: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x488B60u;
    {
        const bool branch_taken_0x488b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488b60) {
            ctx->pc = 0x488C50u;
            goto label_488c50;
        }
    }
    ctx->pc = 0x488B68u;
label_488b68:
    // 0x488b68: 0x8f82c0ec  lw          $v0, -0x3F14($gp)
    ctx->pc = 0x488b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951148)));
    // 0x488b6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x488B6Cu;
    {
        const bool branch_taken_0x488b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488b6c) {
            ctx->pc = 0x488B90u;
            goto label_488b90;
        }
    }
    ctx->pc = 0x488B74u;
    // 0x488b74: 0x8f84c0ec  lw          $a0, -0x3F14($gp)
    ctx->pc = 0x488b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951148)));
    // 0x488b78: 0xc12233c  jal         func_488CF0
    ctx->pc = 0x488B78u;
    SET_GPR_U32(ctx, 31, 0x488B80u);
    ctx->pc = 0x488CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488CF0u, 0x488B78u, 0x488B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488B80u;
label_488b80:
    // 0x488b80: 0x8f84c0ec  lw          $a0, -0x3F14($gp)
    ctx->pc = 0x488b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951148)));
    // 0x488b84: 0xc119c5c  jal         func_467170
    ctx->pc = 0x488B84u;
    SET_GPR_U32(ctx, 31, 0x488B8Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x488B84u, 0x488B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488B8Cu;
label_488b8c:
    // 0x488b8c: 0xaf80c0ec  sw          $zero, -0x3F14($gp)
    ctx->pc = 0x488b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951148), GPR_U32(ctx, 0));
label_488b90:
    // 0x488b90: 0x8f82c0e8  lw          $v0, -0x3F18($gp)
    ctx->pc = 0x488b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951144)));
    // 0x488b94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x488B94u;
    {
        const bool branch_taken_0x488b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488b94) {
            ctx->pc = 0x488BB8u;
            goto label_488bb8;
        }
    }
    ctx->pc = 0x488B9Cu;
    // 0x488b9c: 0x8f84c0e8  lw          $a0, -0x3F18($gp)
    ctx->pc = 0x488b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951144)));
    // 0x488ba0: 0xc122330  jal         func_488CC0
    ctx->pc = 0x488BA0u;
    SET_GPR_U32(ctx, 31, 0x488BA8u);
    ctx->pc = 0x488CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488CC0u, 0x488BA0u, 0x488BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488BA8u;
label_488ba8:
    // 0x488ba8: 0x8f84c0e8  lw          $a0, -0x3F18($gp)
    ctx->pc = 0x488ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951144)));
    // 0x488bac: 0xc119c5c  jal         func_467170
    ctx->pc = 0x488BACu;
    SET_GPR_U32(ctx, 31, 0x488BB4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x488BACu, 0x488BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488BB4u;
label_488bb4:
    // 0x488bb4: 0xaf80c0e8  sw          $zero, -0x3F18($gp)
    ctx->pc = 0x488bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951144), GPR_U32(ctx, 0));
label_488bb8:
    // 0x488bb8: 0x8f82c0e4  lw          $v0, -0x3F1C($gp)
    ctx->pc = 0x488bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951140)));
    // 0x488bbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x488BBCu;
    {
        const bool branch_taken_0x488bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488bbc) {
            ctx->pc = 0x488BE0u;
            goto label_488be0;
        }
    }
    ctx->pc = 0x488BC4u;
    // 0x488bc4: 0x8f84c0e4  lw          $a0, -0x3F1C($gp)
    ctx->pc = 0x488bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951140)));
    // 0x488bc8: 0xc122324  jal         func_488C90
    ctx->pc = 0x488BC8u;
    SET_GPR_U32(ctx, 31, 0x488BD0u);
    ctx->pc = 0x488C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C90u, 0x488BC8u, 0x488BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488BD0u;
label_488bd0:
    // 0x488bd0: 0x8f84c0e4  lw          $a0, -0x3F1C($gp)
    ctx->pc = 0x488bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951140)));
    // 0x488bd4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x488BD4u;
    SET_GPR_U32(ctx, 31, 0x488BDCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x488BD4u, 0x488BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488BDCu;
label_488bdc:
    // 0x488bdc: 0xaf80c0e4  sw          $zero, -0x3F1C($gp)
    ctx->pc = 0x488bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951140), GPR_U32(ctx, 0));
label_488be0:
    // 0x488be0: 0x8f82c0f0  lw          $v0, -0x3F10($gp)
    ctx->pc = 0x488be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951152)));
    // 0x488be4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x488BE4u;
    {
        const bool branch_taken_0x488be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488be4) {
            ctx->pc = 0x488C08u;
            goto label_488c08;
        }
    }
    ctx->pc = 0x488BECu;
    // 0x488bec: 0x8f84c0f0  lw          $a0, -0x3F10($gp)
    ctx->pc = 0x488becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951152)));
    // 0x488bf0: 0xc122318  jal         func_488C60
    ctx->pc = 0x488BF0u;
    SET_GPR_U32(ctx, 31, 0x488BF8u);
    ctx->pc = 0x488C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C60u, 0x488BF0u, 0x488BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488BF8u;
label_488bf8:
    // 0x488bf8: 0x8f84c0f0  lw          $a0, -0x3F10($gp)
    ctx->pc = 0x488bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951152)));
    // 0x488bfc: 0xc119c5c  jal         func_467170
    ctx->pc = 0x488BFCu;
    SET_GPR_U32(ctx, 31, 0x488C04u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x488BFCu, 0x488C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488C04u;
label_488c04:
    // 0x488c04: 0xaf80c0f0  sw          $zero, -0x3F10($gp)
    ctx->pc = 0x488c04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951152), GPR_U32(ctx, 0));
label_488c08:
    // 0x488c08: 0x8f82c0cc  lw          $v0, -0x3F34($gp)
    ctx->pc = 0x488c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951116)));
    // 0x488c0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x488C0Cu;
    {
        const bool branch_taken_0x488c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488c0c) {
            ctx->pc = 0x488C1Cu;
            goto label_488c1c;
        }
    }
    ctx->pc = 0x488C14u;
    // 0x488c14: 0xc1062bc  jal         func_418AF0
    ctx->pc = 0x488C14u;
    SET_GPR_U32(ctx, 31, 0x488C1Cu);
    ctx->pc = 0x418AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418AF0u, 0x488C14u, 0x488C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488C1Cu;
label_488c1c:
    // 0x488c1c: 0x8f82c0c8  lw          $v0, -0x3F38($gp)
    ctx->pc = 0x488c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951112)));
    // 0x488c20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x488C20u;
    {
        const bool branch_taken_0x488c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488c20) {
            ctx->pc = 0x488C30u;
            goto label_488c30;
        }
    }
    ctx->pc = 0x488C28u;
    // 0x488c28: 0xc106332  jal         func_418CC8
    ctx->pc = 0x488C28u;
    SET_GPR_U32(ctx, 31, 0x488C30u);
    ctx->pc = 0x418CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418CC8u, 0x488C28u, 0x488C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488C30u;
label_488c30:
    // 0x488c30: 0x8f82c0c4  lw          $v0, -0x3F3C($gp)
    ctx->pc = 0x488c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951108)));
    // 0x488c34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x488C34u;
    {
        const bool branch_taken_0x488c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488c34) {
            ctx->pc = 0x488C44u;
            goto label_488c44;
        }
    }
    ctx->pc = 0x488C3Cu;
    // 0x488c3c: 0xc106410  jal         func_419040
    ctx->pc = 0x488C3Cu;
    SET_GPR_U32(ctx, 31, 0x488C44u);
    ctx->pc = 0x419040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419040u, 0x488C3Cu, 0x488C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488C44u;
label_488c44:
    // 0x488c44: 0xc11dc5c  jal         func_477170
    ctx->pc = 0x488C44u;
    SET_GPR_U32(ctx, 31, 0x488C4Cu);
    ctx->pc = 0x477170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477170u, 0x488C44u, 0x488C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488C4Cu;
label_488c4c:
    // 0x488c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x488c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488c50:
    // 0x488c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488c54: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x488c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x488c58: 0x3e00008  jr          $ra
    ctx->pc = 0x488C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488C60u;
}
