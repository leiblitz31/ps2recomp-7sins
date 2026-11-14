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

// Function: sub_00382820
// Address: 0x382820 - 0x382a18
void sub_00382820_0x382820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382820_0x382820");
#endif

    switch (ctx->pc) {
        case 0x382820u: goto label_382820;
        case 0x382824u: goto label_382824;
        case 0x382828u: goto label_382828;
        case 0x38282cu: goto label_38282c;
        case 0x382830u: goto label_382830;
        case 0x382834u: goto label_382834;
        case 0x382838u: goto label_382838;
        case 0x38283cu: goto label_38283c;
        case 0x382840u: goto label_382840;
        case 0x382844u: goto label_382844;
        case 0x382848u: goto label_382848;
        case 0x38284cu: goto label_38284c;
        case 0x382850u: goto label_382850;
        case 0x382854u: goto label_382854;
        case 0x382858u: goto label_382858;
        case 0x38285cu: goto label_38285c;
        case 0x382860u: goto label_382860;
        case 0x382864u: goto label_382864;
        case 0x382868u: goto label_382868;
        case 0x38286cu: goto label_38286c;
        case 0x382870u: goto label_382870;
        case 0x382874u: goto label_382874;
        case 0x382878u: goto label_382878;
        case 0x38287cu: goto label_38287c;
        case 0x382880u: goto label_382880;
        case 0x382884u: goto label_382884;
        case 0x382888u: goto label_382888;
        case 0x38288cu: goto label_38288c;
        case 0x382890u: goto label_382890;
        case 0x382894u: goto label_382894;
        case 0x382898u: goto label_382898;
        case 0x38289cu: goto label_38289c;
        case 0x3828a0u: goto label_3828a0;
        case 0x3828a4u: goto label_3828a4;
        case 0x3828a8u: goto label_3828a8;
        case 0x3828acu: goto label_3828ac;
        case 0x3828b0u: goto label_3828b0;
        case 0x3828b4u: goto label_3828b4;
        case 0x3828b8u: goto label_3828b8;
        case 0x3828bcu: goto label_3828bc;
        case 0x3828c0u: goto label_3828c0;
        case 0x3828c4u: goto label_3828c4;
        case 0x3828c8u: goto label_3828c8;
        case 0x3828ccu: goto label_3828cc;
        case 0x3828d0u: goto label_3828d0;
        case 0x3828d4u: goto label_3828d4;
        case 0x3828d8u: goto label_3828d8;
        case 0x3828dcu: goto label_3828dc;
        case 0x3828e0u: goto label_3828e0;
        case 0x3828e4u: goto label_3828e4;
        case 0x3828e8u: goto label_3828e8;
        case 0x3828ecu: goto label_3828ec;
        case 0x3828f0u: goto label_3828f0;
        case 0x3828f4u: goto label_3828f4;
        case 0x3828f8u: goto label_3828f8;
        case 0x3828fcu: goto label_3828fc;
        case 0x382900u: goto label_382900;
        case 0x382904u: goto label_382904;
        case 0x382908u: goto label_382908;
        case 0x38290cu: goto label_38290c;
        case 0x382910u: goto label_382910;
        case 0x382914u: goto label_382914;
        case 0x382918u: goto label_382918;
        case 0x38291cu: goto label_38291c;
        case 0x382920u: goto label_382920;
        case 0x382924u: goto label_382924;
        case 0x382928u: goto label_382928;
        case 0x38292cu: goto label_38292c;
        case 0x382930u: goto label_382930;
        case 0x382934u: goto label_382934;
        case 0x382938u: goto label_382938;
        case 0x38293cu: goto label_38293c;
        case 0x382940u: goto label_382940;
        case 0x382944u: goto label_382944;
        case 0x382948u: goto label_382948;
        case 0x38294cu: goto label_38294c;
        case 0x382950u: goto label_382950;
        case 0x382954u: goto label_382954;
        case 0x382958u: goto label_382958;
        case 0x38295cu: goto label_38295c;
        case 0x382960u: goto label_382960;
        case 0x382964u: goto label_382964;
        case 0x382968u: goto label_382968;
        case 0x38296cu: goto label_38296c;
        case 0x382970u: goto label_382970;
        case 0x382974u: goto label_382974;
        case 0x382978u: goto label_382978;
        case 0x38297cu: goto label_38297c;
        case 0x382980u: goto label_382980;
        case 0x382984u: goto label_382984;
        case 0x382988u: goto label_382988;
        case 0x38298cu: goto label_38298c;
        case 0x382990u: goto label_382990;
        case 0x382994u: goto label_382994;
        case 0x382998u: goto label_382998;
        case 0x38299cu: goto label_38299c;
        case 0x3829a0u: goto label_3829a0;
        case 0x3829a4u: goto label_3829a4;
        case 0x3829a8u: goto label_3829a8;
        case 0x3829acu: goto label_3829ac;
        case 0x3829b0u: goto label_3829b0;
        case 0x3829b4u: goto label_3829b4;
        case 0x3829b8u: goto label_3829b8;
        case 0x3829bcu: goto label_3829bc;
        case 0x3829c0u: goto label_3829c0;
        case 0x3829c4u: goto label_3829c4;
        case 0x3829c8u: goto label_3829c8;
        case 0x3829ccu: goto label_3829cc;
        case 0x3829d0u: goto label_3829d0;
        case 0x3829d4u: goto label_3829d4;
        case 0x3829d8u: goto label_3829d8;
        case 0x3829dcu: goto label_3829dc;
        case 0x3829e0u: goto label_3829e0;
        case 0x3829e4u: goto label_3829e4;
        case 0x3829e8u: goto label_3829e8;
        case 0x3829ecu: goto label_3829ec;
        case 0x3829f0u: goto label_3829f0;
        case 0x3829f4u: goto label_3829f4;
        case 0x3829f8u: goto label_3829f8;
        case 0x3829fcu: goto label_3829fc;
        case 0x382a00u: goto label_382a00;
        case 0x382a04u: goto label_382a04;
        case 0x382a08u: goto label_382a08;
        case 0x382a0cu: goto label_382a0c;
        case 0x382a10u: goto label_382a10;
        case 0x382a14u: goto label_382a14;
        default: break;
    }

    ctx->pc = 0x382820u;

label_382820:
    // 0x382820: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x382820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_382824:
    // 0x382824: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x382824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_382828:
    // 0x382828: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x382828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_38282c:
    // 0x38282c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38282cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382830:
    // 0x382830: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x382830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_382834:
    // 0x382834: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x382834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_382838:
    // 0x382838: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x382838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_38283c:
    // 0x38283c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38283cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_382840:
    // 0x382840: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x382840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_382844:
    // 0x382844: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x382844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_382848:
    // 0x382848: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x382848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_38284c:
    // 0x38284c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x38284cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_382850:
    // 0x382850: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x382850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_382854:
    // 0x382854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x382854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382858:
    // 0x382858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38285c:
    // 0x38285c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_382860:
    // 0x382860: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_382864:
    if (ctx->pc == 0x382864u) {
        ctx->pc = 0x382864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382860u;
        // 0x382864: 0x3c160062  lui         $s6, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382868u;
        goto label_382868;
    }
    ctx->pc = 0x382860u;
    {
        const bool branch_taken_0x382860 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x382864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382860u;
        // 0x382864: 0x3c160062  lui         $s6, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382860) {
            ctx->pc = 0x3828A8u;
            goto label_3828a8;
        }
    }
    ctx->pc = 0x382868u;
label_382868:
    // 0x382868: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x382868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38286c:
    // 0x38286c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x38286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_382870:
    // 0x382870: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_382874:
    if (ctx->pc == 0x382874u) {
        ctx->pc = 0x382874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382870u;
        // 0x382874: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382878u;
        goto label_382878;
    }
    ctx->pc = 0x382870u;
    {
        const bool branch_taken_0x382870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382870u;
        // 0x382874: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382870) {
            ctx->pc = 0x382880u;
            goto label_382880;
        }
    }
    ctx->pc = 0x382878u;
label_382878:
    // 0x382878: 0x1000000b  b           . + 4 + (0xB << 2)
label_38287c:
    if (ctx->pc == 0x38287Cu) {
        ctx->pc = 0x38287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382878u;
        // 0x38287c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382880u;
        goto label_382880;
    }
    ctx->pc = 0x382878u;
    {
        const bool branch_taken_0x382878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382878u;
        // 0x38287c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382878) {
            ctx->pc = 0x3828A8u;
            goto label_3828a8;
        }
    }
    ctx->pc = 0x382880u;
label_382880:
    // 0x382880: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x382880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_382884:
    // 0x382884: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x382884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_382888:
    // 0x382888: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x382888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_38288c:
    // 0x38288c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_382890:
    if (ctx->pc == 0x382890u) {
        ctx->pc = 0x382890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38288Cu;
        // 0x382890: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382894u;
        goto label_382894;
    }
    ctx->pc = 0x38288Cu;
    {
        const bool branch_taken_0x38288c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38288Cu;
        // 0x382890: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38288c) {
            ctx->pc = 0x3828A8u;
            goto label_3828a8;
        }
    }
    ctx->pc = 0x382894u;
label_382894:
    // 0x382894: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x382894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_382898:
    // 0x382898: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x382898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_38289c:
    // 0x38289c: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_3828a0:
    if (ctx->pc == 0x3828A0u) {
        ctx->pc = 0x3828A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38289Cu;
        // 0x3828a0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3828A4u;
        goto label_3828a4;
    }
    ctx->pc = 0x38289Cu;
    {
        const bool branch_taken_0x38289c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38289c) {
            ctx->pc = 0x3828A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38289Cu;
            // 0x3828a0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382884;
        }
    }
    ctx->pc = 0x3828A4u;
label_3828a4:
    // 0x3828a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3828a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3828a8:
    // 0x3828a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3828a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3828ac:
    // 0x3828ac: 0x56420025  bnel        $s2, $v0, . + 4 + (0x25 << 2)
label_3828b0:
    if (ctx->pc == 0x3828B0u) {
        ctx->pc = 0x3828B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828ACu;
        // 0x3828b0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3828B4u;
        goto label_3828b4;
    }
    ctx->pc = 0x3828ACu;
    {
        const bool branch_taken_0x3828ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3828ac) {
            ctx->pc = 0x3828B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3828ACu;
            // 0x3828b0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382944u;
            goto label_382944;
        }
    }
    ctx->pc = 0x3828B4u;
label_3828b4:
    // 0x3828b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3828b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3828b8:
    // 0x3828b8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3828bc:
    if (ctx->pc == 0x3828BCu) {
        ctx->pc = 0x3828BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828B8u;
        // 0x3828bc: 0x26d2e880  addiu       $s2, $s6, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3828C0u;
        goto label_3828c0;
    }
    ctx->pc = 0x3828B8u;
    {
        const bool branch_taken_0x3828b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3828BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828B8u;
        // 0x3828bc: 0x26d2e880  addiu       $s2, $s6, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3828b8) {
            ctx->pc = 0x38290Cu;
            goto label_38290c;
        }
    }
    ctx->pc = 0x3828C0u;
label_3828c0:
    // 0x3828c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3828c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3828c4:
    // 0x3828c4: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x3828c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_3828c8:
    // 0x3828c8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3828c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3828cc:
    // 0x3828cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3828ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3828d0:
    // 0x3828d0: 0x34a5011f  ori         $a1, $a1, 0x11F
    ctx->pc = 0x3828d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
label_3828d4:
    // 0x3828d4: 0x40f809  jalr        $v0
label_3828d8:
    if (ctx->pc == 0x3828D8u) {
        ctx->pc = 0x3828D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828D4u;
        // 0x3828d8: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3828DCu;
        goto label_3828dc;
    }
    ctx->pc = 0x3828D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3828DCu);
        ctx->pc = 0x3828D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828D4u;
        // 0x3828d8: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3828D4u, 0x3828DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3828DCu;
label_3828dc:
    // 0x3828dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3828dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3828e0:
    // 0x3828e0: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_3828e4:
    if (ctx->pc == 0x3828E4u) {
        ctx->pc = 0x3828E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828E0u;
        // 0x3828e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3828E8u;
        goto label_3828e8;
    }
    ctx->pc = 0x3828E0u;
    {
        const bool branch_taken_0x3828e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3828E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828E0u;
        // 0x3828e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3828e0) {
            ctx->pc = 0x382978u;
            goto label_382978;
        }
    }
    ctx->pc = 0x3828E8u;
label_3828e8:
    // 0x3828e8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3828e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3828ec:
    // 0x3828ec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3828ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3828f0:
    // 0x3828f0: 0xc0bb778  jal         func_2EDDE0
label_3828f4:
    if (ctx->pc == 0x3828F4u) {
        ctx->pc = 0x3828F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828F0u;
        // 0x3828f4: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3828F8u;
        goto label_3828f8;
    }
    ctx->pc = 0x3828F0u;
    SET_GPR_U32(ctx, 31, 0x3828F8u);
    ctx->pc = 0x3828F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3828F0u;
    // 0x3828f4: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3828F0u, 0x3828F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3828F8u;
label_3828f8:
    // 0x3828f8: 0x8e43010c  lw          $v1, 0x10C($s2)
    ctx->pc = 0x3828f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_3828fc:
    // 0x3828fc: 0x60f809  jalr        $v1
label_382900:
    if (ctx->pc == 0x382900u) {
        ctx->pc = 0x382900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828FCu;
        // 0x382900: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382904u;
        goto label_382904;
    }
    ctx->pc = 0x3828FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x382904u);
        ctx->pc = 0x382900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828FCu;
        // 0x382900: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3828FCu, 0x382904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382904u;
label_382904:
    // 0x382904: 0x1000000b  b           . + 4 + (0xB << 2)
label_382908:
    if (ctx->pc == 0x382908u) {
        ctx->pc = 0x382908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382904u;
        // 0x382908: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38290Cu;
        goto label_38290c;
    }
    ctx->pc = 0x382904u;
    {
        const bool branch_taken_0x382904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382904u;
        // 0x382908: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382904) {
            ctx->pc = 0x382934u;
            goto label_382934;
        }
    }
    ctx->pc = 0x38290Cu;
label_38290c:
    // 0x38290c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38290cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_382910:
    // 0x382910: 0x26c3e880  addiu       $v1, $s6, -0x1780
    ctx->pc = 0x382910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_382914:
    // 0x382914: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x382914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_382918:
    // 0x382918: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x382918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_38291c:
    // 0x38291c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38291cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_382920:
    // 0x382920: 0x34a5011f  ori         $a1, $a1, 0x11F
    ctx->pc = 0x382920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
label_382924:
    // 0x382924: 0x40f809  jalr        $v0
label_382928:
    if (ctx->pc == 0x382928u) {
        ctx->pc = 0x382928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382924u;
        // 0x382928: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38292Cu;
        goto label_38292c;
    }
    ctx->pc = 0x382924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38292Cu);
        ctx->pc = 0x382928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382924u;
        // 0x382928: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382924u, 0x38292Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38292Cu;
label_38292c:
    // 0x38292c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_382930:
    if (ctx->pc == 0x382930u) {
        ctx->pc = 0x382930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38292Cu;
        // 0x382930: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382934u;
        goto label_382934;
    }
    ctx->pc = 0x38292Cu;
    {
        const bool branch_taken_0x38292c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38292Cu;
        // 0x382930: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38292c) {
            ctx->pc = 0x382978u;
            goto label_382978;
        }
    }
    ctx->pc = 0x382934u;
label_382934:
    // 0x382934: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x382934u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_382938:
    // 0x382938: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x382938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38293c:
    // 0x38293c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38293cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_382940:
    // 0x382940: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x382940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_382944:
    // 0x382944: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x382944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_382948:
    // 0x382948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x382948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38294c:
    // 0x38294c: 0x26d1e880  addiu       $s1, $s6, -0x1780
    ctx->pc = 0x38294cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_382950:
    // 0x382950: 0xc0e0e0c  jal         func_383830
label_382954:
    if (ctx->pc == 0x382954u) {
        ctx->pc = 0x382954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382950u;
        // 0x382954: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382958u;
        goto label_382958;
    }
    ctx->pc = 0x382950u;
    SET_GPR_U32(ctx, 31, 0x382958u);
    ctx->pc = 0x382954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382950u;
    // 0x382954: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383830u, 0x382950u, 0x382958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382958u;
label_382958:
    // 0x382958: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x382958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_38295c:
    // 0x38295c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38295cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_382960:
    // 0x382960: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x382960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_382964:
    // 0x382964: 0x2012  mflo        $a0
    ctx->pc = 0x382964u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_382968:
    // 0x382968: 0x40f809  jalr        $v0
label_38296c:
    if (ctx->pc == 0x38296Cu) {
        ctx->pc = 0x38296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382968u;
        // 0x38296c: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x382970u;
        goto label_382970;
    }
    ctx->pc = 0x382968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382970u);
        ctx->pc = 0x38296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382968u;
        // 0x38296c: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382968u, 0x382970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382970u;
label_382970:
    // 0x382970: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_382974:
    if (ctx->pc == 0x382974u) {
        ctx->pc = 0x382974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382970u;
        // 0x382974: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382978u;
        goto label_382978;
    }
    ctx->pc = 0x382970u;
    {
        const bool branch_taken_0x382970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382970u;
        // 0x382974: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382970) {
            ctx->pc = 0x382980u;
            goto label_382980;
        }
    }
    ctx->pc = 0x382978u;
label_382978:
    // 0x382978: 0x1000001c  b           . + 4 + (0x1C << 2)
label_38297c:
    if (ctx->pc == 0x38297Cu) {
        ctx->pc = 0x38297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382978u;
        // 0x38297c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382980u;
        goto label_382980;
    }
    ctx->pc = 0x382978u;
    {
        const bool branch_taken_0x382978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382978u;
        // 0x38297c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382978) {
            ctx->pc = 0x3829ECu;
            goto label_3829ec;
        }
    }
    ctx->pc = 0x382980u;
label_382980:
    // 0x382980: 0xc0e0e0c  jal         func_383830
label_382984:
    if (ctx->pc == 0x382984u) {
        ctx->pc = 0x382984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382980u;
        // 0x382984: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382988u;
        goto label_382988;
    }
    ctx->pc = 0x382980u;
    SET_GPR_U32(ctx, 31, 0x382988u);
    ctx->pc = 0x382984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382980u;
    // 0x382984: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383830u, 0x382980u, 0x382988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382988u;
label_382988:
    // 0x382988: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x382988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_38298c:
    // 0x38298c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x38298cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_382990:
    // 0x382990: 0x3012  mflo        $a2
    ctx->pc = 0x382990u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_382994:
    // 0x382994: 0xc0bb7e6  jal         func_2EDF98
label_382998:
    if (ctx->pc == 0x382998u) {
        ctx->pc = 0x382998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382994u;
        // 0x382998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38299Cu;
        goto label_38299c;
    }
    ctx->pc = 0x382994u;
    SET_GPR_U32(ctx, 31, 0x38299Cu);
    ctx->pc = 0x382998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382994u;
    // 0x382998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x382994u, 0x38299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38299Cu;
label_38299c:
    // 0x38299c: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_3829a0:
    if (ctx->pc == 0x3829A0u) {
        ctx->pc = 0x3829A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38299Cu;
        // 0x3829a0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3829A4u;
        goto label_3829a4;
    }
    ctx->pc = 0x38299Cu;
    {
        const bool branch_taken_0x38299c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3829A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38299Cu;
        // 0x3829a0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38299c) {
            ctx->pc = 0x3829E0u;
            goto label_3829e0;
        }
    }
    ctx->pc = 0x3829A4u;
label_3829a4:
    // 0x3829a4: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x3829a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_3829a8:
    // 0x3829a8: 0x40f809  jalr        $v0
label_3829ac:
    if (ctx->pc == 0x3829ACu) {
        ctx->pc = 0x3829ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829A8u;
        // 0x3829ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3829B0u;
        goto label_3829b0;
    }
    ctx->pc = 0x3829A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3829B0u);
        ctx->pc = 0x3829ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829A8u;
        // 0x3829ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3829A8u, 0x3829B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3829B0u;
label_3829b0:
    // 0x3829b0: 0x8e230108  lw          $v1, 0x108($s1)
    ctx->pc = 0x3829b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3829b4:
    // 0x3829b4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3829b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3829b8:
    // 0x3829b8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x3829b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3829bc:
    // 0x3829bc: 0x60f809  jalr        $v1
label_3829c0:
    if (ctx->pc == 0x3829C0u) {
        ctx->pc = 0x3829C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829BCu;
        // 0x3829c0: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3829C4u;
        goto label_3829c4;
    }
    ctx->pc = 0x3829BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3829C4u);
        ctx->pc = 0x3829C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829BCu;
        // 0x3829c0: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3829BCu, 0x3829C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3829C4u;
label_3829c4:
    // 0x3829c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3829c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3829c8:
    // 0x3829c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3829cc:
    if (ctx->pc == 0x3829CCu) {
        ctx->pc = 0x3829CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829C8u;
        // 0x3829cc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3829D0u;
        goto label_3829d0;
    }
    ctx->pc = 0x3829C8u;
    {
        const bool branch_taken_0x3829c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3829CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829C8u;
        // 0x3829cc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3829c8) {
            ctx->pc = 0x3829E0u;
            goto label_3829e0;
        }
    }
    ctx->pc = 0x3829D0u;
label_3829d0:
    // 0x3829d0: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x3829d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_3829d4:
    // 0x3829d4: 0x40f809  jalr        $v0
label_3829d8:
    if (ctx->pc == 0x3829D8u) {
        ctx->pc = 0x3829D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829D4u;
        // 0x3829d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3829DCu;
        goto label_3829dc;
    }
    ctx->pc = 0x3829D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3829DCu);
        ctx->pc = 0x3829D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829D4u;
        // 0x3829d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3829D4u, 0x3829DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3829DCu;
label_3829dc:
    // 0x3829dc: 0x0  nop
    ctx->pc = 0x3829dcu;
    // NOP
label_3829e0:
    // 0x3829e0: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x3829e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
label_3829e4:
    // 0x3829e4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3829e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3829e8:
    // 0x3829e8: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x3829e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
label_3829ec:
    // 0x3829ec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3829ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3829f0:
    // 0x3829f0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3829f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3829f4:
    // 0x3829f4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3829f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3829f8:
    // 0x3829f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3829f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3829fc:
    // 0x3829fc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3829fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_382a00:
    // 0x382a00: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x382a00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_382a04:
    // 0x382a04: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x382a04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382a08:
    // 0x382a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_382a0c:
    // 0x382a0c: 0x3e00008  jr          $ra
label_382a10:
    if (ctx->pc == 0x382A10u) {
        ctx->pc = 0x382A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A0Cu;
        // 0x382a10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382A14u;
        goto label_382a14;
    }
    ctx->pc = 0x382A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A0Cu;
        // 0x382a10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382A14u;
label_382a14:
    // 0x382a14: 0x0  nop
    ctx->pc = 0x382a14u;
    // NOP
    ctx->pc = 0x382a18u;
}
