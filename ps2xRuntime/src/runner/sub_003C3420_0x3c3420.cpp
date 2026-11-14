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

// Function: sub_003C3420
// Address: 0x3c3420 - 0x3c35c0
void sub_003C3420_0x3c3420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3420_0x3c3420");
#endif

    switch (ctx->pc) {
        case 0x3c3420u: goto label_3c3420;
        case 0x3c3424u: goto label_3c3424;
        case 0x3c3428u: goto label_3c3428;
        case 0x3c342cu: goto label_3c342c;
        case 0x3c3430u: goto label_3c3430;
        case 0x3c3434u: goto label_3c3434;
        case 0x3c3438u: goto label_3c3438;
        case 0x3c343cu: goto label_3c343c;
        case 0x3c3440u: goto label_3c3440;
        case 0x3c3444u: goto label_3c3444;
        case 0x3c3448u: goto label_3c3448;
        case 0x3c344cu: goto label_3c344c;
        case 0x3c3450u: goto label_3c3450;
        case 0x3c3454u: goto label_3c3454;
        case 0x3c3458u: goto label_3c3458;
        case 0x3c345cu: goto label_3c345c;
        case 0x3c3460u: goto label_3c3460;
        case 0x3c3464u: goto label_3c3464;
        case 0x3c3468u: goto label_3c3468;
        case 0x3c346cu: goto label_3c346c;
        case 0x3c3470u: goto label_3c3470;
        case 0x3c3474u: goto label_3c3474;
        case 0x3c3478u: goto label_3c3478;
        case 0x3c347cu: goto label_3c347c;
        case 0x3c3480u: goto label_3c3480;
        case 0x3c3484u: goto label_3c3484;
        case 0x3c3488u: goto label_3c3488;
        case 0x3c348cu: goto label_3c348c;
        case 0x3c3490u: goto label_3c3490;
        case 0x3c3494u: goto label_3c3494;
        case 0x3c3498u: goto label_3c3498;
        case 0x3c349cu: goto label_3c349c;
        case 0x3c34a0u: goto label_3c34a0;
        case 0x3c34a4u: goto label_3c34a4;
        case 0x3c34a8u: goto label_3c34a8;
        case 0x3c34acu: goto label_3c34ac;
        case 0x3c34b0u: goto label_3c34b0;
        case 0x3c34b4u: goto label_3c34b4;
        case 0x3c34b8u: goto label_3c34b8;
        case 0x3c34bcu: goto label_3c34bc;
        case 0x3c34c0u: goto label_3c34c0;
        case 0x3c34c4u: goto label_3c34c4;
        case 0x3c34c8u: goto label_3c34c8;
        case 0x3c34ccu: goto label_3c34cc;
        case 0x3c34d0u: goto label_3c34d0;
        case 0x3c34d4u: goto label_3c34d4;
        case 0x3c34d8u: goto label_3c34d8;
        case 0x3c34dcu: goto label_3c34dc;
        case 0x3c34e0u: goto label_3c34e0;
        case 0x3c34e4u: goto label_3c34e4;
        case 0x3c34e8u: goto label_3c34e8;
        case 0x3c34ecu: goto label_3c34ec;
        case 0x3c34f0u: goto label_3c34f0;
        case 0x3c34f4u: goto label_3c34f4;
        case 0x3c34f8u: goto label_3c34f8;
        case 0x3c34fcu: goto label_3c34fc;
        case 0x3c3500u: goto label_3c3500;
        case 0x3c3504u: goto label_3c3504;
        case 0x3c3508u: goto label_3c3508;
        case 0x3c350cu: goto label_3c350c;
        case 0x3c3510u: goto label_3c3510;
        case 0x3c3514u: goto label_3c3514;
        case 0x3c3518u: goto label_3c3518;
        case 0x3c351cu: goto label_3c351c;
        case 0x3c3520u: goto label_3c3520;
        case 0x3c3524u: goto label_3c3524;
        case 0x3c3528u: goto label_3c3528;
        case 0x3c352cu: goto label_3c352c;
        case 0x3c3530u: goto label_3c3530;
        case 0x3c3534u: goto label_3c3534;
        case 0x3c3538u: goto label_3c3538;
        case 0x3c353cu: goto label_3c353c;
        case 0x3c3540u: goto label_3c3540;
        case 0x3c3544u: goto label_3c3544;
        case 0x3c3548u: goto label_3c3548;
        case 0x3c354cu: goto label_3c354c;
        case 0x3c3550u: goto label_3c3550;
        case 0x3c3554u: goto label_3c3554;
        case 0x3c3558u: goto label_3c3558;
        case 0x3c355cu: goto label_3c355c;
        case 0x3c3560u: goto label_3c3560;
        case 0x3c3564u: goto label_3c3564;
        case 0x3c3568u: goto label_3c3568;
        case 0x3c356cu: goto label_3c356c;
        case 0x3c3570u: goto label_3c3570;
        case 0x3c3574u: goto label_3c3574;
        case 0x3c3578u: goto label_3c3578;
        case 0x3c357cu: goto label_3c357c;
        case 0x3c3580u: goto label_3c3580;
        case 0x3c3584u: goto label_3c3584;
        case 0x3c3588u: goto label_3c3588;
        case 0x3c358cu: goto label_3c358c;
        case 0x3c3590u: goto label_3c3590;
        case 0x3c3594u: goto label_3c3594;
        case 0x3c3598u: goto label_3c3598;
        case 0x3c359cu: goto label_3c359c;
        case 0x3c35a0u: goto label_3c35a0;
        case 0x3c35a4u: goto label_3c35a4;
        case 0x3c35a8u: goto label_3c35a8;
        case 0x3c35acu: goto label_3c35ac;
        case 0x3c35b0u: goto label_3c35b0;
        case 0x3c35b4u: goto label_3c35b4;
        case 0x3c35b8u: goto label_3c35b8;
        case 0x3c35bcu: goto label_3c35bc;
        default: break;
    }

    ctx->pc = 0x3c3420u;

label_3c3420:
    // 0x3c3420: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c3420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3c3424:
    // 0x3c3424: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3c3424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3c3428:
    // 0x3c3428: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3c3428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3c342c:
    // 0x3c342c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c342cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c3430:
    // 0x3c3430: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3c3430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3c3434:
    // 0x3c3434: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c3434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3438:
    // 0x3c3438: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3c3438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3c343c:
    // 0x3c343c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c343cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c3440:
    // 0x3c3440: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3c3440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3c3444:
    // 0x3c3444: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3c3444u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c3448:
    // 0x3c3448: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3c3448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_3c344c:
    // 0x3c344c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3c344cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3c3450:
    // 0x3c3450: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3c3450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3c3454:
    // 0x3c3454: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x3c3454u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c3458:
    // 0x3c3458: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c3458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c345c:
    // 0x3c345c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3c345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3c3460:
    // 0x3c3460: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
label_3c3464:
    if (ctx->pc == 0x3C3464u) {
        ctx->pc = 0x3C3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3460u;
        // 0x3c3464: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3468u;
        goto label_3c3468;
    }
    ctx->pc = 0x3C3460u;
    {
        const bool branch_taken_0x3c3460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3460u;
        // 0x3c3464: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3460) {
            ctx->pc = 0x3C3574u;
            goto label_3c3574;
        }
    }
    ctx->pc = 0x3C3468u;
label_3c3468:
    // 0x3c3468: 0x8f84bd88  lw          $a0, -0x4278($gp)
    ctx->pc = 0x3c3468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950280)));
label_3c346c:
    // 0x3c346c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3c346cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c3470:
    // 0x3c3470: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3c3470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c3474:
    // 0x3c3474: 0xc0bf6e8  jal         func_2FDBA0
label_3c3478:
    if (ctx->pc == 0x3C3478u) {
        ctx->pc = 0x3C3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3474u;
        // 0x3c3478: 0x24150005  addiu       $s5, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C347Cu;
        goto label_3c347c;
    }
    ctx->pc = 0x3C3474u;
    SET_GPR_U32(ctx, 31, 0x3C347Cu);
    ctx->pc = 0x3C3478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3474u;
    // 0x3c3478: 0x24150005  addiu       $s5, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C3474u, 0x3C347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C347Cu;
label_3c347c:
    // 0x3c347c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3c3480:
    if (ctx->pc == 0x3C3480u) {
        ctx->pc = 0x3C3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C347Cu;
        // 0x3c3480: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3484u;
        goto label_3c3484;
    }
    ctx->pc = 0x3C347Cu;
    {
        const bool branch_taken_0x3c347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C347Cu;
        // 0x3c3480: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c347c) {
            ctx->pc = 0x3C348Cu;
            goto label_3c348c;
        }
    }
    ctx->pc = 0x3C3484u;
label_3c3484:
    // 0x3c3484: 0x0  nop
    ctx->pc = 0x3c3484u;
    // NOP
label_3c3488:
    // 0x3c3488: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3c3488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c348c:
    // 0x3c348c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3c348cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c3490:
    // 0x3c3490: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3c3494:
    if (ctx->pc == 0x3C3494u) {
        ctx->pc = 0x3C3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3490u;
        // 0x3c3494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3498u;
        goto label_3c3498;
    }
    ctx->pc = 0x3C3490u;
    {
        const bool branch_taken_0x3c3490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3490u;
        // 0x3c3494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3490) {
            ctx->pc = 0x3C34BCu;
            goto label_3c34bc;
        }
    }
    ctx->pc = 0x3C3498u;
label_3c3498:
    // 0x3c3498: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3c3498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3c349c:
    // 0x3c349c: 0x40f809  jalr        $v0
label_3c34a0:
    if (ctx->pc == 0x3C34A0u) {
        ctx->pc = 0x3C34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C349Cu;
        // 0x3c34a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C34A4u;
        goto label_3c34a4;
    }
    ctx->pc = 0x3C349Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C34A4u);
        ctx->pc = 0x3C34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C349Cu;
        // 0x3c34a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C349Cu, 0x3C34A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C34A4u;
label_3c34a4:
    // 0x3c34a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c34a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c34a8:
    // 0x3c34a8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x3c34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_3c34ac:
    // 0x3c34ac: 0x5454fff6  bnel        $v0, $s4, . + 4 + (-0xA << 2)
label_3c34b0:
    if (ctx->pc == 0x3C34B0u) {
        ctx->pc = 0x3C34B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34ACu;
        // 0x3c34b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C34B4u;
        goto label_3c34b4;
    }
    ctx->pc = 0x3C34ACu;
    {
        const bool branch_taken_0x3c34ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3c34ac) {
            ctx->pc = 0x3C34B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C34ACu;
            // 0x3c34b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3488;
        }
    }
    ctx->pc = 0x3C34B4u;
label_3c34b4:
    // 0x3c34b4: 0xac750038  sw          $s5, 0x38($v1)
    ctx->pc = 0x3c34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 21));
label_3c34b8:
    // 0x3c34b8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x3c34b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c34bc:
    // 0x3c34bc: 0xc0bf6e0  jal         func_2FDB80
label_3c34c0:
    if (ctx->pc == 0x3C34C0u) {
        ctx->pc = 0x3C34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34BCu;
        // 0x3c34c0: 0x8f84bd88  lw          $a0, -0x4278($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C34C4u;
        goto label_3c34c4;
    }
    ctx->pc = 0x3C34BCu;
    SET_GPR_U32(ctx, 31, 0x3C34C4u);
    ctx->pc = 0x3C34C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C34BCu;
    // 0x3c34c0: 0x8f84bd88  lw          $a0, -0x4278($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C34BCu, 0x3C34C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C34C4u;
label_3c34c4:
    // 0x3c34c4: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
label_3c34c8:
    if (ctx->pc == 0x3C34C8u) {
        ctx->pc = 0x3C34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34C4u;
        // 0x3c34c8: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C34CCu;
        goto label_3c34cc;
    }
    ctx->pc = 0x3C34C4u;
    {
        const bool branch_taken_0x3c34c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34C4u;
        // 0x3c34c8: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c34c4) {
            ctx->pc = 0x3C34F8u;
            goto label_3c34f8;
        }
    }
    ctx->pc = 0x3C34CCu;
label_3c34cc:
    // 0x3c34cc: 0xc0f0d70  jal         func_3C35C0
label_3c34d0:
    if (ctx->pc == 0x3C34D0u) {
        ctx->pc = 0x3C34D4u;
        goto label_3c34d4;
    }
    ctx->pc = 0x3C34CCu;
    SET_GPR_U32(ctx, 31, 0x3C34D4u);
    ctx->pc = 0x3C35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C35C0u, 0x3C34CCu, 0x3C34D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C34D4u;
label_3c34d4:
    // 0x3c34d4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3c34d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3c34d8:
    // 0x3c34d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3c34d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c34dc:
    // 0x3c34dc: 0x8c63e004  lw          $v1, -0x1FFC($v1)
    ctx->pc = 0x3c34dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959108)));
label_3c34e0:
    // 0x3c34e0: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_3c34e4:
    if (ctx->pc == 0x3C34E4u) {
        ctx->pc = 0x3C34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34E0u;
        // 0x3c34e4: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C34E8u;
        goto label_3c34e8;
    }
    ctx->pc = 0x3C34E0u;
    {
        const bool branch_taken_0x3c34e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34E0u;
        // 0x3c34e4: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c34e0) {
            ctx->pc = 0x3C358Cu;
            goto label_3c358c;
        }
    }
    ctx->pc = 0x3C34E8u;
label_3c34e8:
    // 0x3c34e8: 0x60f809  jalr        $v1
label_3c34ec:
    if (ctx->pc == 0x3C34ECu) {
        ctx->pc = 0x3C34F0u;
        goto label_3c34f0;
    }
    ctx->pc = 0x3C34E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C34F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C34E8u, 0x3C34F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C34F0u;
label_3c34f0:
    // 0x3c34f0: 0x10000027  b           . + 4 + (0x27 << 2)
label_3c34f4:
    if (ctx->pc == 0x3C34F4u) {
        ctx->pc = 0x3C34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34F0u;
        // 0x3c34f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C34F8u;
        goto label_3c34f8;
    }
    ctx->pc = 0x3C34F0u;
    {
        const bool branch_taken_0x3c34f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34F0u;
        // 0x3c34f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c34f0) {
            ctx->pc = 0x3C3590u;
            goto label_3c3590;
        }
    }
    ctx->pc = 0x3C34F8u;
label_3c34f8:
    // 0x3c34f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3c34fc:
    if (ctx->pc == 0x3C34FCu) {
        ctx->pc = 0x3C34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34F8u;
        // 0x3c34fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3500u;
        goto label_3c3500;
    }
    ctx->pc = 0x3C34F8u;
    {
        const bool branch_taken_0x3c34f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34F8u;
        // 0x3c34fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c34f8) {
            ctx->pc = 0x3C350Cu;
            goto label_3c350c;
        }
    }
    ctx->pc = 0x3C3500u;
label_3c3500:
    // 0x3c3500: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x3c3500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3c3504:
    // 0x3c3504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c3508:
    if (ctx->pc == 0x3C3508u) {
        ctx->pc = 0x3C3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3504u;
        // 0x3c3508: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C350Cu;
        goto label_3c350c;
    }
    ctx->pc = 0x3C3504u;
    {
        const bool branch_taken_0x3c3504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3504u;
        // 0x3c3508: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3504) {
            ctx->pc = 0x3C3518u;
            goto label_3c3518;
        }
    }
    ctx->pc = 0x3C350Cu;
label_3c350c:
    // 0x3c350c: 0xae560048  sw          $s6, 0x48($s2)
    ctx->pc = 0x3c350cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 22));
label_3c3510:
    // 0x3c3510: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x3c3510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_3c3514:
    // 0x3c3514: 0xae57004c  sw          $s7, 0x4C($s2)
    ctx->pc = 0x3c3514u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 23));
label_3c3518:
    // 0x3c3518: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3c3518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3c351c:
    // 0x3c351c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c3520:
    if (ctx->pc == 0x3C3520u) {
        ctx->pc = 0x3C3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C351Cu;
        // 0x3c3520: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3524u;
        goto label_3c3524;
    }
    ctx->pc = 0x3C351Cu;
    {
        const bool branch_taken_0x3c351c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C351Cu;
        // 0x3c3520: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c351c) {
            ctx->pc = 0x3C3534u;
            goto label_3c3534;
        }
    }
    ctx->pc = 0x3C3524u;
label_3c3524:
    // 0x3c3524: 0xae560048  sw          $s6, 0x48($s2)
    ctx->pc = 0x3c3524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 22));
label_3c3528:
    // 0x3c3528: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x3c3528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_3c352c:
    // 0x3c352c: 0x36730010  ori         $s3, $s3, 0x10
    ctx->pc = 0x3c352cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16);
label_3c3530:
    // 0x3c3530: 0xae57004c  sw          $s7, 0x4C($s2)
    ctx->pc = 0x3c3530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 23));
label_3c3534:
    // 0x3c3534: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3c3534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3c3538:
    // 0x3c3538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c353c:
    // 0x3c353c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3c353cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c3540:
    // 0x3c3540: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3c3540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c3544:
    // 0x3c3544: 0x40f809  jalr        $v0
label_3c3548:
    if (ctx->pc == 0x3C3548u) {
        ctx->pc = 0x3C3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3544u;
        // 0x3c3548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C354Cu;
        goto label_3c354c;
    }
    ctx->pc = 0x3C3544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C354Cu);
        ctx->pc = 0x3C3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3544u;
        // 0x3c3548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3544u, 0x3C354Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C354Cu;
label_3c354c:
    // 0x3c354c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c3550:
    // 0x3c3550: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_3c3554:
    if (ctx->pc == 0x3C3554u) {
        ctx->pc = 0x3C3558u;
        goto label_3c3558;
    }
    ctx->pc = 0x3C3550u;
    {
        const bool branch_taken_0x3c3550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c3550) {
            ctx->pc = 0x3C3560u;
            goto label_3c3560;
        }
    }
    ctx->pc = 0x3C3558u;
label_3c3558:
    // 0x3c3558: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x3c3558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_3c355c:
    // 0x3c355c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c355cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3560:
    // 0x3c3560: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_3c3564:
    if (ctx->pc == 0x3C3564u) {
        ctx->pc = 0x3C3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3560u;
        // 0x3c3564: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3568u;
        goto label_3c3568;
    }
    ctx->pc = 0x3C3560u;
    {
        const bool branch_taken_0x3c3560 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3560u;
        // 0x3c3564: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3560) {
            ctx->pc = 0x3C356Cu;
            goto label_3c356c;
        }
    }
    ctx->pc = 0x3C3568u;
label_3c3568:
    // 0x3c3568: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x3c3568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_3c356c:
    // 0x3c356c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c3570:
    if (ctx->pc == 0x3C3570u) {
        ctx->pc = 0x3C3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C356Cu;
        // 0x3c3570: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3574u;
        goto label_3c3574;
    }
    ctx->pc = 0x3C356Cu;
    {
        const bool branch_taken_0x3c356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C356Cu;
        // 0x3c3570: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c356c) {
            ctx->pc = 0x3C3590u;
            goto label_3c3590;
        }
    }
    ctx->pc = 0x3C3574u;
label_3c3574:
    // 0x3c3574: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c3574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c3578:
    // 0x3c3578: 0x8c42e004  lw          $v0, -0x1FFC($v0)
    ctx->pc = 0x3c3578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959108)));
label_3c357c:
    // 0x3c357c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3c3580:
    if (ctx->pc == 0x3C3580u) {
        ctx->pc = 0x3C3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C357Cu;
        // 0x3c3580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3584u;
        goto label_3c3584;
    }
    ctx->pc = 0x3C357Cu;
    {
        const bool branch_taken_0x3c357c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c357c) {
            ctx->pc = 0x3C3580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C357Cu;
            // 0x3c3580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3590u;
            goto label_3c3590;
        }
    }
    ctx->pc = 0x3C3584u;
label_3c3584:
    // 0x3c3584: 0x40f809  jalr        $v0
label_3c3588:
    if (ctx->pc == 0x3C3588u) {
        ctx->pc = 0x3C3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3584u;
        // 0x3c3588: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C358Cu;
        goto label_3c358c;
    }
    ctx->pc = 0x3C3584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C358Cu);
        ctx->pc = 0x3C3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3584u;
        // 0x3c3588: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3584u, 0x3C358Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C358Cu;
label_3c358c:
    // 0x3c358c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c358cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3590:
    // 0x3c3590: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3c3590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c3594:
    // 0x3c3594: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3c3594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c3598:
    // 0x3c3598: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3c3598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c359c:
    // 0x3c359c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3c359cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c35a0:
    // 0x3c35a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c35a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c35a4:
    // 0x3c35a4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3c35a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c35a8:
    // 0x3c35a8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3c35a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c35ac:
    // 0x3c35ac: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3c35acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c35b0:
    // 0x3c35b0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3c35b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c35b4:
    // 0x3c35b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c35b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c35b8:
    // 0x3c35b8: 0x3e00008  jr          $ra
label_3c35bc:
    if (ctx->pc == 0x3C35BCu) {
        ctx->pc = 0x3C35BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C35B8u;
        // 0x3c35bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C35C0u;
        goto label_fallthrough_0x3c35b8;
    }
    ctx->pc = 0x3C35B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C35BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C35B8u;
        // 0x3c35bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C35B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c35b8:
    ctx->pc = 0x3C35C0u;
}
