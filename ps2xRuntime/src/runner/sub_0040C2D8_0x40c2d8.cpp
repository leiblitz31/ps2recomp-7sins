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

// Function: sub_0040C2D8
// Address: 0x40c2d8 - 0x40c398
void sub_0040C2D8_0x40c2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C2D8_0x40c2d8");
#endif

    switch (ctx->pc) {
        case 0x40c2d8u: goto label_40c2d8;
        case 0x40c2dcu: goto label_40c2dc;
        case 0x40c2e0u: goto label_40c2e0;
        case 0x40c2e4u: goto label_40c2e4;
        case 0x40c2e8u: goto label_40c2e8;
        case 0x40c2ecu: goto label_40c2ec;
        case 0x40c2f0u: goto label_40c2f0;
        case 0x40c2f4u: goto label_40c2f4;
        case 0x40c2f8u: goto label_40c2f8;
        case 0x40c2fcu: goto label_40c2fc;
        case 0x40c300u: goto label_40c300;
        case 0x40c304u: goto label_40c304;
        case 0x40c308u: goto label_40c308;
        case 0x40c30cu: goto label_40c30c;
        case 0x40c310u: goto label_40c310;
        case 0x40c314u: goto label_40c314;
        case 0x40c318u: goto label_40c318;
        case 0x40c31cu: goto label_40c31c;
        case 0x40c320u: goto label_40c320;
        case 0x40c324u: goto label_40c324;
        case 0x40c328u: goto label_40c328;
        case 0x40c32cu: goto label_40c32c;
        case 0x40c330u: goto label_40c330;
        case 0x40c334u: goto label_40c334;
        case 0x40c338u: goto label_40c338;
        case 0x40c33cu: goto label_40c33c;
        case 0x40c340u: goto label_40c340;
        case 0x40c344u: goto label_40c344;
        case 0x40c348u: goto label_40c348;
        case 0x40c34cu: goto label_40c34c;
        case 0x40c350u: goto label_40c350;
        case 0x40c354u: goto label_40c354;
        case 0x40c358u: goto label_40c358;
        case 0x40c35cu: goto label_40c35c;
        case 0x40c360u: goto label_40c360;
        case 0x40c364u: goto label_40c364;
        case 0x40c368u: goto label_40c368;
        case 0x40c36cu: goto label_40c36c;
        case 0x40c370u: goto label_40c370;
        case 0x40c374u: goto label_40c374;
        case 0x40c378u: goto label_40c378;
        case 0x40c37cu: goto label_40c37c;
        case 0x40c380u: goto label_40c380;
        case 0x40c384u: goto label_40c384;
        case 0x40c388u: goto label_40c388;
        case 0x40c38cu: goto label_40c38c;
        case 0x40c390u: goto label_40c390;
        case 0x40c394u: goto label_40c394;
        default: break;
    }

    ctx->pc = 0x40c2d8u;

label_40c2d8:
    // 0x40c2d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40c2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_40c2dc:
    // 0x40c2dc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40c2e0:
    // 0x40c2e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40c2e4:
    // 0x40c2e4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x40c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_40c2e8:
    // 0x40c2e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40c2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40c2ec:
    // 0x40c2ec: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x40c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_40c2f0:
    // 0x40c2f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40c2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_40c2f4:
    // 0x40c2f4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x40c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_40c2f8:
    // 0x40c2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40c2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40c2fc:
    // 0x40c2fc: 0x40f809  jalr        $v0
label_40c300:
    if (ctx->pc == 0x40C300u) {
        ctx->pc = 0x40C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C2FCu;
        // 0x40c300: 0x34a50183  ori         $a1, $a1, 0x183 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)387);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C304u;
        goto label_40c304;
    }
    ctx->pc = 0x40C2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40C304u);
        ctx->pc = 0x40C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C2FCu;
        // 0x40c300: 0x34a50183  ori         $a1, $a1, 0x183 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)387);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C2FCu, 0x40C304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C304u;
label_40c304:
    // 0x40c304: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40c304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c308:
    // 0x40c308: 0x5600000d  bnel        $s0, $zero, . + 4 + (0xD << 2)
label_40c30c:
    if (ctx->pc == 0x40C30Cu) {
        ctx->pc = 0x40C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C308u;
        // 0x40c30c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C310u;
        goto label_40c310;
    }
    ctx->pc = 0x40C308u;
    {
        const bool branch_taken_0x40c308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x40c308) {
            ctx->pc = 0x40C30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40C308u;
            // 0x40c30c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x40C340u;
            goto label_40c340;
        }
    }
    ctx->pc = 0x40C310u;
label_40c310:
    // 0x40c310: 0x24020183  addiu       $v0, $zero, 0x183
    ctx->pc = 0x40c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
label_40c314:
    // 0x40c314: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40c314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_40c318:
    // 0x40c318: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x40c318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_40c31c:
    // 0x40c31c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x40c31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_40c320:
    // 0x40c320: 0xc1035f6  jal         func_40D7D8
label_40c324:
    if (ctx->pc == 0x40C324u) {
        ctx->pc = 0x40C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C320u;
        // 0x40c324: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C328u;
        goto label_40c328;
    }
    ctx->pc = 0x40C320u;
    SET_GPR_U32(ctx, 31, 0x40C328u);
    ctx->pc = 0x40C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C320u;
    // 0x40c324: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40C320u, 0x40C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C328u;
label_40c328:
    // 0x40c328: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40c328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40c32c:
    // 0x40c32c: 0xc103628  jal         func_40D8A0
label_40c330:
    if (ctx->pc == 0x40C330u) {
        ctx->pc = 0x40C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C32Cu;
        // 0x40c330: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C334u;
        goto label_40c334;
    }
    ctx->pc = 0x40C32Cu;
    SET_GPR_U32(ctx, 31, 0x40C334u);
    ctx->pc = 0x40C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C32Cu;
    // 0x40c330: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40C32Cu, 0x40C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C334u;
label_40c334:
    // 0x40c334: 0x10000013  b           . + 4 + (0x13 << 2)
label_40c338:
    if (ctx->pc == 0x40C338u) {
        ctx->pc = 0x40C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C334u;
        // 0x40c338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C33Cu;
        goto label_40c33c;
    }
    ctx->pc = 0x40C334u;
    {
        const bool branch_taken_0x40c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C334u;
        // 0x40c338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c334) {
            ctx->pc = 0x40C384u;
            goto label_40c384;
        }
    }
    ctx->pc = 0x40C33Cu;
label_40c33c:
    // 0x40c33c: 0x0  nop
    ctx->pc = 0x40c33cu;
    // NOP
label_40c340:
    // 0x40c340: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_40c344:
    if (ctx->pc == 0x40C344u) {
        ctx->pc = 0x40C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C340u;
        // 0x40c344: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C348u;
        goto label_40c348;
    }
    ctx->pc = 0x40C340u;
    {
        const bool branch_taken_0x40c340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C340u;
        // 0x40c344: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c340) {
            ctx->pc = 0x40C350u;
            goto label_40c350;
        }
    }
    ctx->pc = 0x40C348u;
label_40c348:
    // 0x40c348: 0x10000004  b           . + 4 + (0x4 << 2)
label_40c34c:
    if (ctx->pc == 0x40C34Cu) {
        ctx->pc = 0x40C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C348u;
        // 0x40c34c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C350u;
        goto label_40c350;
    }
    ctx->pc = 0x40C348u;
    {
        const bool branch_taken_0x40c348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C348u;
        // 0x40c34c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c348) {
            ctx->pc = 0x40C35Cu;
            goto label_40c35c;
        }
    }
    ctx->pc = 0x40C350u;
label_40c350:
    // 0x40c350: 0xc103db0  jal         func_40F6C0
label_40c354:
    if (ctx->pc == 0x40C354u) {
        ctx->pc = 0x40C358u;
        goto label_40c358;
    }
    ctx->pc = 0x40C350u;
    SET_GPR_U32(ctx, 31, 0x40C358u);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x40C350u, 0x40C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C358u;
label_40c358:
    // 0x40c358: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x40c358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_40c35c:
    // 0x40c35c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x40c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40c360:
    // 0x40c360: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40c360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_40c364:
    // 0x40c364: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_40c368:
    if (ctx->pc == 0x40C368u) {
        ctx->pc = 0x40C36Cu;
        goto label_40c36c;
    }
    ctx->pc = 0x40C364u;
    {
        const bool branch_taken_0x40c364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c364) {
            ctx->pc = 0x40C374u;
            goto label_40c374;
        }
    }
    ctx->pc = 0x40C36Cu;
label_40c36c:
    // 0x40c36c: 0x10000004  b           . + 4 + (0x4 << 2)
label_40c370:
    if (ctx->pc == 0x40C370u) {
        ctx->pc = 0x40C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C36Cu;
        // 0x40c370: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C374u;
        goto label_40c374;
    }
    ctx->pc = 0x40C36Cu;
    {
        const bool branch_taken_0x40c36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C36Cu;
        // 0x40c370: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c36c) {
            ctx->pc = 0x40C380u;
            goto label_40c380;
        }
    }
    ctx->pc = 0x40C374u;
label_40c374:
    // 0x40c374: 0xc103db0  jal         func_40F6C0
label_40c378:
    if (ctx->pc == 0x40C378u) {
        ctx->pc = 0x40C37Cu;
        goto label_40c37c;
    }
    ctx->pc = 0x40C374u;
    SET_GPR_U32(ctx, 31, 0x40C37Cu);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x40C374u, 0x40C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C37Cu;
label_40c37c:
    // 0x40c37c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x40c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_40c380:
    // 0x40c380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40c380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40c384:
    // 0x40c384: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40c384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40c388:
    // 0x40c388: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40c388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40c38c:
    // 0x40c38c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40c38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40c390:
    // 0x40c390: 0x3e00008  jr          $ra
label_40c394:
    if (ctx->pc == 0x40C394u) {
        ctx->pc = 0x40C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C390u;
        // 0x40c394: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C398u;
        goto label_fallthrough_0x40c390;
    }
    ctx->pc = 0x40C390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C390u;
        // 0x40c394: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40c390:
    ctx->pc = 0x40C398u;
}
