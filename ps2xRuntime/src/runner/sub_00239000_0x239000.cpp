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

// Function: sub_00239000
// Address: 0x239000 - 0x239280
void sub_00239000_0x239000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239000_0x239000");
#endif

    switch (ctx->pc) {
        case 0x239018u: goto label_239018;
        case 0x239048u: goto label_239048;
        case 0x2390b0u: goto label_2390b0;
        case 0x2390c0u: goto label_2390c0;
        case 0x2390e0u: goto label_2390e0;
        case 0x239124u: goto label_239124;
        case 0x239134u: goto label_239134;
        case 0x239144u: goto label_239144;
        case 0x23915cu: goto label_23915c;
        case 0x239188u: goto label_239188;
        case 0x239198u: goto label_239198;
        case 0x2391b0u: goto label_2391b0;
        case 0x23920cu: goto label_23920c;
        case 0x23921cu: goto label_23921c;
        case 0x239244u: goto label_239244;
        case 0x239254u: goto label_239254;
        case 0x239268u: goto label_239268;
        default: break;
    }

    ctx->pc = 0x239000u;

    // 0x239000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x239008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23900c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239010: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x239010u;
    SET_GPR_U32(ctx, 31, 0x239018u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x239010u, 0x239018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239018u;
label_239018:
    // 0x239018: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x239018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23901c: 0x246355c0  addiu       $v1, $v1, 0x55C0
    ctx->pc = 0x23901cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21952));
    // 0x239020: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x239020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239024: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x239024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x239028: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x239028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23902c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x23902cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x239030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x239030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239034: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x239034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x239038: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x239038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23903c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x23903cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x239040: 0xc0514a8  jal         func_1452A0
    ctx->pc = 0x239040u;
    SET_GPR_U32(ctx, 31, 0x239048u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x239040u, 0x239048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239048u;
label_239048:
    // 0x239048: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x239048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23904c: 0xaf82bbdc  sw          $v0, -0x4424($gp)
    ctx->pc = 0x23904cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949852), GPR_U32(ctx, 2));
    // 0x239050: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x239050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239058: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x239058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23905c: 0x3e00008  jr          $ra
    ctx->pc = 0x23905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23905Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239064u;
    // 0x239064: 0x0  nop
    ctx->pc = 0x239064u;
    // NOP
    // 0x239068: 0x0  nop
    ctx->pc = 0x239068u;
    // NOP
    // 0x23906c: 0x0  nop
    ctx->pc = 0x23906cu;
    // NOP
    // 0x239070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x239078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23907c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23907cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x239080: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x239080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239084: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x239084u;
    {
        const bool branch_taken_0x239084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239084) {
            ctx->pc = 0x2390E0u;
            goto label_2390e0;
        }
    }
    ctx->pc = 0x23908Cu;
    // 0x23908c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23908cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x239090: 0x246355c0  addiu       $v1, $v1, 0x55C0
    ctx->pc = 0x239090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21952));
    // 0x239094: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x239094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239098: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x239098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23909c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2390a0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2390a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2390a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2390a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2390a8: 0xc051428  jal         func_1450A0
    ctx->pc = 0x2390A8u;
    SET_GPR_U32(ctx, 31, 0x2390B0u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x2390A8u, 0x2390B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390B0u;
label_2390b0:
    // 0x2390b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2390b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2390b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2390b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2390b8: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x2390B8u;
    SET_GPR_U32(ctx, 31, 0x2390C0u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x2390B8u, 0x2390C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390C0u;
label_2390c0:
    // 0x2390c0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2390c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2390c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2390c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2390c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2390c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2390cc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2390CCu;
    {
        const bool branch_taken_0x2390cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2390cc) {
            ctx->pc = 0x2390E0u;
            goto label_2390e0;
        }
    }
    ctx->pc = 0x2390D4u;
    // 0x2390d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2390d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2390d8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2390D8u;
    SET_GPR_U32(ctx, 31, 0x2390E0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2390D8u, 0x2390E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390E0u;
label_2390e0:
    // 0x2390e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2390e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2390e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2390e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2390e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2390e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2390ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2390ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2390ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2390F4u;
    // 0x2390f4: 0x0  nop
    ctx->pc = 0x2390f4u;
    // NOP
    // 0x2390f8: 0x0  nop
    ctx->pc = 0x2390f8u;
    // NOP
    // 0x2390fc: 0x0  nop
    ctx->pc = 0x2390fcu;
    // NOP
    // 0x239100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x239104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x239104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x239108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x239108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23910c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x239110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x239114: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x239114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x239118: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x239118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23911c: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x23911Cu;
    SET_GPR_U32(ctx, 31, 0x239124u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x23911Cu, 0x239124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239124u;
label_239124:
    // 0x239124: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x239124u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x239128: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x239128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x23912c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x23912Cu;
    SET_GPR_U32(ctx, 31, 0x239134u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x23912Cu, 0x239134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239134u;
label_239134:
    // 0x239134: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x239134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x239138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x239138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23913c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x23913Cu;
    SET_GPR_U32(ctx, 31, 0x239144u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x23913Cu, 0x239144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239144u;
label_239144:
    // 0x239144: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x239144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239148: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x239148u;
    {
        const bool branch_taken_0x239148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x239148) {
            ctx->pc = 0x239160u;
            goto label_239160;
        }
    }
    ctx->pc = 0x239150u;
    // 0x239150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239154: 0xc11bc84  jal         func_46F210
    ctx->pc = 0x239154u;
    SET_GPR_U32(ctx, 31, 0x23915Cu);
    ctx->pc = 0x46F210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F210u, 0x239154u, 0x23915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23915Cu;
label_23915c:
    // 0x23915c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23915cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239160:
    // 0x239160: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x239160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239164: 0xac510028  sw          $s1, 0x28($v0)
    ctx->pc = 0x239164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 17));
    // 0x239168: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x239168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23916c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x23916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x239170: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239170u;
    {
        const bool branch_taken_0x239170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239170) {
            ctx->pc = 0x23917Cu;
            goto label_23917c;
        }
    }
    ctx->pc = 0x239178u;
    // 0x239178: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x239178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23917c:
    // 0x23917c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x23917cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x239180: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x239180u;
    SET_GPR_U32(ctx, 31, 0x239188u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x239180u, 0x239188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239188u;
label_239188:
    // 0x239188: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x239188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23918c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23918cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239190: 0xc0400e0  jal         func_100380
    ctx->pc = 0x239190u;
    SET_GPR_U32(ctx, 31, 0x239198u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x239190u, 0x239198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239198u;
label_239198:
    // 0x239198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23919c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23919Cu;
    {
        const bool branch_taken_0x23919c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23919c) {
            ctx->pc = 0x2391B4u;
            goto label_2391b4;
        }
    }
    ctx->pc = 0x2391A4u;
    // 0x2391a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2391a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2391a8: 0xc0495d4  jal         func_125750
    ctx->pc = 0x2391A8u;
    SET_GPR_U32(ctx, 31, 0x2391B0u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x2391A8u, 0x2391B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391B0u;
label_2391b0:
    // 0x2391b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2391b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2391b4:
    // 0x2391b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2391b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2391b8: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x2391b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
    // 0x2391bc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2391bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2391c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2391c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2391c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2391c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2391c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2391c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2391cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2391ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2391d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2391d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2391d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2391D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2391D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2391DCu;
    // 0x2391dc: 0x0  nop
    ctx->pc = 0x2391dcu;
    // NOP
    // 0x2391e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2391e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2391e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2391e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2391e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2391e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2391ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2391ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2391f0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2391f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2391f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2391F4u;
    {
        const bool branch_taken_0x2391f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2391f4) {
            ctx->pc = 0x239224u;
            goto label_239224;
        }
    }
    ctx->pc = 0x2391FCu;
    // 0x2391fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2391fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239200: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x239200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x239204: 0xc05deb8  jal         func_177AE0
    ctx->pc = 0x239204u;
    SET_GPR_U32(ctx, 31, 0x23920Cu);
    ctx->pc = 0x177AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177AE0u, 0x239204u, 0x23920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23920Cu;
label_23920c:
    // 0x23920c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239210: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x239210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x239214: 0xc119c5c  jal         func_467170
    ctx->pc = 0x239214u;
    SET_GPR_U32(ctx, 31, 0x23921Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x239214u, 0x23921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23921Cu;
label_23921c:
    // 0x23921c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239220: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x239220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_239224:
    // 0x239224: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x239224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239228: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x239228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x23922c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23922Cu;
    {
        const bool branch_taken_0x23922c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23922c) {
            ctx->pc = 0x23925Cu;
            goto label_23925c;
        }
    }
    ctx->pc = 0x239234u;
    // 0x239234: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x239234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239238: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x239238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x23923c: 0xc08e4a0  jal         func_239280
    ctx->pc = 0x23923Cu;
    SET_GPR_U32(ctx, 31, 0x239244u);
    ctx->pc = 0x239280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239280u, 0x23923Cu, 0x239244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239244u;
label_239244:
    // 0x239244: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x239244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239248: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x239248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x23924c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x23924Cu;
    SET_GPR_U32(ctx, 31, 0x239254u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x23924Cu, 0x239254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239254u;
label_239254:
    // 0x239254: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x239254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239258: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x239258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_23925c:
    // 0x23925c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23925cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239260: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x239260u;
    SET_GPR_U32(ctx, 31, 0x239268u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x239260u, 0x239268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239268u;
label_239268:
    // 0x239268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23926c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23926cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x239270: 0x3e00008  jr          $ra
    ctx->pc = 0x239270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239278u;
    // 0x239278: 0x0  nop
    ctx->pc = 0x239278u;
    // NOP
    // 0x23927c: 0x0  nop
    ctx->pc = 0x23927cu;
    // NOP
    ctx->pc = 0x239280u;
}
