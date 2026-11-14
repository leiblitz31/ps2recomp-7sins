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

// Function: sub_002C76C0
// Address: 0x2c76c0 - 0x2c77a0
void sub_002C76C0_0x2c76c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C76C0_0x2c76c0");
#endif

    switch (ctx->pc) {
        case 0x2c76d8u: goto label_2c76d8;
        case 0x2c76e8u: goto label_2c76e8;
        case 0x2c7718u: goto label_2c7718;
        case 0x2c7724u: goto label_2c7724;
        case 0x2c7730u: goto label_2c7730;
        case 0x2c7748u: goto label_2c7748;
        case 0x2c7754u: goto label_2c7754;
        case 0x2c7778u: goto label_2c7778;
        case 0x2c7784u: goto label_2c7784;
        default: break;
    }

    ctx->pc = 0x2c76c0u;

    // 0x2c76c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c76c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c76c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c76c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c76c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c76cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c76ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c76d0: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2C76D0u;
    SET_GPR_U32(ctx, 31, 0x2C76D8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2C76D0u, 0x2C76D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C76D8u;
label_2c76d8:
    // 0x2c76d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c76dc: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2c76dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2c76e0: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2C76E0u;
    SET_GPR_U32(ctx, 31, 0x2C76E8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2C76E0u, 0x2C76E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C76E8u;
label_2c76e8:
    // 0x2c76e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c76ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c76ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c76f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c76f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c76f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C76F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C76F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C76FCu;
    // 0x2c76fc: 0x0  nop
    ctx->pc = 0x2c76fcu;
    // NOP
    // 0x2c7700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c7700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c7704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c7704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c7708: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c7708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c770c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7710: 0xc0b2124  jal         func_2C8490
    ctx->pc = 0x2C7710u;
    SET_GPR_U32(ctx, 31, 0x2C7718u);
    ctx->pc = 0x2C8490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8490u, 0x2C7710u, 0x2C7718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7718u;
label_2c7718:
    // 0x2c7718: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c7718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c771c: 0xc0b1de8  jal         func_2C77A0
    ctx->pc = 0x2C771Cu;
    SET_GPR_U32(ctx, 31, 0x2C7724u);
    ctx->pc = 0x2C77A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C77A0u, 0x2C771Cu, 0x2C7724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7724u;
label_2c7724:
    // 0x2c7724: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c7724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7728: 0xc0b2900  jal         func_2CA400
    ctx->pc = 0x2C7728u;
    SET_GPR_U32(ctx, 31, 0x2C7730u);
    ctx->pc = 0x2CA400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA400u, 0x2C7728u, 0x2C7730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7730u;
label_2c7730:
    // 0x2c7730: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c7730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7734: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c7734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7738: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x2c7738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2c773c: 0x24450084  addiu       $a1, $v0, 0x84
    ctx->pc = 0x2c773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2c7740: 0xc0b4374  jal         func_2D0DD0
    ctx->pc = 0x2C7740u;
    SET_GPR_U32(ctx, 31, 0x2C7748u);
    ctx->pc = 0x2D0DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DD0u, 0x2C7740u, 0x2C7748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7748u;
label_2c7748:
    // 0x2c7748: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c7748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c774c: 0xc0b2538  jal         func_2C94E0
    ctx->pc = 0x2C774Cu;
    SET_GPR_U32(ctx, 31, 0x2C7754u);
    ctx->pc = 0x2C94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C94E0u, 0x2C774Cu, 0x2C7754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7754u;
label_2c7754:
    // 0x2c7754: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2c7754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2c7758: 0x2484c320  addiu       $a0, $a0, -0x3CE0
    ctx->pc = 0x2c7758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951712));
    // 0x2c775c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2c775cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x2c7760: 0x24a5c330  addiu       $a1, $a1, -0x3CD0
    ctx->pc = 0x2c7760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951728));
    // 0x2c7764: 0x8f86bcac  lw          $a2, -0x4354($gp)
    ctx->pc = 0x2c7764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950060)));
    // 0x2c7768: 0x8f87bcac  lw          $a3, -0x4354($gp)
    ctx->pc = 0x2c7768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950060)));
    // 0x2c776c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c776cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7770: 0xc11f1cc  jal         func_47C730
    ctx->pc = 0x2C7770u;
    SET_GPR_U32(ctx, 31, 0x2C7778u);
    ctx->pc = 0x47C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C730u, 0x2C7770u, 0x2C7778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7778u;
label_2c7778:
    // 0x2c7778: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c7778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c777c: 0xc0b2778  jal         func_2C9DE0
    ctx->pc = 0x2C777Cu;
    SET_GPR_U32(ctx, 31, 0x2C7784u);
    ctx->pc = 0x2C9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9DE0u, 0x2C777Cu, 0x2C7784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7784u;
label_2c7784:
    // 0x2c7784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c7784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7788: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c7788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c778c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C778Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C778Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7794u;
    // 0x2c7794: 0x0  nop
    ctx->pc = 0x2c7794u;
    // NOP
    // 0x2c7798: 0x0  nop
    ctx->pc = 0x2c7798u;
    // NOP
    // 0x2c779c: 0x0  nop
    ctx->pc = 0x2c779cu;
    // NOP
    ctx->pc = 0x2c77a0u;
}
