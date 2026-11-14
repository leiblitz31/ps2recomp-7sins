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

// Function: sub_001DC610
// Address: 0x1dc610 - 0x1dc770
void sub_001DC610_0x1dc610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC610_0x1dc610");
#endif

    switch (ctx->pc) {
        case 0x1dc630u: goto label_1dc630;
        case 0x1dc648u: goto label_1dc648;
        case 0x1dc658u: goto label_1dc658;
        case 0x1dc670u: goto label_1dc670;
        case 0x1dc680u: goto label_1dc680;
        case 0x1dc698u: goto label_1dc698;
        case 0x1dc6a8u: goto label_1dc6a8;
        case 0x1dc6c0u: goto label_1dc6c0;
        case 0x1dc6d0u: goto label_1dc6d0;
        case 0x1dc6e8u: goto label_1dc6e8;
        case 0x1dc6f8u: goto label_1dc6f8;
        case 0x1dc710u: goto label_1dc710;
        case 0x1dc720u: goto label_1dc720;
        case 0x1dc738u: goto label_1dc738;
        case 0x1dc748u: goto label_1dc748;
        case 0x1dc760u: goto label_1dc760;
        default: break;
    }

    ctx->pc = 0x1dc610u;

    // 0x1dc610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dc610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dc614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1dc618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1dc61c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1dc61cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1dc620: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dc620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc624: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc628: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC628u;
    SET_GPR_U32(ctx, 31, 0x1DC630u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC628u, 0x1DC630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC630u;
label_1dc630:
    // 0x1dc630: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dc630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc634: 0x8c650044  lw          $a1, 0x44($v1)
    ctx->pc = 0x1dc634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1dc638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc63c: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x1dc63cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc640: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DC640u;
    SET_GPR_U32(ctx, 31, 0x1DC648u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DC640u, 0x1DC648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC648u;
label_1dc648:
    // 0x1dc648: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dc648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc64c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc650: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC650u;
    SET_GPR_U32(ctx, 31, 0x1DC658u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC650u, 0x1DC658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC658u;
label_1dc658:
    // 0x1dc658: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dc658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc65c: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x1dc65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1dc660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc664: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x1dc664u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc668: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DC668u;
    SET_GPR_U32(ctx, 31, 0x1DC670u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DC668u, 0x1DC670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC670u;
label_1dc670:
    // 0x1dc670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dc670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc674: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc678: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC678u;
    SET_GPR_U32(ctx, 31, 0x1DC680u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC678u, 0x1DC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC680u;
label_1dc680:
    // 0x1dc680: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dc680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc684: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x1dc684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1dc688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc68c: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x1dc68cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc690: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DC690u;
    SET_GPR_U32(ctx, 31, 0x1DC698u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DC690u, 0x1DC698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC698u;
label_1dc698:
    // 0x1dc698: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dc698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc69c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc6a0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC6A0u;
    SET_GPR_U32(ctx, 31, 0x1DC6A8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC6A0u, 0x1DC6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6A8u;
label_1dc6a8:
    // 0x1dc6a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dc6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc6ac: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x1dc6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1dc6b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc6b4: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x1dc6b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc6b8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DC6B8u;
    SET_GPR_U32(ctx, 31, 0x1DC6C0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DC6B8u, 0x1DC6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6C0u;
label_1dc6c0:
    // 0x1dc6c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dc6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc6c4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc6c8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC6C8u;
    SET_GPR_U32(ctx, 31, 0x1DC6D0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC6C8u, 0x1DC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6D0u;
label_1dc6d0:
    // 0x1dc6d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc6d4: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x1dc6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1dc6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc6dc: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x1dc6dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc6e0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DC6E0u;
    SET_GPR_U32(ctx, 31, 0x1DC6E8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DC6E0u, 0x1DC6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6E8u;
label_1dc6e8:
    // 0x1dc6e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dc6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc6ec: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc6f0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC6F0u;
    SET_GPR_U32(ctx, 31, 0x1DC6F8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC6F0u, 0x1DC6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6F8u;
label_1dc6f8:
    // 0x1dc6f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc6fc: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x1dc6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dc700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc704: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x1dc704u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc708: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DC708u;
    SET_GPR_U32(ctx, 31, 0x1DC710u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DC708u, 0x1DC710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC710u;
label_1dc710:
    // 0x1dc710: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dc710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc714: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc718: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC718u;
    SET_GPR_U32(ctx, 31, 0x1DC720u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC718u, 0x1DC720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC720u;
label_1dc720:
    // 0x1dc720: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dc720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc724: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x1dc724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1dc728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc72c: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x1dc72cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc730: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DC730u;
    SET_GPR_U32(ctx, 31, 0x1DC738u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DC730u, 0x1DC738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC738u;
label_1dc738:
    // 0x1dc738: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dc738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc73c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc740: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC740u;
    SET_GPR_U32(ctx, 31, 0x1DC748u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC740u, 0x1DC748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC748u;
label_1dc748:
    // 0x1dc748: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dc748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc74c: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x1dc74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1dc750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc754: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x1dc754u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc758: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DC758u;
    SET_GPR_U32(ctx, 31, 0x1DC760u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DC758u, 0x1DC760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC760u;
label_1dc760:
    // 0x1dc760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc764: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dc764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc768: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC770u;
}
