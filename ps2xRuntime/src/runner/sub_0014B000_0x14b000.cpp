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

// Function: sub_0014B000
// Address: 0x14b000 - 0x14b0e0
void sub_0014B000_0x14b000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B000_0x14b000");
#endif

    switch (ctx->pc) {
        case 0x14b01cu: goto label_14b01c;
        case 0x14b058u: goto label_14b058;
        case 0x14b06cu: goto label_14b06c;
        case 0x14b07cu: goto label_14b07c;
        case 0x14b084u: goto label_14b084;
        case 0x14b090u: goto label_14b090;
        case 0x14b0a0u: goto label_14b0a0;
        case 0x14b0b4u: goto label_14b0b4;
        case 0x14b0c4u: goto label_14b0c4;
        default: break;
    }

    ctx->pc = 0x14b000u;

    // 0x14b000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14b000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14b004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b008: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14b008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14b00c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b010: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x14b010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14b014: 0xc052bdc  jal         func_14AF70
    ctx->pc = 0x14B014u;
    SET_GPR_U32(ctx, 31, 0x14B01Cu);
    ctx->pc = 0x14AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF70u, 0x14B014u, 0x14B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B01Cu;
label_14b01c:
    // 0x14b01c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x14b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x14b020: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b024: 0xa0430024  sb          $v1, 0x24($v0)
    ctx->pc = 0x14b024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 36), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b028: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x14b028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x14b02c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b030: 0xa0430025  sb          $v1, 0x25($v0)
    ctx->pc = 0x14b030u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b034: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x14b034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x14b038: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b03c: 0xa0430026  sb          $v1, 0x26($v0)
    ctx->pc = 0x14b03cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b040: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14b040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14b044: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b048: 0xa0430027  sb          $v1, 0x27($v0)
    ctx->pc = 0x14b048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 39), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b04c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x14b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14b050: 0xc052a9c  jal         func_14AA70
    ctx->pc = 0x14B050u;
    SET_GPR_U32(ctx, 31, 0x14B058u);
    ctx->pc = 0x14AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA70u, 0x14B050u, 0x14B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B058u;
label_14b058:
    // 0x14b058: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b05c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x14b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x14b060: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x14b060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x14b064: 0xc052a7c  jal         func_14A9F0
    ctx->pc = 0x14B064u;
    SET_GPR_U32(ctx, 31, 0x14B06Cu);
    ctx->pc = 0x14A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A9F0u, 0x14B064u, 0x14B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B06Cu;
label_14b06c:
    // 0x14b06c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x14b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14b070: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x14b070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x14b074: 0xc052a6c  jal         func_14A9B0
    ctx->pc = 0x14B074u;
    SET_GPR_U32(ctx, 31, 0x14B07Cu);
    ctx->pc = 0x14A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A9B0u, 0x14B074u, 0x14B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B07Cu;
label_14b07c:
    // 0x14b07c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B07Cu;
    {
        const bool branch_taken_0x14b07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b07c) {
            ctx->pc = 0x14B0A0u;
            goto label_14b0a0;
        }
    }
    ctx->pc = 0x14B084u;
label_14b084:
    // 0x14b084: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x14b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14b088: 0xc052a58  jal         func_14A960
    ctx->pc = 0x14B088u;
    SET_GPR_U32(ctx, 31, 0x14B090u);
    ctx->pc = 0x14A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A960u, 0x14B088u, 0x14B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B090u;
label_14b090:
    // 0x14b090: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x14b090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b094: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x14b094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14b098: 0xc052a48  jal         func_14A920
    ctx->pc = 0x14B098u;
    SET_GPR_U32(ctx, 31, 0x14B0A0u);
    ctx->pc = 0x14A920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A920u, 0x14B098u, 0x14B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0A0u;
label_14b0a0:
    // 0x14b0a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b0a4: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x14b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x14b0a8: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x14b0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x14b0ac: 0xc052a1c  jal         func_14A870
    ctx->pc = 0x14B0ACu;
    SET_GPR_U32(ctx, 31, 0x14B0B4u);
    ctx->pc = 0x14A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A870u, 0x14B0ACu, 0x14B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0B4u;
label_14b0b4:
    // 0x14b0b4: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x14b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14b0b8: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x14b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x14b0bc: 0xc041998  jal         func_106660
    ctx->pc = 0x14B0BCu;
    SET_GPR_U32(ctx, 31, 0x14B0C4u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x14B0BCu, 0x14B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0C4u;
label_14b0c4:
    // 0x14b0c4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14B0C4u;
    {
        const bool branch_taken_0x14b0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b0c4) {
            ctx->pc = 0x14B084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b084;
        }
    }
    ctx->pc = 0x14B0CCu;
    // 0x14b0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b0d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14b0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B0DCu;
    // 0x14b0dc: 0x0  nop
    ctx->pc = 0x14b0dcu;
    // NOP
    ctx->pc = 0x14b0e0u;
}
