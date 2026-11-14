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

// Function: sub_00324320
// Address: 0x324320 - 0x3243e8
void sub_00324320_0x324320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324320_0x324320");
#endif

    switch (ctx->pc) {
        case 0x324320u: goto label_324320;
        case 0x324324u: goto label_324324;
        case 0x324328u: goto label_324328;
        case 0x32432cu: goto label_32432c;
        case 0x324330u: goto label_324330;
        case 0x324334u: goto label_324334;
        case 0x324338u: goto label_324338;
        case 0x32433cu: goto label_32433c;
        case 0x324340u: goto label_324340;
        case 0x324344u: goto label_324344;
        case 0x324348u: goto label_324348;
        case 0x32434cu: goto label_32434c;
        case 0x324350u: goto label_324350;
        case 0x324354u: goto label_324354;
        case 0x324358u: goto label_324358;
        case 0x32435cu: goto label_32435c;
        case 0x324360u: goto label_324360;
        case 0x324364u: goto label_324364;
        case 0x324368u: goto label_324368;
        case 0x32436cu: goto label_32436c;
        case 0x324370u: goto label_324370;
        case 0x324374u: goto label_324374;
        case 0x324378u: goto label_324378;
        case 0x32437cu: goto label_32437c;
        case 0x324380u: goto label_324380;
        case 0x324384u: goto label_324384;
        case 0x324388u: goto label_324388;
        case 0x32438cu: goto label_32438c;
        case 0x324390u: goto label_324390;
        case 0x324394u: goto label_324394;
        case 0x324398u: goto label_324398;
        case 0x32439cu: goto label_32439c;
        case 0x3243a0u: goto label_3243a0;
        case 0x3243a4u: goto label_3243a4;
        case 0x3243a8u: goto label_3243a8;
        case 0x3243acu: goto label_3243ac;
        case 0x3243b0u: goto label_3243b0;
        case 0x3243b4u: goto label_3243b4;
        case 0x3243b8u: goto label_3243b8;
        case 0x3243bcu: goto label_3243bc;
        case 0x3243c0u: goto label_3243c0;
        case 0x3243c4u: goto label_3243c4;
        case 0x3243c8u: goto label_3243c8;
        case 0x3243ccu: goto label_3243cc;
        case 0x3243d0u: goto label_3243d0;
        case 0x3243d4u: goto label_3243d4;
        case 0x3243d8u: goto label_3243d8;
        case 0x3243dcu: goto label_3243dc;
        case 0x3243e0u: goto label_3243e0;
        case 0x3243e4u: goto label_3243e4;
        default: break;
    }

    ctx->pc = 0x324320u;

label_324320:
    // 0x324320: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x324320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_324324:
    // 0x324324: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x324324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_324328:
    // 0x324328: 0x8c43b1ec  lw          $v1, -0x4E14($v0)
    ctx->pc = 0x324328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947308)));
label_32432c:
    // 0x32432c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x32432cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_324330:
    // 0x324330: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x324330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_324334:
    // 0x324334: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x324334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_324338:
    // 0x324338: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x324338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_32433c:
    // 0x32433c: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x32433cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_324340:
    // 0x324340: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x324340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_324344:
    // 0x324344: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x324344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_324348:
    // 0x324348: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x324348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_32434c:
    // 0x32434c: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x32434cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_324350:
    // 0x324350: 0xc103404  jal         func_40D010
label_324354:
    if (ctx->pc == 0x324354u) {
        ctx->pc = 0x324354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324350u;
        // 0x324354: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324358u;
        goto label_324358;
    }
    ctx->pc = 0x324350u;
    SET_GPR_U32(ctx, 31, 0x324358u);
    ctx->pc = 0x324354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324350u;
    // 0x324354: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x324350u, 0x324358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324358u;
label_324358:
    // 0x324358: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_32435c:
    if (ctx->pc == 0x32435Cu) {
        ctx->pc = 0x32435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324358u;
        // 0x32435c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324360u;
        goto label_324360;
    }
    ctx->pc = 0x324358u;
    {
        const bool branch_taken_0x324358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324358) {
            ctx->pc = 0x32435Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324358u;
            // 0x32435c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324368u;
            goto label_324368;
        }
    }
    ctx->pc = 0x324360u;
label_324360:
    // 0x324360: 0x1000001b  b           . + 4 + (0x1B << 2)
label_324364:
    if (ctx->pc == 0x324364u) {
        ctx->pc = 0x324364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324360u;
        // 0x324364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324368u;
        goto label_324368;
    }
    ctx->pc = 0x324360u;
    {
        const bool branch_taken_0x324360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324360u;
        // 0x324364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324360) {
            ctx->pc = 0x3243D0u;
            goto label_3243d0;
        }
    }
    ctx->pc = 0x324368u;
label_324368:
    // 0x324368: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x324368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_32436c:
    // 0x32436c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x32436cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_324370:
    // 0x324370: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x324370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_324374:
    // 0x324374: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_324378:
    if (ctx->pc == 0x324378u) {
        ctx->pc = 0x324378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324374u;
        // 0x324378: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32437Cu;
        goto label_32437c;
    }
    ctx->pc = 0x324374u;
    {
        const bool branch_taken_0x324374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x324378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324374u;
        // 0x324378: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324374) {
            ctx->pc = 0x32439Cu;
            goto label_32439c;
        }
    }
    ctx->pc = 0x32437Cu;
label_32437c:
    // 0x32437c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32437cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_324380:
    // 0x324380: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x324380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_324384:
    // 0x324384: 0x8c62e944  lw          $v0, -0x16BC($v1)
    ctx->pc = 0x324384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961476)));
label_324388:
    // 0x324388: 0x40f809  jalr        $v0
label_32438c:
    if (ctx->pc == 0x32438Cu) {
        ctx->pc = 0x32438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324388u;
        // 0x32438c: 0x37a4000c  ori         $a0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324390u;
        goto label_324390;
    }
    ctx->pc = 0x324388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x324390u);
        ctx->pc = 0x32438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324388u;
        // 0x32438c: 0x37a4000c  ori         $a0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324388u, 0x324390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324390u;
label_324390:
    // 0x324390: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x324390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_324394:
    // 0x324394: 0x10000008  b           . + 4 + (0x8 << 2)
label_324398:
    if (ctx->pc == 0x324398u) {
        ctx->pc = 0x324398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324394u;
        // 0x324398: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32439Cu;
        goto label_32439c;
    }
    ctx->pc = 0x324394u;
    {
        const bool branch_taken_0x324394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324394u;
        // 0x324398: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324394) {
            ctx->pc = 0x3243B8u;
            goto label_3243b8;
        }
    }
    ctx->pc = 0x32439Cu;
label_32439c:
    // 0x32439c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32439cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3243a0:
    // 0x3243a0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3243a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3243a4:
    // 0x3243a4: 0x8c62e944  lw          $v0, -0x16BC($v1)
    ctx->pc = 0x3243a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961476)));
label_3243a8:
    // 0x3243a8: 0x24a59598  addiu       $a1, $a1, -0x6A68
    ctx->pc = 0x3243a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940056));
label_3243ac:
    // 0x3243ac: 0x40f809  jalr        $v0
label_3243b0:
    if (ctx->pc == 0x3243B0u) {
        ctx->pc = 0x3243B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243ACu;
        // 0x3243b0: 0x37a4000c  ori         $a0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3243B4u;
        goto label_3243b4;
    }
    ctx->pc = 0x3243ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3243B4u);
        ctx->pc = 0x3243B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243ACu;
        // 0x3243b0: 0x37a4000c  ori         $a0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3243ACu, 0x3243B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3243B4u;
label_3243b4:
    // 0x3243b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3243b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_3243b8:
    // 0x3243b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3243b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3243bc:
    // 0x3243bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3243bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3243c0:
    // 0x3243c0: 0xc10486e  jal         func_4121B8
label_3243c4:
    if (ctx->pc == 0x3243C4u) {
        ctx->pc = 0x3243C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243C0u;
        // 0x3243c4: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3243C8u;
        goto label_3243c8;
    }
    ctx->pc = 0x3243C0u;
    SET_GPR_U32(ctx, 31, 0x3243C8u);
    ctx->pc = 0x3243C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3243C0u;
    // 0x3243c4: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3243C0u, 0x3243C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3243C8u;
label_3243c8:
    // 0x3243c8: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x3243c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_3243cc:
    // 0x3243cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3243ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3243d0:
    // 0x3243d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3243d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3243d4:
    // 0x3243d4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3243d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3243d8:
    // 0x3243d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3243d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3243dc:
    // 0x3243dc: 0x3e00008  jr          $ra
label_3243e0:
    if (ctx->pc == 0x3243E0u) {
        ctx->pc = 0x3243E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243DCu;
        // 0x3243e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3243E4u;
        goto label_3243e4;
    }
    ctx->pc = 0x3243DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3243E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243DCu;
        // 0x3243e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3243DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3243E4u;
label_3243e4:
    // 0x3243e4: 0x0  nop
    ctx->pc = 0x3243e4u;
    // NOP
    ctx->pc = 0x3243e8u;
}
