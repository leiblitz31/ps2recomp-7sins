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

// Function: sub_00412788
// Address: 0x412788 - 0x412918
void sub_00412788_0x412788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412788_0x412788");
#endif

    switch (ctx->pc) {
        case 0x412788u: goto label_412788;
        case 0x41278cu: goto label_41278c;
        case 0x412790u: goto label_412790;
        case 0x412794u: goto label_412794;
        case 0x412798u: goto label_412798;
        case 0x41279cu: goto label_41279c;
        case 0x4127a0u: goto label_4127a0;
        case 0x4127a4u: goto label_4127a4;
        case 0x4127a8u: goto label_4127a8;
        case 0x4127acu: goto label_4127ac;
        case 0x4127b0u: goto label_4127b0;
        case 0x4127b4u: goto label_4127b4;
        case 0x4127b8u: goto label_4127b8;
        case 0x4127bcu: goto label_4127bc;
        case 0x4127c0u: goto label_4127c0;
        case 0x4127c4u: goto label_4127c4;
        case 0x4127c8u: goto label_4127c8;
        case 0x4127ccu: goto label_4127cc;
        case 0x4127d0u: goto label_4127d0;
        case 0x4127d4u: goto label_4127d4;
        case 0x4127d8u: goto label_4127d8;
        case 0x4127dcu: goto label_4127dc;
        case 0x4127e0u: goto label_4127e0;
        case 0x4127e4u: goto label_4127e4;
        case 0x4127e8u: goto label_4127e8;
        case 0x4127ecu: goto label_4127ec;
        case 0x4127f0u: goto label_4127f0;
        case 0x4127f4u: goto label_4127f4;
        case 0x4127f8u: goto label_4127f8;
        case 0x4127fcu: goto label_4127fc;
        case 0x412800u: goto label_412800;
        case 0x412804u: goto label_412804;
        case 0x412808u: goto label_412808;
        case 0x41280cu: goto label_41280c;
        case 0x412810u: goto label_412810;
        case 0x412814u: goto label_412814;
        case 0x412818u: goto label_412818;
        case 0x41281cu: goto label_41281c;
        case 0x412820u: goto label_412820;
        case 0x412824u: goto label_412824;
        case 0x412828u: goto label_412828;
        case 0x41282cu: goto label_41282c;
        case 0x412830u: goto label_412830;
        case 0x412834u: goto label_412834;
        case 0x412838u: goto label_412838;
        case 0x41283cu: goto label_41283c;
        case 0x412840u: goto label_412840;
        case 0x412844u: goto label_412844;
        case 0x412848u: goto label_412848;
        case 0x41284cu: goto label_41284c;
        case 0x412850u: goto label_412850;
        case 0x412854u: goto label_412854;
        case 0x412858u: goto label_412858;
        case 0x41285cu: goto label_41285c;
        case 0x412860u: goto label_412860;
        case 0x412864u: goto label_412864;
        case 0x412868u: goto label_412868;
        case 0x41286cu: goto label_41286c;
        case 0x412870u: goto label_412870;
        case 0x412874u: goto label_412874;
        case 0x412878u: goto label_412878;
        case 0x41287cu: goto label_41287c;
        case 0x412880u: goto label_412880;
        case 0x412884u: goto label_412884;
        case 0x412888u: goto label_412888;
        case 0x41288cu: goto label_41288c;
        case 0x412890u: goto label_412890;
        case 0x412894u: goto label_412894;
        case 0x412898u: goto label_412898;
        case 0x41289cu: goto label_41289c;
        case 0x4128a0u: goto label_4128a0;
        case 0x4128a4u: goto label_4128a4;
        case 0x4128a8u: goto label_4128a8;
        case 0x4128acu: goto label_4128ac;
        case 0x4128b0u: goto label_4128b0;
        case 0x4128b4u: goto label_4128b4;
        case 0x4128b8u: goto label_4128b8;
        case 0x4128bcu: goto label_4128bc;
        case 0x4128c0u: goto label_4128c0;
        case 0x4128c4u: goto label_4128c4;
        case 0x4128c8u: goto label_4128c8;
        case 0x4128ccu: goto label_4128cc;
        case 0x4128d0u: goto label_4128d0;
        case 0x4128d4u: goto label_4128d4;
        case 0x4128d8u: goto label_4128d8;
        case 0x4128dcu: goto label_4128dc;
        case 0x4128e0u: goto label_4128e0;
        case 0x4128e4u: goto label_4128e4;
        case 0x4128e8u: goto label_4128e8;
        case 0x4128ecu: goto label_4128ec;
        case 0x4128f0u: goto label_4128f0;
        case 0x4128f4u: goto label_4128f4;
        case 0x4128f8u: goto label_4128f8;
        case 0x4128fcu: goto label_4128fc;
        case 0x412900u: goto label_412900;
        case 0x412904u: goto label_412904;
        case 0x412908u: goto label_412908;
        case 0x41290cu: goto label_41290c;
        case 0x412910u: goto label_412910;
        case 0x412914u: goto label_412914;
        default: break;
    }

    ctx->pc = 0x412788u;

label_412788:
    // 0x412788: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x412788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_41278c:
    // 0x41278c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x41278cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_412790:
    // 0x412790: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x412790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_412794:
    // 0x412794: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x412794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_412798:
    // 0x412798: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x412798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41279c:
    // 0x41279c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4127a0:
    // 0x4127a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4127a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4127a4:
    // 0x4127a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4127a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4127a8:
    // 0x4127a8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4127a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4127ac:
    // 0x4127ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4127acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4127b0:
    // 0x4127b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4127b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4127b4:
    // 0x4127b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4127b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4127b8:
    // 0x4127b8: 0xc103322  jal         func_40CC88
label_4127bc:
    if (ctx->pc == 0x4127BCu) {
        ctx->pc = 0x4127BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4127B8u;
        // 0x4127bc: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4127C0u;
        goto label_4127c0;
    }
    ctx->pc = 0x4127B8u;
    SET_GPR_U32(ctx, 31, 0x4127C0u);
    ctx->pc = 0x4127BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4127B8u;
    // 0x4127bc: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x4127B8u, 0x4127C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4127C0u;
label_4127c0:
    // 0x4127c0: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_4127c4:
    if (ctx->pc == 0x4127C4u) {
        ctx->pc = 0x4127C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4127C0u;
        // 0x4127c4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4127C8u;
        goto label_4127c8;
    }
    ctx->pc = 0x4127C0u;
    {
        const bool branch_taken_0x4127c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4127C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4127C0u;
        // 0x4127c4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4127c0) {
            ctx->pc = 0x4128F8u;
            goto label_4128f8;
        }
    }
    ctx->pc = 0x4127C8u;
label_4127c8:
    // 0x4127c8: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x4127c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_4127cc:
    // 0x4127cc: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x4127ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_4127d0:
    // 0x4127d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4127d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4127d4:
    // 0x4127d4: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x4127d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_4127d8:
    // 0x4127d8: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_4127dc:
    if (ctx->pc == 0x4127DCu) {
        ctx->pc = 0x4127DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4127D8u;
        // 0x4127dc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4127E0u;
        goto label_4127e0;
    }
    ctx->pc = 0x4127D8u;
    {
        const bool branch_taken_0x4127d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4127DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4127D8u;
        // 0x4127dc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4127d8) {
            ctx->pc = 0x4128D8u;
            goto label_4128d8;
        }
    }
    ctx->pc = 0x4127E0u;
label_4127e0:
    // 0x4127e0: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_4127e4:
    if (ctx->pc == 0x4127E4u) {
        ctx->pc = 0x4127E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4127E0u;
        // 0x4127e4: 0x8e700010  lw          $s0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4127E8u;
        goto label_4127e8;
    }
    ctx->pc = 0x4127E0u;
    {
        const bool branch_taken_0x4127e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4127e0) {
            ctx->pc = 0x4127E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4127E0u;
            // 0x4127e4: 0x8e700010  lw          $s0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412898u;
            goto label_412898;
        }
    }
    ctx->pc = 0x4127E8u;
label_4127e8:
    // 0x4127e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4127e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4127ec:
    // 0x4127ec: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x4127ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_4127f0:
    // 0x4127f0: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x4127f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_4127f4:
    // 0x4127f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4127f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4127f8:
    // 0x4127f8: 0xc103490  jal         func_40D240
label_4127fc:
    if (ctx->pc == 0x4127FCu) {
        ctx->pc = 0x4127FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4127F8u;
        // 0x4127fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412800u;
        goto label_412800;
    }
    ctx->pc = 0x4127F8u;
    SET_GPR_U32(ctx, 31, 0x412800u);
    ctx->pc = 0x4127FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4127F8u;
    // 0x4127fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D240u, 0x4127F8u, 0x412800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412800u;
label_412800:
    // 0x412800: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_412804:
    if (ctx->pc == 0x412804u) {
        ctx->pc = 0x412804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412800u;
        // 0x412804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412808u;
        goto label_412808;
    }
    ctx->pc = 0x412800u;
    {
        const bool branch_taken_0x412800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412800u;
        // 0x412804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412800) {
            ctx->pc = 0x4128FCu;
            goto label_4128fc;
        }
    }
    ctx->pc = 0x412808u;
label_412808:
    // 0x412808: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x412808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_41280c:
    // 0x41280c: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_412810:
    if (ctx->pc == 0x412810u) {
        ctx->pc = 0x412810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41280Cu;
        // 0x412810: 0x8fa5001c  lw          $a1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412814u;
        goto label_412814;
    }
    ctx->pc = 0x41280Cu;
    {
        const bool branch_taken_0x41280c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x412810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41280Cu;
        // 0x412810: 0x8fa5001c  lw          $a1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41280c) {
            ctx->pc = 0x412870u;
            goto label_412870;
        }
    }
    ctx->pc = 0x412814u;
label_412814:
    // 0x412814: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x412814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_412818:
    // 0x412818: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x412818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_41281c:
    // 0x41281c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_412820:
    if (ctx->pc == 0x412820u) {
        ctx->pc = 0x412824u;
        goto label_412824;
    }
    ctx->pc = 0x41281Cu;
    {
        const bool branch_taken_0x41281c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x41281c) {
            ctx->pc = 0x41283Cu;
            goto label_41283c;
        }
    }
    ctx->pc = 0x412824u;
label_412824:
    // 0x412824: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x412824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_412828:
    // 0x412828: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_41282c:
    if (ctx->pc == 0x41282Cu) {
        ctx->pc = 0x412830u;
        goto label_412830;
    }
    ctx->pc = 0x412828u;
    {
        const bool branch_taken_0x412828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x412828) {
            ctx->pc = 0x412870u;
            goto label_412870;
        }
    }
    ctx->pc = 0x412830u;
label_412830:
    // 0x412830: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x412830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_412834:
    // 0x412834: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
label_412838:
    if (ctx->pc == 0x412838u) {
        ctx->pc = 0x412838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412834u;
        // 0x412838: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41283Cu;
        goto label_41283c;
    }
    ctx->pc = 0x412834u;
    {
        const bool branch_taken_0x412834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x412834) {
            ctx->pc = 0x412838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412834u;
            // 0x412838: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412828;
        }
    }
    ctx->pc = 0x41283Cu;
label_41283c:
    // 0x41283c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_412840:
    if (ctx->pc == 0x412840u) {
        ctx->pc = 0x412844u;
        goto label_412844;
    }
    ctx->pc = 0x41283Cu;
    {
        const bool branch_taken_0x41283c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41283c) {
            ctx->pc = 0x412870u;
            goto label_412870;
        }
    }
    ctx->pc = 0x412844u;
label_412844:
    // 0x412844: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x412844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_412848:
    // 0x412848: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_41284c:
    if (ctx->pc == 0x41284Cu) {
        ctx->pc = 0x41284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412848u;
        // 0x41284c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412850u;
        goto label_412850;
    }
    ctx->pc = 0x412848u;
    {
        const bool branch_taken_0x412848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412848u;
        // 0x41284c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412848) {
            ctx->pc = 0x412870u;
            goto label_412870;
        }
    }
    ctx->pc = 0x412850u;
label_412850:
    // 0x412850: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x412850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_412854:
    // 0x412854: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x412854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412858:
    // 0x412858: 0x40f809  jalr        $v0
label_41285c:
    if (ctx->pc == 0x41285Cu) {
        ctx->pc = 0x41285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412858u;
        // 0x41285c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412860u;
        goto label_412860;
    }
    ctx->pc = 0x412858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412860u);
        ctx->pc = 0x41285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412858u;
        // 0x41285c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412858u, 0x412860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412860u;
label_412860:
    // 0x412860: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_412864:
    if (ctx->pc == 0x412864u) {
        ctx->pc = 0x412864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412860u;
        // 0x412864: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412868u;
        goto label_412868;
    }
    ctx->pc = 0x412860u;
    {
        const bool branch_taken_0x412860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412860u;
        // 0x412864: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412860) {
            ctx->pc = 0x412880u;
            goto label_412880;
        }
    }
    ctx->pc = 0x412868u;
label_412868:
    // 0x412868: 0x10000024  b           . + 4 + (0x24 << 2)
label_41286c:
    if (ctx->pc == 0x41286Cu) {
        ctx->pc = 0x41286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412868u;
        // 0x41286c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412870u;
        goto label_412870;
    }
    ctx->pc = 0x412868u;
    {
        const bool branch_taken_0x412868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412868u;
        // 0x41286c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412868) {
            ctx->pc = 0x4128FCu;
            goto label_4128fc;
        }
    }
    ctx->pc = 0x412870u;
label_412870:
    // 0x412870: 0xc1048ec  jal         func_4123B0
label_412874:
    if (ctx->pc == 0x412874u) {
        ctx->pc = 0x412874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412870u;
        // 0x412874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412878u;
        goto label_412878;
    }
    ctx->pc = 0x412870u;
    SET_GPR_U32(ctx, 31, 0x412878u);
    ctx->pc = 0x412874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412870u;
    // 0x412874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x412870u, 0x412878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412878u;
label_412878:
    // 0x412878: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_41287c:
    if (ctx->pc == 0x41287Cu) {
        ctx->pc = 0x41287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412878u;
        // 0x41287c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412880u;
        goto label_412880;
    }
    ctx->pc = 0x412878u;
    {
        const bool branch_taken_0x412878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412878u;
        // 0x41287c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412878) {
            ctx->pc = 0x4128F8u;
            goto label_4128f8;
        }
    }
    ctx->pc = 0x412880u;
label_412880:
    // 0x412880: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x412880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_412884:
    // 0x412884: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x412884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_412888:
    // 0x412888: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x412888u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41288c:
    // 0x41288c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_412890:
    if (ctx->pc == 0x412890u) {
        ctx->pc = 0x412890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41288Cu;
        // 0x412890: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412894u;
        goto label_412894;
    }
    ctx->pc = 0x41288Cu;
    {
        const bool branch_taken_0x41288c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41288Cu;
        // 0x412890: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41288c) {
            ctx->pc = 0x4127E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4127e8;
        }
    }
    ctx->pc = 0x412894u;
label_412894:
    // 0x412894: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x412894u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_412898:
    // 0x412898: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_41289c:
    if (ctx->pc == 0x41289Cu) {
        ctx->pc = 0x41289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412898u;
        // 0x41289c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4128A0u;
        goto label_4128a0;
    }
    ctx->pc = 0x412898u;
    {
        const bool branch_taken_0x412898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412898u;
        // 0x41289c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412898) {
            ctx->pc = 0x4128FCu;
            goto label_4128fc;
        }
    }
    ctx->pc = 0x4128A0u;
label_4128a0:
    // 0x4128a0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4128a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4128a4:
    // 0x4128a4: 0x0  nop
    ctx->pc = 0x4128a4u;
    // NOP
label_4128a8:
    // 0x4128a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4128ac:
    if (ctx->pc == 0x4128ACu) {
        ctx->pc = 0x4128ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128A8u;
        // 0x4128ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4128B0u;
        goto label_4128b0;
    }
    ctx->pc = 0x4128A8u;
    {
        const bool branch_taken_0x4128a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4128ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128A8u;
        // 0x4128ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4128a8) {
            ctx->pc = 0x4128C4u;
            goto label_4128c4;
        }
    }
    ctx->pc = 0x4128B0u;
label_4128b0:
    // 0x4128b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4128b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4128b4:
    // 0x4128b4: 0x40f809  jalr        $v0
label_4128b8:
    if (ctx->pc == 0x4128B8u) {
        ctx->pc = 0x4128B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128B4u;
        // 0x4128b8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4128BCu;
        goto label_4128bc;
    }
    ctx->pc = 0x4128B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4128BCu);
        ctx->pc = 0x4128B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128B4u;
        // 0x4128b8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4128B4u, 0x4128BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4128BCu;
label_4128bc:
    // 0x4128bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_4128c0:
    if (ctx->pc == 0x4128C0u) {
        ctx->pc = 0x4128C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128BCu;
        // 0x4128c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4128C4u;
        goto label_4128c4;
    }
    ctx->pc = 0x4128BCu;
    {
        const bool branch_taken_0x4128bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4128C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128BCu;
        // 0x4128c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4128bc) {
            ctx->pc = 0x4128FCu;
            goto label_4128fc;
        }
    }
    ctx->pc = 0x4128C4u;
label_4128c4:
    // 0x4128c4: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x4128c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_4128c8:
    // 0x4128c8: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
label_4128cc:
    if (ctx->pc == 0x4128CCu) {
        ctx->pc = 0x4128CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128C8u;
        // 0x4128cc: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4128D0u;
        goto label_4128d0;
    }
    ctx->pc = 0x4128C8u;
    {
        const bool branch_taken_0x4128c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4128c8) {
            ctx->pc = 0x4128CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4128C8u;
            // 0x4128cc: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4128A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4128a8;
        }
    }
    ctx->pc = 0x4128D0u;
label_4128d0:
    // 0x4128d0: 0x1000000a  b           . + 4 + (0xA << 2)
label_4128d4:
    if (ctx->pc == 0x4128D4u) {
        ctx->pc = 0x4128D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128D0u;
        // 0x4128d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4128D8u;
        goto label_4128d8;
    }
    ctx->pc = 0x4128D0u;
    {
        const bool branch_taken_0x4128d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4128D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128D0u;
        // 0x4128d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4128d0) {
            ctx->pc = 0x4128FCu;
            goto label_4128fc;
        }
    }
    ctx->pc = 0x4128D8u;
label_4128d8:
    // 0x4128d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4128d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4128dc:
    // 0x4128dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4128dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4128e0:
    // 0x4128e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4128e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4128e4:
    // 0x4128e4: 0xc1035f6  jal         func_40D7D8
label_4128e8:
    if (ctx->pc == 0x4128E8u) {
        ctx->pc = 0x4128E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128E4u;
        // 0x4128e8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4128ECu;
        goto label_4128ec;
    }
    ctx->pc = 0x4128E4u;
    SET_GPR_U32(ctx, 31, 0x4128ECu);
    ctx->pc = 0x4128E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4128E4u;
    // 0x4128e8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4128E4u, 0x4128ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4128ECu;
label_4128ec:
    // 0x4128ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4128ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4128f0:
    // 0x4128f0: 0xc103628  jal         func_40D8A0
label_4128f4:
    if (ctx->pc == 0x4128F4u) {
        ctx->pc = 0x4128F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128F0u;
        // 0x4128f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4128F8u;
        goto label_4128f8;
    }
    ctx->pc = 0x4128F0u;
    SET_GPR_U32(ctx, 31, 0x4128F8u);
    ctx->pc = 0x4128F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4128F0u;
    // 0x4128f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4128F0u, 0x4128F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4128F8u;
label_4128f8:
    // 0x4128f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4128f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4128fc:
    // 0x4128fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4128fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_412900:
    // 0x412900: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x412900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_412904:
    // 0x412904: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x412904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_412908:
    // 0x412908: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x412908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41290c:
    // 0x41290c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41290cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_412910:
    // 0x412910: 0x3e00008  jr          $ra
label_412914:
    if (ctx->pc == 0x412914u) {
        ctx->pc = 0x412914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412910u;
        // 0x412914: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412918u;
        goto label_fallthrough_0x412910;
    }
    ctx->pc = 0x412910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412910u;
        // 0x412914: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x412910:
    ctx->pc = 0x412918u;
}
