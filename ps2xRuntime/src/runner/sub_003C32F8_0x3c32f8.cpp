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

// Function: sub_003C32F8
// Address: 0x3c32f8 - 0x3c33b0
void sub_003C32F8_0x3c32f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C32F8_0x3c32f8");
#endif

    switch (ctx->pc) {
        case 0x3c32f8u: goto label_3c32f8;
        case 0x3c32fcu: goto label_3c32fc;
        case 0x3c3300u: goto label_3c3300;
        case 0x3c3304u: goto label_3c3304;
        case 0x3c3308u: goto label_3c3308;
        case 0x3c330cu: goto label_3c330c;
        case 0x3c3310u: goto label_3c3310;
        case 0x3c3314u: goto label_3c3314;
        case 0x3c3318u: goto label_3c3318;
        case 0x3c331cu: goto label_3c331c;
        case 0x3c3320u: goto label_3c3320;
        case 0x3c3324u: goto label_3c3324;
        case 0x3c3328u: goto label_3c3328;
        case 0x3c332cu: goto label_3c332c;
        case 0x3c3330u: goto label_3c3330;
        case 0x3c3334u: goto label_3c3334;
        case 0x3c3338u: goto label_3c3338;
        case 0x3c333cu: goto label_3c333c;
        case 0x3c3340u: goto label_3c3340;
        case 0x3c3344u: goto label_3c3344;
        case 0x3c3348u: goto label_3c3348;
        case 0x3c334cu: goto label_3c334c;
        case 0x3c3350u: goto label_3c3350;
        case 0x3c3354u: goto label_3c3354;
        case 0x3c3358u: goto label_3c3358;
        case 0x3c335cu: goto label_3c335c;
        case 0x3c3360u: goto label_3c3360;
        case 0x3c3364u: goto label_3c3364;
        case 0x3c3368u: goto label_3c3368;
        case 0x3c336cu: goto label_3c336c;
        case 0x3c3370u: goto label_3c3370;
        case 0x3c3374u: goto label_3c3374;
        case 0x3c3378u: goto label_3c3378;
        case 0x3c337cu: goto label_3c337c;
        case 0x3c3380u: goto label_3c3380;
        case 0x3c3384u: goto label_3c3384;
        case 0x3c3388u: goto label_3c3388;
        case 0x3c338cu: goto label_3c338c;
        case 0x3c3390u: goto label_3c3390;
        case 0x3c3394u: goto label_3c3394;
        case 0x3c3398u: goto label_3c3398;
        case 0x3c339cu: goto label_3c339c;
        case 0x3c33a0u: goto label_3c33a0;
        case 0x3c33a4u: goto label_3c33a4;
        case 0x3c33a8u: goto label_3c33a8;
        case 0x3c33acu: goto label_3c33ac;
        default: break;
    }

    ctx->pc = 0x3c32f8u;

label_3c32f8:
    // 0x3c32f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c32f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c32fc:
    // 0x3c32fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c3300:
    // 0x3c3300: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c3300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c3304:
    // 0x3c3304: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c3304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c3308:
    // 0x3c3308: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3c3308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3c330c:
    // 0x3c330c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c330cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c3310:
    // 0x3c3310: 0x8c50dff0  lw          $s0, -0x2010($v0)
    ctx->pc = 0x3c3310u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959088)));
label_3c3314:
    // 0x3c3314: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c3314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3318:
    // 0x3c3318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c3318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c331c:
    // 0x3c331c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_3c3320:
    if (ctx->pc == 0x3C3320u) {
        ctx->pc = 0x3C3320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C331Cu;
        // 0x3c3320: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3324u;
        goto label_3c3324;
    }
    ctx->pc = 0x3C331Cu;
    {
        const bool branch_taken_0x3c331c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C331Cu;
        // 0x3c3320: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c331c) {
            ctx->pc = 0x3C3350u;
            goto label_3c3350;
        }
    }
    ctx->pc = 0x3C3324u;
label_3c3324:
    // 0x3c3324: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c3324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c3328:
    // 0x3c3328: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x3c3328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3c332c:
    // 0x3c332c: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x3c332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_3c3330:
    // 0x3c3330: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3c3330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3c3334:
    // 0x3c3334: 0x40f809  jalr        $v0
label_3c3338:
    if (ctx->pc == 0x3C3338u) {
        ctx->pc = 0x3C3338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3334u;
        // 0x3c3338: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C333Cu;
        goto label_3c333c;
    }
    ctx->pc = 0x3C3334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C333Cu);
        ctx->pc = 0x3C3338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3334u;
        // 0x3c3338: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3334u, 0x3C333Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C333Cu;
label_3c333c:
    // 0x3c333c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3c3340:
    if (ctx->pc == 0x3C3340u) {
        ctx->pc = 0x3C3340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C333Cu;
        // 0x3c3340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3344u;
        goto label_3c3344;
    }
    ctx->pc = 0x3C333Cu;
    {
        const bool branch_taken_0x3c333c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C333Cu;
        // 0x3c3340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c333c) {
            ctx->pc = 0x3C336Cu;
            goto label_3c336c;
        }
    }
    ctx->pc = 0x3C3344u;
label_3c3344:
    // 0x3c3344: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x3c3344u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c3348:
    // 0x3c3348: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_3c334c:
    if (ctx->pc == 0x3C334Cu) {
        ctx->pc = 0x3C334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3348u;
        // 0x3c334c: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3350u;
        goto label_3c3350;
    }
    ctx->pc = 0x3C3348u;
    {
        const bool branch_taken_0x3c3348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3348) {
            ctx->pc = 0x3C334Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3348u;
            // 0x3c334c: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3330;
        }
    }
    ctx->pc = 0x3C3350u;
label_3c3350:
    // 0x3c3350: 0x2662dff0  addiu       $v0, $s3, -0x2010
    ctx->pc = 0x3c3350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959088));
label_3c3354:
    // 0x3c3354: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3c3354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3c3358:
    // 0x3c3358: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c335c:
    if (ctx->pc == 0x3C335Cu) {
        ctx->pc = 0x3C335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3358u;
        // 0x3c335c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3360u;
        goto label_3c3360;
    }
    ctx->pc = 0x3C3358u;
    {
        const bool branch_taken_0x3c3358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3358u;
        // 0x3c335c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3358) {
            ctx->pc = 0x3C336Cu;
            goto label_3c336c;
        }
    }
    ctx->pc = 0x3C3360u;
label_3c3360:
    // 0x3c3360: 0x40f809  jalr        $v0
label_3c3364:
    if (ctx->pc == 0x3C3364u) {
        ctx->pc = 0x3C3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3360u;
        // 0x3c3364: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3368u;
        goto label_3c3368;
    }
    ctx->pc = 0x3C3360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3368u);
        ctx->pc = 0x3C3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3360u;
        // 0x3c3364: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3360u, 0x3C3368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3368u;
label_3c3368:
    // 0x3c3368: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c3368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c336c:
    // 0x3c336c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3c3370:
    if (ctx->pc == 0x3C3370u) {
        ctx->pc = 0x3C3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C336Cu;
        // 0x3c3370: 0x2662dff0  addiu       $v0, $s3, -0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3374u;
        goto label_3c3374;
    }
    ctx->pc = 0x3C336Cu;
    {
        const bool branch_taken_0x3c336c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C336Cu;
        // 0x3c3370: 0x2662dff0  addiu       $v0, $s3, -0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c336c) {
            ctx->pc = 0x3C3390u;
            goto label_3c3390;
        }
    }
    ctx->pc = 0x3C3374u;
label_3c3374:
    // 0x3c3374: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3c3374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3c3378:
    // 0x3c3378: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3c337c:
    if (ctx->pc == 0x3C337Cu) {
        ctx->pc = 0x3C337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3378u;
        // 0x3c337c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3380u;
        goto label_3c3380;
    }
    ctx->pc = 0x3C3378u;
    {
        const bool branch_taken_0x3c3378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3378) {
            ctx->pc = 0x3C337Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3378u;
            // 0x3c337c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3394u;
            goto label_3c3394;
        }
    }
    ctx->pc = 0x3C3380u;
label_3c3380:
    // 0x3c3380: 0x40f809  jalr        $v0
label_3c3384:
    if (ctx->pc == 0x3C3384u) {
        ctx->pc = 0x3C3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3380u;
        // 0x3c3384: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3388u;
        goto label_3c3388;
    }
    ctx->pc = 0x3C3380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3388u);
        ctx->pc = 0x3C3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3380u;
        // 0x3c3384: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3380u, 0x3C3388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3388u;
label_3c3388:
    // 0x3c3388: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c338c:
    if (ctx->pc == 0x3C338Cu) {
        ctx->pc = 0x3C338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3388u;
        // 0x3c338c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3390u;
        goto label_3c3390;
    }
    ctx->pc = 0x3C3388u;
    {
        const bool branch_taken_0x3c3388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3388u;
        // 0x3c338c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3388) {
            ctx->pc = 0x3C3394u;
            goto label_3c3394;
        }
    }
    ctx->pc = 0x3C3390u;
label_3c3390:
    // 0x3c3390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c3390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3394:
    // 0x3c3394: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c3394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c3398:
    // 0x3c3398: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c3398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c339c:
    // 0x3c339c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c339cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c33a0:
    // 0x3c33a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3c33a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c33a4:
    // 0x3c33a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c33a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c33a8:
    // 0x3c33a8: 0x3e00008  jr          $ra
label_3c33ac:
    if (ctx->pc == 0x3C33ACu) {
        ctx->pc = 0x3C33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33A8u;
        // 0x3c33ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C33B0u;
        goto label_fallthrough_0x3c33a8;
    }
    ctx->pc = 0x3C33A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33A8u;
        // 0x3c33ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C33A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c33a8:
    ctx->pc = 0x3C33B0u;
}
