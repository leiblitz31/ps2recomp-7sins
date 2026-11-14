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

// Function: sub_0046CA40
// Address: 0x46ca40 - 0x46cae0
void sub_0046CA40_0x46ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CA40_0x46ca40");
#endif

    switch (ctx->pc) {
        case 0x46ca60u: goto label_46ca60;
        case 0x46ca88u: goto label_46ca88;
        case 0x46caa0u: goto label_46caa0;
        case 0x46cab8u: goto label_46cab8;
        default: break;
    }

    ctx->pc = 0x46ca40u;

    // 0x46ca40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46ca40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46ca44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46ca44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46ca48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46ca4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46ca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46ca50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46ca50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ca54: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46ca54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ca58: 0xc11b2b8  jal         func_46CAE0
    ctx->pc = 0x46CA58u;
    SET_GPR_U32(ctx, 31, 0x46CA60u);
    ctx->pc = 0x46CAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CAE0u, 0x46CA58u, 0x46CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CA60u;
label_46ca60:
    // 0x46ca60: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46ca64: 0x24636d08  addiu       $v1, $v1, 0x6D08
    ctx->pc = 0x46ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27912));
    // 0x46ca68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ca6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46ca70: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ca74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ca78: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x46ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x46ca7c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x46ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x46ca80: 0xc042844  jal         func_10A110
    ctx->pc = 0x46CA80u;
    SET_GPR_U32(ctx, 31, 0x46CA88u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x46CA80u, 0x46CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CA88u;
label_46ca88:
    // 0x46ca88: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ca8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ca90: 0x24640024  addiu       $a0, $v1, 0x24
    ctx->pc = 0x46ca90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x46ca94: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x46ca94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x46ca98: 0xc042844  jal         func_10A110
    ctx->pc = 0x46CA98u;
    SET_GPR_U32(ctx, 31, 0x46CAA0u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x46CA98u, 0x46CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CAA0u;
label_46caa0:
    // 0x46caa0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46caa4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46caa8: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x46caa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x46caac: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x46caacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x46cab0: 0xc042844  jal         func_10A110
    ctx->pc = 0x46CAB0u;
    SET_GPR_U32(ctx, 31, 0x46CAB8u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x46CAB0u, 0x46CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CAB8u;
label_46cab8:
    // 0x46cab8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cabc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x46cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x46cac0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46cac4: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x46cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x46cac8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46cacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46caccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46cad0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46cad4: 0x3e00008  jr          $ra
    ctx->pc = 0x46CAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CADCu;
    // 0x46cadc: 0x0  nop
    ctx->pc = 0x46cadcu;
    // NOP
    ctx->pc = 0x46cae0u;
}
