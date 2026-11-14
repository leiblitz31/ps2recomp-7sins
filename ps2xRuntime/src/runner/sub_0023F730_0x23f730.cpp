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

// Function: sub_0023F730
// Address: 0x23f730 - 0x23f8b0
void sub_0023F730_0x23f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F730_0x23f730");
#endif

    switch (ctx->pc) {
        case 0x23f790u: goto label_23f790;
        case 0x23f7a0u: goto label_23f7a0;
        case 0x23f7c0u: goto label_23f7c0;
        case 0x23f7fcu: goto label_23f7fc;
        case 0x23f83cu: goto label_23f83c;
        case 0x23f87cu: goto label_23f87c;
        case 0x23f890u: goto label_23f890;
        default: break;
    }

    ctx->pc = 0x23f730u;

    // 0x23f730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f734: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23f734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23f738: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23f738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f73c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23f73cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23f740: 0x3e00008  jr          $ra
    ctx->pc = 0x23F740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F748u;
    // 0x23f748: 0x0  nop
    ctx->pc = 0x23f748u;
    // NOP
    // 0x23f74c: 0x0  nop
    ctx->pc = 0x23f74cu;
    // NOP
    // 0x23f750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23f758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23f75c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23f75cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23f760: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f764: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23F764u;
    {
        const bool branch_taken_0x23f764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f764) {
            ctx->pc = 0x23F7C0u;
            goto label_23f7c0;
        }
    }
    ctx->pc = 0x23F76Cu;
    // 0x23f76c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23f770: 0x24635680  addiu       $v1, $v1, 0x5680
    ctx->pc = 0x23f770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22144));
    // 0x23f774: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f778: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23f778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23f77c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f780: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23f780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23f784: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23f784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f788: 0xc08fcdc  jal         func_23F370
    ctx->pc = 0x23F788u;
    SET_GPR_U32(ctx, 31, 0x23F790u);
    ctx->pc = 0x23F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F370u, 0x23F788u, 0x23F790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F790u;
label_23f790:
    // 0x23f790: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f798: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x23F798u;
    SET_GPR_U32(ctx, 31, 0x23F7A0u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x23F798u, 0x23F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F7A0u;
label_23f7a0:
    // 0x23f7a0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23f7a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f7a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23f7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23f7a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23f7a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23f7ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F7ACu;
    {
        const bool branch_taken_0x23f7ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23f7ac) {
            ctx->pc = 0x23F7C0u;
            goto label_23f7c0;
        }
    }
    ctx->pc = 0x23F7B4u;
    // 0x23f7b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f7b8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23F7B8u;
    SET_GPR_U32(ctx, 31, 0x23F7C0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23F7B8u, 0x23F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F7C0u;
label_23f7c0:
    // 0x23f7c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f7c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x23F7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F7D4u;
    // 0x23f7d4: 0x0  nop
    ctx->pc = 0x23f7d4u;
    // NOP
    // 0x23f7d8: 0x0  nop
    ctx->pc = 0x23f7d8u;
    // NOP
    // 0x23f7dc: 0x0  nop
    ctx->pc = 0x23f7dcu;
    // NOP
    // 0x23f7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f7e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f7e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f7ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23f7f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f7f4: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x23F7F4u;
    SET_GPR_U32(ctx, 31, 0x23F7FCu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x23F7F4u, 0x23F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F7FCu;
label_23f7fc:
    // 0x23f7fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x23f7fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23f800: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23f800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f80c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f80cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f810: 0x3e00008  jr          $ra
    ctx->pc = 0x23F810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F818u;
    // 0x23f818: 0x0  nop
    ctx->pc = 0x23f818u;
    // NOP
    // 0x23f81c: 0x0  nop
    ctx->pc = 0x23f81cu;
    // NOP
    // 0x23f820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f82c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23f830: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23f830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f834: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x23F834u;
    SET_GPR_U32(ctx, 31, 0x23F83Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x23F834u, 0x23F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F83Cu;
label_23f83c:
    // 0x23f83c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x23f83cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23f840: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23f840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f844: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f84c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f84cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f850: 0x3e00008  jr          $ra
    ctx->pc = 0x23F850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F858u;
    // 0x23f858: 0x0  nop
    ctx->pc = 0x23f858u;
    // NOP
    // 0x23f85c: 0x0  nop
    ctx->pc = 0x23f85cu;
    // NOP
    // 0x23f860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f86c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23f870: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23f870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f874: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x23F874u;
    SET_GPR_U32(ctx, 31, 0x23F87Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x23F874u, 0x23F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F87Cu;
label_23f87c:
    // 0x23f87c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x23f87cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23f880: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23f880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f884: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23f884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23f888: 0xc08fe2c  jal         func_23F8B0
    ctx->pc = 0x23F888u;
    SET_GPR_U32(ctx, 31, 0x23F890u);
    ctx->pc = 0x23F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F8B0u, 0x23F888u, 0x23F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F890u;
label_23f890:
    // 0x23f890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23f890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f89c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f89cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x23F8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F8A8u;
    // 0x23f8a8: 0x0  nop
    ctx->pc = 0x23f8a8u;
    // NOP
    // 0x23f8ac: 0x0  nop
    ctx->pc = 0x23f8acu;
    // NOP
    ctx->pc = 0x23f8b0u;
}
