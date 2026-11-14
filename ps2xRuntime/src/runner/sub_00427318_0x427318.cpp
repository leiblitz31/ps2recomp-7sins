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

// Function: sub_00427318
// Address: 0x427318 - 0x427438
void sub_00427318_0x427318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00427318_0x427318");
#endif

    switch (ctx->pc) {
        case 0x427318u: goto label_427318;
        case 0x42731cu: goto label_42731c;
        case 0x427320u: goto label_427320;
        case 0x427324u: goto label_427324;
        case 0x427328u: goto label_427328;
        case 0x42732cu: goto label_42732c;
        case 0x427330u: goto label_427330;
        case 0x427334u: goto label_427334;
        case 0x427338u: goto label_427338;
        case 0x42733cu: goto label_42733c;
        case 0x427340u: goto label_427340;
        case 0x427344u: goto label_427344;
        case 0x427348u: goto label_427348;
        case 0x42734cu: goto label_42734c;
        case 0x427350u: goto label_427350;
        case 0x427354u: goto label_427354;
        case 0x427358u: goto label_427358;
        case 0x42735cu: goto label_42735c;
        case 0x427360u: goto label_427360;
        case 0x427364u: goto label_427364;
        case 0x427368u: goto label_427368;
        case 0x42736cu: goto label_42736c;
        case 0x427370u: goto label_427370;
        case 0x427374u: goto label_427374;
        case 0x427378u: goto label_427378;
        case 0x42737cu: goto label_42737c;
        case 0x427380u: goto label_427380;
        case 0x427384u: goto label_427384;
        case 0x427388u: goto label_427388;
        case 0x42738cu: goto label_42738c;
        case 0x427390u: goto label_427390;
        case 0x427394u: goto label_427394;
        case 0x427398u: goto label_427398;
        case 0x42739cu: goto label_42739c;
        case 0x4273a0u: goto label_4273a0;
        case 0x4273a4u: goto label_4273a4;
        case 0x4273a8u: goto label_4273a8;
        case 0x4273acu: goto label_4273ac;
        case 0x4273b0u: goto label_4273b0;
        case 0x4273b4u: goto label_4273b4;
        case 0x4273b8u: goto label_4273b8;
        case 0x4273bcu: goto label_4273bc;
        case 0x4273c0u: goto label_4273c0;
        case 0x4273c4u: goto label_4273c4;
        case 0x4273c8u: goto label_4273c8;
        case 0x4273ccu: goto label_4273cc;
        case 0x4273d0u: goto label_4273d0;
        case 0x4273d4u: goto label_4273d4;
        case 0x4273d8u: goto label_4273d8;
        case 0x4273dcu: goto label_4273dc;
        case 0x4273e0u: goto label_4273e0;
        case 0x4273e4u: goto label_4273e4;
        case 0x4273e8u: goto label_4273e8;
        case 0x4273ecu: goto label_4273ec;
        case 0x4273f0u: goto label_4273f0;
        case 0x4273f4u: goto label_4273f4;
        case 0x4273f8u: goto label_4273f8;
        case 0x4273fcu: goto label_4273fc;
        case 0x427400u: goto label_427400;
        case 0x427404u: goto label_427404;
        case 0x427408u: goto label_427408;
        case 0x42740cu: goto label_42740c;
        case 0x427410u: goto label_427410;
        case 0x427414u: goto label_427414;
        case 0x427418u: goto label_427418;
        case 0x42741cu: goto label_42741c;
        case 0x427420u: goto label_427420;
        case 0x427424u: goto label_427424;
        case 0x427428u: goto label_427428;
        case 0x42742cu: goto label_42742c;
        case 0x427430u: goto label_427430;
        case 0x427434u: goto label_427434;
        default: break;
    }

    ctx->pc = 0x427318u;

label_427318:
    // 0x427318: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x427318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_42731c:
    // 0x42731c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x42731cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_427320:
    // 0x427320: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x427320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_427324:
    // 0x427324: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x427324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_427328:
    // 0x427328: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x427328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_42732c:
    // 0x42732c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x42732cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_427330:
    // 0x427330: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x427330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_427334:
    // 0x427334: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x427334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_427338:
    // 0x427338: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x427338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_42733c:
    // 0x42733c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x42733cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_427340:
    // 0x427340: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
label_427344:
    if (ctx->pc == 0x427344u) {
        ctx->pc = 0x427344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427340u;
        // 0x427344: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427348u;
        goto label_427348;
    }
    ctx->pc = 0x427340u;
    {
        const bool branch_taken_0x427340 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x427344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427340u;
        // 0x427344: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427340) {
            ctx->pc = 0x42740Cu;
            goto label_42740c;
        }
    }
    ctx->pc = 0x427348u;
label_427348:
    // 0x427348: 0x18c0002b  blez        $a2, . + 4 + (0x2B << 2)
label_42734c:
    if (ctx->pc == 0x42734Cu) {
        ctx->pc = 0x42734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427348u;
        // 0x42734c: 0x3c160062  lui         $s6, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427350u;
        goto label_427350;
    }
    ctx->pc = 0x427348u;
    {
        const bool branch_taken_0x427348 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x42734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427348u;
        // 0x42734c: 0x3c160062  lui         $s6, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427348) {
            ctx->pc = 0x4273F8u;
            goto label_4273f8;
        }
    }
    ctx->pc = 0x427350u;
label_427350:
    // 0x427350: 0x2693001c  addiu       $s3, $s4, 0x1C
    ctx->pc = 0x427350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
label_427354:
    // 0x427354: 0x24d1ffff  addiu       $s1, $a2, -0x1
    ctx->pc = 0x427354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_427358:
    // 0x427358: 0x2695005c  addiu       $s5, $s4, 0x5C
    ctx->pc = 0x427358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 92));
label_42735c:
    // 0x42735c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x42735cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_427360:
    // 0x427360: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x427360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_427364:
    // 0x427364: 0x0  nop
    ctx->pc = 0x427364u;
    // NOP
label_427368:
    // 0x427368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x427368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42736c:
    // 0x42736c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x42736cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_427370:
    // 0x427370: 0xc109cc6  jal         func_427318
label_427374:
    if (ctx->pc == 0x427374u) {
        ctx->pc = 0x427374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427370u;
        // 0x427374: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427378u;
        goto label_427378;
    }
    ctx->pc = 0x427370u;
    SET_GPR_U32(ctx, 31, 0x427378u);
    ctx->pc = 0x427374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427370u;
    // 0x427374: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    goto label_427318;
    ctx->pc = 0x427378u;
label_427378:
    // 0x427378: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x427378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_42737c:
    // 0x42737c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_427380:
    // 0x427380: 0xc109cc6  jal         func_427318
label_427384:
    if (ctx->pc == 0x427384u) {
        ctx->pc = 0x427384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427380u;
        // 0x427384: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427388u;
        goto label_427388;
    }
    ctx->pc = 0x427380u;
    SET_GPR_U32(ctx, 31, 0x427388u);
    ctx->pc = 0x427384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427380u;
    // 0x427384: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    goto label_427318;
    ctx->pc = 0x427388u;
label_427388:
    // 0x427388: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x427388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_42738c:
    // 0x42738c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42738cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_427390:
    // 0x427390: 0xc109cc6  jal         func_427318
label_427394:
    if (ctx->pc == 0x427394u) {
        ctx->pc = 0x427394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427390u;
        // 0x427394: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427398u;
        goto label_427398;
    }
    ctx->pc = 0x427390u;
    SET_GPR_U32(ctx, 31, 0x427398u);
    ctx->pc = 0x427394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427390u;
    // 0x427394: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    goto label_427318;
    ctx->pc = 0x427398u;
label_427398:
    // 0x427398: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x427398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_42739c:
    // 0x42739c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42739cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4273a0:
    // 0x4273a0: 0xc109cc6  jal         func_427318
label_4273a4:
    if (ctx->pc == 0x4273A4u) {
        ctx->pc = 0x4273A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4273A0u;
        // 0x4273a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4273A8u;
        goto label_4273a8;
    }
    ctx->pc = 0x4273A0u;
    SET_GPR_U32(ctx, 31, 0x4273A8u);
    ctx->pc = 0x4273A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4273A0u;
    // 0x4273a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    goto label_427318;
    ctx->pc = 0x4273A8u;
label_4273a8:
    // 0x4273a8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4273a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4273ac:
    // 0x4273ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4273acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4273b0:
    // 0x4273b0: 0xc109cc6  jal         func_427318
label_4273b4:
    if (ctx->pc == 0x4273B4u) {
        ctx->pc = 0x4273B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4273B0u;
        // 0x4273b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4273B8u;
        goto label_4273b8;
    }
    ctx->pc = 0x4273B0u;
    SET_GPR_U32(ctx, 31, 0x4273B8u);
    ctx->pc = 0x4273B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4273B0u;
    // 0x4273b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    goto label_427318;
    ctx->pc = 0x4273B8u;
label_4273b8:
    // 0x4273b8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x4273b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4273bc:
    // 0x4273bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4273bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4273c0:
    // 0x4273c0: 0xc109cc6  jal         func_427318
label_4273c4:
    if (ctx->pc == 0x4273C4u) {
        ctx->pc = 0x4273C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4273C0u;
        // 0x4273c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4273C8u;
        goto label_4273c8;
    }
    ctx->pc = 0x4273C0u;
    SET_GPR_U32(ctx, 31, 0x4273C8u);
    ctx->pc = 0x4273C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4273C0u;
    // 0x4273c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    goto label_427318;
    ctx->pc = 0x4273C8u;
label_4273c8:
    // 0x4273c8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x4273c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4273cc:
    // 0x4273cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4273ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4273d0:
    // 0x4273d0: 0xc109cc6  jal         func_427318
label_4273d4:
    if (ctx->pc == 0x4273D4u) {
        ctx->pc = 0x4273D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4273D0u;
        // 0x4273d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4273D8u;
        goto label_4273d8;
    }
    ctx->pc = 0x4273D0u;
    SET_GPR_U32(ctx, 31, 0x4273D8u);
    ctx->pc = 0x4273D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4273D0u;
    // 0x4273d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    goto label_427318;
    ctx->pc = 0x4273D8u;
label_4273d8:
    // 0x4273d8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x4273d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4273dc:
    // 0x4273dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4273dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4273e0:
    // 0x4273e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4273e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4273e4:
    // 0x4273e4: 0xc109cc6  jal         func_427318
label_4273e8:
    if (ctx->pc == 0x4273E8u) {
        ctx->pc = 0x4273E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4273E4u;
        // 0x4273e8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4273ECu;
        goto label_4273ec;
    }
    ctx->pc = 0x4273E4u;
    SET_GPR_U32(ctx, 31, 0x4273ECu);
    ctx->pc = 0x4273E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4273E4u;
    // 0x4273e8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    goto label_427318;
    ctx->pc = 0x4273ECu;
label_4273ec:
    // 0x4273ec: 0x275102a  slt         $v0, $s3, $s5
    ctx->pc = 0x4273ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_4273f0:
    // 0x4273f0: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
label_4273f4:
    if (ctx->pc == 0x4273F4u) {
        ctx->pc = 0x4273F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4273F0u;
        // 0x4273f4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4273F8u;
        goto label_4273f8;
    }
    ctx->pc = 0x4273F0u;
    {
        const bool branch_taken_0x4273f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4273f0) {
            ctx->pc = 0x4273F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4273F0u;
            // 0x4273f4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x427368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427368;
        }
    }
    ctx->pc = 0x4273F8u;
label_4273f8:
    // 0x4273f8: 0x26c3e880  addiu       $v1, $s6, -0x1780
    ctx->pc = 0x4273f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_4273fc:
    // 0x4273fc: 0x8e444004  lw          $a0, 0x4004($s2)
    ctx->pc = 0x4273fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16388)));
label_427400:
    // 0x427400: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x427400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_427404:
    // 0x427404: 0x40f809  jalr        $v0
label_427408:
    if (ctx->pc == 0x427408u) {
        ctx->pc = 0x427408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427404u;
        // 0x427408: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42740Cu;
        goto label_42740c;
    }
    ctx->pc = 0x427404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42740Cu);
        ctx->pc = 0x427408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427404u;
        // 0x427408: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x427404u, 0x42740Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42740Cu;
label_42740c:
    // 0x42740c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x42740cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_427410:
    // 0x427410: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x427410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_427414:
    // 0x427414: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x427414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_427418:
    // 0x427418: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x427418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42741c:
    // 0x42741c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x42741cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_427420:
    // 0x427420: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x427420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_427424:
    // 0x427424: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x427424u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_427428:
    // 0x427428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x427428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42742c:
    // 0x42742c: 0x3e00008  jr          $ra
label_427430:
    if (ctx->pc == 0x427430u) {
        ctx->pc = 0x427430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42742Cu;
        // 0x427430: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427434u;
        goto label_427434;
    }
    ctx->pc = 0x42742Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x427430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42742Cu;
        // 0x427430: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42742Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x427434u;
label_427434:
    // 0x427434: 0x0  nop
    ctx->pc = 0x427434u;
    // NOP
    ctx->pc = 0x427438u;
}
