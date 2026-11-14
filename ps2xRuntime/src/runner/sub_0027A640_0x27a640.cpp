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

// Function: sub_0027A640
// Address: 0x27a640 - 0x27a750
void sub_0027A640_0x27a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A640_0x27a640");
#endif

    switch (ctx->pc) {
        case 0x27a674u: goto label_27a674;
        case 0x27a688u: goto label_27a688;
        case 0x27a6acu: goto label_27a6ac;
        case 0x27a6c8u: goto label_27a6c8;
        case 0x27a6e0u: goto label_27a6e0;
        case 0x27a708u: goto label_27a708;
        case 0x27a718u: goto label_27a718;
        case 0x27a734u: goto label_27a734;
        default: break;
    }

    ctx->pc = 0x27a640u;

    // 0x27a640: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27a644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27a648: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27a64c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27a650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a654: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x27a654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x27a658: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x27a658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x27a65c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x27a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x27a660: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x27a660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x27a664: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x27a664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x27a668: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x27a668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a66c: 0xc09ea24  jal         func_27A890
    ctx->pc = 0x27A66Cu;
    SET_GPR_U32(ctx, 31, 0x27A674u);
    ctx->pc = 0x27A890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A890u, 0x27A66Cu, 0x27A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A674u;
label_27a674:
    // 0x27a674: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x27a674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x27a678: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x27a678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x27a67c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x27a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x27a680: 0xc041954  jal         func_106550
    ctx->pc = 0x27A680u;
    SET_GPR_U32(ctx, 31, 0x27A688u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x27A680u, 0x27A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A688u;
label_27a688:
    // 0x27a688: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x27a688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x27a68c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a690: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x27a690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27a694: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x27a694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a698: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x27a698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x27a69c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27a69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27a6a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6a4: 0xc0a0860  jal         func_282180
    ctx->pc = 0x27A6A4u;
    SET_GPR_U32(ctx, 31, 0x27A6ACu);
    ctx->pc = 0x282180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282180u, 0x27A6A4u, 0x27A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A6ACu;
label_27a6ac:
    // 0x27a6ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x27a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a6b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a6b8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x27a6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27a6bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27a6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6c0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x27A6C0u;
    SET_GPR_U32(ctx, 31, 0x27A6C8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x27A6C0u, 0x27A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A6C8u;
label_27a6c8:
    // 0x27a6c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6d0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x27a6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27a6d4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x27a6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27a6d8: 0xc09ea08  jal         func_27A820
    ctx->pc = 0x27A6D8u;
    SET_GPR_U32(ctx, 31, 0x27A6E0u);
    ctx->pc = 0x27A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A820u, 0x27A6D8u, 0x27A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A6E0u;
label_27a6e0:
    // 0x27a6e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6e4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x27a6e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27a6e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27A6E8u;
    {
        const bool branch_taken_0x27a6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a6e8) {
            ctx->pc = 0x27A70Cu;
            goto label_27a70c;
        }
    }
    ctx->pc = 0x27A6F0u;
    // 0x27a6f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x27a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a6f4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x27a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27a6f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27a6fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27a6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a700: 0xc041934  jal         func_1064D0
    ctx->pc = 0x27A700u;
    SET_GPR_U32(ctx, 31, 0x27A708u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x27A700u, 0x27A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A708u;
label_27a708:
    // 0x27a708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a70c:
    // 0x27a70c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x27a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a710: 0xc09e9e8  jal         func_27A7A0
    ctx->pc = 0x27A710u;
    SET_GPR_U32(ctx, 31, 0x27A718u);
    ctx->pc = 0x27A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A7A0u, 0x27A710u, 0x27A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A718u;
label_27a718:
    // 0x27a718: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x27a718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x27a71c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x27a71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27a720: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x27a720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a724: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27a724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a728: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27a728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a72c: 0xc09e9d4  jal         func_27A750
    ctx->pc = 0x27A72Cu;
    SET_GPR_U32(ctx, 31, 0x27A734u);
    ctx->pc = 0x27A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A750u, 0x27A72Cu, 0x27A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A734u;
label_27a734:
    // 0x27a734: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27a734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27a738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a73c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a73cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a744: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x27a744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27a748: 0x3e00008  jr          $ra
    ctx->pc = 0x27A748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A750u;
}
