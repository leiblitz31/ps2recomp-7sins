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

// Function: sub_00194A30
// Address: 0x194a30 - 0x194af0
void sub_00194A30_0x194a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194A30_0x194a30");
#endif

    switch (ctx->pc) {
        case 0x194a4cu: goto label_194a4c;
        case 0x194a6cu: goto label_194a6c;
        case 0x194a7cu: goto label_194a7c;
        case 0x194a8cu: goto label_194a8c;
        case 0x194a9cu: goto label_194a9c;
        case 0x194aacu: goto label_194aac;
        case 0x194ac8u: goto label_194ac8;
        default: break;
    }

    ctx->pc = 0x194a30u;

    // 0x194a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194a38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194a3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194a40: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x194a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x194a44: 0xc064924  jal         func_192490
    ctx->pc = 0x194A44u;
    SET_GPR_U32(ctx, 31, 0x194A4Cu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x194A44u, 0x194A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A4Cu;
label_194a4c:
    // 0x194a4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x194a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x194a50: 0x246344b0  addiu       $v1, $v1, 0x44B0
    ctx->pc = 0x194a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17584));
    // 0x194a54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194a58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x194a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x194a5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194a60: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x194a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x194a64: 0xc056254  jal         func_158950
    ctx->pc = 0x194A64u;
    SET_GPR_U32(ctx, 31, 0x194A6Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x194A64u, 0x194A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A6Cu;
label_194a6c:
    // 0x194a6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194a70: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x194a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x194a74: 0xc065550  jal         func_195540
    ctx->pc = 0x194A74u;
    SET_GPR_U32(ctx, 31, 0x194A7Cu);
    ctx->pc = 0x195540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195540u, 0x194A74u, 0x194A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A7Cu;
label_194a7c:
    // 0x194a7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194a80: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x194a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x194a84: 0xc0654f8  jal         func_1953E0
    ctx->pc = 0x194A84u;
    SET_GPR_U32(ctx, 31, 0x194A8Cu);
    ctx->pc = 0x1953E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953E0u, 0x194A84u, 0x194A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A8Cu;
label_194a8c:
    // 0x194a8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194a90: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x194a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x194a94: 0xc0654a0  jal         func_195280
    ctx->pc = 0x194A94u;
    SET_GPR_U32(ctx, 31, 0x194A9Cu);
    ctx->pc = 0x195280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195280u, 0x194A94u, 0x194A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A9Cu;
label_194a9c:
    // 0x194a9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194aa0: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x194aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x194aa4: 0xc056f90  jal         func_15BE40
    ctx->pc = 0x194AA4u;
    SET_GPR_U32(ctx, 31, 0x194AACu);
    ctx->pc = 0x15BE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BE40u, 0x194AA4u, 0x194AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194AACu;
label_194aac:
    // 0x194aac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194ab0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x194ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x194ab4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x194ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x194ab8: 0x24a55c90  addiu       $a1, $a1, 0x5C90
    ctx->pc = 0x194ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23696));
    // 0x194abc: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x194abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x194ac0: 0xc08e514  jal         func_239450
    ctx->pc = 0x194AC0u;
    SET_GPR_U32(ctx, 31, 0x194AC8u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x194AC0u, 0x194AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194AC8u;
label_194ac8:
    // 0x194ac8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194acc: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x194accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x194ad0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194ad8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x194ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x194adc: 0x3e00008  jr          $ra
    ctx->pc = 0x194ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194AE4u;
    // 0x194ae4: 0x0  nop
    ctx->pc = 0x194ae4u;
    // NOP
    // 0x194ae8: 0x0  nop
    ctx->pc = 0x194ae8u;
    // NOP
    // 0x194aec: 0x0  nop
    ctx->pc = 0x194aecu;
    // NOP
    ctx->pc = 0x194af0u;
}
