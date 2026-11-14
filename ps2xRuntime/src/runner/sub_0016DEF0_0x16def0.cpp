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

// Function: sub_0016DEF0
// Address: 0x16def0 - 0x16df90
void sub_0016DEF0_0x16def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DEF0_0x16def0");
#endif

    switch (ctx->pc) {
        case 0x16df0cu: goto label_16df0c;
        case 0x16df2cu: goto label_16df2c;
        case 0x16df3cu: goto label_16df3c;
        default: break;
    }

    ctx->pc = 0x16def0u;

    // 0x16def0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16def0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16def4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16def4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16def8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16def8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16defc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16defcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16df00: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x16df00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16df04: 0xc0557e8  jal         func_155FA0
    ctx->pc = 0x16DF04u;
    SET_GPR_U32(ctx, 31, 0x16DF0Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x16DF04u, 0x16DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF0Cu;
label_16df0c:
    // 0x16df0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x16df10: 0x24633d50  addiu       $v1, $v1, 0x3D50
    ctx->pc = 0x16df10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15696));
    // 0x16df14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16df14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16df18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16df18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16df1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16df20: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x16df20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x16df24: 0xc05b888  jal         func_16E220
    ctx->pc = 0x16DF24u;
    SET_GPR_U32(ctx, 31, 0x16DF2Cu);
    ctx->pc = 0x16E220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E220u, 0x16DF24u, 0x16DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF2Cu;
label_16df2c:
    // 0x16df2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16df30: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16df30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x16df34: 0xc05c5b4  jal         func_1716D0
    ctx->pc = 0x16DF34u;
    SET_GPR_U32(ctx, 31, 0x16DF3Cu);
    ctx->pc = 0x1716D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1716D0u, 0x16DF34u, 0x16DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF3Cu;
label_16df3c:
    // 0x16df3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16df40: 0xac4000c4  sw          $zero, 0xC4($v0)
    ctx->pc = 0x16df40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
    // 0x16df44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16df44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16df48: 0xaf82bad0  sw          $v0, -0x4530($gp)
    ctx->pc = 0x16df48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949584), GPR_U32(ctx, 2));
    // 0x16df4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16df50: 0xa04000c8  sb          $zero, 0xC8($v0)
    ctx->pc = 0x16df50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x16df54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16df54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16df58: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x16df58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    // 0x16df5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16df60: 0xac4000d0  sw          $zero, 0xD0($v0)
    ctx->pc = 0x16df60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    // 0x16df64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16df64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16df68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16df6c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x16df6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x16df70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16df74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16df74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16df78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16df78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16df7c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DF84u;
    // 0x16df84: 0x0  nop
    ctx->pc = 0x16df84u;
    // NOP
    // 0x16df88: 0x0  nop
    ctx->pc = 0x16df88u;
    // NOP
    // 0x16df8c: 0x0  nop
    ctx->pc = 0x16df8cu;
    // NOP
    ctx->pc = 0x16df90u;
}
