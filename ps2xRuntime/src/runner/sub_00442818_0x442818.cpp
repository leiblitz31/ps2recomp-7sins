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

// Function: sub_00442818
// Address: 0x442818 - 0x442918
void sub_00442818_0x442818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442818_0x442818");
#endif

    switch (ctx->pc) {
        case 0x442818u: goto label_442818;
        case 0x44281cu: goto label_44281c;
        case 0x442820u: goto label_442820;
        case 0x442824u: goto label_442824;
        case 0x442828u: goto label_442828;
        case 0x44282cu: goto label_44282c;
        case 0x442830u: goto label_442830;
        case 0x442834u: goto label_442834;
        case 0x442838u: goto label_442838;
        case 0x44283cu: goto label_44283c;
        case 0x442840u: goto label_442840;
        case 0x442844u: goto label_442844;
        case 0x442848u: goto label_442848;
        case 0x44284cu: goto label_44284c;
        case 0x442850u: goto label_442850;
        case 0x442854u: goto label_442854;
        case 0x442858u: goto label_442858;
        case 0x44285cu: goto label_44285c;
        case 0x442860u: goto label_442860;
        case 0x442864u: goto label_442864;
        case 0x442868u: goto label_442868;
        case 0x44286cu: goto label_44286c;
        case 0x442870u: goto label_442870;
        case 0x442874u: goto label_442874;
        case 0x442878u: goto label_442878;
        case 0x44287cu: goto label_44287c;
        case 0x442880u: goto label_442880;
        case 0x442884u: goto label_442884;
        case 0x442888u: goto label_442888;
        case 0x44288cu: goto label_44288c;
        case 0x442890u: goto label_442890;
        case 0x442894u: goto label_442894;
        case 0x442898u: goto label_442898;
        case 0x44289cu: goto label_44289c;
        case 0x4428a0u: goto label_4428a0;
        case 0x4428a4u: goto label_4428a4;
        case 0x4428a8u: goto label_4428a8;
        case 0x4428acu: goto label_4428ac;
        case 0x4428b0u: goto label_4428b0;
        case 0x4428b4u: goto label_4428b4;
        case 0x4428b8u: goto label_4428b8;
        case 0x4428bcu: goto label_4428bc;
        case 0x4428c0u: goto label_4428c0;
        case 0x4428c4u: goto label_4428c4;
        case 0x4428c8u: goto label_4428c8;
        case 0x4428ccu: goto label_4428cc;
        case 0x4428d0u: goto label_4428d0;
        case 0x4428d4u: goto label_4428d4;
        case 0x4428d8u: goto label_4428d8;
        case 0x4428dcu: goto label_4428dc;
        case 0x4428e0u: goto label_4428e0;
        case 0x4428e4u: goto label_4428e4;
        case 0x4428e8u: goto label_4428e8;
        case 0x4428ecu: goto label_4428ec;
        case 0x4428f0u: goto label_4428f0;
        case 0x4428f4u: goto label_4428f4;
        case 0x4428f8u: goto label_4428f8;
        case 0x4428fcu: goto label_4428fc;
        case 0x442900u: goto label_442900;
        case 0x442904u: goto label_442904;
        case 0x442908u: goto label_442908;
        case 0x44290cu: goto label_44290c;
        case 0x442910u: goto label_442910;
        case 0x442914u: goto label_442914;
        default: break;
    }

    ctx->pc = 0x442818u;

label_442818:
    // 0x442818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x442818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44281c:
    // 0x44281c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x44281cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_442820:
    // 0x442820: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x442820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_442824:
    // 0x442824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x442824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_442828:
    // 0x442828: 0x2450d7c0  addiu       $s0, $v0, -0x2840
    ctx->pc = 0x442828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
label_44282c:
    // 0x44282c: 0x8c43d7c0  lw          $v1, -0x2840($v0)
    ctx->pc = 0x44282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956992)));
label_442830:
    // 0x442830: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x442830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
label_442834:
    // 0x442834: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x442834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
label_442838:
    // 0x442838: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x442838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_44283c:
    // 0x44283c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_442840:
    if (ctx->pc == 0x442840u) {
        ctx->pc = 0x442840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44283Cu;
        // 0x442840: 0xaf80af04  sw          $zero, -0x50FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442844u;
        goto label_442844;
    }
    ctx->pc = 0x44283Cu;
    {
        const bool branch_taken_0x44283c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x442840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44283Cu;
        // 0x442840: 0xaf80af04  sw          $zero, -0x50FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44283c) {
            ctx->pc = 0x4428B0u;
            goto label_4428b0;
        }
    }
    ctx->pc = 0x442844u;
label_442844:
    // 0x442844: 0x8f82af00  lw          $v0, -0x5100($gp)
    ctx->pc = 0x442844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946560)));
label_442848:
    // 0x442848: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x442848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_44284c:
    // 0x44284c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x44284cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_442850:
    // 0x442850: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x442850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_442854:
    // 0x442854: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x442854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_442858:
    // 0x442858: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x442858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_44285c:
    // 0x44285c: 0x2012  mflo        $a0
    ctx->pc = 0x44285cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_442860:
    // 0x442860: 0x40f809  jalr        $v0
label_442864:
    if (ctx->pc == 0x442864u) {
        ctx->pc = 0x442864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442860u;
        // 0x442864: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x442868u;
        goto label_442868;
    }
    ctx->pc = 0x442860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x442868u);
        ctx->pc = 0x442864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442860u;
        // 0x442864: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x442860u, 0x442868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x442868u;
label_442868:
    // 0x442868: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_44286c:
    if (ctx->pc == 0x44286Cu) {
        ctx->pc = 0x44286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442868u;
        // 0x44286c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442870u;
        goto label_442870;
    }
    ctx->pc = 0x442868u;
    {
        const bool branch_taken_0x442868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442868u;
        // 0x44286c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442868) {
            ctx->pc = 0x442878u;
            goto label_442878;
        }
    }
    ctx->pc = 0x442870u;
label_442870:
    // 0x442870: 0x10000025  b           . + 4 + (0x25 << 2)
label_442874:
    if (ctx->pc == 0x442874u) {
        ctx->pc = 0x442874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442870u;
        // 0x442874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442878u;
        goto label_442878;
    }
    ctx->pc = 0x442870u;
    {
        const bool branch_taken_0x442870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442870u;
        // 0x442874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442870) {
            ctx->pc = 0x442908u;
            goto label_442908;
        }
    }
    ctx->pc = 0x442878u;
label_442878:
    // 0x442878: 0x8f84af00  lw          $a0, -0x5100($gp)
    ctx->pc = 0x442878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946560)));
label_44287c:
    // 0x44287c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44287cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_442880:
    // 0x442880: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x442880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_442884:
    // 0x442884: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x442884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_442888:
    // 0x442888: 0x244222f8  addiu       $v0, $v0, 0x22F8
    ctx->pc = 0x442888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8952));
label_44288c:
    // 0x44288c: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x44288cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_442890:
    // 0x442890: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x442890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_442894:
    // 0x442894: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x442894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_442898:
    // 0x442898: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x442898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_44289c:
    // 0x44289c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x44289cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_4428a0:
    // 0x4428a0: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x4428a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_4428a4:
    // 0x4428a4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x4428a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_4428a8:
    // 0x4428a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_4428ac:
    if (ctx->pc == 0x4428ACu) {
        ctx->pc = 0x4428ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4428A8u;
        // 0x4428ac: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4428B0u;
        goto label_4428b0;
    }
    ctx->pc = 0x4428A8u;
    {
        const bool branch_taken_0x4428a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4428ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4428A8u;
        // 0x4428ac: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4428a8) {
            ctx->pc = 0x4428BCu;
            goto label_4428bc;
        }
    }
    ctx->pc = 0x4428B0u;
label_4428b0:
    // 0x4428b0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x4428b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_4428b4:
    // 0x4428b4: 0x24424108  addiu       $v0, $v0, 0x4108
    ctx->pc = 0x4428b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16648));
label_4428b8:
    // 0x4428b8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x4428b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_4428bc:
    // 0x4428bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4428bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4428c0:
    // 0x4428c0: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x4428c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_4428c4:
    // 0x4428c4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x4428c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_4428c8:
    // 0x4428c8: 0x35088005  ori         $t0, $t0, 0x8005
    ctx->pc = 0x4428c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32773);
label_4428cc:
    // 0x4428cc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x4428ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4428d0:
    // 0x4428d0: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x4428d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_4428d4:
    // 0x4428d4: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x4428d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4428d8:
    // 0x4428d8: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x4428d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_4428dc:
    // 0x4428dc: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x4428dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_4428e0:
    // 0x4428e0: 0x24c64040  addiu       $a2, $a2, 0x4040
    ctx->pc = 0x4428e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16448));
label_4428e4:
    // 0x4428e4: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x4428e4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_4428e8:
    // 0x4428e8: 0x70a82b89  pcpyld      $a1, $a1, $t0
    ctx->pc = 0x4428e8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
label_4428ec:
    // 0x4428ec: 0x70671b89  pcpyld      $v1, $v1, $a3
    ctx->pc = 0x4428ecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
label_4428f0:
    // 0x4428f0: 0x70872389  pcpyld      $a0, $a0, $a3
    ctx->pc = 0x4428f0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
label_4428f4:
    // 0x4428f4: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x4428f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_4428f8:
    // 0x4428f8: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x4428f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
label_4428fc:
    // 0x4428fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4428fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_442900:
    // 0x442900: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x442900u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_442904:
    // 0x442904: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x442904u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
label_442908:
    // 0x442908: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x442908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44290c:
    // 0x44290c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44290cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_442910:
    // 0x442910: 0x3e00008  jr          $ra
label_442914:
    if (ctx->pc == 0x442914u) {
        ctx->pc = 0x442914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442910u;
        // 0x442914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442918u;
        goto label_fallthrough_0x442910;
    }
    ctx->pc = 0x442910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442910u;
        // 0x442914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x442910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x442910:
    ctx->pc = 0x442918u;
}
