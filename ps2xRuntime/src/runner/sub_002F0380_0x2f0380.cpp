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

// Function: sub_002F0380
// Address: 0x2f0380 - 0x2f0500
void sub_002F0380_0x2f0380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0380_0x2f0380");
#endif

    switch (ctx->pc) {
        case 0x2f0380u: goto label_2f0380;
        case 0x2f0384u: goto label_2f0384;
        case 0x2f0388u: goto label_2f0388;
        case 0x2f038cu: goto label_2f038c;
        case 0x2f0390u: goto label_2f0390;
        case 0x2f0394u: goto label_2f0394;
        case 0x2f0398u: goto label_2f0398;
        case 0x2f039cu: goto label_2f039c;
        case 0x2f03a0u: goto label_2f03a0;
        case 0x2f03a4u: goto label_2f03a4;
        case 0x2f03a8u: goto label_2f03a8;
        case 0x2f03acu: goto label_2f03ac;
        case 0x2f03b0u: goto label_2f03b0;
        case 0x2f03b4u: goto label_2f03b4;
        case 0x2f03b8u: goto label_2f03b8;
        case 0x2f03bcu: goto label_2f03bc;
        case 0x2f03c0u: goto label_2f03c0;
        case 0x2f03c4u: goto label_2f03c4;
        case 0x2f03c8u: goto label_2f03c8;
        case 0x2f03ccu: goto label_2f03cc;
        case 0x2f03d0u: goto label_2f03d0;
        case 0x2f03d4u: goto label_2f03d4;
        case 0x2f03d8u: goto label_2f03d8;
        case 0x2f03dcu: goto label_2f03dc;
        case 0x2f03e0u: goto label_2f03e0;
        case 0x2f03e4u: goto label_2f03e4;
        case 0x2f03e8u: goto label_2f03e8;
        case 0x2f03ecu: goto label_2f03ec;
        case 0x2f03f0u: goto label_2f03f0;
        case 0x2f03f4u: goto label_2f03f4;
        case 0x2f03f8u: goto label_2f03f8;
        case 0x2f03fcu: goto label_2f03fc;
        case 0x2f0400u: goto label_2f0400;
        case 0x2f0404u: goto label_2f0404;
        case 0x2f0408u: goto label_2f0408;
        case 0x2f040cu: goto label_2f040c;
        case 0x2f0410u: goto label_2f0410;
        case 0x2f0414u: goto label_2f0414;
        case 0x2f0418u: goto label_2f0418;
        case 0x2f041cu: goto label_2f041c;
        case 0x2f0420u: goto label_2f0420;
        case 0x2f0424u: goto label_2f0424;
        case 0x2f0428u: goto label_2f0428;
        case 0x2f042cu: goto label_2f042c;
        case 0x2f0430u: goto label_2f0430;
        case 0x2f0434u: goto label_2f0434;
        case 0x2f0438u: goto label_2f0438;
        case 0x2f043cu: goto label_2f043c;
        case 0x2f0440u: goto label_2f0440;
        case 0x2f0444u: goto label_2f0444;
        case 0x2f0448u: goto label_2f0448;
        case 0x2f044cu: goto label_2f044c;
        case 0x2f0450u: goto label_2f0450;
        case 0x2f0454u: goto label_2f0454;
        case 0x2f0458u: goto label_2f0458;
        case 0x2f045cu: goto label_2f045c;
        case 0x2f0460u: goto label_2f0460;
        case 0x2f0464u: goto label_2f0464;
        case 0x2f0468u: goto label_2f0468;
        case 0x2f046cu: goto label_2f046c;
        case 0x2f0470u: goto label_2f0470;
        case 0x2f0474u: goto label_2f0474;
        case 0x2f0478u: goto label_2f0478;
        case 0x2f047cu: goto label_2f047c;
        case 0x2f0480u: goto label_2f0480;
        case 0x2f0484u: goto label_2f0484;
        case 0x2f0488u: goto label_2f0488;
        case 0x2f048cu: goto label_2f048c;
        case 0x2f0490u: goto label_2f0490;
        case 0x2f0494u: goto label_2f0494;
        case 0x2f0498u: goto label_2f0498;
        case 0x2f049cu: goto label_2f049c;
        case 0x2f04a0u: goto label_2f04a0;
        case 0x2f04a4u: goto label_2f04a4;
        case 0x2f04a8u: goto label_2f04a8;
        case 0x2f04acu: goto label_2f04ac;
        case 0x2f04b0u: goto label_2f04b0;
        case 0x2f04b4u: goto label_2f04b4;
        case 0x2f04b8u: goto label_2f04b8;
        case 0x2f04bcu: goto label_2f04bc;
        case 0x2f04c0u: goto label_2f04c0;
        case 0x2f04c4u: goto label_2f04c4;
        case 0x2f04c8u: goto label_2f04c8;
        case 0x2f04ccu: goto label_2f04cc;
        case 0x2f04d0u: goto label_2f04d0;
        case 0x2f04d4u: goto label_2f04d4;
        case 0x2f04d8u: goto label_2f04d8;
        case 0x2f04dcu: goto label_2f04dc;
        case 0x2f04e0u: goto label_2f04e0;
        case 0x2f04e4u: goto label_2f04e4;
        case 0x2f04e8u: goto label_2f04e8;
        case 0x2f04ecu: goto label_2f04ec;
        case 0x2f04f0u: goto label_2f04f0;
        case 0x2f04f4u: goto label_2f04f4;
        case 0x2f04f8u: goto label_2f04f8;
        case 0x2f04fcu: goto label_2f04fc;
        default: break;
    }

    ctx->pc = 0x2f0380u;

label_2f0380:
    // 0x2f0380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f0384:
    // 0x2f0384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f0388:
    // 0x2f0388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f038c:
    // 0x2f038c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f038cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2f0390:
    // 0x2f0390: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2f0390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2f0394:
    // 0x2f0394: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_2f0398:
    if (ctx->pc == 0x2F0398u) {
        ctx->pc = 0x2F0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0394u;
        // 0x2f0398: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F039Cu;
        goto label_2f039c;
    }
    ctx->pc = 0x2F0394u;
    {
        const bool branch_taken_0x2f0394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0394) {
            ctx->pc = 0x2F0398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0394u;
            // 0x2f0398: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F03B0u;
            goto label_2f03b0;
        }
    }
    ctx->pc = 0x2F039Cu;
label_2f039c:
    // 0x2f039c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f039cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2f03a0:
    // 0x2f03a0: 0x8c43ea90  lw          $v1, -0x1570($v0)
    ctx->pc = 0x2f03a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961808)));
label_2f03a4:
    // 0x2f03a4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2f03a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_2f03a8:
    // 0x2f03a8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2f03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2f03ac:
    // 0x2f03ac: 0x0  nop
    ctx->pc = 0x2f03acu;
    // NOP
label_2f03b0:
    // 0x2f03b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2f03b4:
    if (ctx->pc == 0x2F03B4u) {
        ctx->pc = 0x2F03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03B0u;
        // 0x2f03b4: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03B8u;
        goto label_2f03b8;
    }
    ctx->pc = 0x2F03B0u;
    {
        const bool branch_taken_0x2f03b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f03b0) {
            ctx->pc = 0x2F03B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F03B0u;
            // 0x2f03b4: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F03C4u;
            goto label_2f03c4;
        }
    }
    ctx->pc = 0x2F03B8u;
label_2f03b8:
    // 0x2f03b8: 0xc0baf6e  jal         func_2EBDB8
label_2f03bc:
    if (ctx->pc == 0x2F03BCu) {
        ctx->pc = 0x2F03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03B8u;
        // 0x2f03bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03C0u;
        goto label_2f03c0;
    }
    ctx->pc = 0x2F03B8u;
    SET_GPR_U32(ctx, 31, 0x2F03C0u);
    ctx->pc = 0x2F03BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03B8u;
    // 0x2f03bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBDB8u, 0x2F03B8u, 0x2F03C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03C0u;
label_2f03c0:
    // 0x2f03c0: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x2f03c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2f03c4:
    // 0x2f03c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f03c8:
    // 0x2f03c8: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x2f03c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_2f03cc:
    // 0x2f03cc: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
label_2f03d0:
    if (ctx->pc == 0x2F03D0u) {
        ctx->pc = 0x2F03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03CCu;
        // 0x2f03d0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03D4u;
        goto label_2f03d4;
    }
    ctx->pc = 0x2F03CCu;
    {
        const bool branch_taken_0x2f03cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03CCu;
        // 0x2f03d0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03cc) {
            ctx->pc = 0x2F04ECu;
            goto label_2f04ec;
        }
    }
    ctx->pc = 0x2F03D4u;
label_2f03d4:
    // 0x2f03d4: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2f03d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_2f03d8:
    // 0x2f03d8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_2f03dc:
    if (ctx->pc == 0x2F03DCu) {
        ctx->pc = 0x2F03DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03D8u;
        // 0x2f03dc: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03E0u;
        goto label_2f03e0;
    }
    ctx->pc = 0x2F03D8u;
    {
        const bool branch_taken_0x2f03d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f03d8) {
            ctx->pc = 0x2F03DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F03D8u;
            // 0x2f03dc: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0430u;
            goto label_2f0430;
        }
    }
    ctx->pc = 0x2F03E0u;
label_2f03e0:
    // 0x2f03e0: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x2f03e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_2f03e4:
    // 0x2f03e4: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_2f03e8:
    if (ctx->pc == 0x2F03E8u) {
        ctx->pc = 0x2F03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03E4u;
        // 0x2f03e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03ECu;
        goto label_2f03ec;
    }
    ctx->pc = 0x2F03E4u;
    {
        const bool branch_taken_0x2f03e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03E4u;
        // 0x2f03e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03e4) {
            ctx->pc = 0x2F04ECu;
            goto label_2f04ec;
        }
    }
    ctx->pc = 0x2F03ECu;
label_2f03ec:
    // 0x2f03ec: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x2f03ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_2f03f0:
    // 0x2f03f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2f03f4:
    if (ctx->pc == 0x2F03F4u) {
        ctx->pc = 0x2F03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03F0u;
        // 0x2f03f4: 0x34820004  ori         $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03F8u;
        goto label_2f03f8;
    }
    ctx->pc = 0x2F03F0u;
    {
        const bool branch_taken_0x2f03f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f03f0) {
            ctx->pc = 0x2F03F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F03F0u;
            // 0x2f03f4: 0x34820004  ori         $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0424u;
            goto label_2f0424;
        }
    }
    ctx->pc = 0x2F03F8u;
label_2f03f8:
    // 0x2f03f8: 0xc0baea4  jal         func_2EBA90
label_2f03fc:
    if (ctx->pc == 0x2F03FCu) {
        ctx->pc = 0x2F03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03F8u;
        // 0x2f03fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0400u;
        goto label_2f0400;
    }
    ctx->pc = 0x2F03F8u;
    SET_GPR_U32(ctx, 31, 0x2F0400u);
    ctx->pc = 0x2F03FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03F8u;
    // 0x2f03fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBA90u, 0x2F03F8u, 0x2F0400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0400u;
label_2f0400:
    // 0x2f0400: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_2f0404:
    if (ctx->pc == 0x2F0404u) {
        ctx->pc = 0x2F0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0400u;
        // 0x2f0404: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0408u;
        goto label_2f0408;
    }
    ctx->pc = 0x2F0400u;
    {
        const bool branch_taken_0x2f0400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0400u;
        // 0x2f0404: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0400) {
            ctx->pc = 0x2F04ECu;
            goto label_2f04ec;
        }
    }
    ctx->pc = 0x2F0408u;
label_2f0408:
    // 0x2f0408: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2f0408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2f040c:
    // 0x2f040c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2f040cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2f0410:
    // 0x2f0410: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2f0410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_2f0414:
    // 0x2f0414: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2f0414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2f0418:
    // 0x2f0418: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2f0418u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2f041c:
    // 0x2f041c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0420:
    // 0x2f0420: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x2f0420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_2f0424:
    // 0x2f0424: 0x10000010  b           . + 4 + (0x10 << 2)
label_2f0428:
    if (ctx->pc == 0x2F0428u) {
        ctx->pc = 0x2F0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0424u;
        // 0x2f0428: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F042Cu;
        goto label_2f042c;
    }
    ctx->pc = 0x2F0424u;
    {
        const bool branch_taken_0x2f0424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0424u;
        // 0x2f0428: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0424) {
            ctx->pc = 0x2F0468u;
            goto label_2f0468;
        }
    }
    ctx->pc = 0x2F042Cu;
label_2f042c:
    // 0x2f042c: 0x0  nop
    ctx->pc = 0x2f042cu;
    // NOP
label_2f0430:
    // 0x2f0430: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_2f0434:
    if (ctx->pc == 0x2F0434u) {
        ctx->pc = 0x2F0434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0430u;
        // 0x2f0434: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0438u;
        goto label_2f0438;
    }
    ctx->pc = 0x2F0430u;
    {
        const bool branch_taken_0x2f0430 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0430u;
        // 0x2f0434: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0430) {
            ctx->pc = 0x2F0468u;
            goto label_2f0468;
        }
    }
    ctx->pc = 0x2F0438u;
label_2f0438:
    // 0x2f0438: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
label_2f043c:
    if (ctx->pc == 0x2F043Cu) {
        ctx->pc = 0x2F043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0438u;
        // 0x2f043c: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0440u;
        goto label_2f0440;
    }
    ctx->pc = 0x2F0438u;
    {
        const bool branch_taken_0x2f0438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f0438) {
            ctx->pc = 0x2F043Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0438u;
            // 0x2f043c: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F044Cu;
            goto label_2f044c;
        }
    }
    ctx->pc = 0x2F0440u;
label_2f0440:
    // 0x2f0440: 0xc0bb060  jal         func_2EC180
label_2f0444:
    if (ctx->pc == 0x2F0444u) {
        ctx->pc = 0x2F0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0440u;
        // 0x2f0444: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0448u;
        goto label_2f0448;
    }
    ctx->pc = 0x2F0440u;
    SET_GPR_U32(ctx, 31, 0x2F0448u);
    ctx->pc = 0x2F0444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0440u;
    // 0x2f0444: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC180u, 0x2F0440u, 0x2F0448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0448u;
label_2f0448:
    // 0x2f0448: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2f0448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2f044c:
    // 0x2f044c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2f044cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2f0450:
    // 0x2f0450: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f0454:
    if (ctx->pc == 0x2F0454u) {
        ctx->pc = 0x2F0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0450u;
        // 0x2f0454: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0458u;
        goto label_2f0458;
    }
    ctx->pc = 0x2F0450u;
    {
        const bool branch_taken_0x2f0450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0450u;
        // 0x2f0454: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0450) {
            ctx->pc = 0x2F0468u;
            goto label_2f0468;
        }
    }
    ctx->pc = 0x2F0458u;
label_2f0458:
    // 0x2f0458: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2f0458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2f045c:
    // 0x2f045c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f045cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0460:
    // 0x2f0460: 0x10000022  b           . + 4 + (0x22 << 2)
label_2f0464:
    if (ctx->pc == 0x2F0464u) {
        ctx->pc = 0x2F0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0460u;
        // 0x2f0464: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0468u;
        goto label_2f0468;
    }
    ctx->pc = 0x2F0460u;
    {
        const bool branch_taken_0x2f0460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0460u;
        // 0x2f0464: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0460) {
            ctx->pc = 0x2F04ECu;
            goto label_2f04ec;
        }
    }
    ctx->pc = 0x2F0468u;
label_2f0468:
    // 0x2f0468: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2f0468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2f046c:
    // 0x2f046c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2f0470:
    if (ctx->pc == 0x2F0470u) {
        ctx->pc = 0x2F0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F046Cu;
        // 0x2f0470: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0474u;
        goto label_2f0474;
    }
    ctx->pc = 0x2F046Cu;
    {
        const bool branch_taken_0x2f046c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f046c) {
            ctx->pc = 0x2F0470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F046Cu;
            // 0x2f0470: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0480u;
            goto label_2f0480;
        }
    }
    ctx->pc = 0x2F0474u;
label_2f0474:
    // 0x2f0474: 0xc0bb42e  jal         func_2ED0B8
label_2f0478:
    if (ctx->pc == 0x2F0478u) {
        ctx->pc = 0x2F0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0474u;
        // 0x2f0478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F047Cu;
        goto label_2f047c;
    }
    ctx->pc = 0x2F0474u;
    SET_GPR_U32(ctx, 31, 0x2F047Cu);
    ctx->pc = 0x2F0478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0474u;
    // 0x2f0478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED0B8u, 0x2F0474u, 0x2F047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F047Cu;
label_2f047c:
    // 0x2f047c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2f047cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2f0480:
    // 0x2f0480: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2f0480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2f0484:
    // 0x2f0484: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f0488:
    if (ctx->pc == 0x2F0488u) {
        ctx->pc = 0x2F0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0484u;
        // 0x2f0488: 0x3c05002f  lui         $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F048Cu;
        goto label_2f048c;
    }
    ctx->pc = 0x2F0484u;
    {
        const bool branch_taken_0x2f0484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0484u;
        // 0x2f0488: 0x3c05002f  lui         $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0484) {
            ctx->pc = 0x2F0498u;
            goto label_2f0498;
        }
    }
    ctx->pc = 0x2F048Cu;
label_2f048c:
    // 0x2f048c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2f048cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2f0490:
    // 0x2f0490: 0xc0bb3b6  jal         func_2ECED8
label_2f0494:
    if (ctx->pc == 0x2F0494u) {
        ctx->pc = 0x2F0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0490u;
        // 0x2f0494: 0x24a50348  addiu       $a1, $a1, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0498u;
        goto label_2f0498;
    }
    ctx->pc = 0x2F0490u;
    SET_GPR_U32(ctx, 31, 0x2F0498u);
    ctx->pc = 0x2F0494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0490u;
    // 0x2f0494: 0x24a50348  addiu       $a1, $a1, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECED8u, 0x2F0490u, 0x2F0498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0498u;
label_2f0498:
    // 0x2f0498: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2f0498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2f049c:
    // 0x2f049c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2f049cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2f04a0:
    // 0x2f04a0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2f04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2f04a4:
    // 0x2f04a4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2f04a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2f04a8:
    // 0x2f04a8: 0x40f809  jalr        $v0
label_2f04ac:
    if (ctx->pc == 0x2F04ACu) {
        ctx->pc = 0x2F04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04A8u;
        // 0x2f04ac: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F04B0u;
        goto label_2f04b0;
    }
    ctx->pc = 0x2F04A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F04B0u);
        ctx->pc = 0x2F04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04A8u;
        // 0x2f04ac: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F04A8u, 0x2F04B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F04B0u;
label_2f04b0:
    // 0x2f04b0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2f04b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2f04b4:
    // 0x2f04b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f04b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f04b8:
    // 0x2f04b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f04b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f04bc:
    // 0x2f04bc: 0x3063dfff  andi        $v1, $v1, 0xDFFF
    ctx->pc = 0x2f04bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57343);
label_2f04c0:
    // 0x2f04c0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2f04c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_2f04c4:
    // 0x2f04c4: 0x1c800009  bgtz        $a0, . + 4 + (0x9 << 2)
label_2f04c8:
    if (ctx->pc == 0x2F04C8u) {
        ctx->pc = 0x2F04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04C4u;
        // 0x2f04c8: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F04CCu;
        goto label_2f04cc;
    }
    ctx->pc = 0x2F04C4u;
    {
        const bool branch_taken_0x2f04c4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2F04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04C4u;
        // 0x2f04c8: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f04c4) {
            ctx->pc = 0x2F04ECu;
            goto label_2f04ec;
        }
    }
    ctx->pc = 0x2F04CCu;
label_2f04cc:
    // 0x2f04cc: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
label_2f04d0:
    if (ctx->pc == 0x2F04D0u) {
        ctx->pc = 0x2F04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04CCu;
        // 0x2f04d0: 0x34620040  ori         $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F04D4u;
        goto label_2f04d4;
    }
    ctx->pc = 0x2F04CCu;
    {
        const bool branch_taken_0x2f04cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f04cc) {
            ctx->pc = 0x2F04D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F04CCu;
            // 0x2f04d0: 0x34620040  ori         $v0, $v1, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F04E0u;
            goto label_2f04e0;
        }
    }
    ctx->pc = 0x2F04D4u;
label_2f04d4:
    // 0x2f04d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f04d8:
    if (ctx->pc == 0x2F04D8u) {
        ctx->pc = 0x2F04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04D4u;
        // 0x2f04d8: 0x34620020  ori         $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F04DCu;
        goto label_2f04dc;
    }
    ctx->pc = 0x2F04D4u;
    {
        const bool branch_taken_0x2f04d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04D4u;
        // 0x2f04d8: 0x34620020  ori         $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f04d4) {
            ctx->pc = 0x2F04E4u;
            goto label_2f04e4;
        }
    }
    ctx->pc = 0x2F04DCu;
label_2f04dc:
    // 0x2f04dc: 0x0  nop
    ctx->pc = 0x2f04dcu;
    // NOP
label_2f04e0:
    // 0x2f04e0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f04e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f04e4:
    // 0x2f04e4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2f04e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2f04e8:
    // 0x2f04e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f04e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f04ec:
    // 0x2f04ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f04ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f04f0:
    // 0x2f04f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f04f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f04f4:
    // 0x2f04f4: 0x3e00008  jr          $ra
label_2f04f8:
    if (ctx->pc == 0x2F04F8u) {
        ctx->pc = 0x2F04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04F4u;
        // 0x2f04f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F04FCu;
        goto label_2f04fc;
    }
    ctx->pc = 0x2F04F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04F4u;
        // 0x2f04f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F04F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F04FCu;
label_2f04fc:
    // 0x2f04fc: 0x0  nop
    ctx->pc = 0x2f04fcu;
    // NOP
    ctx->pc = 0x2f0500u;
}
