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

// Function: sub_0023CBE0
// Address: 0x23cbe0 - 0x23cce0
void sub_0023CBE0_0x23cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CBE0_0x23cbe0");
#endif

    switch (ctx->pc) {
        case 0x23cc04u: goto label_23cc04;
        case 0x23cc14u: goto label_23cc14;
        case 0x23cc24u: goto label_23cc24;
        case 0x23cc3cu: goto label_23cc3c;
        case 0x23cc48u: goto label_23cc48;
        case 0x23cc5cu: goto label_23cc5c;
        case 0x23cc78u: goto label_23cc78;
        case 0x23cc88u: goto label_23cc88;
        case 0x23cca0u: goto label_23cca0;
        case 0x23ccb0u: goto label_23ccb0;
        case 0x23ccc0u: goto label_23ccc0;
        case 0x23ccccu: goto label_23cccc;
        default: break;
    }

    ctx->pc = 0x23cbe0u;

    // 0x23cbe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23cbe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23cbe8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x23cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x23cbec: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x23cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x23cbf0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x23cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x23cbf4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x23cbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23cbf8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x23cbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23cbfc: 0xc08f3e8  jal         func_23CFA0
    ctx->pc = 0x23CBFCu;
    SET_GPR_U32(ctx, 31, 0x23CC04u);
    ctx->pc = 0x23CFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CFA0u, 0x23CBFCu, 0x23CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC04u;
label_23cc04:
    // 0x23cc04: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x23cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x23cc08: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x23cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23cc0c: 0xc08f3bc  jal         func_23CEF0
    ctx->pc = 0x23CC0Cu;
    SET_GPR_U32(ctx, 31, 0x23CC14u);
    ctx->pc = 0x23CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CEF0u, 0x23CC0Cu, 0x23CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC14u;
label_23cc14:
    // 0x23cc14: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x23cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x23cc18: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x23cc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x23cc1c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x23CC1Cu;
    SET_GPR_U32(ctx, 31, 0x23CC24u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x23CC1Cu, 0x23CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC24u;
label_23cc24:
    // 0x23cc24: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23CC24u;
    {
        const bool branch_taken_0x23cc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc24) {
            ctx->pc = 0x23CC64u;
            goto label_23cc64;
        }
    }
    ctx->pc = 0x23CC2Cu;
    // 0x23cc2c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x23cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x23cc30: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x23cc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23cc34: 0xc08f3a0  jal         func_23CE80
    ctx->pc = 0x23CC34u;
    SET_GPR_U32(ctx, 31, 0x23CC3Cu);
    ctx->pc = 0x23CE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE80u, 0x23CC34u, 0x23CC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC3Cu;
label_23cc3c:
    // 0x23cc3c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x23cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x23cc40: 0xc08f398  jal         func_23CE60
    ctx->pc = 0x23CC40u;
    SET_GPR_U32(ctx, 31, 0x23CC48u);
    ctx->pc = 0x23CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE60u, 0x23CC40u, 0x23CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC48u;
label_23cc48:
    // 0x23cc48: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x23cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x23cc4c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23cc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23cc50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23cc50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc54: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23CC54u;
    SET_GPR_U32(ctx, 31, 0x23CC5Cu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23CC54u, 0x23CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC5Cu;
label_23cc5c:
    // 0x23cc5c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23CC5Cu;
    {
        const bool branch_taken_0x23cc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc5c) {
            ctx->pc = 0x23CCC0u;
            goto label_23ccc0;
        }
    }
    ctx->pc = 0x23CC64u;
label_23cc64:
    // 0x23cc64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23cc68: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23cc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23cc6c: 0x27869da0  addiu       $a2, $gp, -0x6260
    ctx->pc = 0x23cc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942112));
    // 0x23cc70: 0xc08f384  jal         func_23CE10
    ctx->pc = 0x23CC70u;
    SET_GPR_U32(ctx, 31, 0x23CC78u);
    ctx->pc = 0x23CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE10u, 0x23CC70u, 0x23CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC78u;
label_23cc78:
    // 0x23cc78: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x23cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x23cc7c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x23cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x23cc80: 0xc08f378  jal         func_23CDE0
    ctx->pc = 0x23CC80u;
    SET_GPR_U32(ctx, 31, 0x23CC88u);
    ctx->pc = 0x23CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CDE0u, 0x23CC80u, 0x23CC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC88u;
label_23cc88:
    // 0x23cc88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23cc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23cc8c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x23cc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23cc90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23cc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc94: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x23cc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23cc98: 0xc08f360  jal         func_23CD80
    ctx->pc = 0x23CC98u;
    SET_GPR_U32(ctx, 31, 0x23CCA0u);
    ctx->pc = 0x23CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CD80u, 0x23CC98u, 0x23CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCA0u;
label_23cca0:
    // 0x23cca0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x23cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x23cca4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x23cca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23cca8: 0xc08f350  jal         func_23CD40
    ctx->pc = 0x23CCA8u;
    SET_GPR_U32(ctx, 31, 0x23CCB0u);
    ctx->pc = 0x23CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CD40u, 0x23CCA8u, 0x23CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCB0u;
label_23ccb0:
    // 0x23ccb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23ccb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23ccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ccb8: 0xc08f338  jal         func_23CCE0
    ctx->pc = 0x23CCB8u;
    SET_GPR_U32(ctx, 31, 0x23CCC0u);
    ctx->pc = 0x23CCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CCE0u, 0x23CCB8u, 0x23CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCC0u;
label_23ccc0:
    // 0x23ccc0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x23ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x23ccc4: 0xc08f398  jal         func_23CE60
    ctx->pc = 0x23CCC4u;
    SET_GPR_U32(ctx, 31, 0x23CCCCu);
    ctx->pc = 0x23CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE60u, 0x23CCC4u, 0x23CCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCCCu;
label_23cccc:
    // 0x23cccc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x23ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x23ccd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ccd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ccd4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x23ccd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23ccd8: 0x3e00008  jr          $ra
    ctx->pc = 0x23CCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CCE0u;
}
