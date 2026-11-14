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

// Function: sub_002F6310
// Address: 0x2f6310 - 0x2f6528
void sub_002F6310_0x2f6310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6310_0x2f6310");
#endif

    switch (ctx->pc) {
        case 0x2f6350u: goto label_2f6350;
        case 0x2f6394u: goto label_2f6394;
        case 0x2f63d0u: goto label_2f63d0;
        case 0x2f643cu: goto label_2f643c;
        case 0x2f644cu: goto label_2f644c;
        case 0x2f6470u: goto label_2f6470;
        case 0x2f6488u: goto label_2f6488;
        case 0x2f64dcu: goto label_2f64dc;
        case 0x2f6504u: goto label_2f6504;
        default: break;
    }

    ctx->pc = 0x2f6310u;

    // 0x2f6310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f6314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f631c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f631cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f6320: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2f6320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2f6324: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6324u;
    {
        const bool branch_taken_0x2f6324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6324) {
            ctx->pc = 0x2F6328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6324u;
            // 0x2f6328: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6340u;
            goto label_2f6340;
        }
    }
    ctx->pc = 0x2F632Cu;
    // 0x2f632c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f6330: 0x8c43ea90  lw          $v1, -0x1570($v0)
    ctx->pc = 0x2f6330u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2f6334: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2f6334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2f6338: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2f6338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2f633c: 0x0  nop
    ctx->pc = 0x2f633cu;
    // NOP
label_2f6340:
    // 0x2f6340: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6340u;
    {
        const bool branch_taken_0x2f6340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6340) {
            ctx->pc = 0x2F6344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6340u;
            // 0x2f6344: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6354u;
            goto label_2f6354;
        }
    }
    ctx->pc = 0x2F6348u;
    // 0x2f6348: 0xc0baf6e  jal         func_2EBDB8
    ctx->pc = 0x2F6348u;
    SET_GPR_U32(ctx, 31, 0x2F6350u);
    ctx->pc = 0x2F634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6348u;
    // 0x2f634c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBDB8u, 0x2F6348u, 0x2F6350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6350u;
label_2f6350:
    // 0x2f6350: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x2f6350u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2f6354:
    // 0x2f6354: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x2f6354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2f6358: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F6358u;
    {
        const bool branch_taken_0x2f6358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6358) {
            ctx->pc = 0x2F635Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6358u;
            // 0x2f635c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F63C0u;
            goto label_2f63c0;
        }
    }
    ctx->pc = 0x2F6360u;
    // 0x2f6360: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x2f6360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2f6364: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F6364u;
    {
        const bool branch_taken_0x2f6364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6364u;
        // 0x2f6368: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6364) {
            ctx->pc = 0x2F640Cu;
            goto label_2f640c;
        }
    }
    ctx->pc = 0x2F636Cu;
    // 0x2f636c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2f636cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2f6370: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F6370u;
    {
        const bool branch_taken_0x2f6370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6370) {
            ctx->pc = 0x2F6374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6370u;
            // 0x2f6374: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F63B8u;
            goto label_2f63b8;
        }
    }
    ctx->pc = 0x2F6378u;
    // 0x2f6378: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2f6378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2f637c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F637Cu;
    {
        const bool branch_taken_0x2f637c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F637Cu;
        // 0x2f6380: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f637c) {
            ctx->pc = 0x2F639Cu;
            goto label_2f639c;
        }
    }
    ctx->pc = 0x2F6384u;
    // 0x2f6384: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6384u;
    {
        const bool branch_taken_0x2f6384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6384) {
            ctx->pc = 0x2F6388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6384u;
            // 0x2f6388: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F639Cu;
            goto label_2f639c;
        }
    }
    ctx->pc = 0x2F638Cu;
    // 0x2f638c: 0xc0bb060  jal         func_2EC180
    ctx->pc = 0x2F638Cu;
    SET_GPR_U32(ctx, 31, 0x2F6394u);
    ctx->pc = 0x2F6390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F638Cu;
    // 0x2f6390: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC180u, 0x2F638Cu, 0x2F6394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6394u;
label_2f6394:
    // 0x2f6394: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x2f6394u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f6398: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2f6398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2f639c:
    // 0x2f639c: 0x2402ffdb  addiu       $v0, $zero, -0x25
    ctx->pc = 0x2f639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x2f63a0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2f63a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f63a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2f63a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2f63a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f63a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f63ac: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2f63acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f63b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f63b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f63b4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2f63b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2f63b8:
    // 0x2f63b8: 0x34820008  ori         $v0, $a0, 0x8
    ctx->pc = 0x2f63b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2f63bc: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2f63bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2f63c0:
    // 0x2f63c0: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F63C0u;
    {
        const bool branch_taken_0x2f63c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f63c0) {
            ctx->pc = 0x2F63C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F63C0u;
            // 0x2f63c4: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F63D4u;
            goto label_2f63d4;
        }
    }
    ctx->pc = 0x2F63C8u;
    // 0x2f63c8: 0xc0bb42e  jal         func_2ED0B8
    ctx->pc = 0x2F63C8u;
    SET_GPR_U32(ctx, 31, 0x2F63D0u);
    ctx->pc = 0x2F63CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F63C8u;
    // 0x2f63cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED0B8u, 0x2F63C8u, 0x2F63D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F63D0u;
label_2f63d0:
    // 0x2f63d0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2f63d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2f63d4:
    // 0x2f63d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f63d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f63d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F63D8u;
    {
        const bool branch_taken_0x2f63d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63D8u;
        // 0x2f63dc: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63d8) {
            ctx->pc = 0x2F63F8u;
            goto label_2f63f8;
        }
    }
    ctx->pc = 0x2F63E0u;
    // 0x2f63e0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2f63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2f63e4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2f63e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2f63e8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2f63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f63ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F63ECu;
    {
        const bool branch_taken_0x2f63ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63ECu;
        // 0x2f63f0: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63ec) {
            ctx->pc = 0x2F6408u;
            goto label_2f6408;
        }
    }
    ctx->pc = 0x2F63F4u;
    // 0x2f63f4: 0x0  nop
    ctx->pc = 0x2f63f4u;
    // NOP
label_2f63f8:
    // 0x2f63f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F63F8u;
    {
        const bool branch_taken_0x2f63f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63F8u;
        // 0x2f63fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63f8) {
            ctx->pc = 0x2F6404u;
            goto label_2f6404;
        }
    }
    ctx->pc = 0x2F6400u;
    // 0x2f6400: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2f6400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2f6404:
    // 0x2f6404: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2f6404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2f6408:
    // 0x2f6408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f640c:
    // 0x2f640c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f640cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6410: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f6410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6414: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6414u;
        // 0x2f6418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F641Cu;
    // 0x2f641c: 0x0  nop
    ctx->pc = 0x2f641cu;
    // NOP
    // 0x2f6420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f6420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f6424: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f6424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f6428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f6428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f642c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f6430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6434: 0xc0bdbce  jal         func_2F6F38
    ctx->pc = 0x2F6434u;
    SET_GPR_U32(ctx, 31, 0x2F643Cu);
    ctx->pc = 0x2F6438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6434u;
    // 0x2f6438: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6F38u, 0x2F6434u, 0x2F643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F643Cu;
label_2f643c:
    // 0x2f643c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F643Cu;
    {
        const bool branch_taken_0x2f643c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F643Cu;
        // 0x2f6440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f643c) {
            ctx->pc = 0x2F6474u;
            goto label_2f6474;
        }
    }
    ctx->pc = 0x2F6444u;
    // 0x2f6444: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2F6444u;
    SET_GPR_U32(ctx, 31, 0x2F644Cu);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2F6444u, 0x2F644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F644Cu;
label_2f644c:
    // 0x2f644c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2f644cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x2f6450: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2f6450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2f6454: 0x8c70c380  lw          $s0, -0x3C80($v1)
    ctx->pc = 0x2f6454u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x60C380u));
    // 0x2f6458: 0xac71c380  sw          $s1, -0x3C80($v1)
    ctx->pc = 0x2f6458u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x60C380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C380u, _value); } while (0);
    // 0x2f645c: 0xac9cc384  sw          $gp, -0x3C7C($a0)
    ctx->pc = 0x2f645cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 28)); ps2TraceGuestWrite(rdram, 0x60C384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C384u, _value); } while (0);
    // 0x2f6460: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6460u;
    {
        const bool branch_taken_0x2f6460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6460u;
        // 0x2f6464: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6460) {
            ctx->pc = 0x2F6474u;
            goto label_2f6474;
        }
    }
    ctx->pc = 0x2F6468u;
    // 0x2f6468: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2F6468u;
    SET_GPR_U32(ctx, 31, 0x2F6470u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2F6468u, 0x2F6470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6470u;
label_2f6470:
    // 0x2f6470: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f6470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6474:
    // 0x2f6474: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f6474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6478: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f6478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f647c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f647cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6480: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6480u;
        // 0x2f6484: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6488u;
label_2f6488:
    // 0x2f6488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f648c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2f648cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f6490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6498: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x2f6498u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x2f649c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f649cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f64a0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2f64a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2f64a4: 0xae03ef60  sw          $v1, -0x10A0($s0)
    ctx->pc = 0x2f64a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4EEF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4EEF60u, _value); } while (0);
    // 0x2f64a8: 0x8e02ef60  lw          $v0, -0x10A0($s0)
    ctx->pc = 0x2f64a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4EEF60u));
    // 0x2f64ac: 0xac82ef64  sw          $v0, -0x109C($a0)
    ctx->pc = 0x2f64acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4EEF64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4EEF64u, _value); } while (0);
    // 0x2f64b0: 0x8e03ef60  lw          $v1, -0x10A0($s0)
    ctx->pc = 0x2f64b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4EEF60u));
    // 0x2f64b4: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F64B4u;
    {
        const bool branch_taken_0x2f64b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64B4u;
        // 0x2f64b8: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64b4) {
            ctx->pc = 0x2F64D0u;
            goto label_2f64d0;
        }
    }
    ctx->pc = 0x2F64BCu;
    // 0x2f64bc: 0xae00ef60  sw          $zero, -0x10A0($s0)
    ctx->pc = 0x2f64bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963040), GPR_U32(ctx, 0));
    // 0x2f64c0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f64c4: 0xac40ef34  sw          $zero, -0x10CC($v0)
    ctx->pc = 0x2f64c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4EEF34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4EEF34u, _value); } while (0);
    // 0x2f64c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2F64C8u;
    {
        const bool branch_taken_0x2f64c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64C8u;
        // 0x2f64cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64c8) {
            ctx->pc = 0x2F651Cu;
            goto label_2f651c;
        }
    }
    ctx->pc = 0x2F64D0u;
label_2f64d0:
    // 0x2f64d0: 0x8c44ef28  lw          $a0, -0x10D8($v0)
    ctx->pc = 0x2f64d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962984)));
    // 0x2f64d4: 0xc0bf6e4  jal         func_2FDB90
    ctx->pc = 0x2F64D4u;
    SET_GPR_U32(ctx, 31, 0x2F64DCu);
    ctx->pc = 0x2FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB90u, 0x2F64D4u, 0x2F64DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F64DCu;
label_2f64dc:
    // 0x2f64dc: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f64e0: 0x8c62ef14  lw          $v0, -0x10EC($v1)
    ctx->pc = 0x2f64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4EEF14u));
    // 0x2f64e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F64E4u;
    {
        const bool branch_taken_0x2f64e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64E4u;
        // 0x2f64e8: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64e4) {
            ctx->pc = 0x2F650Cu;
            goto label_2f650c;
        }
    }
    ctx->pc = 0x2F64ECu;
    // 0x2f64ec: 0x8c43c380  lw          $v1, -0x3C80($v0)
    ctx->pc = 0x2f64ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x2f64f0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F64F0u;
    {
        const bool branch_taken_0x2f64f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64F0u;
        // 0x2f64f4: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64f0) {
            ctx->pc = 0x2F650Cu;
            goto label_2f650c;
        }
    }
    ctx->pc = 0x2F64F8u;
    // 0x2f64f8: 0x8c44ef20  lw          $a0, -0x10E0($v0)
    ctx->pc = 0x2f64f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962976)));
    // 0x2f64fc: 0xc0bf6e4  jal         func_2FDB90
    ctx->pc = 0x2F64FCu;
    SET_GPR_U32(ctx, 31, 0x2F6504u);
    ctx->pc = 0x2FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB90u, 0x2F64FCu, 0x2F6504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6504u;
label_2f6504:
    // 0x2f6504: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6504u;
    {
        const bool branch_taken_0x2f6504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6504) {
            ctx->pc = 0x2F6514u;
            goto label_2f6514;
        }
    }
    ctx->pc = 0x2F650Cu;
label_2f650c:
    // 0x2f650c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f6510: 0xac40ef34  sw          $zero, -0x10CC($v0)
    ctx->pc = 0x2f6510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4EEF34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4EEF34u, _value); } while (0);
label_2f6514:
    // 0x2f6514: 0xae00ef60  sw          $zero, -0x10A0($s0)
    ctx->pc = 0x2f6514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963040), GPR_U32(ctx, 0));
    // 0x2f6518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f651c:
    // 0x2f651c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f651cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6520: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6520u;
        // 0x2f6524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6528u;
}
