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

// Function: sub_002DC570
// Address: 0x2dc570 - 0x2dc790
void sub_002DC570_0x2dc570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC570_0x2dc570");
#endif

    switch (ctx->pc) {
        case 0x2dc588u: goto label_2dc588;
        case 0x2dc5ecu: goto label_2dc5ec;
        case 0x2dc60cu: goto label_2dc60c;
        case 0x2dc64cu: goto label_2dc64c;
        case 0x2dc69cu: goto label_2dc69c;
        case 0x2dc6acu: goto label_2dc6ac;
        case 0x2dc6d0u: goto label_2dc6d0;
        case 0x2dc6ecu: goto label_2dc6ec;
        case 0x2dc700u: goto label_2dc700;
        case 0x2dc71cu: goto label_2dc71c;
        case 0x2dc730u: goto label_2dc730;
        case 0x2dc73cu: goto label_2dc73c;
        case 0x2dc750u: goto label_2dc750;
        case 0x2dc764u: goto label_2dc764;
        default: break;
    }

    ctx->pc = 0x2dc570u;

    // 0x2dc570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dc578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dc57c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dc57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc580: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2DC580u;
    SET_GPR_U32(ctx, 31, 0x2DC588u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2DC580u, 0x2DC588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC588u;
label_2dc588:
    // 0x2dc588: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2dc588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2dc58c: 0x24636990  addiu       $v1, $v1, 0x6990
    ctx->pc = 0x2dc58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27024));
    // 0x2dc590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc594: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2dc594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2dc598: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc5a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dc5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dc5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC5ACu;
    // 0x2dc5ac: 0x0  nop
    ctx->pc = 0x2dc5acu;
    // NOP
    // 0x2dc5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc5b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dc5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dc5bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2dc5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dc5c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc5c4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DC5C4u;
    {
        const bool branch_taken_0x2dc5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc5c4) {
            ctx->pc = 0x2DC60Cu;
            goto label_2dc60c;
        }
    }
    ctx->pc = 0x2DC5CCu;
    // 0x2dc5cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2dc5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2dc5d0: 0x24636990  addiu       $v1, $v1, 0x6990
    ctx->pc = 0x2dc5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27024));
    // 0x2dc5d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc5d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2dc5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2dc5dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dc5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc5e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5e4: 0xc09d150  jal         func_274540
    ctx->pc = 0x2DC5E4u;
    SET_GPR_U32(ctx, 31, 0x2DC5ECu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2DC5E4u, 0x2DC5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC5ECu;
label_2dc5ec:
    // 0x2dc5ec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2dc5ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc5f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dc5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dc5f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dc5f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dc5f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC5F8u;
    {
        const bool branch_taken_0x2dc5f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dc5f8) {
            ctx->pc = 0x2DC60Cu;
            goto label_2dc60c;
        }
    }
    ctx->pc = 0x2DC600u;
    // 0x2dc600: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dc600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc604: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DC604u;
    SET_GPR_U32(ctx, 31, 0x2DC60Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DC604u, 0x2DC60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC60Cu;
label_2dc60c:
    // 0x2dc60c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc614: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dc614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dc618: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC620u;
    // 0x2dc620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dc620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dc624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dc624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dc628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dc62c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2dc62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2dc630: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2dc630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2dc634: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2dc634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2dc638: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2dc638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc63c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2dc63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc640: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2dc640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dc644: 0xc09d18c  jal         func_274630
    ctx->pc = 0x2DC644u;
    SET_GPR_U32(ctx, 31, 0x2DC64Cu);
    ctx->pc = 0x274630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274630u, 0x2DC644u, 0x2DC64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC64Cu;
label_2dc64c:
    // 0x2dc64c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2dc64cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dc650: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dc650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dc654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc65c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2dc65cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dc660: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC668u;
    // 0x2dc668: 0x0  nop
    ctx->pc = 0x2dc668u;
    // NOP
    // 0x2dc66c: 0x0  nop
    ctx->pc = 0x2dc66cu;
    // NOP
    // 0x2dc670: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2dc670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2dc674: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dc674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dc678: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dc678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dc67c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dc684: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2dc684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x2dc688: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x2dc688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x2dc68c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2dc68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dc690: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2dc690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dc694: 0xc09d1e4  jal         func_274790
    ctx->pc = 0x2DC694u;
    SET_GPR_U32(ctx, 31, 0x2DC69Cu);
    ctx->pc = 0x274790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274790u, 0x2DC694u, 0x2DC69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC69Cu;
label_2dc69c:
    // 0x2dc69c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2dc69cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dc6a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2dc6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dc6a4: 0xc0b7330  jal         func_2DCCC0
    ctx->pc = 0x2DC6A4u;
    SET_GPR_U32(ctx, 31, 0x2DC6ACu);
    ctx->pc = 0x2DCCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCCC0u, 0x2DC6A4u, 0x2DC6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6ACu;
label_2dc6ac:
    // 0x2dc6ac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2dc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dc6b0: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2dc6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2dc6b4: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2dc6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x2dc6b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2dc6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dc6bc: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2dc6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2dc6c0: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2dc6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x2dc6c4: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x2dc6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2dc6c8: 0xc0ade78  jal         func_2B79E0
    ctx->pc = 0x2DC6C8u;
    SET_GPR_U32(ctx, 31, 0x2DC6D0u);
    ctx->pc = 0x2B79E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79E0u, 0x2DC6C8u, 0x2DC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6D0u;
label_2dc6d0:
    // 0x2dc6d0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2dc6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dc6d4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2dc6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dc6d8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dc6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dc6dc: 0x24a5e630  addiu       $a1, $a1, -0x19D0
    ctx->pc = 0x2dc6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960688));
    // 0x2dc6e0: 0x2786a54c  addiu       $a2, $gp, -0x5AB4
    ctx->pc = 0x2dc6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944076));
    // 0x2dc6e4: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x2DC6E4u;
    SET_GPR_U32(ctx, 31, 0x2DC6ECu);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2DC6E4u, 0x2DC6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6ECu;
label_2dc6ec:
    // 0x2dc6ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2dc6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dc6f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dc6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6f4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2dc6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dc6f8: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2DC6F8u;
    SET_GPR_U32(ctx, 31, 0x2DC700u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2DC6F8u, 0x2DC700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC700u;
label_2dc700:
    // 0x2dc700: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2dc700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dc704: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2dc704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dc708: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dc708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dc70c: 0x24a5e650  addiu       $a1, $a1, -0x19B0
    ctx->pc = 0x2dc70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960720));
    // 0x2dc710: 0x2786a54c  addiu       $a2, $gp, -0x5AB4
    ctx->pc = 0x2dc710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944076));
    // 0x2dc714: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x2DC714u;
    SET_GPR_U32(ctx, 31, 0x2DC71Cu);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2DC714u, 0x2DC71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC71Cu;
label_2dc71c:
    // 0x2dc71c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2dc71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dc720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dc720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc724: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2dc724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dc728: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2DC728u;
    SET_GPR_U32(ctx, 31, 0x2DC730u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2DC728u, 0x2DC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC730u;
label_2dc730:
    // 0x2dc730: 0x8f84bcb0  lw          $a0, -0x4350($gp)
    ctx->pc = 0x2dc730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2dc734: 0xc0b0654  jal         func_2C1950
    ctx->pc = 0x2DC734u;
    SET_GPR_U32(ctx, 31, 0x2DC73Cu);
    ctx->pc = 0x2C1950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1950u, 0x2DC734u, 0x2DC73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC73Cu;
label_2dc73c:
    // 0x2dc73c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dc73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc744: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2dc744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dc748: 0xc0b71e4  jal         func_2DC790
    ctx->pc = 0x2DC748u;
    SET_GPR_U32(ctx, 31, 0x2DC750u);
    ctx->pc = 0x2DC790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC790u, 0x2DC748u, 0x2DC750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC750u;
label_2dc750:
    // 0x2dc750: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x2dc750u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2dc754: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2dc754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dc758: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2dc758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dc75c: 0xc0adde4  jal         func_2B7790
    ctx->pc = 0x2DC75Cu;
    SET_GPR_U32(ctx, 31, 0x2DC764u);
    ctx->pc = 0x2B7790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7790u, 0x2DC75Cu, 0x2DC764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC764u;
label_2dc764:
    // 0x2dc764: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dc764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc768: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dc768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc76c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dc76cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc778: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2dc778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dc77c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC784u;
    // 0x2dc784: 0x0  nop
    ctx->pc = 0x2dc784u;
    // NOP
    // 0x2dc788: 0x0  nop
    ctx->pc = 0x2dc788u;
    // NOP
    // 0x2dc78c: 0x0  nop
    ctx->pc = 0x2dc78cu;
    // NOP
    ctx->pc = 0x2dc790u;
}
