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

// Function: sub_00468E70
// Address: 0x468e70 - 0x468fc0
void sub_00468E70_0x468e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468E70_0x468e70");
#endif

    switch (ctx->pc) {
        case 0x468e88u: goto label_468e88;
        case 0x468ea8u: goto label_468ea8;
        case 0x468ec8u: goto label_468ec8;
        case 0x468ed8u: goto label_468ed8;
        case 0x468eecu: goto label_468eec;
        case 0x468efcu: goto label_468efc;
        case 0x468f0cu: goto label_468f0c;
        case 0x468f70u: goto label_468f70;
        case 0x468f80u: goto label_468f80;
        case 0x468fa0u: goto label_468fa0;
        default: break;
    }

    ctx->pc = 0x468e70u;

    // 0x468e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x468e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x468e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x468e78: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x468e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x468e7c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x468e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x468e80: 0xc11af1c  jal         func_46BC70
    ctx->pc = 0x468E80u;
    SET_GPR_U32(ctx, 31, 0x468E88u);
    ctx->pc = 0x46BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BC70u, 0x468E80u, 0x468E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468E88u;
label_468e88:
    // 0x468e88: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x468e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x468e8c: 0x24636cb8  addiu       $v1, $v1, 0x6CB8
    ctx->pc = 0x468e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27832));
    // 0x468e90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x468e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x468e94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x468e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x468e98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x468e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x468e9c: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x468e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x468ea0: 0xc0495d4  jal         func_125750
    ctx->pc = 0x468EA0u;
    SET_GPR_U32(ctx, 31, 0x468EA8u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x468EA0u, 0x468EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468EA8u;
label_468ea8:
    // 0x468ea8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x468ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x468eac: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x468eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x468eb0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x468eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x468eb4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x468eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x468eb8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x468eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x468ebc: 0x2785b2ec  addiu       $a1, $gp, -0x4D14
    ctx->pc = 0x468ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947564));
    // 0x468ec0: 0xc040304  jal         func_100C10
    ctx->pc = 0x468EC0u;
    SET_GPR_U32(ctx, 31, 0x468EC8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x468EC0u, 0x468EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468EC8u;
label_468ec8:
    // 0x468ec8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x468ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x468ecc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x468eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x468ed0: 0xc119568  jal         func_4655A0
    ctx->pc = 0x468ED0u;
    SET_GPR_U32(ctx, 31, 0x468ED8u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x468ED0u, 0x468ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468ED8u;
label_468ed8:
    // 0x468ed8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x468ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x468edc: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x468edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x468ee0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x468ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x468ee4: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x468EE4u;
    SET_GPR_U32(ctx, 31, 0x468EECu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x468EE4u, 0x468EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468EECu;
label_468eec:
    // 0x468eec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x468eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x468ef0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x468ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x468ef4: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x468EF4u;
    SET_GPR_U32(ctx, 31, 0x468EFCu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x468EF4u, 0x468EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468EFCu;
label_468efc:
    // 0x468efc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x468efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x468f00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x468f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x468f04: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x468F04u;
    SET_GPR_U32(ctx, 31, 0x468F0Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x468F04u, 0x468F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468F0Cu;
label_468f0c:
    // 0x468f0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x468f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x468f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468f14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x468f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x468f18: 0x3e00008  jr          $ra
    ctx->pc = 0x468F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468F20u;
    // 0x468f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x468f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x468f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x468f28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x468f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x468f2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x468f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x468f30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468f34: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x468F34u;
    {
        const bool branch_taken_0x468f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468f34) {
            ctx->pc = 0x468FA0u;
            goto label_468fa0;
        }
    }
    ctx->pc = 0x468F3Cu;
    // 0x468f3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x468f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x468f40: 0x24636cb8  addiu       $v1, $v1, 0x6CB8
    ctx->pc = 0x468f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27832));
    // 0x468f44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468f48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x468f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x468f4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468f50: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x468f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x468f54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468f58: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x468f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x468f5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468f60: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x468f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x468f64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x468f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x468f68: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x468F68u;
    SET_GPR_U32(ctx, 31, 0x468F70u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x468F68u, 0x468F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468F70u;
label_468f70:
    // 0x468f70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x468f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x468f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468f78: 0xc11b034  jal         func_46C0D0
    ctx->pc = 0x468F78u;
    SET_GPR_U32(ctx, 31, 0x468F80u);
    ctx->pc = 0x46C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C0D0u, 0x468F78u, 0x468F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468F80u;
label_468f80:
    // 0x468f80: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x468f80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x468f84: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x468f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x468f88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x468f88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x468f8c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x468F8Cu;
    {
        const bool branch_taken_0x468f8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x468f8c) {
            ctx->pc = 0x468FA0u;
            goto label_468fa0;
        }
    }
    ctx->pc = 0x468F94u;
    // 0x468f94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x468f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468f98: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x468F98u;
    SET_GPR_U32(ctx, 31, 0x468FA0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x468F98u, 0x468FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468FA0u;
label_468fa0:
    // 0x468fa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468fa8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x468fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x468fac: 0x3e00008  jr          $ra
    ctx->pc = 0x468FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468FB4u;
    // 0x468fb4: 0x0  nop
    ctx->pc = 0x468fb4u;
    // NOP
    // 0x468fb8: 0x0  nop
    ctx->pc = 0x468fb8u;
    // NOP
    // 0x468fbc: 0x0  nop
    ctx->pc = 0x468fbcu;
    // NOP
    ctx->pc = 0x468fc0u;
}
