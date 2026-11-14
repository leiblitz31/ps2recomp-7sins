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

// Function: sub_0012B530
// Address: 0x12b530 - 0x12b700
void sub_0012B530_0x12b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B530_0x12b530");
#endif

    switch (ctx->pc) {
        case 0x12b574u: goto label_12b574;
        case 0x12b588u: goto label_12b588;
        case 0x12b598u: goto label_12b598;
        case 0x12b5b8u: goto label_12b5b8;
        case 0x12b5ecu: goto label_12b5ec;
        case 0x12b5fcu: goto label_12b5fc;
        case 0x12b608u: goto label_12b608;
        case 0x12b63cu: goto label_12b63c;
        case 0x12b64cu: goto label_12b64c;
        case 0x12b658u: goto label_12b658;
        case 0x12b68cu: goto label_12b68c;
        case 0x12b69cu: goto label_12b69c;
        case 0x12b6a8u: goto label_12b6a8;
        case 0x12b6e4u: goto label_12b6e4;
        default: break;
    }

    ctx->pc = 0x12b530u;

    // 0x12b530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b538: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12b538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12b53c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12b53cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x12b540: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b544: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12B544u;
    {
        const bool branch_taken_0x12b544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b544) {
            ctx->pc = 0x12B5B8u;
            goto label_12b5b8;
        }
    }
    ctx->pc = 0x12B54Cu;
    // 0x12b54c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x12b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x12b550: 0x246336e0  addiu       $v1, $v1, 0x36E0
    ctx->pc = 0x12b550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14048));
    // 0x12b554: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b558: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12b558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12b55c: 0xaf80ba64  sw          $zero, -0x459C($gp)
    ctx->pc = 0x12b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949476), GPR_U32(ctx, 0));
    // 0x12b560: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b564: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12b564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12b568: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12b568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b56c: 0xc04ab8c  jal         func_12AE30
    ctx->pc = 0x12B56Cu;
    SET_GPR_U32(ctx, 31, 0x12B574u);
    ctx->pc = 0x12AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AE30u, 0x12B56Cu, 0x12B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B574u;
label_12b574:
    // 0x12b574: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b578: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12b578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12b57c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12b57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b580: 0xc04ac14  jal         func_12B050
    ctx->pc = 0x12B580u;
    SET_GPR_U32(ctx, 31, 0x12B588u);
    ctx->pc = 0x12B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B050u, 0x12B580u, 0x12B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B588u;
label_12b588:
    // 0x12b588: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b58c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b590: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x12B590u;
    SET_GPR_U32(ctx, 31, 0x12B598u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x12B590u, 0x12B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B598u;
label_12b598:
    // 0x12b598: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12b598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b59c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12b59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12b5a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12b5a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12b5a4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B5A4u;
    {
        const bool branch_taken_0x12b5a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12b5a4) {
            ctx->pc = 0x12B5B8u;
            goto label_12b5b8;
        }
    }
    ctx->pc = 0x12B5ACu;
    // 0x12b5ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b5b0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x12B5B0u;
    SET_GPR_U32(ctx, 31, 0x12B5B8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x12B5B0u, 0x12B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5B8u;
label_12b5b8:
    // 0x12b5b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b5bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b5c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x12B5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B5CCu;
    // 0x12b5cc: 0x0  nop
    ctx->pc = 0x12b5ccu;
    // NOP
    // 0x12b5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b5d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b5d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12b5dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12b5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12b5e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b5e4: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x12B5E4u;
    SET_GPR_U32(ctx, 31, 0x12B5ECu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x12B5E4u, 0x12B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5ECu;
label_12b5ec:
    // 0x12b5ec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x12b5ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b5f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b5f4: 0xc04adec  jal         func_12B7B0
    ctx->pc = 0x12B5F4u;
    SET_GPR_U32(ctx, 31, 0x12B5FCu);
    ctx->pc = 0x12B7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B7B0u, 0x12B5F4u, 0x12B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5FCu;
label_12b5fc:
    // 0x12b5fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b600: 0xc04bab0  jal         func_12EAC0
    ctx->pc = 0x12B600u;
    SET_GPR_U32(ctx, 31, 0x12B608u);
    ctx->pc = 0x12EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAC0u, 0x12B600u, 0x12B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B608u;
label_12b608:
    // 0x12b608: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12b608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b60c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b614: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b618: 0x3e00008  jr          $ra
    ctx->pc = 0x12B618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B620u;
    // 0x12b620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12b62c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12b630: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b634: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x12B634u;
    SET_GPR_U32(ctx, 31, 0x12B63Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x12B634u, 0x12B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B63Cu;
label_12b63c:
    // 0x12b63c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x12b63cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b640: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b644: 0xc04c538  jal         func_1314E0
    ctx->pc = 0x12B644u;
    SET_GPR_U32(ctx, 31, 0x12B64Cu);
    ctx->pc = 0x1314E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1314E0u, 0x12B644u, 0x12B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B64Cu;
label_12b64c:
    // 0x12b64c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b650: 0xc04ba84  jal         func_12EA10
    ctx->pc = 0x12B650u;
    SET_GPR_U32(ctx, 31, 0x12B658u);
    ctx->pc = 0x12EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EA10u, 0x12B650u, 0x12B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B658u;
label_12b658:
    // 0x12b658: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12b658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b65c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b664: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b668: 0x3e00008  jr          $ra
    ctx->pc = 0x12B668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B670u;
    // 0x12b670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12b67c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12b680: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b684: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x12B684u;
    SET_GPR_U32(ctx, 31, 0x12B68Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x12B684u, 0x12B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B68Cu;
label_12b68c:
    // 0x12b68c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x12b68cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b690: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b694: 0xc04ae5c  jal         func_12B970
    ctx->pc = 0x12B694u;
    SET_GPR_U32(ctx, 31, 0x12B69Cu);
    ctx->pc = 0x12B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B970u, 0x12B694u, 0x12B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B69Cu;
label_12b69c:
    // 0x12b69c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b6a0: 0xc04baf8  jal         func_12EBE0
    ctx->pc = 0x12B6A0u;
    SET_GPR_U32(ctx, 31, 0x12B6A8u);
    ctx->pc = 0x12EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE0u, 0x12B6A0u, 0x12B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6A8u;
label_12b6a8:
    // 0x12b6a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12b6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b6ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b6b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b6b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b6b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x12B6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B6C0u;
    // 0x12b6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b6c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12b6cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12b6d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x12b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x12b6d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b6d8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b6dc: 0xc08ec68  jal         func_23B1A0
    ctx->pc = 0x12B6DCu;
    SET_GPR_U32(ctx, 31, 0x12B6E4u);
    ctx->pc = 0x23B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1A0u, 0x12B6DCu, 0x12B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6E4u;
label_12b6e4:
    // 0x12b6e4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x12b6e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b6e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12b6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b6ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b6f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b6f4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x12b6f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12b6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x12B6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B700u;
}
