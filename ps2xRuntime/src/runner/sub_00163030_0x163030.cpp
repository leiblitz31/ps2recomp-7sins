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

// Function: sub_00163030
// Address: 0x163030 - 0x1630e0
void sub_00163030_0x163030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163030_0x163030");
#endif

    switch (ctx->pc) {
        case 0x163050u: goto label_163050;
        case 0x163070u: goto label_163070;
        case 0x163080u: goto label_163080;
        case 0x163090u: goto label_163090;
        case 0x1630a0u: goto label_1630a0;
        case 0x1630b0u: goto label_1630b0;
        case 0x1630c0u: goto label_1630c0;
        default: break;
    }

    ctx->pc = 0x163030u;

    // 0x163030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x163038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16303c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16303cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x163040: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163044: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x163044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163048: 0xc0557e8  jal         func_155FA0
    ctx->pc = 0x163048u;
    SET_GPR_U32(ctx, 31, 0x163050u);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x163048u, 0x163050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163050u;
label_163050:
    // 0x163050: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x163050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x163054: 0x24633ab0  addiu       $v1, $v1, 0x3AB0
    ctx->pc = 0x163054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15024));
    // 0x163058: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16305c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16305cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x163060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163064: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x163064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x163068: 0xc058cd8  jal         func_163360
    ctx->pc = 0x163068u;
    SET_GPR_U32(ctx, 31, 0x163070u);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x163068u, 0x163070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163070u;
label_163070:
    // 0x163070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163074: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x163074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x163078: 0xc058cd8  jal         func_163360
    ctx->pc = 0x163078u;
    SET_GPR_U32(ctx, 31, 0x163080u);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x163078u, 0x163080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163080u;
label_163080:
    // 0x163080: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163084: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x163084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x163088: 0xc058cd8  jal         func_163360
    ctx->pc = 0x163088u;
    SET_GPR_U32(ctx, 31, 0x163090u);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x163088u, 0x163090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163090u;
label_163090:
    // 0x163090: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163094: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x163094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x163098: 0xc056254  jal         func_158950
    ctx->pc = 0x163098u;
    SET_GPR_U32(ctx, 31, 0x1630A0u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x163098u, 0x1630A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1630A0u;
label_1630a0:
    // 0x1630a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1630a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1630a4: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1630a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1630a8: 0xc058cd8  jal         func_163360
    ctx->pc = 0x1630A8u;
    SET_GPR_U32(ctx, 31, 0x1630B0u);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x1630A8u, 0x1630B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1630B0u;
label_1630b0:
    // 0x1630b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1630b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1630b4: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1630b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1630b8: 0xc056254  jal         func_158950
    ctx->pc = 0x1630B8u;
    SET_GPR_U32(ctx, 31, 0x1630C0u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1630B8u, 0x1630C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1630C0u;
label_1630c0:
    // 0x1630c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1630c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1630c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1630c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1630c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1630c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1630cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1630CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1630CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1630D4u;
    // 0x1630d4: 0x0  nop
    ctx->pc = 0x1630d4u;
    // NOP
    // 0x1630d8: 0x0  nop
    ctx->pc = 0x1630d8u;
    // NOP
    // 0x1630dc: 0x0  nop
    ctx->pc = 0x1630dcu;
    // NOP
    ctx->pc = 0x1630e0u;
}
