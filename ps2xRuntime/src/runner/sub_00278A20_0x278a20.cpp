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

// Function: sub_00278A20
// Address: 0x278a20 - 0x278af0
void sub_00278A20_0x278a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278A20_0x278a20");
#endif

    switch (ctx->pc) {
        case 0x278a38u: goto label_278a38;
        case 0x278a58u: goto label_278a58;
        case 0x278a68u: goto label_278a68;
        case 0x278a90u: goto label_278a90;
        case 0x278aa0u: goto label_278aa0;
        default: break;
    }

    ctx->pc = 0x278a20u;

    // 0x278a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278a28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x278a2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278a30: 0xc084f04  jal         func_213C10
    ctx->pc = 0x278A30u;
    SET_GPR_U32(ctx, 31, 0x278A38u);
    ctx->pc = 0x213C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C10u, 0x278A30u, 0x278A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A38u;
label_278a38:
    // 0x278a38: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x278a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x278a3c: 0x24635f50  addiu       $v1, $v1, 0x5F50
    ctx->pc = 0x278a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24400));
    // 0x278a40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278a44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x278a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x278a48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278a4c: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x278a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x278a50: 0xc09e424  jal         func_279090
    ctx->pc = 0x278A50u;
    SET_GPR_U32(ctx, 31, 0x278A58u);
    ctx->pc = 0x279090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279090u, 0x278A50u, 0x278A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A58u;
label_278a58:
    // 0x278a58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278a5c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x278a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x278a60: 0xc09e3cc  jal         func_278F30
    ctx->pc = 0x278A60u;
    SET_GPR_U32(ctx, 31, 0x278A68u);
    ctx->pc = 0x278F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278F30u, 0x278A60u, 0x278A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A68u;
label_278a68:
    // 0x278a68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278a6c: 0xa0400064  sb          $zero, 0x64($v0)
    ctx->pc = 0x278a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x278a70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278a74: 0xa0400065  sb          $zero, 0x65($v0)
    ctx->pc = 0x278a74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 101), (uint8_t)GPR_U32(ctx, 0));
    // 0x278a78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278a7c: 0xa0400066  sb          $zero, 0x66($v0)
    ctx->pc = 0x278a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x278a80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278a84: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x278a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x278a88: 0xc040b6c  jal         func_102DB0
    ctx->pc = 0x278A88u;
    SET_GPR_U32(ctx, 31, 0x278A90u);
    ctx->pc = 0x102DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102DB0u, 0x278A88u, 0x278A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A90u;
label_278a90:
    // 0x278a90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278a94: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x278a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x278a98: 0xc064238  jal         func_1908E0
    ctx->pc = 0x278A98u;
    SET_GPR_U32(ctx, 31, 0x278AA0u);
    ctx->pc = 0x1908E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908E0u, 0x278A98u, 0x278AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AA0u;
label_278aa0:
    // 0x278aa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278aa4: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x278aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x278aa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278aac: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x278aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x278ab0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278ab4: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x278ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x278ab8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278abc: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x278abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x278ac0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278ac4: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x278ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
    // 0x278ac8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278acc: 0xaf82bc04  sw          $v0, -0x43FC($gp)
    ctx->pc = 0x278accu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949892), GPR_U32(ctx, 2));
    // 0x278ad0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278ad8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x278ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x278adc: 0x3e00008  jr          $ra
    ctx->pc = 0x278ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278AE4u;
    // 0x278ae4: 0x0  nop
    ctx->pc = 0x278ae4u;
    // NOP
    // 0x278ae8: 0x0  nop
    ctx->pc = 0x278ae8u;
    // NOP
    // 0x278aec: 0x0  nop
    ctx->pc = 0x278aecu;
    // NOP
    ctx->pc = 0x278af0u;
}
