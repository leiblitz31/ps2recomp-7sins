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

// Function: sub_001AF5F0
// Address: 0x1af5f0 - 0x1af920
void sub_001AF5F0_0x1af5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF5F0_0x1af5f0");
#endif

    switch (ctx->pc) {
        case 0x1af608u: goto label_1af608;
        case 0x1af618u: goto label_1af618;
        case 0x1af67cu: goto label_1af67c;
        case 0x1af690u: goto label_1af690;
        case 0x1af6a4u: goto label_1af6a4;
        case 0x1af6b8u: goto label_1af6b8;
        case 0x1af6d8u: goto label_1af6d8;
        case 0x1af6ecu: goto label_1af6ec;
        case 0x1af6fcu: goto label_1af6fc;
        case 0x1af71cu: goto label_1af71c;
        case 0x1af758u: goto label_1af758;
        case 0x1af78cu: goto label_1af78c;
        case 0x1af79cu: goto label_1af79c;
        case 0x1af7a8u: goto label_1af7a8;
        case 0x1af7b4u: goto label_1af7b4;
        case 0x1af7c0u: goto label_1af7c0;
        case 0x1af7ccu: goto label_1af7cc;
        case 0x1af7d8u: goto label_1af7d8;
        case 0x1af7e4u: goto label_1af7e4;
        case 0x1af7f0u: goto label_1af7f0;
        case 0x1af800u: goto label_1af800;
        case 0x1af840u: goto label_1af840;
        case 0x1af850u: goto label_1af850;
        case 0x1af864u: goto label_1af864;
        case 0x1af884u: goto label_1af884;
        case 0x1af890u: goto label_1af890;
        case 0x1af8a4u: goto label_1af8a4;
        case 0x1af8b0u: goto label_1af8b0;
        case 0x1af8c4u: goto label_1af8c4;
        case 0x1af8ecu: goto label_1af8ec;
        case 0x1af900u: goto label_1af900;
        default: break;
    }

    ctx->pc = 0x1af5f0u;

    // 0x1af5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af5f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1af5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1af5fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af600: 0xc058cd8  jal         func_163360
    ctx->pc = 0x1AF600u;
    SET_GPR_U32(ctx, 31, 0x1AF608u);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x1AF600u, 0x1AF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF608u;
label_1af608:
    // 0x1af608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af60c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1af60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1af610: 0xc058cd8  jal         func_163360
    ctx->pc = 0x1AF610u;
    SET_GPR_U32(ctx, 31, 0x1AF618u);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x1AF610u, 0x1AF618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF618u;
label_1af618:
    // 0x1af618: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af620: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1af620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1af624: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF62Cu;
    // 0x1af62c: 0x0  nop
    ctx->pc = 0x1af62cu;
    // NOP
    // 0x1af630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1af638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1af63c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1af63cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1af640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af644: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1AF644u;
    {
        const bool branch_taken_0x1af644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af644) {
            ctx->pc = 0x1AF71Cu;
            goto label_1af71c;
        }
    }
    ctx->pc = 0x1AF64Cu;
    // 0x1af64c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1af64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1af650: 0x246347b0  addiu       $v1, $v1, 0x47B0
    ctx->pc = 0x1af650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18352));
    // 0x1af654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af658: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1af658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1af65c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af660: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1af660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1af664: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1af664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1af668: 0x24a50a80  addiu       $a1, $a1, 0xA80
    ctx->pc = 0x1af668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2688));
    // 0x1af66c: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x1af66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1af670: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1af670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af674: 0xc0b9fd4  jal         func_2E7F50
    ctx->pc = 0x1AF674u;
    SET_GPR_U32(ctx, 31, 0x1AF67Cu);
    ctx->pc = 0x2E7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7F50u, 0x1AF674u, 0x1AF67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF67Cu;
label_1af67c:
    // 0x1af67c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af680: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1af680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1af684: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1af684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af688: 0xc06bb58  jal         func_1AED60
    ctx->pc = 0x1AF688u;
    SET_GPR_U32(ctx, 31, 0x1AF690u);
    ctx->pc = 0x1AED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED60u, 0x1AF688u, 0x1AF690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF690u;
label_1af690:
    // 0x1af690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af694: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1af694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1af698: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1af698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af69c: 0xc06bbf4  jal         func_1AEFD0
    ctx->pc = 0x1AF69Cu;
    SET_GPR_U32(ctx, 31, 0x1AF6A4u);
    ctx->pc = 0x1AEFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFD0u, 0x1AF69Cu, 0x1AF6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6A4u;
label_1af6a4:
    // 0x1af6a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af6a8: 0x244401cc  addiu       $a0, $v0, 0x1CC
    ctx->pc = 0x1af6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 460));
    // 0x1af6ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1af6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af6b0: 0xc06bc7c  jal         func_1AF1F0
    ctx->pc = 0x1AF6B0u;
    SET_GPR_U32(ctx, 31, 0x1AF6B8u);
    ctx->pc = 0x1AF1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1F0u, 0x1AF6B0u, 0x1AF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6B8u;
label_1af6b8:
    // 0x1af6b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af6bc: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1af6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1af6c0: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1af6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1af6c4: 0x24a5f570  addiu       $a1, $a1, -0xA90
    ctx->pc = 0x1af6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964592));
    // 0x1af6c8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1af6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1af6cc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1af6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1af6d0: 0xc0b9fd4  jal         func_2E7F50
    ctx->pc = 0x1AF6D0u;
    SET_GPR_U32(ctx, 31, 0x1AF6D8u);
    ctx->pc = 0x2E7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7F50u, 0x1AF6D0u, 0x1AF6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6D8u;
label_1af6d8:
    // 0x1af6d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af6dc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1af6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1af6e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1af6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af6e4: 0xc056094  jal         func_158250
    ctx->pc = 0x1AF6E4u;
    SET_GPR_U32(ctx, 31, 0x1AF6ECu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1AF6E4u, 0x1AF6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6ECu;
label_1af6ec:
    // 0x1af6ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af6f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af6f4: 0xc064970  jal         func_1925C0
    ctx->pc = 0x1AF6F4u;
    SET_GPR_U32(ctx, 31, 0x1AF6FCu);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x1AF6F4u, 0x1AF6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6FCu;
label_1af6fc:
    // 0x1af6fc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1af6fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af700: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1af700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1af704: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1af704u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1af708: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF708u;
    {
        const bool branch_taken_0x1af708 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1af708) {
            ctx->pc = 0x1AF71Cu;
            goto label_1af71c;
        }
    }
    ctx->pc = 0x1AF710u;
    // 0x1af710: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af714: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1AF714u;
    SET_GPR_U32(ctx, 31, 0x1AF71Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1AF714u, 0x1AF71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF71Cu;
label_1af71c:
    // 0x1af71c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af724: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1af724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af728: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF730u;
    // 0x1af730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1af738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1af73c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1af73cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1af740: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1af740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1af744: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af748: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1af748u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af74c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1af74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af750: 0xc064a4c  jal         func_192930
    ctx->pc = 0x1AF750u;
    SET_GPR_U32(ctx, 31, 0x1AF758u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x1AF750u, 0x1AF758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF758u;
label_1af758:
    // 0x1af758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af75c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1af75cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1af760: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF768u;
    // 0x1af768: 0x0  nop
    ctx->pc = 0x1af768u;
    // NOP
    // 0x1af76c: 0x0  nop
    ctx->pc = 0x1af76cu;
    // NOP
    // 0x1af770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af77c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1af77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1af780: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1af780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af784: 0xc064a74  jal         func_1929D0
    ctx->pc = 0x1AF784u;
    SET_GPR_U32(ctx, 31, 0x1AF78Cu);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x1AF784u, 0x1AF78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF78Cu;
label_1af78c:
    // 0x1af78c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1af78cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1af790: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1af790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af794: 0xc06c608  jal         func_1B1820
    ctx->pc = 0x1AF794u;
    SET_GPR_U32(ctx, 31, 0x1AF79Cu);
    ctx->pc = 0x1B1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1820u, 0x1AF794u, 0x1AF79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF79Cu;
label_1af79c:
    // 0x1af79c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1af79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af7a0: 0xc06cf64  jal         func_1B3D90
    ctx->pc = 0x1AF7A0u;
    SET_GPR_U32(ctx, 31, 0x1AF7A8u);
    ctx->pc = 0x1B3D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3D90u, 0x1AF7A0u, 0x1AF7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7A8u;
label_1af7a8:
    // 0x1af7a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1af7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af7ac: 0xc06d1f8  jal         func_1B47E0
    ctx->pc = 0x1AF7ACu;
    SET_GPR_U32(ctx, 31, 0x1AF7B4u);
    ctx->pc = 0x1B47E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B47E0u, 0x1AF7ACu, 0x1AF7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7B4u;
label_1af7b4:
    // 0x1af7b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1af7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af7b8: 0xc06c8b8  jal         func_1B22E0
    ctx->pc = 0x1AF7B8u;
    SET_GPR_U32(ctx, 31, 0x1AF7C0u);
    ctx->pc = 0x1B22E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B22E0u, 0x1AF7B8u, 0x1AF7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7C0u;
label_1af7c0:
    // 0x1af7c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1af7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af7c4: 0xc06cba0  jal         func_1B2E80
    ctx->pc = 0x1AF7C4u;
    SET_GPR_U32(ctx, 31, 0x1AF7CCu);
    ctx->pc = 0x1B2E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2E80u, 0x1AF7C4u, 0x1AF7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7CCu;
label_1af7cc:
    // 0x1af7cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1af7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af7d0: 0xc06ccec  jal         func_1B33B0
    ctx->pc = 0x1AF7D0u;
    SET_GPR_U32(ctx, 31, 0x1AF7D8u);
    ctx->pc = 0x1B33B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B33B0u, 0x1AF7D0u, 0x1AF7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7D8u;
label_1af7d8:
    // 0x1af7d8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1af7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af7dc: 0xc06d2a8  jal         func_1B4AA0
    ctx->pc = 0x1AF7DCu;
    SET_GPR_U32(ctx, 31, 0x1AF7E4u);
    ctx->pc = 0x1B4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4AA0u, 0x1AF7DCu, 0x1AF7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7E4u;
label_1af7e4:
    // 0x1af7e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1af7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af7e8: 0xc06d3e8  jal         func_1B4FA0
    ctx->pc = 0x1AF7E8u;
    SET_GPR_U32(ctx, 31, 0x1AF7F0u);
    ctx->pc = 0x1B4FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4FA0u, 0x1AF7E8u, 0x1AF7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7F0u;
label_1af7f0:
    // 0x1af7f0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1af7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1af7f4: 0x24846db0  addiu       $a0, $a0, 0x6DB0
    ctx->pc = 0x1af7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28080));
    // 0x1af7f8: 0xc0ac004  jal         func_2B0010
    ctx->pc = 0x1AF7F8u;
    SET_GPR_U32(ctx, 31, 0x1AF800u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1AF7F8u, 0x1AF800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF800u;
label_1af800:
    // 0x1af800: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1af800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af804: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1af804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1af808: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af80c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af814: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1af814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af818: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF820u;
    // 0x1af820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af82c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af830: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1af830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1af834: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1af834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af838: 0xc064adc  jal         func_192B70
    ctx->pc = 0x1AF838u;
    SET_GPR_U32(ctx, 31, 0x1AF840u);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1AF838u, 0x1AF840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF840u;
label_1af840:
    // 0x1af840: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1af840u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1af844: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1af844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af848: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1AF848u;
    {
        const bool branch_taken_0x1af848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af848) {
            ctx->pc = 0x1AF8CCu;
            goto label_1af8cc;
        }
    }
    ctx->pc = 0x1AF850u;
label_1af850:
    // 0x1af850: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1af850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af854: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1af854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1af858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1af858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af85c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1AF85Cu;
    SET_GPR_U32(ctx, 31, 0x1AF864u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1AF85Cu, 0x1AF864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF864u;
label_1af864:
    // 0x1af864: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1af864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af868: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AF868u;
    {
        const bool branch_taken_0x1af868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af868) {
            ctx->pc = 0x1AF8C8u;
            goto label_1af8c8;
        }
    }
    ctx->pc = 0x1AF870u;
    // 0x1af870: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1af870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af874: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1af874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1af878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1af878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af87c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1AF87Cu;
    SET_GPR_U32(ctx, 31, 0x1AF884u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1AF87Cu, 0x1AF884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF884u;
label_1af884:
    // 0x1af884: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1af884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af888: 0xc06be48  jal         func_1AF920
    ctx->pc = 0x1AF888u;
    SET_GPR_U32(ctx, 31, 0x1AF890u);
    ctx->pc = 0x1AF920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF920u, 0x1AF888u, 0x1AF890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF890u;
label_1af890:
    // 0x1af890: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1af890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af894: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1af894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1af898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1af898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af89c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1AF89Cu;
    SET_GPR_U32(ctx, 31, 0x1AF8A4u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1AF89Cu, 0x1AF8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8A4u;
label_1af8a4:
    // 0x1af8a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1af8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af8a8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1AF8A8u;
    SET_GPR_U32(ctx, 31, 0x1AF8B0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1AF8A8u, 0x1AF8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8B0u;
label_1af8b0:
    // 0x1af8b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1af8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af8b4: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1af8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1af8b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1af8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af8bc: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1AF8BCu;
    SET_GPR_U32(ctx, 31, 0x1AF8C4u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1AF8BCu, 0x1AF8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8C4u;
label_1af8c4:
    // 0x1af8c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1af8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1af8c8:
    // 0x1af8c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1af8cc:
    // 0x1af8cc: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1af8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1af8d0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1AF8D0u;
    {
        const bool branch_taken_0x1af8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af8d0) {
            ctx->pc = 0x1AF850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af850;
        }
    }
    ctx->pc = 0x1AF8D8u;
    // 0x1af8d8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1af8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1af8dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af8e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af8e4: 0xc08f740  jal         func_23DD00
    ctx->pc = 0x1AF8E4u;
    SET_GPR_U32(ctx, 31, 0x1AF8ECu);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1AF8E4u, 0x1AF8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8ECu;
label_1af8ec:
    // 0x1af8ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1af8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af8f0: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1af8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1af8f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af8f8: 0xc0ac13c  jal         func_2B04F0
    ctx->pc = 0x1AF8F8u;
    SET_GPR_U32(ctx, 31, 0x1AF900u);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1AF8F8u, 0x1AF900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF900u;
label_1af900:
    // 0x1af900: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1af900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af904: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af90c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af910: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1af910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1af914: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF91Cu;
    // 0x1af91c: 0x0  nop
    ctx->pc = 0x1af91cu;
    // NOP
    ctx->pc = 0x1af920u;
}
