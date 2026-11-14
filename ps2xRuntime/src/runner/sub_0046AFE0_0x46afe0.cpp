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

// Function: sub_0046AFE0
// Address: 0x46afe0 - 0x46b0a0
void sub_0046AFE0_0x46afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AFE0_0x46afe0");
#endif

    switch (ctx->pc) {
        case 0x46b014u: goto label_46b014;
        case 0x46b024u: goto label_46b024;
        case 0x46b03cu: goto label_46b03c;
        case 0x46b050u: goto label_46b050;
        case 0x46b06cu: goto label_46b06c;
        default: break;
    }

    ctx->pc = 0x46afe0u;

    // 0x46afe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x46afe4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x46afe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x46afe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46afec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46afecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46aff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46aff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46aff4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x46aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x46aff8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x46aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x46affc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b000: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x46b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x46b004: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x46b004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x46b008: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x46b008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b00c: 0xc11ad88  jal         func_46B620
    ctx->pc = 0x46B00Cu;
    SET_GPR_U32(ctx, 31, 0x46B014u);
    ctx->pc = 0x46B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B620u, 0x46B00Cu, 0x46B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B014u;
label_46b014:
    // 0x46b014: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x46b014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b018: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x46b018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46b01c: 0xc11a644  jal         func_469910
    ctx->pc = 0x46B01Cu;
    SET_GPR_U32(ctx, 31, 0x46B024u);
    ctx->pc = 0x469910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469910u, 0x46B01Cu, 0x46B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B024u;
label_46b024:
    // 0x46b024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46b024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b028: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46b028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b02c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b030: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46b030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b034: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46B034u;
    SET_GPR_U32(ctx, 31, 0x46B03Cu);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46B034u, 0x46B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B03Cu;
label_46b03c:
    // 0x46b03c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x46b03cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46b040: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x46b040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b044: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x46b044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46b048: 0xc11ac28  jal         func_46B0A0
    ctx->pc = 0x46B048u;
    SET_GPR_U32(ctx, 31, 0x46B050u);
    ctx->pc = 0x46B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B0A0u, 0x46B048u, 0x46B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B050u;
label_46b050:
    // 0x46b050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46b050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b054: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x46b054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x46b058: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b05c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b060: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46b060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b064: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46B064u;
    SET_GPR_U32(ctx, 31, 0x46B06Cu);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46B064u, 0x46B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B06Cu;
label_46b06c:
    // 0x46b06c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x46b06cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x46b070: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x46b070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b074: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x46b074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x46b078: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x46b07c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x46b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x46b080: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x46b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x46b084: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x46b084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46b088: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46b088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b08c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46b08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46b090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b094: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x46b094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46b098: 0x3e00008  jr          $ra
    ctx->pc = 0x46B098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B0A0u;
}
