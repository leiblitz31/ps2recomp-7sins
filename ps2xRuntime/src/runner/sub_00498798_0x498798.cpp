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

// Function: sub_00498798
// Address: 0x498798 - 0x498a88
void sub_00498798_0x498798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498798_0x498798");
#endif

    switch (ctx->pc) {
        case 0x498798u: goto label_498798;
        case 0x49879cu: goto label_49879c;
        case 0x4987a0u: goto label_4987a0;
        case 0x4987a4u: goto label_4987a4;
        case 0x4987a8u: goto label_4987a8;
        case 0x4987acu: goto label_4987ac;
        case 0x4987b0u: goto label_4987b0;
        case 0x4987b4u: goto label_4987b4;
        case 0x4987b8u: goto label_4987b8;
        case 0x4987bcu: goto label_4987bc;
        case 0x4987c0u: goto label_4987c0;
        case 0x4987c4u: goto label_4987c4;
        case 0x4987c8u: goto label_4987c8;
        case 0x4987ccu: goto label_4987cc;
        case 0x4987d0u: goto label_4987d0;
        case 0x4987d4u: goto label_4987d4;
        case 0x4987d8u: goto label_4987d8;
        case 0x4987dcu: goto label_4987dc;
        case 0x4987e0u: goto label_4987e0;
        case 0x4987e4u: goto label_4987e4;
        case 0x4987e8u: goto label_4987e8;
        case 0x4987ecu: goto label_4987ec;
        case 0x4987f0u: goto label_4987f0;
        case 0x4987f4u: goto label_4987f4;
        case 0x4987f8u: goto label_4987f8;
        case 0x4987fcu: goto label_4987fc;
        case 0x498800u: goto label_498800;
        case 0x498804u: goto label_498804;
        case 0x498808u: goto label_498808;
        case 0x49880cu: goto label_49880c;
        case 0x498810u: goto label_498810;
        case 0x498814u: goto label_498814;
        case 0x498818u: goto label_498818;
        case 0x49881cu: goto label_49881c;
        case 0x498820u: goto label_498820;
        case 0x498824u: goto label_498824;
        case 0x498828u: goto label_498828;
        case 0x49882cu: goto label_49882c;
        case 0x498830u: goto label_498830;
        case 0x498834u: goto label_498834;
        case 0x498838u: goto label_498838;
        case 0x49883cu: goto label_49883c;
        case 0x498840u: goto label_498840;
        case 0x498844u: goto label_498844;
        case 0x498848u: goto label_498848;
        case 0x49884cu: goto label_49884c;
        case 0x498850u: goto label_498850;
        case 0x498854u: goto label_498854;
        case 0x498858u: goto label_498858;
        case 0x49885cu: goto label_49885c;
        case 0x498860u: goto label_498860;
        case 0x498864u: goto label_498864;
        case 0x498868u: goto label_498868;
        case 0x49886cu: goto label_49886c;
        case 0x498870u: goto label_498870;
        case 0x498874u: goto label_498874;
        case 0x498878u: goto label_498878;
        case 0x49887cu: goto label_49887c;
        case 0x498880u: goto label_498880;
        case 0x498884u: goto label_498884;
        case 0x498888u: goto label_498888;
        case 0x49888cu: goto label_49888c;
        case 0x498890u: goto label_498890;
        case 0x498894u: goto label_498894;
        case 0x498898u: goto label_498898;
        case 0x49889cu: goto label_49889c;
        case 0x4988a0u: goto label_4988a0;
        case 0x4988a4u: goto label_4988a4;
        case 0x4988a8u: goto label_4988a8;
        case 0x4988acu: goto label_4988ac;
        case 0x4988b0u: goto label_4988b0;
        case 0x4988b4u: goto label_4988b4;
        case 0x4988b8u: goto label_4988b8;
        case 0x4988bcu: goto label_4988bc;
        case 0x4988c0u: goto label_4988c0;
        case 0x4988c4u: goto label_4988c4;
        case 0x4988c8u: goto label_4988c8;
        case 0x4988ccu: goto label_4988cc;
        case 0x4988d0u: goto label_4988d0;
        case 0x4988d4u: goto label_4988d4;
        case 0x4988d8u: goto label_4988d8;
        case 0x4988dcu: goto label_4988dc;
        case 0x4988e0u: goto label_4988e0;
        case 0x4988e4u: goto label_4988e4;
        case 0x4988e8u: goto label_4988e8;
        case 0x4988ecu: goto label_4988ec;
        case 0x4988f0u: goto label_4988f0;
        case 0x4988f4u: goto label_4988f4;
        case 0x4988f8u: goto label_4988f8;
        case 0x4988fcu: goto label_4988fc;
        case 0x498900u: goto label_498900;
        case 0x498904u: goto label_498904;
        case 0x498908u: goto label_498908;
        case 0x49890cu: goto label_49890c;
        case 0x498910u: goto label_498910;
        case 0x498914u: goto label_498914;
        case 0x498918u: goto label_498918;
        case 0x49891cu: goto label_49891c;
        case 0x498920u: goto label_498920;
        case 0x498924u: goto label_498924;
        case 0x498928u: goto label_498928;
        case 0x49892cu: goto label_49892c;
        case 0x498930u: goto label_498930;
        case 0x498934u: goto label_498934;
        case 0x498938u: goto label_498938;
        case 0x49893cu: goto label_49893c;
        case 0x498940u: goto label_498940;
        case 0x498944u: goto label_498944;
        case 0x498948u: goto label_498948;
        case 0x49894cu: goto label_49894c;
        case 0x498950u: goto label_498950;
        case 0x498954u: goto label_498954;
        case 0x498958u: goto label_498958;
        case 0x49895cu: goto label_49895c;
        case 0x498960u: goto label_498960;
        case 0x498964u: goto label_498964;
        case 0x498968u: goto label_498968;
        case 0x49896cu: goto label_49896c;
        case 0x498970u: goto label_498970;
        case 0x498974u: goto label_498974;
        case 0x498978u: goto label_498978;
        case 0x49897cu: goto label_49897c;
        case 0x498980u: goto label_498980;
        case 0x498984u: goto label_498984;
        case 0x498988u: goto label_498988;
        case 0x49898cu: goto label_49898c;
        case 0x498990u: goto label_498990;
        case 0x498994u: goto label_498994;
        case 0x498998u: goto label_498998;
        case 0x49899cu: goto label_49899c;
        case 0x4989a0u: goto label_4989a0;
        case 0x4989a4u: goto label_4989a4;
        case 0x4989a8u: goto label_4989a8;
        case 0x4989acu: goto label_4989ac;
        case 0x4989b0u: goto label_4989b0;
        case 0x4989b4u: goto label_4989b4;
        case 0x4989b8u: goto label_4989b8;
        case 0x4989bcu: goto label_4989bc;
        case 0x4989c0u: goto label_4989c0;
        case 0x4989c4u: goto label_4989c4;
        case 0x4989c8u: goto label_4989c8;
        case 0x4989ccu: goto label_4989cc;
        case 0x4989d0u: goto label_4989d0;
        case 0x4989d4u: goto label_4989d4;
        case 0x4989d8u: goto label_4989d8;
        case 0x4989dcu: goto label_4989dc;
        case 0x4989e0u: goto label_4989e0;
        case 0x4989e4u: goto label_4989e4;
        case 0x4989e8u: goto label_4989e8;
        case 0x4989ecu: goto label_4989ec;
        case 0x4989f0u: goto label_4989f0;
        case 0x4989f4u: goto label_4989f4;
        case 0x4989f8u: goto label_4989f8;
        case 0x4989fcu: goto label_4989fc;
        case 0x498a00u: goto label_498a00;
        case 0x498a04u: goto label_498a04;
        case 0x498a08u: goto label_498a08;
        case 0x498a0cu: goto label_498a0c;
        case 0x498a10u: goto label_498a10;
        case 0x498a14u: goto label_498a14;
        case 0x498a18u: goto label_498a18;
        case 0x498a1cu: goto label_498a1c;
        case 0x498a20u: goto label_498a20;
        case 0x498a24u: goto label_498a24;
        case 0x498a28u: goto label_498a28;
        case 0x498a2cu: goto label_498a2c;
        case 0x498a30u: goto label_498a30;
        case 0x498a34u: goto label_498a34;
        case 0x498a38u: goto label_498a38;
        case 0x498a3cu: goto label_498a3c;
        case 0x498a40u: goto label_498a40;
        case 0x498a44u: goto label_498a44;
        case 0x498a48u: goto label_498a48;
        case 0x498a4cu: goto label_498a4c;
        case 0x498a50u: goto label_498a50;
        case 0x498a54u: goto label_498a54;
        case 0x498a58u: goto label_498a58;
        case 0x498a5cu: goto label_498a5c;
        case 0x498a60u: goto label_498a60;
        case 0x498a64u: goto label_498a64;
        case 0x498a68u: goto label_498a68;
        case 0x498a6cu: goto label_498a6c;
        case 0x498a70u: goto label_498a70;
        case 0x498a74u: goto label_498a74;
        case 0x498a78u: goto label_498a78;
        case 0x498a7cu: goto label_498a7c;
        case 0x498a80u: goto label_498a80;
        case 0x498a84u: goto label_498a84;
        default: break;
    }

    ctx->pc = 0x498798u;

label_498798:
    // 0x498798: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x498798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_49879c:
    // 0x49879c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x49879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4987a0:
    // 0x4987a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4987a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4987a4:
    // 0x4987a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4987a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4987a8:
    // 0x4987a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4987a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4987ac:
    // 0x4987ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4987acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4987b0:
    // 0x4987b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4987b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4987b4:
    // 0x4987b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4987b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4987b8:
    // 0x4987b8: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_4987bc:
    if (ctx->pc == 0x4987BCu) {
        ctx->pc = 0x4987BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4987B8u;
        // 0x4987bc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4987C0u;
        goto label_4987c0;
    }
    ctx->pc = 0x4987B8u;
    {
        const bool branch_taken_0x4987b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4987BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4987B8u;
        // 0x4987bc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4987b8) {
            ctx->pc = 0x4987E0u;
            goto label_4987e0;
        }
    }
    ctx->pc = 0x4987C0u;
label_4987c0:
    // 0x4987c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4987c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4987c4:
    // 0x4987c4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4987c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_4987c8:
    // 0x4987c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4987c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4987cc:
    // 0x4987cc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x4987ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_4987d0:
    // 0x4987d0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4987d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_4987d4:
    // 0x4987d4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4987d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_4987d8:
    // 0x4987d8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x4987d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_4987dc:
    // 0x4987dc: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x4987dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4987e0:
    // 0x4987e0: 0xc126562  jal         func_499588
label_4987e4:
    if (ctx->pc == 0x4987E4u) {
        ctx->pc = 0x4987E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4987E0u;
        // 0x4987e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4987E8u;
        goto label_4987e8;
    }
    ctx->pc = 0x4987E0u;
    SET_GPR_U32(ctx, 31, 0x4987E8u);
    ctx->pc = 0x4987E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4987E0u;
    // 0x4987e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499588u, 0x4987E0u, 0x4987E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4987E8u;
label_4987e8:
    // 0x4987e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4987e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4987ec:
    // 0x4987ec: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_4987f0:
    if (ctx->pc == 0x4987F0u) {
        ctx->pc = 0x4987F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4987ECu;
        // 0x4987f0: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4987F4u;
        goto label_4987f4;
    }
    ctx->pc = 0x4987ECu;
    {
        const bool branch_taken_0x4987ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4987ec) {
            ctx->pc = 0x4987F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4987ECu;
            // 0x4987f0: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4987FCu;
            goto label_4987fc;
        }
    }
    ctx->pc = 0x4987F4u;
label_4987f4:
    // 0x4987f4: 0x10000030  b           . + 4 + (0x30 << 2)
label_4987f8:
    if (ctx->pc == 0x4987F8u) {
        ctx->pc = 0x4987F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4987F4u;
        // 0x4987f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4987FCu;
        goto label_4987fc;
    }
    ctx->pc = 0x4987F4u;
    {
        const bool branch_taken_0x4987f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4987F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4987F4u;
        // 0x4987f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4987f4) {
            ctx->pc = 0x4988B8u;
            goto label_4988b8;
        }
    }
    ctx->pc = 0x4987FCu;
label_4987fc:
    // 0x4987fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4987fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_498800:
    // 0x498800: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x498800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_498804:
    // 0x498804: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x498804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_498808:
    // 0x498808: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x498808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_49880c:
    // 0x49880c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_498810:
    if (ctx->pc == 0x498810u) {
        ctx->pc = 0x498810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49880Cu;
        // 0x498810: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498814u;
        goto label_498814;
    }
    ctx->pc = 0x49880Cu;
    {
        const bool branch_taken_0x49880c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x498810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49880Cu;
        // 0x498810: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49880c) {
            ctx->pc = 0x498828u;
            goto label_498828;
        }
    }
    ctx->pc = 0x498814u;
label_498814:
    // 0x498814: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x498814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_498818:
    // 0x498818: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x498818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49881c:
    // 0x49881c: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x49881cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498820:
    // 0x498820: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
label_498824:
    if (ctx->pc == 0x498824u) {
        ctx->pc = 0x498824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498820u;
        // 0x498824: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498828u;
        goto label_498828;
    }
    ctx->pc = 0x498820u;
    {
        const bool branch_taken_0x498820 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x498820) {
            ctx->pc = 0x498824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498820u;
            // 0x498824: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49885Cu;
            goto label_49885c;
        }
    }
    ctx->pc = 0x498828u;
label_498828:
    // 0x498828: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x498828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_49882c:
    // 0x49882c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49882cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_498830:
    // 0x498830: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x498830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_498834:
    // 0x498834: 0xc127276  jal         func_49C9D8
label_498838:
    if (ctx->pc == 0x498838u) {
        ctx->pc = 0x498838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498834u;
        // 0x498838: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49883Cu;
        goto label_49883c;
    }
    ctx->pc = 0x498834u;
    SET_GPR_U32(ctx, 31, 0x49883Cu);
    ctx->pc = 0x498838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498834u;
    // 0x498838: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C9D8u, 0x498834u, 0x49883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49883Cu;
label_49883c:
    // 0x49883c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_498840:
    if (ctx->pc == 0x498840u) {
        ctx->pc = 0x498840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49883Cu;
        // 0x498840: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498844u;
        goto label_498844;
    }
    ctx->pc = 0x49883Cu;
    {
        const bool branch_taken_0x49883c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49883Cu;
        // 0x498840: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49883c) {
            ctx->pc = 0x498858u;
            goto label_498858;
        }
    }
    ctx->pc = 0x498844u;
label_498844:
    // 0x498844: 0xc126576  jal         func_4995D8
label_498848:
    if (ctx->pc == 0x498848u) {
        ctx->pc = 0x498848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498844u;
        // 0x498848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49884Cu;
        goto label_49884c;
    }
    ctx->pc = 0x498844u;
    SET_GPR_U32(ctx, 31, 0x49884Cu);
    ctx->pc = 0x498848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498844u;
    // 0x498848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4995D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4995D8u, 0x498844u, 0x49884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49884Cu;
label_49884c:
    // 0x49884c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_498850:
    if (ctx->pc == 0x498850u) {
        ctx->pc = 0x498850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49884Cu;
        // 0x498850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498854u;
        goto label_498854;
    }
    ctx->pc = 0x49884Cu;
    {
        const bool branch_taken_0x49884c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49884Cu;
        // 0x498850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49884c) {
            ctx->pc = 0x4988B8u;
            goto label_4988b8;
        }
    }
    ctx->pc = 0x498854u;
label_498854:
    // 0x498854: 0x0  nop
    ctx->pc = 0x498854u;
    // NOP
label_498858:
    // 0x498858: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x498858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49885c:
    // 0x49885c: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x49885cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_498860:
    // 0x498860: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_498864:
    if (ctx->pc == 0x498864u) {
        ctx->pc = 0x498864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498860u;
        // 0x498864: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498868u;
        goto label_498868;
    }
    ctx->pc = 0x498860u;
    {
        const bool branch_taken_0x498860 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x498860) {
            ctx->pc = 0x498864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498860u;
            // 0x498864: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498880u;
            goto label_498880;
        }
    }
    ctx->pc = 0x498868u;
label_498868:
    // 0x498868: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x498868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49886c:
    // 0x49886c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x49886cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_498870:
    // 0x498870: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x498870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_498874:
    // 0x498874: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_498878:
    // 0x498878: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x498878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49887c:
    // 0x49887c: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x49887cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_498880:
    // 0x498880: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x498880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_498884:
    // 0x498884: 0x2786c188  addiu       $a2, $gp, -0x3E78
    ctx->pc = 0x498884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951304));
label_498888:
    // 0x498888: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x498888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_49888c:
    // 0x49888c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49888cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498890:
    // 0x498890: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x498890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_498894:
    // 0x498894: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x498894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_498898:
    // 0x498898: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x498898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_49889c:
    // 0x49889c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x49889cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4988a0:
    // 0x4988a0: 0x8f84c188  lw          $a0, -0x3E78($gp)
    ctx->pc = 0x4988a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951304)));
label_4988a4:
    // 0x4988a4: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x4988a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
label_4988a8:
    // 0x4988a8: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x4988a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_4988ac:
    // 0x4988ac: 0x8f83c188  lw          $v1, -0x3E78($gp)
    ctx->pc = 0x4988acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951304)));
label_4988b0:
    // 0x4988b0: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x4988b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_4988b4:
    // 0x4988b4: 0xaf85c188  sw          $a1, -0x3E78($gp)
    ctx->pc = 0x4988b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951304), GPR_U32(ctx, 5));
label_4988b8:
    // 0x4988b8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4988b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4988bc:
    // 0x4988bc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4988bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4988c0:
    // 0x4988c0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4988c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4988c4:
    // 0x4988c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4988c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4988c8:
    // 0x4988c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4988c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4988cc:
    // 0x4988cc: 0x3e00008  jr          $ra
label_4988d0:
    if (ctx->pc == 0x4988D0u) {
        ctx->pc = 0x4988D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4988CCu;
        // 0x4988d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4988D4u;
        goto label_4988d4;
    }
    ctx->pc = 0x4988CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4988D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4988CCu;
        // 0x4988d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4988CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4988D4u;
label_4988d4:
    // 0x4988d4: 0x0  nop
    ctx->pc = 0x4988d4u;
    // NOP
label_4988d8:
    // 0x4988d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4988d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4988dc:
    // 0x4988dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4988dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4988e0:
    // 0x4988e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4988e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4988e4:
    // 0x4988e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4988e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4988e8:
    // 0x4988e8: 0x2791c188  addiu       $s1, $gp, -0x3E78
    ctx->pc = 0x4988e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951304));
label_4988ec:
    // 0x4988ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4988ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4988f0:
    // 0x4988f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4988f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4988f4:
    // 0x4988f4: 0x8f90c188  lw          $s0, -0x3E78($gp)
    ctx->pc = 0x4988f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951304)));
label_4988f8:
    // 0x4988f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4988f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4988fc:
    // 0x4988fc: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
label_498900:
    if (ctx->pc == 0x498900u) {
        ctx->pc = 0x498900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4988FCu;
        // 0x498900: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498904u;
        goto label_498904;
    }
    ctx->pc = 0x4988FCu;
    {
        const bool branch_taken_0x4988fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x498900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4988FCu;
        // 0x498900: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4988fc) {
            ctx->pc = 0x498924u;
            goto label_498924;
        }
    }
    ctx->pc = 0x498904u;
label_498904:
    // 0x498904: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x498904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_498908:
    // 0x498908: 0x260f809  jalr        $s3
label_49890c:
    if (ctx->pc == 0x49890Cu) {
        ctx->pc = 0x49890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498908u;
        // 0x49890c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498910u;
        goto label_498910;
    }
    ctx->pc = 0x498908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x498910u);
        ctx->pc = 0x49890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498908u;
        // 0x49890c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498908u, 0x498910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498910u;
label_498910:
    // 0x498910: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_498914:
    if (ctx->pc == 0x498914u) {
        ctx->pc = 0x498914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498910u;
        // 0x498914: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498918u;
        goto label_498918;
    }
    ctx->pc = 0x498910u;
    {
        const bool branch_taken_0x498910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498910) {
            ctx->pc = 0x498914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498910u;
            // 0x498914: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498928u;
            goto label_498928;
        }
    }
    ctx->pc = 0x498918u;
label_498918:
    // 0x498918: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x498918u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49891c:
    // 0x49891c: 0x1611fffa  bne         $s0, $s1, . + 4 + (-0x6 << 2)
label_498920:
    if (ctx->pc == 0x498920u) {
        ctx->pc = 0x498920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49891Cu;
        // 0x498920: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498924u;
        goto label_498924;
    }
    ctx->pc = 0x49891Cu;
    {
        const bool branch_taken_0x49891c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x498920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49891Cu;
        // 0x498920: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49891c) {
            ctx->pc = 0x498908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_498908;
        }
    }
    ctx->pc = 0x498924u;
label_498924:
    // 0x498924: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x498924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_498928:
    // 0x498928: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x498928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49892c:
    // 0x49892c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49892cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498930:
    // 0x498930: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x498930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_498934:
    // 0x498934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_498938:
    // 0x498938: 0x3e00008  jr          $ra
label_49893c:
    if (ctx->pc == 0x49893Cu) {
        ctx->pc = 0x49893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498938u;
        // 0x49893c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498940u;
        goto label_498940;
    }
    ctx->pc = 0x498938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498938u;
        // 0x49893c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498940u;
label_498940:
    // 0x498940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x498940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_498944:
    // 0x498944: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x498944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_498948:
    // 0x498948: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x498948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_49894c:
    // 0x49894c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x49894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_498950:
    // 0x498950: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x498950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_498954:
    // 0x498954: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x498954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_498958:
    // 0x498958: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x498958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_49895c:
    // 0x49895c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x49895cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_498960:
    // 0x498960: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x498960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498964:
    // 0x498964: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x498964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_498968:
    // 0x498968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49896c:
    // 0x49896c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x49896cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_498970:
    // 0x498970: 0xc126518  jal         func_499460
label_498974:
    if (ctx->pc == 0x498974u) {
        ctx->pc = 0x498974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498970u;
        // 0x498974: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498978u;
        goto label_498978;
    }
    ctx->pc = 0x498970u;
    SET_GPR_U32(ctx, 31, 0x498978u);
    ctx->pc = 0x498974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498970u;
    // 0x498974: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499460u, 0x498970u, 0x498978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498978u;
label_498978:
    // 0x498978: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_49897c:
    if (ctx->pc == 0x49897Cu) {
        ctx->pc = 0x49897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498978u;
        // 0x49897c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498980u;
        goto label_498980;
    }
    ctx->pc = 0x498978u;
    {
        const bool branch_taken_0x498978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498978u;
        // 0x49897c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498978) {
            ctx->pc = 0x4989E0u;
            goto label_4989e0;
        }
    }
    ctx->pc = 0x498980u;
label_498980:
    // 0x498980: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x498980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_498984:
    // 0x498984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x498984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498988:
    // 0x498988: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x498988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_49898c:
    // 0x49898c: 0xc126518  jal         func_499460
label_498990:
    if (ctx->pc == 0x498990u) {
        ctx->pc = 0x498990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49898Cu;
        // 0x498990: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498994u;
        goto label_498994;
    }
    ctx->pc = 0x49898Cu;
    SET_GPR_U32(ctx, 31, 0x498994u);
    ctx->pc = 0x498990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49898Cu;
    // 0x498990: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499460u, 0x49898Cu, 0x498994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498994u;
label_498994:
    // 0x498994: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_498998:
    if (ctx->pc == 0x498998u) {
        ctx->pc = 0x498998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498994u;
        // 0x498998: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49899Cu;
        goto label_49899c;
    }
    ctx->pc = 0x498994u;
    {
        const bool branch_taken_0x498994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498994u;
        // 0x498998: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498994) {
            ctx->pc = 0x4989E0u;
            goto label_4989e0;
        }
    }
    ctx->pc = 0x49899Cu;
label_49899c:
    // 0x49899c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x49899cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4989a0:
    // 0x4989a0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4989a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4989a4:
    // 0x4989a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4989a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4989a8:
    // 0x4989a8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x4989a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4989ac:
    // 0x4989ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4989acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4989b0:
    // 0x4989b0: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4989b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4989b4:
    // 0x4989b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4989b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4989b8:
    // 0x4989b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4989b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4989bc:
    // 0x4989bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4989bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4989c0:
    // 0x4989c0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4989c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4989c4:
    // 0x4989c4: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x4989c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_4989c8:
    // 0x4989c8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4989c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4989cc:
    // 0x4989cc: 0xc126c98  jal         func_49B260
label_4989d0:
    if (ctx->pc == 0x4989D0u) {
        ctx->pc = 0x4989D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4989CCu;
        // 0x4989d0: 0x94670004  lhu         $a3, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4989D4u;
        goto label_4989d4;
    }
    ctx->pc = 0x4989CCu;
    SET_GPR_U32(ctx, 31, 0x4989D4u);
    ctx->pc = 0x4989D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4989CCu;
    // 0x4989d0: 0x94670004  lhu         $a3, 0x4($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B260u, 0x4989CCu, 0x4989D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4989D4u;
label_4989d4:
    // 0x4989d4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4989d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_4989d8:
    // 0x4989d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_4989dc:
    if (ctx->pc == 0x4989DCu) {
        ctx->pc = 0x4989DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4989D8u;
        // 0x4989dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4989E0u;
        goto label_4989e0;
    }
    ctx->pc = 0x4989D8u;
    {
        const bool branch_taken_0x4989d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4989DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4989D8u;
        // 0x4989dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4989d8) {
            ctx->pc = 0x4989E4u;
            goto label_4989e4;
        }
    }
    ctx->pc = 0x4989E0u;
label_4989e0:
    // 0x4989e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4989e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4989e4:
    // 0x4989e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4989e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4989e8:
    // 0x4989e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4989e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4989ec:
    // 0x4989ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4989ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4989f0:
    // 0x4989f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4989f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4989f4:
    // 0x4989f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4989f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4989f8:
    // 0x4989f8: 0x3e00008  jr          $ra
label_4989fc:
    if (ctx->pc == 0x4989FCu) {
        ctx->pc = 0x4989FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4989F8u;
        // 0x4989fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498A00u;
        goto label_498a00;
    }
    ctx->pc = 0x4989F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4989FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4989F8u;
        // 0x4989fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4989F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498A00u;
label_498a00:
    // 0x498a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_498a04:
    // 0x498a04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x498a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_498a08:
    // 0x498a08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x498a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_498a0c:
    // 0x498a0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x498a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_498a10:
    // 0x498a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498a14:
    // 0x498a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_498a18:
    // 0x498a18: 0xc126518  jal         func_499460
label_498a1c:
    if (ctx->pc == 0x498A1Cu) {
        ctx->pc = 0x498A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A18u;
        // 0x498a1c: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x498A20u;
        goto label_498a20;
    }
    ctx->pc = 0x498A18u;
    SET_GPR_U32(ctx, 31, 0x498A20u);
    ctx->pc = 0x498A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498A18u;
    // 0x498a1c: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x499460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499460u, 0x498A18u, 0x498A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498A20u;
label_498a20:
    // 0x498a20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_498a24:
    if (ctx->pc == 0x498A24u) {
        ctx->pc = 0x498A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A20u;
        // 0x498a24: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498A28u;
        goto label_498a28;
    }
    ctx->pc = 0x498A20u;
    {
        const bool branch_taken_0x498a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A20u;
        // 0x498a24: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a20) {
            ctx->pc = 0x498A30u;
            goto label_498a30;
        }
    }
    ctx->pc = 0x498A28u;
label_498a28:
    // 0x498a28: 0x10000013  b           . + 4 + (0x13 << 2)
label_498a2c:
    if (ctx->pc == 0x498A2Cu) {
        ctx->pc = 0x498A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A28u;
        // 0x498a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498A30u;
        goto label_498a30;
    }
    ctx->pc = 0x498A28u;
    {
        const bool branch_taken_0x498a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A28u;
        // 0x498a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a28) {
            ctx->pc = 0x498A78u;
            goto label_498a78;
        }
    }
    ctx->pc = 0x498A30u;
label_498a30:
    // 0x498a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x498a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_498a34:
    // 0x498a34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_498a38:
    if (ctx->pc == 0x498A38u) {
        ctx->pc = 0x498A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A34u;
        // 0x498a38: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498A3Cu;
        goto label_498a3c;
    }
    ctx->pc = 0x498A34u;
    {
        const bool branch_taken_0x498a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x498A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A34u;
        // 0x498a38: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a34) {
            ctx->pc = 0x498A48u;
            goto label_498a48;
        }
    }
    ctx->pc = 0x498A3Cu;
label_498a3c:
    // 0x498a3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x498a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_498a40:
    // 0x498a40: 0x10000003  b           . + 4 + (0x3 << 2)
label_498a44:
    if (ctx->pc == 0x498A44u) {
        ctx->pc = 0x498A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A40u;
        // 0x498a44: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498A48u;
        goto label_498a48;
    }
    ctx->pc = 0x498A40u;
    {
        const bool branch_taken_0x498a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A40u;
        // 0x498a44: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a40) {
            ctx->pc = 0x498A50u;
            goto label_498a50;
        }
    }
    ctx->pc = 0x498A48u;
label_498a48:
    // 0x498a48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x498a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_498a4c:
    // 0x498a4c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x498a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_498a50:
    // 0x498a50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x498a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_498a54:
    // 0x498a54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x498a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_498a58:
    // 0x498a58: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x498a58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_498a5c:
    // 0x498a5c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x498a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_498a60:
    // 0x498a60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498a64:
    // 0x498a64: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x498a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_498a68:
    // 0x498a68: 0xc126d14  jal         func_49B450
label_498a6c:
    if (ctx->pc == 0x498A6Cu) {
        ctx->pc = 0x498A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A68u;
        // 0x498a6c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498A70u;
        goto label_498a70;
    }
    ctx->pc = 0x498A68u;
    SET_GPR_U32(ctx, 31, 0x498A70u);
    ctx->pc = 0x498A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498A68u;
    // 0x498a6c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B450u, 0x498A68u, 0x498A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498A70u;
label_498a70:
    // 0x498a70: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498a70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498a74:
    // 0x498a74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498a78:
    // 0x498a78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x498a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498a7c:
    // 0x498a7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_498a80:
    // 0x498a80: 0x3e00008  jr          $ra
label_498a84:
    if (ctx->pc == 0x498A84u) {
        ctx->pc = 0x498A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A80u;
        // 0x498a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498A88u;
        goto label_fallthrough_0x498a80;
    }
    ctx->pc = 0x498A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A80u;
        // 0x498a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x498a80:
    ctx->pc = 0x498A88u;
}
