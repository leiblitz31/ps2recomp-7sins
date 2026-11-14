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

// Function: sub_0041A480
// Address: 0x41a480 - 0x41a620
void sub_0041A480_0x41a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A480_0x41a480");
#endif

    switch (ctx->pc) {
        case 0x41a480u: goto label_41a480;
        case 0x41a484u: goto label_41a484;
        case 0x41a488u: goto label_41a488;
        case 0x41a48cu: goto label_41a48c;
        case 0x41a490u: goto label_41a490;
        case 0x41a494u: goto label_41a494;
        case 0x41a498u: goto label_41a498;
        case 0x41a49cu: goto label_41a49c;
        case 0x41a4a0u: goto label_41a4a0;
        case 0x41a4a4u: goto label_41a4a4;
        case 0x41a4a8u: goto label_41a4a8;
        case 0x41a4acu: goto label_41a4ac;
        case 0x41a4b0u: goto label_41a4b0;
        case 0x41a4b4u: goto label_41a4b4;
        case 0x41a4b8u: goto label_41a4b8;
        case 0x41a4bcu: goto label_41a4bc;
        case 0x41a4c0u: goto label_41a4c0;
        case 0x41a4c4u: goto label_41a4c4;
        case 0x41a4c8u: goto label_41a4c8;
        case 0x41a4ccu: goto label_41a4cc;
        case 0x41a4d0u: goto label_41a4d0;
        case 0x41a4d4u: goto label_41a4d4;
        case 0x41a4d8u: goto label_41a4d8;
        case 0x41a4dcu: goto label_41a4dc;
        case 0x41a4e0u: goto label_41a4e0;
        case 0x41a4e4u: goto label_41a4e4;
        case 0x41a4e8u: goto label_41a4e8;
        case 0x41a4ecu: goto label_41a4ec;
        case 0x41a4f0u: goto label_41a4f0;
        case 0x41a4f4u: goto label_41a4f4;
        case 0x41a4f8u: goto label_41a4f8;
        case 0x41a4fcu: goto label_41a4fc;
        case 0x41a500u: goto label_41a500;
        case 0x41a504u: goto label_41a504;
        case 0x41a508u: goto label_41a508;
        case 0x41a50cu: goto label_41a50c;
        case 0x41a510u: goto label_41a510;
        case 0x41a514u: goto label_41a514;
        case 0x41a518u: goto label_41a518;
        case 0x41a51cu: goto label_41a51c;
        case 0x41a520u: goto label_41a520;
        case 0x41a524u: goto label_41a524;
        case 0x41a528u: goto label_41a528;
        case 0x41a52cu: goto label_41a52c;
        case 0x41a530u: goto label_41a530;
        case 0x41a534u: goto label_41a534;
        case 0x41a538u: goto label_41a538;
        case 0x41a53cu: goto label_41a53c;
        case 0x41a540u: goto label_41a540;
        case 0x41a544u: goto label_41a544;
        case 0x41a548u: goto label_41a548;
        case 0x41a54cu: goto label_41a54c;
        case 0x41a550u: goto label_41a550;
        case 0x41a554u: goto label_41a554;
        case 0x41a558u: goto label_41a558;
        case 0x41a55cu: goto label_41a55c;
        case 0x41a560u: goto label_41a560;
        case 0x41a564u: goto label_41a564;
        case 0x41a568u: goto label_41a568;
        case 0x41a56cu: goto label_41a56c;
        case 0x41a570u: goto label_41a570;
        case 0x41a574u: goto label_41a574;
        case 0x41a578u: goto label_41a578;
        case 0x41a57cu: goto label_41a57c;
        case 0x41a580u: goto label_41a580;
        case 0x41a584u: goto label_41a584;
        case 0x41a588u: goto label_41a588;
        case 0x41a58cu: goto label_41a58c;
        case 0x41a590u: goto label_41a590;
        case 0x41a594u: goto label_41a594;
        case 0x41a598u: goto label_41a598;
        case 0x41a59cu: goto label_41a59c;
        case 0x41a5a0u: goto label_41a5a0;
        case 0x41a5a4u: goto label_41a5a4;
        case 0x41a5a8u: goto label_41a5a8;
        case 0x41a5acu: goto label_41a5ac;
        case 0x41a5b0u: goto label_41a5b0;
        case 0x41a5b4u: goto label_41a5b4;
        case 0x41a5b8u: goto label_41a5b8;
        case 0x41a5bcu: goto label_41a5bc;
        case 0x41a5c0u: goto label_41a5c0;
        case 0x41a5c4u: goto label_41a5c4;
        case 0x41a5c8u: goto label_41a5c8;
        case 0x41a5ccu: goto label_41a5cc;
        case 0x41a5d0u: goto label_41a5d0;
        case 0x41a5d4u: goto label_41a5d4;
        case 0x41a5d8u: goto label_41a5d8;
        case 0x41a5dcu: goto label_41a5dc;
        case 0x41a5e0u: goto label_41a5e0;
        case 0x41a5e4u: goto label_41a5e4;
        case 0x41a5e8u: goto label_41a5e8;
        case 0x41a5ecu: goto label_41a5ec;
        case 0x41a5f0u: goto label_41a5f0;
        case 0x41a5f4u: goto label_41a5f4;
        case 0x41a5f8u: goto label_41a5f8;
        case 0x41a5fcu: goto label_41a5fc;
        case 0x41a600u: goto label_41a600;
        case 0x41a604u: goto label_41a604;
        case 0x41a608u: goto label_41a608;
        case 0x41a60cu: goto label_41a60c;
        case 0x41a610u: goto label_41a610;
        case 0x41a614u: goto label_41a614;
        case 0x41a618u: goto label_41a618;
        case 0x41a61cu: goto label_41a61c;
        default: break;
    }

    ctx->pc = 0x41a480u;

label_41a480:
    // 0x41a480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41a484:
    // 0x41a484: 0xaf85be08  sw          $a1, -0x41F8($gp)
    ctx->pc = 0x41a484u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950408), GPR_U32(ctx, 5));
label_41a488:
    // 0x41a488: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41a488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_41a48c:
    // 0x41a48c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x41a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_41a490:
    // 0x41a490: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41a490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41a494:
    // 0x41a494: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x41a494u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_41a498:
    // 0x41a498: 0x8c44c9e0  lw          $a0, -0x3620($v0)
    ctx->pc = 0x41a498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953440)));
label_41a49c:
    // 0x41a49c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x41a49cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_41a4a0:
    // 0x41a4a0: 0x8f85ad8c  lw          $a1, -0x5274($gp)
    ctx->pc = 0x41a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946188)));
label_41a4a4:
    // 0x41a4a4: 0x250828a8  addiu       $t0, $t0, 0x28A8
    ctx->pc = 0x41a4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10408));
label_41a4a8:
    // 0x41a4a8: 0x8f87ad90  lw          $a3, -0x5270($gp)
    ctx->pc = 0x41a4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946192)));
label_41a4ac:
    // 0x41a4ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x41a4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41a4b0:
    // 0x41a4b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41a4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_41a4b4:
    // 0x41a4b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41a4b8:
    // 0x41a4b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41a4bc:
    // 0x41a4bc: 0xc10408c  jal         func_410230
label_41a4c0:
    if (ctx->pc == 0x41A4C0u) {
        ctx->pc = 0x41A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A4BCu;
        // 0x41a4c0: 0x35290018  ori         $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A4C4u;
        goto label_41a4c4;
    }
    ctx->pc = 0x41A4BCu;
    SET_GPR_U32(ctx, 31, 0x41A4C4u);
    ctx->pc = 0x41A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A4BCu;
    // 0x41a4c0: 0x35290018  ori         $t1, $t1, 0x18 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)24);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x41A4BCu, 0x41A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A4C4u;
label_41a4c4:
    // 0x41a4c4: 0x8f84be08  lw          $a0, -0x41F8($gp)
    ctx->pc = 0x41a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a4c8:
    // 0x41a4c8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41a4cc:
    // 0x41a4cc: 0x2470e880  addiu       $s0, $v1, -0x1780
    ctx->pc = 0x41a4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41a4d0:
    // 0x41a4d0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x41a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_41a4d4:
    // 0x41a4d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_41a4d8:
    if (ctx->pc == 0x41A4D8u) {
        ctx->pc = 0x41A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A4D4u;
        // 0x41a4d8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A4DCu;
        goto label_41a4dc;
    }
    ctx->pc = 0x41A4D4u;
    {
        const bool branch_taken_0x41a4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A4D4u;
        // 0x41a4d8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a4d4) {
            ctx->pc = 0x41A4E4u;
            goto label_41a4e4;
        }
    }
    ctx->pc = 0x41A4DCu;
label_41a4dc:
    // 0x41a4dc: 0x1000004a  b           . + 4 + (0x4A << 2)
label_41a4e0:
    if (ctx->pc == 0x41A4E0u) {
        ctx->pc = 0x41A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A4DCu;
        // 0x41a4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A4E4u;
        goto label_41a4e4;
    }
    ctx->pc = 0x41A4DCu;
    {
        const bool branch_taken_0x41a4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A4DCu;
        // 0x41a4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a4dc) {
            ctx->pc = 0x41A608u;
            goto label_41a608;
        }
    }
    ctx->pc = 0x41A4E4u;
label_41a4e4:
    // 0x41a4e4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x41a4e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_41a4e8:
    // 0x41a4e8: 0x8f85ad8c  lw          $a1, -0x5274($gp)
    ctx->pc = 0x41a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946188)));
label_41a4ec:
    // 0x41a4ec: 0x8f87ad98  lw          $a3, -0x5268($gp)
    ctx->pc = 0x41a4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946200)));
label_41a4f0:
    // 0x41a4f0: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x41a4f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_41a4f4:
    // 0x41a4f4: 0x250828d0  addiu       $t0, $t0, 0x28D0
    ctx->pc = 0x41a4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10448));
label_41a4f8:
    // 0x41a4f8: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x41a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_41a4fc:
    // 0x41a4fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x41a4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41a500:
    // 0x41a500: 0xc10408c  jal         func_410230
label_41a504:
    if (ctx->pc == 0x41A504u) {
        ctx->pc = 0x41A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A500u;
        // 0x41a504: 0x35290406  ori         $t1, $t1, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A508u;
        goto label_41a508;
    }
    ctx->pc = 0x41A500u;
    SET_GPR_U32(ctx, 31, 0x41A508u);
    ctx->pc = 0x41A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A500u;
    // 0x41a504: 0x35290406  ori         $t1, $t1, 0x406 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1030);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x41A500u, 0x41A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A508u;
label_41a508:
    // 0x41a508: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41a508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a50c:
    // 0x41a50c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41a510:
    // 0x41a510: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_41a514:
    if (ctx->pc == 0x41A514u) {
        ctx->pc = 0x41A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A510u;
        // 0x41a514: 0xac620218  sw          $v0, 0x218($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A518u;
        goto label_41a518;
    }
    ctx->pc = 0x41A510u;
    {
        const bool branch_taken_0x41a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A510u;
        // 0x41a514: 0xac620218  sw          $v0, 0x218($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a510) {
            ctx->pc = 0x41A520u;
            goto label_41a520;
        }
    }
    ctx->pc = 0x41A518u;
label_41a518:
    // 0x41a518: 0x10000035  b           . + 4 + (0x35 << 2)
label_41a51c:
    if (ctx->pc == 0x41A51Cu) {
        ctx->pc = 0x41A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A518u;
        // 0x41a51c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A520u;
        goto label_41a520;
    }
    ctx->pc = 0x41A518u;
    {
        const bool branch_taken_0x41a518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A518u;
        // 0x41a51c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a518) {
            ctx->pc = 0x41A5F0u;
            goto label_41a5f0;
        }
    }
    ctx->pc = 0x41A520u;
label_41a520:
    // 0x41a520: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x41a520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_41a524:
    // 0x41a524: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x41a524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_41a528:
    // 0x41a528: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x41a528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_41a52c:
    // 0x41a52c: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x41a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
label_41a530:
    // 0x41a530: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x41a530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_41a534:
    // 0x41a534: 0x40f809  jalr        $v0
label_41a538:
    if (ctx->pc == 0x41A538u) {
        ctx->pc = 0x41A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A534u;
        // 0x41a538: 0x34a50406  ori         $a1, $a1, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A53Cu;
        goto label_41a53c;
    }
    ctx->pc = 0x41A534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41A53Cu);
        ctx->pc = 0x41A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A534u;
        // 0x41a538: 0x34a50406  ori         $a1, $a1, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A534u, 0x41A53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A53Cu;
label_41a53c:
    // 0x41a53c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x41a53cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a540:
    // 0x41a540: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a544:
    // 0x41a544: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_41a548:
    // 0x41a548: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_41a54c:
    if (ctx->pc == 0x41A54Cu) {
        ctx->pc = 0x41A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A548u;
        // 0x41a54c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A550u;
        goto label_41a550;
    }
    ctx->pc = 0x41A548u;
    {
        const bool branch_taken_0x41a548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A548u;
        // 0x41a54c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a548) {
            ctx->pc = 0x41A558u;
            goto label_41a558;
        }
    }
    ctx->pc = 0x41A550u;
label_41a550:
    // 0x41a550: 0x10000021  b           . + 4 + (0x21 << 2)
label_41a554:
    if (ctx->pc == 0x41A554u) {
        ctx->pc = 0x41A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A550u;
        // 0x41a554: 0x8c440218  lw          $a0, 0x218($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A558u;
        goto label_41a558;
    }
    ctx->pc = 0x41A550u;
    {
        const bool branch_taken_0x41a550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A550u;
        // 0x41a554: 0x8c440218  lw          $a0, 0x218($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a550) {
            ctx->pc = 0x41A5D8u;
            goto label_41a5d8;
        }
    }
    ctx->pc = 0x41A558u;
label_41a558:
    // 0x41a558: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x41a558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_41a55c:
    // 0x41a55c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41a55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_41a560:
    // 0x41a560: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41a560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41a564:
    // 0x41a564: 0x8f82be0c  lw          $v0, -0x41F4($gp)
    ctx->pc = 0x41a564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950412)));
label_41a568:
    // 0x41a568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x41a568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_41a56c:
    // 0x41a56c: 0xaf82be0c  sw          $v0, -0x41F4($gp)
    ctx->pc = 0x41a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950412), GPR_U32(ctx, 2));
label_41a570:
    // 0x41a570: 0xc1071b6  jal         func_41C6D8
label_41a574:
    if (ctx->pc == 0x41A574u) {
        ctx->pc = 0x41A578u;
        goto label_41a578;
    }
    ctx->pc = 0x41A570u;
    SET_GPR_U32(ctx, 31, 0x41A578u);
    ctx->pc = 0x41C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C6D8u, 0x41A570u, 0x41A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A578u;
label_41a578:
    // 0x41a578: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41a578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a57c:
    // 0x41a57c: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x41a57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_41a580:
    // 0x41a580: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x41a580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_41a584:
    // 0x41a584: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x41a584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_41a588:
    // 0x41a588: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41a58c:
    // 0x41a58c: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x41a58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_41a590:
    // 0x41a590: 0xac710214  sw          $s1, 0x214($v1)
    ctx->pc = 0x41a590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 17));
label_41a594:
    // 0x41a594: 0x40f809  jalr        $v0
label_41a598:
    if (ctx->pc == 0x41A598u) {
        ctx->pc = 0x41A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A594u;
        // 0x41a598: 0xac60021c  sw          $zero, 0x21C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A59Cu;
        goto label_41a59c;
    }
    ctx->pc = 0x41A594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41A59Cu);
        ctx->pc = 0x41A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A594u;
        // 0x41a598: 0xac60021c  sw          $zero, 0x21C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A594u, 0x41A59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A59Cu;
label_41a59c:
    // 0x41a59c: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a5a0:
    // 0x41a5a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41a5a4:
    // 0x41a5a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_41a5a8:
    if (ctx->pc == 0x41A5A8u) {
        ctx->pc = 0x41A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A5A4u;
        // 0x41a5a8: 0xac620210  sw          $v0, 0x210($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A5ACu;
        goto label_41a5ac;
    }
    ctx->pc = 0x41A5A4u;
    {
        const bool branch_taken_0x41a5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A5A4u;
        // 0x41a5a8: 0xac620210  sw          $v0, 0x210($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a5a4) {
            ctx->pc = 0x41A5B4u;
            goto label_41a5b4;
        }
    }
    ctx->pc = 0x41A5ACu;
label_41a5ac:
    // 0x41a5ac: 0x10000016  b           . + 4 + (0x16 << 2)
label_41a5b0:
    if (ctx->pc == 0x41A5B0u) {
        ctx->pc = 0x41A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A5ACu;
        // 0x41a5b0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A5B4u;
        goto label_41a5b4;
    }
    ctx->pc = 0x41A5ACu;
    {
        const bool branch_taken_0x41a5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A5ACu;
        // 0x41a5b0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a5ac) {
            ctx->pc = 0x41A608u;
            goto label_41a608;
        }
    }
    ctx->pc = 0x41A5B4u;
label_41a5b4:
    // 0x41a5b4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x41a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_41a5b8:
    // 0x41a5b8: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x41a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_41a5bc:
    // 0x41a5bc: 0x60f809  jalr        $v1
label_41a5c0:
    if (ctx->pc == 0x41A5C0u) {
        ctx->pc = 0x41A5C4u;
        goto label_41a5c4;
    }
    ctx->pc = 0x41A5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41A5C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A5BCu, 0x41A5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A5C4u;
label_41a5c4:
    // 0x41a5c4: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a5c8:
    // 0x41a5c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_41a5cc:
    // 0x41a5cc: 0x8c440218  lw          $a0, 0x218($v0)
    ctx->pc = 0x41a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_41a5d0:
    // 0x41a5d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x41a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_41a5d4:
    // 0x41a5d4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x41a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_41a5d8:
    // 0x41a5d8: 0xc104284  jal         func_410A10
label_41a5dc:
    if (ctx->pc == 0x41A5DCu) {
        ctx->pc = 0x41A5E0u;
        goto label_41a5e0;
    }
    ctx->pc = 0x41A5D8u;
    SET_GPR_U32(ctx, 31, 0x41A5E0u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x41A5D8u, 0x41A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A5E0u;
label_41a5e0:
    // 0x41a5e0: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a5e4:
    // 0x41a5e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41a5e8:
    // 0x41a5e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x41a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_41a5ec:
    // 0x41a5ec: 0xac600218  sw          $zero, 0x218($v1)
    ctx->pc = 0x41a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 0));
label_41a5f0:
    // 0x41a5f0: 0xc104284  jal         func_410A10
label_41a5f4:
    if (ctx->pc == 0x41A5F4u) {
        ctx->pc = 0x41A5F8u;
        goto label_41a5f8;
    }
    ctx->pc = 0x41A5F0u;
    SET_GPR_U32(ctx, 31, 0x41A5F8u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x41A5F0u, 0x41A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A5F8u;
label_41a5f8:
    // 0x41a5f8: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a5fc:
    // 0x41a5fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41a5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a600:
    // 0x41a600: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41a600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41a604:
    // 0x41a604: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x41a604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_41a608:
    // 0x41a608: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41a608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41a60c:
    // 0x41a60c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41a60cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41a610:
    // 0x41a610: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41a610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41a614:
    // 0x41a614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41a618:
    // 0x41a618: 0x3e00008  jr          $ra
label_41a61c:
    if (ctx->pc == 0x41A61Cu) {
        ctx->pc = 0x41A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A618u;
        // 0x41a61c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A620u;
        goto label_fallthrough_0x41a618;
    }
    ctx->pc = 0x41A618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A618u;
        // 0x41a61c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41a618:
    ctx->pc = 0x41A620u;
}
