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

// Function: sub_003B42F8
// Address: 0x3b42f8 - 0x3b43d0
void sub_003B42F8_0x3b42f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B42F8_0x3b42f8");
#endif

    switch (ctx->pc) {
        case 0x3b42f8u: goto label_3b42f8;
        case 0x3b42fcu: goto label_3b42fc;
        case 0x3b4300u: goto label_3b4300;
        case 0x3b4304u: goto label_3b4304;
        case 0x3b4308u: goto label_3b4308;
        case 0x3b430cu: goto label_3b430c;
        case 0x3b4310u: goto label_3b4310;
        case 0x3b4314u: goto label_3b4314;
        case 0x3b4318u: goto label_3b4318;
        case 0x3b431cu: goto label_3b431c;
        case 0x3b4320u: goto label_3b4320;
        case 0x3b4324u: goto label_3b4324;
        case 0x3b4328u: goto label_3b4328;
        case 0x3b432cu: goto label_3b432c;
        case 0x3b4330u: goto label_3b4330;
        case 0x3b4334u: goto label_3b4334;
        case 0x3b4338u: goto label_3b4338;
        case 0x3b433cu: goto label_3b433c;
        case 0x3b4340u: goto label_3b4340;
        case 0x3b4344u: goto label_3b4344;
        case 0x3b4348u: goto label_3b4348;
        case 0x3b434cu: goto label_3b434c;
        case 0x3b4350u: goto label_3b4350;
        case 0x3b4354u: goto label_3b4354;
        case 0x3b4358u: goto label_3b4358;
        case 0x3b435cu: goto label_3b435c;
        case 0x3b4360u: goto label_3b4360;
        case 0x3b4364u: goto label_3b4364;
        case 0x3b4368u: goto label_3b4368;
        case 0x3b436cu: goto label_3b436c;
        case 0x3b4370u: goto label_3b4370;
        case 0x3b4374u: goto label_3b4374;
        case 0x3b4378u: goto label_3b4378;
        case 0x3b437cu: goto label_3b437c;
        case 0x3b4380u: goto label_3b4380;
        case 0x3b4384u: goto label_3b4384;
        case 0x3b4388u: goto label_3b4388;
        case 0x3b438cu: goto label_3b438c;
        case 0x3b4390u: goto label_3b4390;
        case 0x3b4394u: goto label_3b4394;
        case 0x3b4398u: goto label_3b4398;
        case 0x3b439cu: goto label_3b439c;
        case 0x3b43a0u: goto label_3b43a0;
        case 0x3b43a4u: goto label_3b43a4;
        case 0x3b43a8u: goto label_3b43a8;
        case 0x3b43acu: goto label_3b43ac;
        case 0x3b43b0u: goto label_3b43b0;
        case 0x3b43b4u: goto label_3b43b4;
        case 0x3b43b8u: goto label_3b43b8;
        case 0x3b43bcu: goto label_3b43bc;
        case 0x3b43c0u: goto label_3b43c0;
        case 0x3b43c4u: goto label_3b43c4;
        case 0x3b43c8u: goto label_3b43c8;
        case 0x3b43ccu: goto label_3b43cc;
        default: break;
    }

    ctx->pc = 0x3b42f8u;

label_3b42f8:
    // 0x3b42f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b42f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b42fc:
    // 0x3b42fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b42fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b4300:
    // 0x3b4300: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b4300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b4304:
    // 0x3b4304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b4308:
    // 0x3b4308: 0xc0ed30a  jal         func_3B4C28
label_3b430c:
    if (ctx->pc == 0x3B430Cu) {
        ctx->pc = 0x3B430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4308u;
        // 0x3b430c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4310u;
        goto label_3b4310;
    }
    ctx->pc = 0x3B4308u;
    SET_GPR_U32(ctx, 31, 0x3B4310u);
    ctx->pc = 0x3B430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4308u;
    // 0x3b430c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C28u, 0x3B4308u, 0x3B4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4310u;
label_3b4310:
    // 0x3b4310: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x3b4310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3b4314:
    // 0x3b4314: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_3b4318:
    if (ctx->pc == 0x3B4318u) {
        ctx->pc = 0x3B4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4314u;
        // 0x3b4318: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B431Cu;
        goto label_3b431c;
    }
    ctx->pc = 0x3B4314u;
    {
        const bool branch_taken_0x3b4314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4314u;
        // 0x3b4318: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4314) {
            ctx->pc = 0x3B438Cu;
            goto label_3b438c;
        }
    }
    ctx->pc = 0x3B431Cu;
label_3b431c:
    // 0x3b431c: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x3b431cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_3b4320:
    // 0x3b4320: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3b4320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b4324:
    // 0x3b4324: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_3b4328:
    if (ctx->pc == 0x3B4328u) {
        ctx->pc = 0x3B4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4324u;
        // 0x3b4328: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B432Cu;
        goto label_3b432c;
    }
    ctx->pc = 0x3B4324u;
    {
        const bool branch_taken_0x3b4324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4324u;
        // 0x3b4328: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4324) {
            ctx->pc = 0x3B437Cu;
            goto label_3b437c;
        }
    }
    ctx->pc = 0x3B432Cu;
label_3b432c:
    // 0x3b432c: 0xc0eb422  jal         func_3AD088
label_3b4330:
    if (ctx->pc == 0x3B4330u) {
        ctx->pc = 0x3B4334u;
        goto label_3b4334;
    }
    ctx->pc = 0x3B432Cu;
    SET_GPR_U32(ctx, 31, 0x3B4334u);
    ctx->pc = 0x3AD088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD088u, 0x3B432Cu, 0x3B4334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4334u;
label_3b4334:
    // 0x3b4334: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3b4338:
    if (ctx->pc == 0x3B4338u) {
        ctx->pc = 0x3B4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4334u;
        // 0x3b4338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B433Cu;
        goto label_3b433c;
    }
    ctx->pc = 0x3B4334u;
    {
        const bool branch_taken_0x3b4334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4334u;
        // 0x3b4338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4334) {
            ctx->pc = 0x3B4378u;
            goto label_3b4378;
        }
    }
    ctx->pc = 0x3B433Cu;
label_3b433c:
    // 0x3b433c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3b4340:
    if (ctx->pc == 0x3B4340u) {
        ctx->pc = 0x3B4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B433Cu;
        // 0x3b4340: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4344u;
        goto label_3b4344;
    }
    ctx->pc = 0x3B433Cu;
    {
        const bool branch_taken_0x3b433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B433Cu;
        // 0x3b4340: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b433c) {
            ctx->pc = 0x3B434Cu;
            goto label_3b434c;
        }
    }
    ctx->pc = 0x3B4344u;
label_3b4344:
    // 0x3b4344: 0x0  nop
    ctx->pc = 0x3b4344u;
    // NOP
label_3b4348:
    // 0x3b4348: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3b4348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_3b434c:
    // 0x3b434c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3b434cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3b4350:
    // 0x3b4350: 0x0  nop
    ctx->pc = 0x3b4350u;
    // NOP
label_3b4354:
    // 0x3b4354: 0x0  nop
    ctx->pc = 0x3b4354u;
    // NOP
label_3b4358:
    // 0x3b4358: 0x0  nop
    ctx->pc = 0x3b4358u;
    // NOP
label_3b435c:
    // 0x3b435c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_3b4360:
    if (ctx->pc == 0x3B4360u) {
        ctx->pc = 0x3B4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B435Cu;
        // 0x3b4360: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4364u;
        goto label_3b4364;
    }
    ctx->pc = 0x3B435Cu;
    {
        const bool branch_taken_0x3b435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b435c) {
            ctx->pc = 0x3B4360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B435Cu;
            // 0x3b4360: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4348;
        }
    }
    ctx->pc = 0x3B4364u;
label_3b4364:
    // 0x3b4364: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x3b4364u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_3b4368:
    // 0x3b4368: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3b436c:
    if (ctx->pc == 0x3B436Cu) {
        ctx->pc = 0x3B436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4368u;
        // 0x3b436c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4370u;
        goto label_3b4370;
    }
    ctx->pc = 0x3B4368u;
    {
        const bool branch_taken_0x3b4368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4368u;
        // 0x3b436c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4368) {
            ctx->pc = 0x3B4348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4348;
        }
    }
    ctx->pc = 0x3B4370u;
label_3b4370:
    // 0x3b4370: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b4374:
    if (ctx->pc == 0x3B4374u) {
        ctx->pc = 0x3B4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4370u;
        // 0x3b4374: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4378u;
        goto label_3b4378;
    }
    ctx->pc = 0x3B4370u;
    {
        const bool branch_taken_0x3b4370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4370u;
        // 0x3b4374: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4370) {
            ctx->pc = 0x3B438Cu;
            goto label_3b438c;
        }
    }
    ctx->pc = 0x3B4378u;
label_3b4378:
    // 0x3b4378: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b4378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b437c:
    // 0x3b437c: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x3b437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_3b4380:
    // 0x3b4380: 0x40f809  jalr        $v0
label_3b4384:
    if (ctx->pc == 0x3B4384u) {
        ctx->pc = 0x3B4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4380u;
        // 0x3b4384: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4388u;
        goto label_3b4388;
    }
    ctx->pc = 0x3B4380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4388u);
        ctx->pc = 0x3B4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4380u;
        // 0x3b4384: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4380u, 0x3B4388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4388u;
label_3b4388:
    // 0x3b4388: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b4388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b438c:
    // 0x3b438c: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x3b438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_3b4390:
    // 0x3b4390: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3b4394:
    if (ctx->pc == 0x3B4394u) {
        ctx->pc = 0x3B4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4390u;
        // 0x3b4394: 0x26100005  addiu       $s0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4398u;
        goto label_3b4398;
    }
    ctx->pc = 0x3B4390u;
    {
        const bool branch_taken_0x3b4390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4390u;
        // 0x3b4394: 0x26100005  addiu       $s0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4390) {
            ctx->pc = 0x3B43B4u;
            goto label_3b43b4;
        }
    }
    ctx->pc = 0x3B4398u;
label_3b4398:
    // 0x3b4398: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3b4398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b439c:
    // 0x3b439c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b43a0:
    if (ctx->pc == 0x3B43A0u) {
        ctx->pc = 0x3B43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B439Cu;
        // 0x3b43a0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B43A4u;
        goto label_3b43a4;
    }
    ctx->pc = 0x3B439Cu;
    {
        const bool branch_taken_0x3b439c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B439Cu;
        // 0x3b43a0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b439c) {
            ctx->pc = 0x3B43B4u;
            goto label_3b43b4;
        }
    }
    ctx->pc = 0x3B43A4u;
label_3b43a4:
    // 0x3b43a4: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x3b43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_3b43a8:
    // 0x3b43a8: 0x40f809  jalr        $v0
label_3b43ac:
    if (ctx->pc == 0x3B43ACu) {
        ctx->pc = 0x3B43B0u;
        goto label_3b43b0;
    }
    ctx->pc = 0x3B43A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B43B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B43A8u, 0x3B43B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B43B0u;
label_3b43b0:
    // 0x3b43b0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b43b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b43b4:
    // 0x3b43b4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x3b43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b43b8:
    // 0x3b43b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b43b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b43bc:
    // 0x3b43bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b43bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b43c0:
    // 0x3b43c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b43c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b43c4:
    // 0x3b43c4: 0x3e00008  jr          $ra
label_3b43c8:
    if (ctx->pc == 0x3B43C8u) {
        ctx->pc = 0x3B43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43C4u;
        // 0x3b43c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B43CCu;
        goto label_3b43cc;
    }
    ctx->pc = 0x3B43C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43C4u;
        // 0x3b43c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B43C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B43CCu;
label_3b43cc:
    // 0x3b43cc: 0x0  nop
    ctx->pc = 0x3b43ccu;
    // NOP
    ctx->pc = 0x3b43d0u;
}
