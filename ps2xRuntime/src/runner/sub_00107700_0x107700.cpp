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

// Function: sub_00107700
// Address: 0x107700 - 0x107810
void sub_00107700_0x107700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107700_0x107700");
#endif

    switch (ctx->pc) {
        case 0x107718u: goto label_107718;
        case 0x107728u: goto label_107728;
        case 0x10773cu: goto label_10773c;
        case 0x10774cu: goto label_10774c;
        case 0x107758u: goto label_107758;
        case 0x107764u: goto label_107764;
        case 0x107770u: goto label_107770;
        case 0x107790u: goto label_107790;
        case 0x10779cu: goto label_10779c;
        case 0x1077a8u: goto label_1077a8;
        case 0x1077b0u: goto label_1077b0;
        case 0x1077bcu: goto label_1077bc;
        case 0x1077c4u: goto label_1077c4;
        case 0x1077d4u: goto label_1077d4;
        case 0x1077ecu: goto label_1077ec;
        case 0x1077f4u: goto label_1077f4;
        default: break;
    }

    ctx->pc = 0x107700u;

    // 0x107700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x107704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x107704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x107708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x107708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10770c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10770cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x107710: 0xc122430  jal         func_4890C0
    ctx->pc = 0x107710u;
    SET_GPR_U32(ctx, 31, 0x107718u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x107710u, 0x107718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107718u;
label_107718:
    // 0x107718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x107718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10771c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10771cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107720: 0xc121248  jal         func_484920
    ctx->pc = 0x107720u;
    SET_GPR_U32(ctx, 31, 0x107728u);
    ctx->pc = 0x484920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484920u, 0x107720u, 0x107728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107728u;
label_107728:
    // 0x107728: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x107728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10772c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x10772cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x107730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x107730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107734: 0xc0a0024  jal         func_280090
    ctx->pc = 0x107734u;
    SET_GPR_U32(ctx, 31, 0x10773Cu);
    ctx->pc = 0x280090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280090u, 0x107734u, 0x10773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10773Cu;
label_10773c:
    // 0x10773c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107740: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x107740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x107744: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x107744u;
    SET_GPR_U32(ctx, 31, 0x10774Cu);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x107744u, 0x10774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10774Cu;
label_10774c:
    // 0x10774c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10774cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107750: 0xc0b0d00  jal         func_2C3400
    ctx->pc = 0x107750u;
    SET_GPR_U32(ctx, 31, 0x107758u);
    ctx->pc = 0x2C3400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3400u, 0x107750u, 0x107758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107758u;
label_107758:
    // 0x107758: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x107758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x10775c: 0xc08a648  jal         func_229920
    ctx->pc = 0x10775Cu;
    SET_GPR_U32(ctx, 31, 0x107764u);
    ctx->pc = 0x229920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229920u, 0x10775Cu, 0x107764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107764u;
label_107764:
    // 0x107764: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x107764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x107768: 0xc08a6c0  jal         func_229B00
    ctx->pc = 0x107768u;
    SET_GPR_U32(ctx, 31, 0x107770u);
    ctx->pc = 0x229B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229B00u, 0x107768u, 0x107770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107770u;
label_107770:
    // 0x107770: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x107770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x107774: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x107774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107778: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x107778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10777c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107780: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x107780u;
    {
        const bool branch_taken_0x107780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x107780) {
            ctx->pc = 0x1077BCu;
            goto label_1077bc;
        }
    }
    ctx->pc = 0x107788u;
    // 0x107788: 0xc0434e0  jal         func_10D380
    ctx->pc = 0x107788u;
    SET_GPR_U32(ctx, 31, 0x107790u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x107788u, 0x107790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107790u;
label_107790:
    // 0x107790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107794: 0xc0434d8  jal         func_10D360
    ctx->pc = 0x107794u;
    SET_GPR_U32(ctx, 31, 0x10779Cu);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x107794u, 0x10779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10779Cu;
label_10779c:
    // 0x10779c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10779cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1077a0: 0xc0456fc  jal         func_115BF0
    ctx->pc = 0x1077A0u;
    SET_GPR_U32(ctx, 31, 0x1077A8u);
    ctx->pc = 0x115BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115BF0u, 0x1077A0u, 0x1077A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077A8u;
label_1077a8:
    // 0x1077a8: 0xc09a360  jal         func_268D80
    ctx->pc = 0x1077A8u;
    SET_GPR_U32(ctx, 31, 0x1077B0u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x1077A8u, 0x1077B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077B0u;
label_1077b0:
    // 0x1077b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1077b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1077b4: 0xc09a9e0  jal         func_26A780
    ctx->pc = 0x1077B4u;
    SET_GPR_U32(ctx, 31, 0x1077BCu);
    ctx->pc = 0x26A780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A780u, 0x1077B4u, 0x1077BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077BCu;
label_1077bc:
    // 0x1077bc: 0xc11dd7c  jal         func_4775F0
    ctx->pc = 0x1077BCu;
    SET_GPR_U32(ctx, 31, 0x1077C4u);
    ctx->pc = 0x4775F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775F0u, 0x1077BCu, 0x1077C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077C4u;
label_1077c4:
    // 0x1077c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1077c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1077c8: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x1077c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1077cc: 0xc0a06d4  jal         func_281B50
    ctx->pc = 0x1077CCu;
    SET_GPR_U32(ctx, 31, 0x1077D4u);
    ctx->pc = 0x281B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281B50u, 0x1077CCu, 0x1077D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077D4u;
label_1077d4:
    // 0x1077d4: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x1077d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1077d8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1077d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1077dc: 0x24050548  addiu       $a1, $zero, 0x548
    ctx->pc = 0x1077dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1352));
    // 0x1077e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1077e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1077e4: 0xc041b54  jal         func_106D50
    ctx->pc = 0x1077E4u;
    SET_GPR_U32(ctx, 31, 0x1077ECu);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x1077E4u, 0x1077ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077ECu;
label_1077ec:
    // 0x1077ec: 0xc088b08  jal         func_222C20
    ctx->pc = 0x1077ECu;
    SET_GPR_U32(ctx, 31, 0x1077F4u);
    ctx->pc = 0x222C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222C20u, 0x1077ECu, 0x1077F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077F4u;
label_1077f4:
    // 0x1077f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1077f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1077f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1077f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1077fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1077fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x107800: 0x3e00008  jr          $ra
    ctx->pc = 0x107800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107808u;
    // 0x107808: 0x0  nop
    ctx->pc = 0x107808u;
    // NOP
    // 0x10780c: 0x0  nop
    ctx->pc = 0x10780cu;
    // NOP
    ctx->pc = 0x107810u;
}
