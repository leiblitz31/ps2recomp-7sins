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

// Function: sub_001186F0
// Address: 0x1186f0 - 0x118860
void sub_001186F0_0x1186f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001186F0_0x1186f0");
#endif

    switch (ctx->pc) {
        case 0x118730u: goto label_118730;
        case 0x118750u: goto label_118750;
        case 0x11878cu: goto label_11878c;
        case 0x11879cu: goto label_11879c;
        case 0x1187a8u: goto label_1187a8;
        case 0x1187d8u: goto label_1187d8;
        case 0x11880cu: goto label_11880c;
        case 0x118848u: goto label_118848;
        default: break;
    }

    ctx->pc = 0x1186f0u;

    // 0x1186f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1186f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1186f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1186f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1186f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1186f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1186fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1186fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x118700: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118704: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x118704u;
    {
        const bool branch_taken_0x118704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118704) {
            ctx->pc = 0x118750u;
            goto label_118750;
        }
    }
    ctx->pc = 0x11870Cu;
    // 0x11870c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11870cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x118710: 0x24633350  addiu       $v1, $v1, 0x3350
    ctx->pc = 0x118710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13136));
    // 0x118714: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118718: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x118718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11871c: 0xaf80b9b8  sw          $zero, -0x4648($gp)
    ctx->pc = 0x11871cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949304), GPR_U32(ctx, 0));
    // 0x118720: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x118720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118728: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x118728u;
    SET_GPR_U32(ctx, 31, 0x118730u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x118728u, 0x118730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118730u;
label_118730:
    // 0x118730: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x118730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118734: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x118734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x118738: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x118738u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x11873c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11873Cu;
    {
        const bool branch_taken_0x11873c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11873c) {
            ctx->pc = 0x118750u;
            goto label_118750;
        }
    }
    ctx->pc = 0x118744u;
    // 0x118744: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x118744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118748: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x118748u;
    SET_GPR_U32(ctx, 31, 0x118750u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x118748u, 0x118750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118750u;
label_118750:
    // 0x118750: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118758: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x118758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11875c: 0x3e00008  jr          $ra
    ctx->pc = 0x11875Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11875Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118764u;
    // 0x118764: 0x0  nop
    ctx->pc = 0x118764u;
    // NOP
    // 0x118768: 0x0  nop
    ctx->pc = 0x118768u;
    // NOP
    // 0x11876c: 0x0  nop
    ctx->pc = 0x11876cu;
    // NOP
    // 0x118770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11877c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x11877cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x118780: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x118780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118784: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x118784u;
    SET_GPR_U32(ctx, 31, 0x11878Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x118784u, 0x11878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11878Cu;
label_11878c:
    // 0x11878c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11878cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x118790: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x118790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118794: 0xc116e74  jal         func_45B9D0
    ctx->pc = 0x118794u;
    SET_GPR_U32(ctx, 31, 0x11879Cu);
    ctx->pc = 0x45B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B9D0u, 0x118794u, 0x11879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11879Cu;
label_11879c:
    // 0x11879c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11879cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1187a0: 0xc116e74  jal         func_45B9D0
    ctx->pc = 0x1187A0u;
    SET_GPR_U32(ctx, 31, 0x1187A8u);
    ctx->pc = 0x45B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B9D0u, 0x1187A0u, 0x1187A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187A8u;
label_1187a8:
    // 0x1187a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1187a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1187acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1187b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1187b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1187b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1187b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1187b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1187B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1187B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1187C0u;
    // 0x1187c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1187c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1187c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1187c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1187c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1187c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1187cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1187ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1187d0: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x1187D0u;
    SET_GPR_U32(ctx, 31, 0x1187D8u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x1187D0u, 0x1187D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187D8u;
label_1187d8:
    // 0x1187d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1187d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1187dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1187dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1187e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1187E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1187E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1187E8u;
    // 0x1187e8: 0x0  nop
    ctx->pc = 0x1187e8u;
    // NOP
    // 0x1187ec: 0x0  nop
    ctx->pc = 0x1187ecu;
    // NOP
    // 0x1187f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1187f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1187f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1187f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1187f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1187f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1187fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1187fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x118800: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x118800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118804: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x118804u;
    SET_GPR_U32(ctx, 31, 0x11880Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x118804u, 0x11880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11880Cu;
label_11880c:
    // 0x11880c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11880cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x118810: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x118810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11881c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11881cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x118820: 0x3e00008  jr          $ra
    ctx->pc = 0x118820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118828u;
    // 0x118828: 0x0  nop
    ctx->pc = 0x118828u;
    // NOP
    // 0x11882c: 0x0  nop
    ctx->pc = 0x11882cu;
    // NOP
    // 0x118830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x118834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118838: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x118838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11883c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11883cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118840: 0xc08ec70  jal         func_23B1C0
    ctx->pc = 0x118840u;
    SET_GPR_U32(ctx, 31, 0x118848u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x118840u, 0x118848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118848u;
label_118848:
    // 0x118848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11884c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11884cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x118850: 0x3e00008  jr          $ra
    ctx->pc = 0x118850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118858u;
    // 0x118858: 0x0  nop
    ctx->pc = 0x118858u;
    // NOP
    // 0x11885c: 0x0  nop
    ctx->pc = 0x11885cu;
    // NOP
    ctx->pc = 0x118860u;
}
