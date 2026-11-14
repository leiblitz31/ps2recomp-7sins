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

// Function: sub_00235380
// Address: 0x235380 - 0x2354e0
void sub_00235380_0x235380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235380_0x235380");
#endif

    switch (ctx->pc) {
        case 0x2353b4u: goto label_2353b4;
        case 0x2353c8u: goto label_2353c8;
        case 0x2353ecu: goto label_2353ec;
        case 0x235414u: goto label_235414;
        case 0x235438u: goto label_235438;
        case 0x235460u: goto label_235460;
        case 0x235490u: goto label_235490;
        case 0x2354a0u: goto label_2354a0;
        case 0x2354c4u: goto label_2354c4;
        default: break;
    }

    ctx->pc = 0x235380u;

    // 0x235380: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x235380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x235384: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x235388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x235388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23538c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23538cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x235390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x235390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x235394: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x235394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x235398: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x235398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x23539c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x23539cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2353a0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2353a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2353a4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2353a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2353a8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2353a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2353ac: 0xc051960  jal         func_146580
    ctx->pc = 0x2353ACu;
    SET_GPR_U32(ctx, 31, 0x2353B4u);
    ctx->pc = 0x146580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146580u, 0x2353ACu, 0x2353B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353B4u;
label_2353b4:
    // 0x2353b4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2353b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2353b8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2353b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2353bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2353bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2353c0: 0xc041954  jal         func_106550
    ctx->pc = 0x2353C0u;
    SET_GPR_U32(ctx, 31, 0x2353C8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2353C0u, 0x2353C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353C8u;
label_2353c8:
    // 0x2353c8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2353c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2353cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2353ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2353d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2353d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2353d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2353d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2353d8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2353d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2353dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2353dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2353e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2353e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2353e4: 0xc051980  jal         func_146600
    ctx->pc = 0x2353E4u;
    SET_GPR_U32(ctx, 31, 0x2353ECu);
    ctx->pc = 0x146600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146600u, 0x2353E4u, 0x2353ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353ECu;
label_2353ec:
    // 0x2353ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2353ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2353f0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2353f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2353f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2353f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2353f8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x2353f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2353fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2353fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235400: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x235400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x235404: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x235404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235408: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x235408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x23540c: 0xc051914  jal         func_146450
    ctx->pc = 0x23540Cu;
    SET_GPR_U32(ctx, 31, 0x235414u);
    ctx->pc = 0x146450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146450u, 0x23540Cu, 0x235414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235414u;
label_235414:
    // 0x235414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235418: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x235418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23541c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23541cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235420: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x235420u;
    {
        const bool branch_taken_0x235420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x235420) {
            ctx->pc = 0x235444u;
            goto label_235444;
        }
    }
    ctx->pc = 0x235428u;
    // 0x235428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23542c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x23542cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x235430: 0xc051934  jal         func_1464D0
    ctx->pc = 0x235430u;
    SET_GPR_U32(ctx, 31, 0x235438u);
    ctx->pc = 0x1464D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1464D0u, 0x235430u, 0x235438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235438u;
label_235438:
    // 0x235438: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x235438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x23543c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23543Cu;
    {
        const bool branch_taken_0x23543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23543c) {
            ctx->pc = 0x235464u;
            goto label_235464;
        }
    }
    ctx->pc = 0x235444u;
label_235444:
    // 0x235444: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x235444u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x235448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23544c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23544cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x235450: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x235450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x235454: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x235454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x235458: 0xc08d538  jal         func_2354E0
    ctx->pc = 0x235458u;
    SET_GPR_U32(ctx, 31, 0x235460u);
    ctx->pc = 0x2354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2354E0u, 0x235458u, 0x235460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235460u;
label_235460:
    // 0x235460: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235464:
    // 0x235464: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x235464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x235468: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x235468u;
    {
        const bool branch_taken_0x235468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235468) {
            ctx->pc = 0x235494u;
            goto label_235494;
        }
    }
    ctx->pc = 0x235470u;
    // 0x235470: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x235470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x235474: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x235474u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x235478: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x235478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23547c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23547cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x235480: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x235480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235484: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x235484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x235488: 0xc051914  jal         func_146450
    ctx->pc = 0x235488u;
    SET_GPR_U32(ctx, 31, 0x235490u);
    ctx->pc = 0x146450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146450u, 0x235488u, 0x235490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235490u;
label_235490:
    // 0x235490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235494:
    // 0x235494: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x235494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x235498: 0xc0518dc  jal         func_146370
    ctx->pc = 0x235498u;
    SET_GPR_U32(ctx, 31, 0x2354A0u);
    ctx->pc = 0x146370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146370u, 0x235498u, 0x2354A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354A0u;
label_2354a0:
    // 0x2354a0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2354a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2354a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2354a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2354a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2354a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2354ac: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2354acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2354b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2354b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2354b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2354b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2354b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2354b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2354bc: 0xc0518c8  jal         func_146320
    ctx->pc = 0x2354BCu;
    SET_GPR_U32(ctx, 31, 0x2354C4u);
    ctx->pc = 0x146320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146320u, 0x2354BCu, 0x2354C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354C4u;
label_2354c4:
    // 0x2354c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2354c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2354c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2354c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2354cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2354ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2354d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2354d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2354d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2354d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2354d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2354D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2354D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2354E0u;
}
