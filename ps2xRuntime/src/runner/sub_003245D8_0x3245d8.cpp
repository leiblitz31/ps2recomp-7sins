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

// Function: sub_003245D8
// Address: 0x3245d8 - 0x3246d0
void sub_003245D8_0x3245d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003245D8_0x3245d8");
#endif

    switch (ctx->pc) {
        case 0x32460cu: goto label_32460c;
        case 0x324614u: goto label_324614;
        case 0x32461cu: goto label_32461c;
        case 0x32465cu: goto label_32465c;
        case 0x324668u: goto label_324668;
        case 0x324670u: goto label_324670;
        case 0x324684u: goto label_324684;
        case 0x3246a8u: goto label_3246a8;
        default: break;
    }

    ctx->pc = 0x3245d8u;

    // 0x3245d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3245d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3245dc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3245dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3245e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3245e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3245e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3245e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3245e8: 0x2470b1e0  addiu       $s0, $v1, -0x4E20
    ctx->pc = 0x3245e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947296));
    // 0x3245ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3245ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3245f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3245f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245f4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3245f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61B200u));
    // 0x3245f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3245f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3245fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3245FCu;
    {
        const bool branch_taken_0x3245fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245FCu;
        // 0x324600: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3245fc) {
            ctx->pc = 0x32461Cu;
            goto label_32461c;
        }
    }
    ctx->pc = 0x324604u;
    // 0x324604: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x324604u;
    SET_GPR_U32(ctx, 31, 0x32460Cu);
    ctx->pc = 0x324608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324604u;
    // 0x324608: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x324604u, 0x32460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32460Cu;
label_32460c:
    // 0x32460c: 0xc0c91c6  jal         func_324718
    ctx->pc = 0x32460Cu;
    SET_GPR_U32(ctx, 31, 0x324614u);
    ctx->pc = 0x324610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32460Cu;
    // 0x324610: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324718u, 0x32460Cu, 0x324614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324614u;
label_324614:
    // 0x324614: 0xc0c8bba  jal         func_322EE8
    ctx->pc = 0x324614u;
    SET_GPR_U32(ctx, 31, 0x32461Cu);
    ctx->pc = 0x322EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322EE8u, 0x324614u, 0x32461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32461Cu;
label_32461c:
    // 0x32461c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32461cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324620: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x324620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32462c: 0x3e00008  jr          $ra
    ctx->pc = 0x32462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32462Cu;
        // 0x324630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32462Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324634u;
    // 0x324634: 0x0  nop
    ctx->pc = 0x324634u;
    // NOP
    // 0x324638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x324638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32463c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x32463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x324640: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x324640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x324644: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x324644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324648: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x324648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32464c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x324650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324654: 0xc0c8ecc  jal         func_323B30
    ctx->pc = 0x324654u;
    SET_GPR_U32(ctx, 31, 0x32465Cu);
    ctx->pc = 0x324658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324654u;
    // 0x324658: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B30u, 0x324654u, 0x32465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32465Cu;
label_32465c:
    // 0x32465c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32465cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324660: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x324660u;
    {
        const bool branch_taken_0x324660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x324664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324660u;
        // 0x324664: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324660) {
            ctx->pc = 0x3246ACu;
            goto label_3246ac;
        }
    }
    ctx->pc = 0x324668u;
label_324668:
    // 0x324668: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x324668u;
    SET_GPR_U32(ctx, 31, 0x324670u);
    ctx->pc = 0x32466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324668u;
    // 0x32466c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x324668u, 0x324670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324670u;
label_324670:
    // 0x324670: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x324670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x324674: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x324674u;
    {
        const bool branch_taken_0x324674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324674u;
        // 0x324678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324674) {
            ctx->pc = 0x324694u;
            goto label_324694;
        }
    }
    ctx->pc = 0x32467Cu;
    // 0x32467c: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x32467Cu;
    SET_GPR_U32(ctx, 31, 0x324684u);
    ctx->pc = 0x324680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32467Cu;
    // 0x324680: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x32467Cu, 0x324684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324684u;
label_324684:
    // 0x324684: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x324684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324688: 0x1603fff7  bne         $s0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x324688u;
    {
        const bool branch_taken_0x324688 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x32468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324688u;
        // 0x32468c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324688) {
            ctx->pc = 0x324668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324668;
        }
    }
    ctx->pc = 0x324690u;
    // 0x324690: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x324690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324694:
    // 0x324694: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324694u;
    {
        const bool branch_taken_0x324694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x324698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324694u;
        // 0x324698: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324694) {
            ctx->pc = 0x3246ACu;
            goto label_3246ac;
        }
    }
    ctx->pc = 0x32469Cu;
    // 0x32469c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x32469cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3246a0: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3246A0u;
    SET_GPR_U32(ctx, 31, 0x3246A8u);
    ctx->pc = 0x3246A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3246A0u;
    // 0x3246a4: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3246A0u, 0x3246A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3246A8u;
label_3246a8:
    // 0x3246a8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3246a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_3246ac:
    // 0x3246ac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3246acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3246b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3246b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3246b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3246b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3246b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3246b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3246bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3246bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3246c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3246c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3246c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3246C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3246C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246C4u;
        // 0x3246c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3246C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3246CCu;
    // 0x3246cc: 0x0  nop
    ctx->pc = 0x3246ccu;
    // NOP
    ctx->pc = 0x3246d0u;
}
