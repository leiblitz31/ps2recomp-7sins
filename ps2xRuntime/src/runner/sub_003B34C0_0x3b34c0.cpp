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

// Function: sub_003B34C0
// Address: 0x3b34c0 - 0x3b35e8
void sub_003B34C0_0x3b34c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B34C0_0x3b34c0");
#endif

    switch (ctx->pc) {
        case 0x3b34c0u: goto label_3b34c0;
        case 0x3b34c4u: goto label_3b34c4;
        case 0x3b34c8u: goto label_3b34c8;
        case 0x3b34ccu: goto label_3b34cc;
        case 0x3b34d0u: goto label_3b34d0;
        case 0x3b34d4u: goto label_3b34d4;
        case 0x3b34d8u: goto label_3b34d8;
        case 0x3b34dcu: goto label_3b34dc;
        case 0x3b34e0u: goto label_3b34e0;
        case 0x3b34e4u: goto label_3b34e4;
        case 0x3b34e8u: goto label_3b34e8;
        case 0x3b34ecu: goto label_3b34ec;
        case 0x3b34f0u: goto label_3b34f0;
        case 0x3b34f4u: goto label_3b34f4;
        case 0x3b34f8u: goto label_3b34f8;
        case 0x3b34fcu: goto label_3b34fc;
        case 0x3b3500u: goto label_3b3500;
        case 0x3b3504u: goto label_3b3504;
        case 0x3b3508u: goto label_3b3508;
        case 0x3b350cu: goto label_3b350c;
        case 0x3b3510u: goto label_3b3510;
        case 0x3b3514u: goto label_3b3514;
        case 0x3b3518u: goto label_3b3518;
        case 0x3b351cu: goto label_3b351c;
        case 0x3b3520u: goto label_3b3520;
        case 0x3b3524u: goto label_3b3524;
        case 0x3b3528u: goto label_3b3528;
        case 0x3b352cu: goto label_3b352c;
        case 0x3b3530u: goto label_3b3530;
        case 0x3b3534u: goto label_3b3534;
        case 0x3b3538u: goto label_3b3538;
        case 0x3b353cu: goto label_3b353c;
        case 0x3b3540u: goto label_3b3540;
        case 0x3b3544u: goto label_3b3544;
        case 0x3b3548u: goto label_3b3548;
        case 0x3b354cu: goto label_3b354c;
        case 0x3b3550u: goto label_3b3550;
        case 0x3b3554u: goto label_3b3554;
        case 0x3b3558u: goto label_3b3558;
        case 0x3b355cu: goto label_3b355c;
        case 0x3b3560u: goto label_3b3560;
        case 0x3b3564u: goto label_3b3564;
        case 0x3b3568u: goto label_3b3568;
        case 0x3b356cu: goto label_3b356c;
        case 0x3b3570u: goto label_3b3570;
        case 0x3b3574u: goto label_3b3574;
        case 0x3b3578u: goto label_3b3578;
        case 0x3b357cu: goto label_3b357c;
        case 0x3b3580u: goto label_3b3580;
        case 0x3b3584u: goto label_3b3584;
        case 0x3b3588u: goto label_3b3588;
        case 0x3b358cu: goto label_3b358c;
        case 0x3b3590u: goto label_3b3590;
        case 0x3b3594u: goto label_3b3594;
        case 0x3b3598u: goto label_3b3598;
        case 0x3b359cu: goto label_3b359c;
        case 0x3b35a0u: goto label_3b35a0;
        case 0x3b35a4u: goto label_3b35a4;
        case 0x3b35a8u: goto label_3b35a8;
        case 0x3b35acu: goto label_3b35ac;
        case 0x3b35b0u: goto label_3b35b0;
        case 0x3b35b4u: goto label_3b35b4;
        case 0x3b35b8u: goto label_3b35b8;
        case 0x3b35bcu: goto label_3b35bc;
        case 0x3b35c0u: goto label_3b35c0;
        case 0x3b35c4u: goto label_3b35c4;
        case 0x3b35c8u: goto label_3b35c8;
        case 0x3b35ccu: goto label_3b35cc;
        case 0x3b35d0u: goto label_3b35d0;
        case 0x3b35d4u: goto label_3b35d4;
        case 0x3b35d8u: goto label_3b35d8;
        case 0x3b35dcu: goto label_3b35dc;
        case 0x3b35e0u: goto label_3b35e0;
        case 0x3b35e4u: goto label_3b35e4;
        default: break;
    }

    ctx->pc = 0x3b34c0u;

label_3b34c0:
    // 0x3b34c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b34c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b34c4:
    // 0x3b34c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b34c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b34c8:
    // 0x3b34c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3b34c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3b34cc:
    // 0x3b34cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b34ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b34d0:
    // 0x3b34d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3b34d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3b34d4:
    // 0x3b34d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b34d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b34d8:
    // 0x3b34d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b34d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3b34dc:
    // 0x3b34dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b34dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b34e0:
    // 0x3b34e0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3b34e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3b34e4:
    // 0x3b34e4: 0xc0eb422  jal         func_3AD088
label_3b34e8:
    if (ctx->pc == 0x3B34E8u) {
        ctx->pc = 0x3B34E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34E4u;
        // 0x3b34e8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B34ECu;
        goto label_3b34ec;
    }
    ctx->pc = 0x3B34E4u;
    SET_GPR_U32(ctx, 31, 0x3B34ECu);
    ctx->pc = 0x3B34E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B34E4u;
    // 0x3b34e8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD088u, 0x3B34E4u, 0x3B34ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B34ECu;
label_3b34ec:
    // 0x3b34ec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_3b34f0:
    if (ctx->pc == 0x3B34F0u) {
        ctx->pc = 0x3B34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34ECu;
        // 0x3b34f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B34F4u;
        goto label_3b34f4;
    }
    ctx->pc = 0x3B34ECu;
    {
        const bool branch_taken_0x3b34ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34ECu;
        // 0x3b34f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b34ec) {
            ctx->pc = 0x3B3578u;
            goto label_3b3578;
        }
    }
    ctx->pc = 0x3B34F4u;
label_3b34f4:
    // 0x3b34f4: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x3b34f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3b34f8:
    // 0x3b34f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b34f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b34fc:
    // 0x3b34fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3b3500:
    if (ctx->pc == 0x3B3500u) {
        ctx->pc = 0x3B3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34FCu;
        // 0x3b3500: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3504u;
        goto label_3b3504;
    }
    ctx->pc = 0x3B34FCu;
    {
        const bool branch_taken_0x3b34fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34FCu;
        // 0x3b3500: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b34fc) {
            ctx->pc = 0x3B3510u;
            goto label_3b3510;
        }
    }
    ctx->pc = 0x3B3504u;
label_3b3504:
    // 0x3b3504: 0x82420001  lb          $v0, 0x1($s2)
    ctx->pc = 0x3b3504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_3b3508:
    // 0x3b3508: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3b350c:
    if (ctx->pc == 0x3B350Cu) {
        ctx->pc = 0x3B350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3508u;
        // 0x3b350c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3510u;
        goto label_3b3510;
    }
    ctx->pc = 0x3B3508u;
    {
        const bool branch_taken_0x3b3508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3508u;
        // 0x3b350c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3508) {
            ctx->pc = 0x3B353Cu;
            goto label_3b353c;
        }
    }
    ctx->pc = 0x3B3510u;
label_3b3510:
    // 0x3b3510: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3b3510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_3b3514:
    // 0x3b3514: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3b3514u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3b3518:
    // 0x3b3518: 0x0  nop
    ctx->pc = 0x3b3518u;
    // NOP
label_3b351c:
    // 0x3b351c: 0x0  nop
    ctx->pc = 0x3b351cu;
    // NOP
label_3b3520:
    // 0x3b3520: 0x0  nop
    ctx->pc = 0x3b3520u;
    // NOP
label_3b3524:
    // 0x3b3524: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3b3528:
    if (ctx->pc == 0x3B3528u) {
        ctx->pc = 0x3B3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3524u;
        // 0x3b3528: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B352Cu;
        goto label_3b352c;
    }
    ctx->pc = 0x3B3524u;
    {
        const bool branch_taken_0x3b3524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3524u;
        // 0x3b3528: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3524) {
            ctx->pc = 0x3B3510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3510;
        }
    }
    ctx->pc = 0x3B352Cu;
label_3b352c:
    // 0x3b352c: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x3b352cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3b3530:
    // 0x3b3530: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_3b3534:
    if (ctx->pc == 0x3B3534u) {
        ctx->pc = 0x3B3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3530u;
        // 0x3b3534: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3538u;
        goto label_3b3538;
    }
    ctx->pc = 0x3B3530u;
    {
        const bool branch_taken_0x3b3530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3530) {
            ctx->pc = 0x3B3534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3530u;
            // 0x3b3534: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3514;
        }
    }
    ctx->pc = 0x3B3538u;
label_3b3538:
    // 0x3b3538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b353c:
    // 0x3b353c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3b353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3b3540:
    // 0x3b3540: 0x26110002  addiu       $s1, $s0, 0x2
    ctx->pc = 0x3b3540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_3b3544:
    // 0x3b3544: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3b3544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3b3548:
    // 0x3b3548: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b3548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b354c:
    // 0x3b354c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b354cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3550:
    // 0x3b3550: 0x40f809  jalr        $v0
label_3b3554:
    if (ctx->pc == 0x3B3554u) {
        ctx->pc = 0x3B3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3550u;
        // 0x3b3554: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3558u;
        goto label_3b3558;
    }
    ctx->pc = 0x3B3550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3558u);
        ctx->pc = 0x3B3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3550u;
        // 0x3b3554: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3550u, 0x3B3558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3558u;
label_3b3558:
    // 0x3b3558: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3b355c:
    if (ctx->pc == 0x3B355Cu) {
        ctx->pc = 0x3B355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3558u;
        // 0x3b355c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3560u;
        goto label_3b3560;
    }
    ctx->pc = 0x3B3558u;
    {
        const bool branch_taken_0x3b3558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3558u;
        // 0x3b355c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3558) {
            ctx->pc = 0x3B35B0u;
            goto label_3b35b0;
        }
    }
    ctx->pc = 0x3B3560u;
label_3b3560:
    // 0x3b3560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b3560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3564:
    // 0x3b3564: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b3564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b3568:
    // 0x3b3568: 0xc0bb778  jal         func_2EDDE0
label_3b356c:
    if (ctx->pc == 0x3B356Cu) {
        ctx->pc = 0x3B356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3568u;
        // 0x3b356c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3570u;
        goto label_3b3570;
    }
    ctx->pc = 0x3B3568u;
    SET_GPR_U32(ctx, 31, 0x3B3570u);
    ctx->pc = 0x3B356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3568u;
    // 0x3b356c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3B3568u, 0x3B3570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3570u;
label_3b3570:
    // 0x3b3570: 0x10000015  b           . + 4 + (0x15 << 2)
label_3b3574:
    if (ctx->pc == 0x3B3574u) {
        ctx->pc = 0x3B3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3570u;
        // 0x3b3574: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3578u;
        goto label_3b3578;
    }
    ctx->pc = 0x3B3570u;
    {
        const bool branch_taken_0x3b3570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3570u;
        // 0x3b3574: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3570) {
            ctx->pc = 0x3B35C8u;
            goto label_3b35c8;
        }
    }
    ctx->pc = 0x3B3578u;
label_3b3578:
    // 0x3b3578: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b3578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b357c:
    // 0x3b357c: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x3b357cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3b3580:
    // 0x3b3580: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x3b3580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_3b3584:
    // 0x3b3584: 0x40f809  jalr        $v0
label_3b3588:
    if (ctx->pc == 0x3B3588u) {
        ctx->pc = 0x3B3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3584u;
        // 0x3b3588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B358Cu;
        goto label_3b358c;
    }
    ctx->pc = 0x3B3584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B358Cu);
        ctx->pc = 0x3B3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3584u;
        // 0x3b3588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3584u, 0x3B358Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B358Cu;
label_3b358c:
    // 0x3b358c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b358cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3590:
    // 0x3b3590: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b3590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b3594:
    // 0x3b3594: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x3b3594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3b3598:
    // 0x3b3598: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x3b3598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b359c:
    // 0x3b359c: 0x40f809  jalr        $v0
label_3b35a0:
    if (ctx->pc == 0x3B35A0u) {
        ctx->pc = 0x3B35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B359Cu;
        // 0x3b35a0: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B35A4u;
        goto label_3b35a4;
    }
    ctx->pc = 0x3B359Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B35A4u);
        ctx->pc = 0x3B35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B359Cu;
        // 0x3b35a0: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B359Cu, 0x3B35A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B35A4u;
label_3b35a4:
    // 0x3b35a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b35a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b35a8:
    // 0x3b35a8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_3b35ac:
    if (ctx->pc == 0x3B35ACu) {
        ctx->pc = 0x3B35ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35A8u;
        // 0x3b35ac: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B35B0u;
        goto label_3b35b0;
    }
    ctx->pc = 0x3B35A8u;
    {
        const bool branch_taken_0x3b35a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B35ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35A8u;
        // 0x3b35ac: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b35a8) {
            ctx->pc = 0x3B35B8u;
            goto label_3b35b8;
        }
    }
    ctx->pc = 0x3B35B0u;
label_3b35b0:
    // 0x3b35b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b35b4:
    if (ctx->pc == 0x3B35B4u) {
        ctx->pc = 0x3B35B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35B0u;
        // 0x3b35b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B35B8u;
        goto label_3b35b8;
    }
    ctx->pc = 0x3B35B0u;
    {
        const bool branch_taken_0x3b35b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B35B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35B0u;
        // 0x3b35b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b35b0) {
            ctx->pc = 0x3B35CCu;
            goto label_3b35cc;
        }
    }
    ctx->pc = 0x3B35B8u;
label_3b35b8:
    // 0x3b35b8: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x3b35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_3b35bc:
    // 0x3b35bc: 0x40f809  jalr        $v0
label_3b35c0:
    if (ctx->pc == 0x3B35C0u) {
        ctx->pc = 0x3B35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35BCu;
        // 0x3b35c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B35C4u;
        goto label_3b35c4;
    }
    ctx->pc = 0x3B35BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B35C4u);
        ctx->pc = 0x3B35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35BCu;
        // 0x3b35c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B35BCu, 0x3B35C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B35C4u;
label_3b35c4:
    // 0x3b35c4: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x3b35c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
label_3b35c8:
    // 0x3b35c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3b35c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b35cc:
    // 0x3b35cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3b35ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b35d0:
    // 0x3b35d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3b35d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b35d4:
    // 0x3b35d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b35d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b35d8:
    // 0x3b35d8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3b35d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b35dc:
    // 0x3b35dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b35dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b35e0:
    // 0x3b35e0: 0x3e00008  jr          $ra
label_3b35e4:
    if (ctx->pc == 0x3B35E4u) {
        ctx->pc = 0x3B35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35E0u;
        // 0x3b35e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B35E8u;
        goto label_fallthrough_0x3b35e0;
    }
    ctx->pc = 0x3B35E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35E0u;
        // 0x3b35e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B35E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b35e0:
    ctx->pc = 0x3B35E8u;
}
