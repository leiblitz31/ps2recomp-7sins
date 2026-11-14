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

// Function: sub_004111C8
// Address: 0x4111c8 - 0x411288
void sub_004111C8_0x4111c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004111C8_0x4111c8");
#endif

    switch (ctx->pc) {
        case 0x4111c8u: goto label_4111c8;
        case 0x4111ccu: goto label_4111cc;
        case 0x4111d0u: goto label_4111d0;
        case 0x4111d4u: goto label_4111d4;
        case 0x4111d8u: goto label_4111d8;
        case 0x4111dcu: goto label_4111dc;
        case 0x4111e0u: goto label_4111e0;
        case 0x4111e4u: goto label_4111e4;
        case 0x4111e8u: goto label_4111e8;
        case 0x4111ecu: goto label_4111ec;
        case 0x4111f0u: goto label_4111f0;
        case 0x4111f4u: goto label_4111f4;
        case 0x4111f8u: goto label_4111f8;
        case 0x4111fcu: goto label_4111fc;
        case 0x411200u: goto label_411200;
        case 0x411204u: goto label_411204;
        case 0x411208u: goto label_411208;
        case 0x41120cu: goto label_41120c;
        case 0x411210u: goto label_411210;
        case 0x411214u: goto label_411214;
        case 0x411218u: goto label_411218;
        case 0x41121cu: goto label_41121c;
        case 0x411220u: goto label_411220;
        case 0x411224u: goto label_411224;
        case 0x411228u: goto label_411228;
        case 0x41122cu: goto label_41122c;
        case 0x411230u: goto label_411230;
        case 0x411234u: goto label_411234;
        case 0x411238u: goto label_411238;
        case 0x41123cu: goto label_41123c;
        case 0x411240u: goto label_411240;
        case 0x411244u: goto label_411244;
        case 0x411248u: goto label_411248;
        case 0x41124cu: goto label_41124c;
        case 0x411250u: goto label_411250;
        case 0x411254u: goto label_411254;
        case 0x411258u: goto label_411258;
        case 0x41125cu: goto label_41125c;
        case 0x411260u: goto label_411260;
        case 0x411264u: goto label_411264;
        case 0x411268u: goto label_411268;
        case 0x41126cu: goto label_41126c;
        case 0x411270u: goto label_411270;
        case 0x411274u: goto label_411274;
        case 0x411278u: goto label_411278;
        case 0x41127cu: goto label_41127c;
        case 0x411280u: goto label_411280;
        case 0x411284u: goto label_411284;
        default: break;
    }

    ctx->pc = 0x4111c8u;

label_4111c8:
    // 0x4111c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4111c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4111cc:
    // 0x4111cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4111ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4111d0:
    // 0x4111d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4111d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4111d4:
    // 0x4111d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4111d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4111d8:
    // 0x4111d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4111d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4111dc:
    // 0x4111dc: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x4111dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4111e0:
    // 0x4111e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4111e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4111e4:
    // 0x4111e4: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x4111e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4111e8:
    // 0x4111e8: 0x10f1000e  beq         $a3, $s1, . + 4 + (0xE << 2)
label_4111ec:
    if (ctx->pc == 0x4111ECu) {
        ctx->pc = 0x4111ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4111E8u;
        // 0x4111ec: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4111F0u;
        goto label_4111f0;
    }
    ctx->pc = 0x4111E8u;
    {
        const bool branch_taken_0x4111e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 17));
        ctx->pc = 0x4111ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4111E8u;
        // 0x4111ec: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4111e8) {
            ctx->pc = 0x411224u;
            goto label_411224;
        }
    }
    ctx->pc = 0x4111F0u;
label_4111f0:
    // 0x4111f0: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x4111f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_4111f4:
    // 0x4111f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4111f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4111f8:
    // 0x4111f8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4111f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4111fc:
    // 0x4111fc: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x4111fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_411200:
    // 0x411200: 0x8e46010c  lw          $a2, 0x10C($s2)
    ctx->pc = 0x411200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_411204:
    // 0x411204: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x411204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_411208:
    // 0x411208: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x411208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41120c:
    // 0x41120c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x41120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_411210:
    // 0x411210: 0xc0f809  jalr        $a2
label_411214:
    if (ctx->pc == 0x411214u) {
        ctx->pc = 0x411214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411210u;
        // 0x411214: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411218u;
        goto label_411218;
    }
    ctx->pc = 0x411210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x411218u);
        ctx->pc = 0x411214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411210u;
        // 0x411214: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411210u, 0x411218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411218u;
label_411218:
    // 0x411218: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x411218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_41121c:
    // 0x41121c: 0x54f1fff6  bnel        $a3, $s1, . + 4 + (-0xA << 2)
label_411220:
    if (ctx->pc == 0x411220u) {
        ctx->pc = 0x411220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41121Cu;
        // 0x411220: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411224u;
        goto label_411224;
    }
    ctx->pc = 0x41121Cu;
    {
        const bool branch_taken_0x41121c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 17));
        if (branch_taken_0x41121c) {
            ctx->pc = 0x411220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41121Cu;
            // 0x411220: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4111F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4111f8;
        }
    }
    ctx->pc = 0x411224u;
label_411224:
    // 0x411224: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x411224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_411228:
    // 0x411228: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x411228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_41122c:
    // 0x41122c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_411230:
    if (ctx->pc == 0x411230u) {
        ctx->pc = 0x411230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41122Cu;
        // 0x411230: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411234u;
        goto label_411234;
    }
    ctx->pc = 0x41122Cu;
    {
        const bool branch_taken_0x41122c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41122c) {
            ctx->pc = 0x411230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41122Cu;
            // 0x411230: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411270u;
            goto label_411270;
        }
    }
    ctx->pc = 0x411234u;
label_411234:
    // 0x411234: 0x8f84ad30  lw          $a0, -0x52D0($gp)
    ctx->pc = 0x411234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946096)));
label_411238:
    // 0x411238: 0x10900004  beq         $a0, $s0, . + 4 + (0x4 << 2)
label_41123c:
    if (ctx->pc == 0x41123Cu) {
        ctx->pc = 0x41123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411238u;
        // 0x41123c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411240u;
        goto label_411240;
    }
    ctx->pc = 0x411238u;
    {
        const bool branch_taken_0x411238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x41123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411238u;
        // 0x41123c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411238) {
            ctx->pc = 0x41124Cu;
            goto label_41124c;
        }
    }
    ctx->pc = 0x411240u;
label_411240:
    // 0x411240: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_411244:
    if (ctx->pc == 0x411244u) {
        ctx->pc = 0x411244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411240u;
        // 0x411244: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411248u;
        goto label_411248;
    }
    ctx->pc = 0x411240u;
    {
        const bool branch_taken_0x411240 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x411244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411240u;
        // 0x411244: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411240) {
            ctx->pc = 0x411260u;
            goto label_411260;
        }
    }
    ctx->pc = 0x411248u;
label_411248:
    // 0x411248: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x411248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41124c:
    // 0x41124c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x41124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_411250:
    // 0x411250: 0x40f809  jalr        $v0
label_411254:
    if (ctx->pc == 0x411254u) {
        ctx->pc = 0x411254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411250u;
        // 0x411254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411258u;
        goto label_411258;
    }
    ctx->pc = 0x411250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411258u);
        ctx->pc = 0x411254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411250u;
        // 0x411254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411250u, 0x411258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411258u;
label_411258:
    // 0x411258: 0x10000005  b           . + 4 + (0x5 << 2)
label_41125c:
    if (ctx->pc == 0x41125Cu) {
        ctx->pc = 0x41125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411258u;
        // 0x41125c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411260u;
        goto label_411260;
    }
    ctx->pc = 0x411258u;
    {
        const bool branch_taken_0x411258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411258u;
        // 0x41125c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411258) {
            ctx->pc = 0x411270u;
            goto label_411270;
        }
    }
    ctx->pc = 0x411260u;
label_411260:
    // 0x411260: 0x8c62e99c  lw          $v0, -0x1664($v1)
    ctx->pc = 0x411260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961564)));
label_411264:
    // 0x411264: 0x40f809  jalr        $v0
label_411268:
    if (ctx->pc == 0x411268u) {
        ctx->pc = 0x411268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411264u;
        // 0x411268: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41126Cu;
        goto label_41126c;
    }
    ctx->pc = 0x411264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41126Cu);
        ctx->pc = 0x411268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411264u;
        // 0x411268: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411264u, 0x41126Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41126Cu;
label_41126c:
    // 0x41126c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41126cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_411270:
    // 0x411270: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x411270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_411274:
    // 0x411274: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x411274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_411278:
    // 0x411278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x411278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41127c:
    // 0x41127c: 0x3e00008  jr          $ra
label_411280:
    if (ctx->pc == 0x411280u) {
        ctx->pc = 0x411280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41127Cu;
        // 0x411280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411284u;
        goto label_411284;
    }
    ctx->pc = 0x41127Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41127Cu;
        // 0x411280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41127Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x411284u;
label_411284:
    // 0x411284: 0x0  nop
    ctx->pc = 0x411284u;
    // NOP
    ctx->pc = 0x411288u;
}
