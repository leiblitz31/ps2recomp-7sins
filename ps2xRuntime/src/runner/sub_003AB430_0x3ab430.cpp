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

// Function: sub_003AB430
// Address: 0x3ab430 - 0x3ab578
void sub_003AB430_0x3ab430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB430_0x3ab430");
#endif

    switch (ctx->pc) {
        case 0x3ab470u: goto label_3ab470;
        case 0x3ab490u: goto label_3ab490;
        case 0x3ab4a4u: goto label_3ab4a4;
        case 0x3ab4b8u: goto label_3ab4b8;
        case 0x3ab4dcu: goto label_3ab4dc;
        case 0x3ab4ecu: goto label_3ab4ec;
        case 0x3ab508u: goto label_3ab508;
        case 0x3ab520u: goto label_3ab520;
        default: break;
    }

    ctx->pc = 0x3ab430u;

    // 0x3ab430: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ab430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3ab434: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3ab434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3ab438: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3ab438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3ab43c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ab43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab440: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3ab440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3ab444: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ab444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab448: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3ab448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3ab44c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ab44cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab450: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3ab450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3ab454: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ab454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3ab458: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3ab458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3ab45c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3ab45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3ab460: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3ab460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3ab464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ab464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ab468: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3AB468u;
    SET_GPR_U32(ctx, 31, 0x3AB470u);
    ctx->pc = 0x3AB46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB468u;
    // 0x3ab46c: 0x8e840134  lw          $a0, 0x134($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AB468u, 0x3AB470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB470u;
label_3ab470:
    // 0x3ab470: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ab470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab474: 0x8e820130  lw          $v0, 0x130($s4)
    ctx->pc = 0x3ab474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x3ab478: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3AB478u;
    {
        const bool branch_taken_0x3ab478 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3AB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB478u;
        // 0x3ab47c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab478) {
            ctx->pc = 0x3AB540u;
            goto label_3ab540;
        }
    }
    ctx->pc = 0x3AB480u;
    // 0x3ab480: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x3ab480u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ab484: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x3ab484u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ab488: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x3ab488u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ab48c: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x3ab48cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ab490:
    // 0x3ab490: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x3ab490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x3ab494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab498: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ab498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab49c: 0xc103440  jal         func_40D100
    ctx->pc = 0x3AB49Cu;
    SET_GPR_U32(ctx, 31, 0x3AB4A4u);
    ctx->pc = 0x3AB4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB49Cu;
    // 0x3ab4a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3AB49Cu, 0x3AB4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB4A4u;
label_3ab4a4:
    // 0x3ab4a4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3AB4A4u;
    {
        const bool branch_taken_0x3ab4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4A4u;
        // 0x3ab4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4a4) {
            ctx->pc = 0x3AB528u;
            goto label_3ab528;
        }
    }
    ctx->pc = 0x3AB4ACu;
    // 0x3ab4ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ab4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab4b0: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3AB4B0u;
    SET_GPR_U32(ctx, 31, 0x3AB4B8u);
    ctx->pc = 0x3AB4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB4B0u;
    // 0x3ab4b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3AB4B0u, 0x3AB4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB4B8u;
label_3ab4b8:
    // 0x3ab4b8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3AB4B8u;
    {
        const bool branch_taken_0x3ab4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4B8u;
        // 0x3ab4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4b8) {
            ctx->pc = 0x3AB544u;
            goto label_3ab544;
        }
    }
    ctx->pc = 0x3AB4C0u;
    // 0x3ab4c0: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x3ab4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3ab4c4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AB4C4u;
    {
        const bool branch_taken_0x3ab4c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4C4u;
        // 0x3ab4c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4c4) {
            ctx->pc = 0x3AB4F4u;
            goto label_3ab4f4;
        }
    }
    ctx->pc = 0x3AB4CCu;
    // 0x3ab4cc: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x3ab4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x3ab4d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ab4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab4d4: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3AB4D4u;
    SET_GPR_U32(ctx, 31, 0x3AB4DCu);
    ctx->pc = 0x3AB4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB4D4u;
    // 0x3ab4d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3AB4D4u, 0x3AB4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB4DCu;
label_3ab4dc:
    // 0x3ab4dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AB4DCu;
    {
        const bool branch_taken_0x3ab4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4DCu;
        // 0x3ab4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4dc) {
            ctx->pc = 0x3AB528u;
            goto label_3ab528;
        }
    }
    ctx->pc = 0x3AB4E4u;
    // 0x3ab4e4: 0xc0ec322  jal         func_3B0C88
    ctx->pc = 0x3AB4E4u;
    SET_GPR_U32(ctx, 31, 0x3AB4ECu);
    ctx->pc = 0x3AB4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB4E4u;
    // 0x3ab4e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0C88u, 0x3AB4E4u, 0x3AB4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB4ECu;
label_3ab4ec:
    // 0x3ab4ec: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3AB4ECu;
    {
        const bool branch_taken_0x3ab4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4ECu;
        // 0x3ab4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4ec) {
            ctx->pc = 0x3AB544u;
            goto label_3ab544;
        }
    }
    ctx->pc = 0x3AB4F4u;
label_3ab4f4:
    // 0x3ab4f4: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x3ab4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x3ab4f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab4fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ab4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab500: 0xc103440  jal         func_40D100
    ctx->pc = 0x3AB500u;
    SET_GPR_U32(ctx, 31, 0x3AB508u);
    ctx->pc = 0x3AB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB500u;
    // 0x3ab504: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3AB500u, 0x3AB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB508u;
label_3ab508:
    // 0x3ab508: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AB508u;
    {
        const bool branch_taken_0x3ab508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB508u;
        // 0x3ab50c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab508) {
            ctx->pc = 0x3AB528u;
            goto label_3ab528;
        }
    }
    ctx->pc = 0x3AB510u;
    // 0x3ab510: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x3ab510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x3ab514: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ab514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab518: 0xc103440  jal         func_40D100
    ctx->pc = 0x3AB518u;
    SET_GPR_U32(ctx, 31, 0x3AB520u);
    ctx->pc = 0x3AB51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB518u;
    // 0x3ab51c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3AB518u, 0x3AB520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB520u;
label_3ab520:
    // 0x3ab520: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB520u;
    {
        const bool branch_taken_0x3ab520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab520) {
            ctx->pc = 0x3AB524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB520u;
            // 0x3ab524: 0x8e820130  lw          $v0, 0x130($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB530u;
            goto label_3ab530;
        }
    }
    ctx->pc = 0x3AB528u;
label_3ab528:
    // 0x3ab528: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AB528u;
    {
        const bool branch_taken_0x3ab528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB528u;
        // 0x3ab52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab528) {
            ctx->pc = 0x3AB544u;
            goto label_3ab544;
        }
    }
    ctx->pc = 0x3AB530u;
label_3ab530:
    // 0x3ab530: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ab530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3ab534: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3ab534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ab538: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3AB538u;
    {
        const bool branch_taken_0x3ab538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB538u;
        // 0x3ab53c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab538) {
            ctx->pc = 0x3AB490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab490;
        }
    }
    ctx->pc = 0x3AB540u;
label_3ab540:
    // 0x3ab540: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3ab540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ab544:
    // 0x3ab544: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3ab544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3ab548: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3ab548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ab54c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3ab54cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ab550: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3ab550u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ab554: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3ab554u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ab558: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ab558u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ab55c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3ab55cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ab560: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3ab560u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ab564: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3ab564u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ab568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab56c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB56Cu;
        // 0x3ab570: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB574u;
    // 0x3ab574: 0x0  nop
    ctx->pc = 0x3ab574u;
    // NOP
    ctx->pc = 0x3ab578u;
}
