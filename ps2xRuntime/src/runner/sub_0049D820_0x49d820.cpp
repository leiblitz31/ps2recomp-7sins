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

// Function: sub_0049D820
// Address: 0x49d820 - 0x49db58
void sub_0049D820_0x49d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049D820_0x49d820");
#endif

    switch (ctx->pc) {
        case 0x49d820u: goto label_49d820;
        case 0x49d824u: goto label_49d824;
        case 0x49d828u: goto label_49d828;
        case 0x49d82cu: goto label_49d82c;
        case 0x49d830u: goto label_49d830;
        case 0x49d834u: goto label_49d834;
        case 0x49d838u: goto label_49d838;
        case 0x49d83cu: goto label_49d83c;
        case 0x49d840u: goto label_49d840;
        case 0x49d844u: goto label_49d844;
        case 0x49d848u: goto label_49d848;
        case 0x49d84cu: goto label_49d84c;
        case 0x49d850u: goto label_49d850;
        case 0x49d854u: goto label_49d854;
        case 0x49d858u: goto label_49d858;
        case 0x49d85cu: goto label_49d85c;
        case 0x49d860u: goto label_49d860;
        case 0x49d864u: goto label_49d864;
        case 0x49d868u: goto label_49d868;
        case 0x49d86cu: goto label_49d86c;
        case 0x49d870u: goto label_49d870;
        case 0x49d874u: goto label_49d874;
        case 0x49d878u: goto label_49d878;
        case 0x49d87cu: goto label_49d87c;
        case 0x49d880u: goto label_49d880;
        case 0x49d884u: goto label_49d884;
        case 0x49d888u: goto label_49d888;
        case 0x49d88cu: goto label_49d88c;
        case 0x49d890u: goto label_49d890;
        case 0x49d894u: goto label_49d894;
        case 0x49d898u: goto label_49d898;
        case 0x49d89cu: goto label_49d89c;
        case 0x49d8a0u: goto label_49d8a0;
        case 0x49d8a4u: goto label_49d8a4;
        case 0x49d8a8u: goto label_49d8a8;
        case 0x49d8acu: goto label_49d8ac;
        case 0x49d8b0u: goto label_49d8b0;
        case 0x49d8b4u: goto label_49d8b4;
        case 0x49d8b8u: goto label_49d8b8;
        case 0x49d8bcu: goto label_49d8bc;
        case 0x49d8c0u: goto label_49d8c0;
        case 0x49d8c4u: goto label_49d8c4;
        case 0x49d8c8u: goto label_49d8c8;
        case 0x49d8ccu: goto label_49d8cc;
        case 0x49d8d0u: goto label_49d8d0;
        case 0x49d8d4u: goto label_49d8d4;
        case 0x49d8d8u: goto label_49d8d8;
        case 0x49d8dcu: goto label_49d8dc;
        case 0x49d8e0u: goto label_49d8e0;
        case 0x49d8e4u: goto label_49d8e4;
        case 0x49d8e8u: goto label_49d8e8;
        case 0x49d8ecu: goto label_49d8ec;
        case 0x49d8f0u: goto label_49d8f0;
        case 0x49d8f4u: goto label_49d8f4;
        case 0x49d8f8u: goto label_49d8f8;
        case 0x49d8fcu: goto label_49d8fc;
        case 0x49d900u: goto label_49d900;
        case 0x49d904u: goto label_49d904;
        case 0x49d908u: goto label_49d908;
        case 0x49d90cu: goto label_49d90c;
        case 0x49d910u: goto label_49d910;
        case 0x49d914u: goto label_49d914;
        case 0x49d918u: goto label_49d918;
        case 0x49d91cu: goto label_49d91c;
        case 0x49d920u: goto label_49d920;
        case 0x49d924u: goto label_49d924;
        case 0x49d928u: goto label_49d928;
        case 0x49d92cu: goto label_49d92c;
        case 0x49d930u: goto label_49d930;
        case 0x49d934u: goto label_49d934;
        case 0x49d938u: goto label_49d938;
        case 0x49d93cu: goto label_49d93c;
        case 0x49d940u: goto label_49d940;
        case 0x49d944u: goto label_49d944;
        case 0x49d948u: goto label_49d948;
        case 0x49d94cu: goto label_49d94c;
        case 0x49d950u: goto label_49d950;
        case 0x49d954u: goto label_49d954;
        case 0x49d958u: goto label_49d958;
        case 0x49d95cu: goto label_49d95c;
        case 0x49d960u: goto label_49d960;
        case 0x49d964u: goto label_49d964;
        case 0x49d968u: goto label_49d968;
        case 0x49d96cu: goto label_49d96c;
        case 0x49d970u: goto label_49d970;
        case 0x49d974u: goto label_49d974;
        case 0x49d978u: goto label_49d978;
        case 0x49d97cu: goto label_49d97c;
        case 0x49d980u: goto label_49d980;
        case 0x49d984u: goto label_49d984;
        case 0x49d988u: goto label_49d988;
        case 0x49d98cu: goto label_49d98c;
        case 0x49d990u: goto label_49d990;
        case 0x49d994u: goto label_49d994;
        case 0x49d998u: goto label_49d998;
        case 0x49d99cu: goto label_49d99c;
        case 0x49d9a0u: goto label_49d9a0;
        case 0x49d9a4u: goto label_49d9a4;
        case 0x49d9a8u: goto label_49d9a8;
        case 0x49d9acu: goto label_49d9ac;
        case 0x49d9b0u: goto label_49d9b0;
        case 0x49d9b4u: goto label_49d9b4;
        case 0x49d9b8u: goto label_49d9b8;
        case 0x49d9bcu: goto label_49d9bc;
        case 0x49d9c0u: goto label_49d9c0;
        case 0x49d9c4u: goto label_49d9c4;
        case 0x49d9c8u: goto label_49d9c8;
        case 0x49d9ccu: goto label_49d9cc;
        case 0x49d9d0u: goto label_49d9d0;
        case 0x49d9d4u: goto label_49d9d4;
        case 0x49d9d8u: goto label_49d9d8;
        case 0x49d9dcu: goto label_49d9dc;
        case 0x49d9e0u: goto label_49d9e0;
        case 0x49d9e4u: goto label_49d9e4;
        case 0x49d9e8u: goto label_49d9e8;
        case 0x49d9ecu: goto label_49d9ec;
        case 0x49d9f0u: goto label_49d9f0;
        case 0x49d9f4u: goto label_49d9f4;
        case 0x49d9f8u: goto label_49d9f8;
        case 0x49d9fcu: goto label_49d9fc;
        case 0x49da00u: goto label_49da00;
        case 0x49da04u: goto label_49da04;
        case 0x49da08u: goto label_49da08;
        case 0x49da0cu: goto label_49da0c;
        case 0x49da10u: goto label_49da10;
        case 0x49da14u: goto label_49da14;
        case 0x49da18u: goto label_49da18;
        case 0x49da1cu: goto label_49da1c;
        case 0x49da20u: goto label_49da20;
        case 0x49da24u: goto label_49da24;
        case 0x49da28u: goto label_49da28;
        case 0x49da2cu: goto label_49da2c;
        case 0x49da30u: goto label_49da30;
        case 0x49da34u: goto label_49da34;
        case 0x49da38u: goto label_49da38;
        case 0x49da3cu: goto label_49da3c;
        case 0x49da40u: goto label_49da40;
        case 0x49da44u: goto label_49da44;
        case 0x49da48u: goto label_49da48;
        case 0x49da4cu: goto label_49da4c;
        case 0x49da50u: goto label_49da50;
        case 0x49da54u: goto label_49da54;
        case 0x49da58u: goto label_49da58;
        case 0x49da5cu: goto label_49da5c;
        case 0x49da60u: goto label_49da60;
        case 0x49da64u: goto label_49da64;
        case 0x49da68u: goto label_49da68;
        case 0x49da6cu: goto label_49da6c;
        case 0x49da70u: goto label_49da70;
        case 0x49da74u: goto label_49da74;
        case 0x49da78u: goto label_49da78;
        case 0x49da7cu: goto label_49da7c;
        case 0x49da80u: goto label_49da80;
        case 0x49da84u: goto label_49da84;
        case 0x49da88u: goto label_49da88;
        case 0x49da8cu: goto label_49da8c;
        case 0x49da90u: goto label_49da90;
        case 0x49da94u: goto label_49da94;
        case 0x49da98u: goto label_49da98;
        case 0x49da9cu: goto label_49da9c;
        case 0x49daa0u: goto label_49daa0;
        case 0x49daa4u: goto label_49daa4;
        case 0x49daa8u: goto label_49daa8;
        case 0x49daacu: goto label_49daac;
        case 0x49dab0u: goto label_49dab0;
        case 0x49dab4u: goto label_49dab4;
        case 0x49dab8u: goto label_49dab8;
        case 0x49dabcu: goto label_49dabc;
        case 0x49dac0u: goto label_49dac0;
        case 0x49dac4u: goto label_49dac4;
        case 0x49dac8u: goto label_49dac8;
        case 0x49daccu: goto label_49dacc;
        case 0x49dad0u: goto label_49dad0;
        case 0x49dad4u: goto label_49dad4;
        case 0x49dad8u: goto label_49dad8;
        case 0x49dadcu: goto label_49dadc;
        case 0x49dae0u: goto label_49dae0;
        case 0x49dae4u: goto label_49dae4;
        case 0x49dae8u: goto label_49dae8;
        case 0x49daecu: goto label_49daec;
        case 0x49daf0u: goto label_49daf0;
        case 0x49daf4u: goto label_49daf4;
        case 0x49daf8u: goto label_49daf8;
        case 0x49dafcu: goto label_49dafc;
        case 0x49db00u: goto label_49db00;
        case 0x49db04u: goto label_49db04;
        case 0x49db08u: goto label_49db08;
        case 0x49db0cu: goto label_49db0c;
        case 0x49db10u: goto label_49db10;
        case 0x49db14u: goto label_49db14;
        case 0x49db18u: goto label_49db18;
        case 0x49db1cu: goto label_49db1c;
        case 0x49db20u: goto label_49db20;
        case 0x49db24u: goto label_49db24;
        case 0x49db28u: goto label_49db28;
        case 0x49db2cu: goto label_49db2c;
        case 0x49db30u: goto label_49db30;
        case 0x49db34u: goto label_49db34;
        case 0x49db38u: goto label_49db38;
        case 0x49db3cu: goto label_49db3c;
        case 0x49db40u: goto label_49db40;
        case 0x49db44u: goto label_49db44;
        case 0x49db48u: goto label_49db48;
        case 0x49db4cu: goto label_49db4c;
        case 0x49db50u: goto label_49db50;
        case 0x49db54u: goto label_49db54;
        default: break;
    }

    ctx->pc = 0x49d820u;

label_49d820:
    // 0x49d820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49d824:
    // 0x49d824: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49d824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_49d828:
    // 0x49d828: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_49d82c:
    // 0x49d82c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49d82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49d830:
    // 0x49d830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49d834:
    // 0x49d834: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_49d838:
    // 0x49d838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49d838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49d83c:
    // 0x49d83c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x49d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_49d840:
    // 0x49d840: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_49d844:
    if (ctx->pc == 0x49D844u) {
        ctx->pc = 0x49D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D840u;
        // 0x49d844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D848u;
        goto label_49d848;
    }
    ctx->pc = 0x49D840u;
    {
        const bool branch_taken_0x49d840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d840) {
            ctx->pc = 0x49D844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D840u;
            // 0x49d844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D854u;
            goto label_49d854;
        }
    }
    ctx->pc = 0x49D848u;
label_49d848:
    // 0x49d848: 0x40f809  jalr        $v0
label_49d84c:
    if (ctx->pc == 0x49D84Cu) {
        ctx->pc = 0x49D850u;
        goto label_49d850;
    }
    ctx->pc = 0x49D848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D850u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D848u, 0x49D850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D850u;
label_49d850:
    // 0x49d850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49d850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49d854:
    // 0x49d854: 0xc12a492  jal         func_4A9248
label_49d858:
    if (ctx->pc == 0x49D858u) {
        ctx->pc = 0x49D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D854u;
        // 0x49d858: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D85Cu;
        goto label_49d85c;
    }
    ctx->pc = 0x49D854u;
    SET_GPR_U32(ctx, 31, 0x49D85Cu);
    ctx->pc = 0x49D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D854u;
    // 0x49d858: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49D854u, 0x49D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D85Cu;
label_49d85c:
    // 0x49d85c: 0x96320014  lhu         $s2, 0x14($s1)
    ctx->pc = 0x49d85cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_49d860:
    // 0x49d860: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
label_49d864:
    if (ctx->pc == 0x49D864u) {
        ctx->pc = 0x49D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D860u;
        // 0x49d864: 0x96320016  lhu         $s2, 0x16($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D868u;
        goto label_49d868;
    }
    ctx->pc = 0x49D860u;
    {
        const bool branch_taken_0x49d860 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d860) {
            ctx->pc = 0x49D864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D860u;
            // 0x49d864: 0x96320016  lhu         $s2, 0x16($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D890u;
            goto label_49d890;
        }
    }
    ctx->pc = 0x49D868u;
label_49d868:
    // 0x49d868: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49d868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d86c:
    // 0x49d86c: 0x0  nop
    ctx->pc = 0x49d86cu;
    // NOP
label_49d870:
    // 0x49d870: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x49d870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_49d874:
    // 0x49d874: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49d874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49d878:
    // 0x49d878: 0xc12a492  jal         func_4A9248
label_49d87c:
    if (ctx->pc == 0x49D87Cu) {
        ctx->pc = 0x49D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D878u;
        // 0x49d87c: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D880u;
        goto label_49d880;
    }
    ctx->pc = 0x49D878u;
    SET_GPR_U32(ctx, 31, 0x49D880u);
    ctx->pc = 0x49D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D878u;
    // 0x49d87c: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49D878u, 0x49D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D880u;
label_49d880:
    // 0x49d880: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x49d880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_49d884:
    // 0x49d884: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_49d888:
    if (ctx->pc == 0x49D888u) {
        ctx->pc = 0x49D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D884u;
        // 0x49d888: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D88Cu;
        goto label_49d88c;
    }
    ctx->pc = 0x49D884u;
    {
        const bool branch_taken_0x49d884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D884u;
        // 0x49d888: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d884) {
            ctx->pc = 0x49D870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d870;
        }
    }
    ctx->pc = 0x49D88Cu;
label_49d88c:
    // 0x49d88c: 0x96320016  lhu         $s2, 0x16($s1)
    ctx->pc = 0x49d88cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
label_49d890:
    // 0x49d890: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_49d894:
    if (ctx->pc == 0x49D894u) {
        ctx->pc = 0x49D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D890u;
        // 0x49d894: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D898u;
        goto label_49d898;
    }
    ctx->pc = 0x49D890u;
    {
        const bool branch_taken_0x49d890 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D890u;
        // 0x49d894: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d890) {
            ctx->pc = 0x49D8BCu;
            goto label_49d8bc;
        }
    }
    ctx->pc = 0x49D898u;
label_49d898:
    // 0x49d898: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49d898u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d89c:
    // 0x49d89c: 0x0  nop
    ctx->pc = 0x49d89cu;
    // NOP
label_49d8a0:
    // 0x49d8a0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x49d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49d8a4:
    // 0x49d8a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49d8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49d8a8:
    // 0x49d8a8: 0xc12a492  jal         func_4A9248
label_49d8ac:
    if (ctx->pc == 0x49D8ACu) {
        ctx->pc = 0x49D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D8A8u;
        // 0x49d8ac: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D8B0u;
        goto label_49d8b0;
    }
    ctx->pc = 0x49D8A8u;
    SET_GPR_U32(ctx, 31, 0x49D8B0u);
    ctx->pc = 0x49D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D8A8u;
    // 0x49d8ac: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49D8A8u, 0x49D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D8B0u;
label_49d8b0:
    // 0x49d8b0: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x49d8b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_49d8b4:
    // 0x49d8b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_49d8b8:
    if (ctx->pc == 0x49D8B8u) {
        ctx->pc = 0x49D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D8B4u;
        // 0x49d8b8: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D8BCu;
        goto label_49d8bc;
    }
    ctx->pc = 0x49D8B4u;
    {
        const bool branch_taken_0x49d8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D8B4u;
        // 0x49d8b8: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d8b4) {
            ctx->pc = 0x49D8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d8a0;
        }
    }
    ctx->pc = 0x49D8BCu;
label_49d8bc:
    // 0x49d8bc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x49d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_49d8c0:
    // 0x49d8c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49d8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_49d8c4:
    // 0x49d8c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_49d8c8:
    if (ctx->pc == 0x49D8C8u) {
        ctx->pc = 0x49D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D8C4u;
        // 0x49d8c8: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D8CCu;
        goto label_49d8cc;
    }
    ctx->pc = 0x49D8C4u;
    {
        const bool branch_taken_0x49d8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49d8c4) {
            ctx->pc = 0x49D8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D8C4u;
            // 0x49d8c8: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D8D8u;
            goto label_49d8d8;
        }
    }
    ctx->pc = 0x49D8CCu;
label_49d8cc:
    // 0x49d8cc: 0xc127cae  jal         func_49F2B8
label_49d8d0:
    if (ctx->pc == 0x49D8D0u) {
        ctx->pc = 0x49D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D8CCu;
        // 0x49d8d0: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D8D4u;
        goto label_49d8d4;
    }
    ctx->pc = 0x49D8CCu;
    SET_GPR_U32(ctx, 31, 0x49D8D4u);
    ctx->pc = 0x49D8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D8CCu;
    // 0x49d8d0: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49D8CCu, 0x49D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D8D4u;
label_49d8d4:
    // 0x49d8d4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x49d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_49d8d8:
    // 0x49d8d8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x49d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_49d8dc:
    // 0x49d8dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_49d8e0:
    // 0x49d8e0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x49d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_49d8e4:
    // 0x49d8e4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x49d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_49d8e8:
    // 0x49d8e8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x49d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_49d8ec:
    // 0x49d8ec: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x49d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_49d8f0:
    // 0x49d8f0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49d8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49d8f4:
    // 0x49d8f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_49d8f8:
    if (ctx->pc == 0x49D8F8u) {
        ctx->pc = 0x49D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D8F4u;
        // 0x49d8f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D8FCu;
        goto label_49d8fc;
    }
    ctx->pc = 0x49D8F4u;
    {
        const bool branch_taken_0x49d8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D8F4u;
        // 0x49d8f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d8f4) {
            ctx->pc = 0x49D910u;
            goto label_49d910;
        }
    }
    ctx->pc = 0x49D8FCu;
label_49d8fc:
    // 0x49d8fc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_49d900:
    // 0x49d900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49d900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49d904:
    // 0x49d904: 0xc12a9a0  jal         func_4AA680
label_49d908:
    if (ctx->pc == 0x49D908u) {
        ctx->pc = 0x49D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D904u;
        // 0x49d908: 0x24848308  addiu       $a0, $a0, -0x7CF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D90Cu;
        goto label_49d90c;
    }
    ctx->pc = 0x49D904u;
    SET_GPR_U32(ctx, 31, 0x49D90Cu);
    ctx->pc = 0x49D908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D904u;
    // 0x49d908: 0x24848308  addiu       $a0, $a0, -0x7CF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49D904u, 0x49D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D90Cu;
label_49d90c:
    // 0x49d90c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49d90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49d910:
    // 0x49d910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49d910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d914:
    // 0x49d914: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49d914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49d918:
    // 0x49d918: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49d918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49d91c:
    // 0x49d91c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49d91cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49d920:
    // 0x49d920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49d920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49d924:
    // 0x49d924: 0x3e00008  jr          $ra
label_49d928:
    if (ctx->pc == 0x49D928u) {
        ctx->pc = 0x49D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D924u;
        // 0x49d928: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D92Cu;
        goto label_49d92c;
    }
    ctx->pc = 0x49D924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D924u;
        // 0x49d928: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D92Cu;
label_49d92c:
    // 0x49d92c: 0x0  nop
    ctx->pc = 0x49d92cu;
    // NOP
label_49d930:
    // 0x49d930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49d934:
    // 0x49d934: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49d934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_49d938:
    // 0x49d938: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49d938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_49d93c:
    // 0x49d93c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49d93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49d940:
    // 0x49d940: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49d940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_49d944:
    // 0x49d944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49d948:
    // 0x49d948: 0xc1276d6  jal         func_49DB58
label_49d94c:
    if (ctx->pc == 0x49D94Cu) {
        ctx->pc = 0x49D950u;
        goto label_49d950;
    }
    ctx->pc = 0x49D948u;
    SET_GPR_U32(ctx, 31, 0x49D950u);
    ctx->pc = 0x49DB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DB58u, 0x49D948u, 0x49D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D950u;
label_49d950:
    // 0x49d950: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49d950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49d954:
    // 0x49d954: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x49d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_49d958:
    // 0x49d958: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_49d95c:
    if (ctx->pc == 0x49D95Cu) {
        ctx->pc = 0x49D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D958u;
        // 0x49d95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D960u;
        goto label_49d960;
    }
    ctx->pc = 0x49D958u;
    {
        const bool branch_taken_0x49d958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D958u;
        // 0x49d95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d958) {
            ctx->pc = 0x49D96Cu;
            goto label_49d96c;
        }
    }
    ctx->pc = 0x49D960u;
label_49d960:
    // 0x49d960: 0x40f809  jalr        $v0
label_49d964:
    if (ctx->pc == 0x49D964u) {
        ctx->pc = 0x49D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D960u;
        // 0x49d964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D968u;
        goto label_49d968;
    }
    ctx->pc = 0x49D960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D968u);
        ctx->pc = 0x49D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D960u;
        // 0x49d964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D960u, 0x49D968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D968u;
label_49d968:
    // 0x49d968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49d96c:
    // 0x49d96c: 0xc12a492  jal         func_4A9248
label_49d970:
    if (ctx->pc == 0x49D970u) {
        ctx->pc = 0x49D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D96Cu;
        // 0x49d970: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D974u;
        goto label_49d974;
    }
    ctx->pc = 0x49D96Cu;
    SET_GPR_U32(ctx, 31, 0x49D974u);
    ctx->pc = 0x49D970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D96Cu;
    // 0x49d970: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49D96Cu, 0x49D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D974u;
label_49d974:
    // 0x49d974: 0x96320014  lhu         $s2, 0x14($s1)
    ctx->pc = 0x49d974u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_49d978:
    // 0x49d978: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
label_49d97c:
    if (ctx->pc == 0x49D97Cu) {
        ctx->pc = 0x49D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D978u;
        // 0x49d97c: 0x96320016  lhu         $s2, 0x16($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D980u;
        goto label_49d980;
    }
    ctx->pc = 0x49D978u;
    {
        const bool branch_taken_0x49d978 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d978) {
            ctx->pc = 0x49D97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D978u;
            // 0x49d97c: 0x96320016  lhu         $s2, 0x16($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D9A8u;
            goto label_49d9a8;
        }
    }
    ctx->pc = 0x49D980u;
label_49d980:
    // 0x49d980: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49d980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d984:
    // 0x49d984: 0x0  nop
    ctx->pc = 0x49d984u;
    // NOP
label_49d988:
    // 0x49d988: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x49d988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_49d98c:
    // 0x49d98c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49d98cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49d990:
    // 0x49d990: 0xc12a492  jal         func_4A9248
label_49d994:
    if (ctx->pc == 0x49D994u) {
        ctx->pc = 0x49D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D990u;
        // 0x49d994: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D998u;
        goto label_49d998;
    }
    ctx->pc = 0x49D990u;
    SET_GPR_U32(ctx, 31, 0x49D998u);
    ctx->pc = 0x49D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D990u;
    // 0x49d994: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49D990u, 0x49D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D998u;
label_49d998:
    // 0x49d998: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x49d998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_49d99c:
    // 0x49d99c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_49d9a0:
    if (ctx->pc == 0x49D9A0u) {
        ctx->pc = 0x49D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D99Cu;
        // 0x49d9a0: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D9A4u;
        goto label_49d9a4;
    }
    ctx->pc = 0x49D99Cu;
    {
        const bool branch_taken_0x49d99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D99Cu;
        // 0x49d9a0: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d99c) {
            ctx->pc = 0x49D988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d988;
        }
    }
    ctx->pc = 0x49D9A4u;
label_49d9a4:
    // 0x49d9a4: 0x96320016  lhu         $s2, 0x16($s1)
    ctx->pc = 0x49d9a4u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
label_49d9a8:
    // 0x49d9a8: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_49d9ac:
    if (ctx->pc == 0x49D9ACu) {
        ctx->pc = 0x49D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D9A8u;
        // 0x49d9ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D9B0u;
        goto label_49d9b0;
    }
    ctx->pc = 0x49D9A8u;
    {
        const bool branch_taken_0x49d9a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D9A8u;
        // 0x49d9ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d9a8) {
            ctx->pc = 0x49D9D4u;
            goto label_49d9d4;
        }
    }
    ctx->pc = 0x49D9B0u;
label_49d9b0:
    // 0x49d9b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49d9b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d9b4:
    // 0x49d9b4: 0x0  nop
    ctx->pc = 0x49d9b4u;
    // NOP
label_49d9b8:
    // 0x49d9b8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x49d9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49d9bc:
    // 0x49d9bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49d9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49d9c0:
    // 0x49d9c0: 0xc12a492  jal         func_4A9248
label_49d9c4:
    if (ctx->pc == 0x49D9C4u) {
        ctx->pc = 0x49D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D9C0u;
        // 0x49d9c4: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D9C8u;
        goto label_49d9c8;
    }
    ctx->pc = 0x49D9C0u;
    SET_GPR_U32(ctx, 31, 0x49D9C8u);
    ctx->pc = 0x49D9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D9C0u;
    // 0x49d9c4: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49D9C0u, 0x49D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D9C8u;
label_49d9c8:
    // 0x49d9c8: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x49d9c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_49d9cc:
    // 0x49d9cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_49d9d0:
    if (ctx->pc == 0x49D9D0u) {
        ctx->pc = 0x49D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D9CCu;
        // 0x49d9d0: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D9D4u;
        goto label_49d9d4;
    }
    ctx->pc = 0x49D9CCu;
    {
        const bool branch_taken_0x49d9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D9CCu;
        // 0x49d9d0: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d9cc) {
            ctx->pc = 0x49D9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d9b8;
        }
    }
    ctx->pc = 0x49D9D4u;
label_49d9d4:
    // 0x49d9d4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x49d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_49d9d8:
    // 0x49d9d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49d9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_49d9dc:
    // 0x49d9dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_49d9e0:
    if (ctx->pc == 0x49D9E0u) {
        ctx->pc = 0x49D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D9DCu;
        // 0x49d9e0: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D9E4u;
        goto label_49d9e4;
    }
    ctx->pc = 0x49D9DCu;
    {
        const bool branch_taken_0x49d9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49d9dc) {
            ctx->pc = 0x49D9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D9DCu;
            // 0x49d9e0: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D9F0u;
            goto label_49d9f0;
        }
    }
    ctx->pc = 0x49D9E4u;
label_49d9e4:
    // 0x49d9e4: 0xc127cae  jal         func_49F2B8
label_49d9e8:
    if (ctx->pc == 0x49D9E8u) {
        ctx->pc = 0x49D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D9E4u;
        // 0x49d9e8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D9ECu;
        goto label_49d9ec;
    }
    ctx->pc = 0x49D9E4u;
    SET_GPR_U32(ctx, 31, 0x49D9ECu);
    ctx->pc = 0x49D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D9E4u;
    // 0x49d9e8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49D9E4u, 0x49D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D9ECu;
label_49d9ec:
    // 0x49d9ec: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x49d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_49d9f0:
    // 0x49d9f0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x49d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_49d9f4:
    // 0x49d9f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_49d9f8:
    // 0x49d9f8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x49d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_49d9fc:
    // 0x49d9fc: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x49d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_49da00:
    // 0x49da00: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x49da00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_49da04:
    // 0x49da04: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x49da04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_49da08:
    // 0x49da08: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49da08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49da0c:
    // 0x49da0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_49da10:
    if (ctx->pc == 0x49DA10u) {
        ctx->pc = 0x49DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA0Cu;
        // 0x49da10: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DA14u;
        goto label_49da14;
    }
    ctx->pc = 0x49DA0Cu;
    {
        const bool branch_taken_0x49da0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA0Cu;
        // 0x49da10: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49da0c) {
            ctx->pc = 0x49DA28u;
            goto label_49da28;
        }
    }
    ctx->pc = 0x49DA14u;
label_49da14:
    // 0x49da14: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49da14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_49da18:
    // 0x49da18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49da18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49da1c:
    // 0x49da1c: 0xc12a9a0  jal         func_4AA680
label_49da20:
    if (ctx->pc == 0x49DA20u) {
        ctx->pc = 0x49DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA1Cu;
        // 0x49da20: 0x24848308  addiu       $a0, $a0, -0x7CF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DA24u;
        goto label_49da24;
    }
    ctx->pc = 0x49DA1Cu;
    SET_GPR_U32(ctx, 31, 0x49DA24u);
    ctx->pc = 0x49DA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DA1Cu;
    // 0x49da20: 0x24848308  addiu       $a0, $a0, -0x7CF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49DA1Cu, 0x49DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DA24u;
label_49da24:
    // 0x49da24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49da24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49da28:
    // 0x49da28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49da2c:
    // 0x49da2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49da2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49da30:
    // 0x49da30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49da30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49da34:
    // 0x49da34: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49da34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49da38:
    // 0x49da38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49da38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49da3c:
    // 0x49da3c: 0x3e00008  jr          $ra
label_49da40:
    if (ctx->pc == 0x49DA40u) {
        ctx->pc = 0x49DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA3Cu;
        // 0x49da40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DA44u;
        goto label_49da44;
    }
    ctx->pc = 0x49DA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA3Cu;
        // 0x49da40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DA44u;
label_49da44:
    // 0x49da44: 0x0  nop
    ctx->pc = 0x49da44u;
    // NOP
label_49da48:
    // 0x49da48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49da48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49da4c:
    // 0x49da4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49da4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_49da50:
    // 0x49da50: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49da50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_49da54:
    // 0x49da54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49da54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49da58:
    // 0x49da58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49da58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_49da5c:
    // 0x49da5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49da5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49da60:
    // 0x49da60: 0xc1276f6  jal         func_49DBD8
label_49da64:
    if (ctx->pc == 0x49DA64u) {
        ctx->pc = 0x49DA68u;
        goto label_49da68;
    }
    ctx->pc = 0x49DA60u;
    SET_GPR_U32(ctx, 31, 0x49DA68u);
    ctx->pc = 0x49DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DBD8u, 0x49DA60u, 0x49DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DA68u;
label_49da68:
    // 0x49da68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49da68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49da6c:
    // 0x49da6c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x49da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_49da70:
    // 0x49da70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_49da74:
    if (ctx->pc == 0x49DA74u) {
        ctx->pc = 0x49DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA70u;
        // 0x49da74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DA78u;
        goto label_49da78;
    }
    ctx->pc = 0x49DA70u;
    {
        const bool branch_taken_0x49da70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA70u;
        // 0x49da74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49da70) {
            ctx->pc = 0x49DA84u;
            goto label_49da84;
        }
    }
    ctx->pc = 0x49DA78u;
label_49da78:
    // 0x49da78: 0x40f809  jalr        $v0
label_49da7c:
    if (ctx->pc == 0x49DA7Cu) {
        ctx->pc = 0x49DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA78u;
        // 0x49da7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DA80u;
        goto label_49da80;
    }
    ctx->pc = 0x49DA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49DA80u);
        ctx->pc = 0x49DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA78u;
        // 0x49da7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DA78u, 0x49DA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49DA80u;
label_49da80:
    // 0x49da80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49da80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49da84:
    // 0x49da84: 0xc12a492  jal         func_4A9248
label_49da88:
    if (ctx->pc == 0x49DA88u) {
        ctx->pc = 0x49DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA84u;
        // 0x49da88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DA8Cu;
        goto label_49da8c;
    }
    ctx->pc = 0x49DA84u;
    SET_GPR_U32(ctx, 31, 0x49DA8Cu);
    ctx->pc = 0x49DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DA84u;
    // 0x49da88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49DA84u, 0x49DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DA8Cu;
label_49da8c:
    // 0x49da8c: 0x96320014  lhu         $s2, 0x14($s1)
    ctx->pc = 0x49da8cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_49da90:
    // 0x49da90: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
label_49da94:
    if (ctx->pc == 0x49DA94u) {
        ctx->pc = 0x49DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA90u;
        // 0x49da94: 0x96320016  lhu         $s2, 0x16($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DA98u;
        goto label_49da98;
    }
    ctx->pc = 0x49DA90u;
    {
        const bool branch_taken_0x49da90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x49da90) {
            ctx->pc = 0x49DA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49DA90u;
            // 0x49da94: 0x96320016  lhu         $s2, 0x16($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49DAC0u;
            goto label_49dac0;
        }
    }
    ctx->pc = 0x49DA98u;
label_49da98:
    // 0x49da98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49da98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49da9c:
    // 0x49da9c: 0x0  nop
    ctx->pc = 0x49da9cu;
    // NOP
label_49daa0:
    // 0x49daa0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x49daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_49daa4:
    // 0x49daa4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49daa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49daa8:
    // 0x49daa8: 0xc12a492  jal         func_4A9248
label_49daac:
    if (ctx->pc == 0x49DAACu) {
        ctx->pc = 0x49DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAA8u;
        // 0x49daac: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DAB0u;
        goto label_49dab0;
    }
    ctx->pc = 0x49DAA8u;
    SET_GPR_U32(ctx, 31, 0x49DAB0u);
    ctx->pc = 0x49DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DAA8u;
    // 0x49daac: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49DAA8u, 0x49DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DAB0u;
label_49dab0:
    // 0x49dab0: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x49dab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_49dab4:
    // 0x49dab4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_49dab8:
    if (ctx->pc == 0x49DAB8u) {
        ctx->pc = 0x49DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAB4u;
        // 0x49dab8: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DABCu;
        goto label_49dabc;
    }
    ctx->pc = 0x49DAB4u;
    {
        const bool branch_taken_0x49dab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAB4u;
        // 0x49dab8: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dab4) {
            ctx->pc = 0x49DAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49daa0;
        }
    }
    ctx->pc = 0x49DABCu;
label_49dabc:
    // 0x49dabc: 0x96320016  lhu         $s2, 0x16($s1)
    ctx->pc = 0x49dabcu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
label_49dac0:
    // 0x49dac0: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_49dac4:
    if (ctx->pc == 0x49DAC4u) {
        ctx->pc = 0x49DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAC0u;
        // 0x49dac4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DAC8u;
        goto label_49dac8;
    }
    ctx->pc = 0x49DAC0u;
    {
        const bool branch_taken_0x49dac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAC0u;
        // 0x49dac4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dac0) {
            ctx->pc = 0x49DAECu;
            goto label_49daec;
        }
    }
    ctx->pc = 0x49DAC8u;
label_49dac8:
    // 0x49dac8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49dac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49dacc:
    // 0x49dacc: 0x0  nop
    ctx->pc = 0x49daccu;
    // NOP
label_49dad0:
    // 0x49dad0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x49dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49dad4:
    // 0x49dad4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49dad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49dad8:
    // 0x49dad8: 0xc12a492  jal         func_4A9248
label_49dadc:
    if (ctx->pc == 0x49DADCu) {
        ctx->pc = 0x49DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAD8u;
        // 0x49dadc: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DAE0u;
        goto label_49dae0;
    }
    ctx->pc = 0x49DAD8u;
    SET_GPR_U32(ctx, 31, 0x49DAE0u);
    ctx->pc = 0x49DADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DAD8u;
    // 0x49dadc: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49DAD8u, 0x49DAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DAE0u;
label_49dae0:
    // 0x49dae0: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x49dae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_49dae4:
    // 0x49dae4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_49dae8:
    if (ctx->pc == 0x49DAE8u) {
        ctx->pc = 0x49DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAE4u;
        // 0x49dae8: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DAECu;
        goto label_49daec;
    }
    ctx->pc = 0x49DAE4u;
    {
        const bool branch_taken_0x49dae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAE4u;
        // 0x49dae8: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dae4) {
            ctx->pc = 0x49DAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49dad0;
        }
    }
    ctx->pc = 0x49DAECu;
label_49daec:
    // 0x49daec: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x49daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_49daf0:
    // 0x49daf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49daf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_49daf4:
    // 0x49daf4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_49daf8:
    if (ctx->pc == 0x49DAF8u) {
        ctx->pc = 0x49DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAF4u;
        // 0x49daf8: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DAFCu;
        goto label_49dafc;
    }
    ctx->pc = 0x49DAF4u;
    {
        const bool branch_taken_0x49daf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49daf4) {
            ctx->pc = 0x49DAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49DAF4u;
            // 0x49daf8: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49DB08u;
            goto label_49db08;
        }
    }
    ctx->pc = 0x49DAFCu;
label_49dafc:
    // 0x49dafc: 0xc127cae  jal         func_49F2B8
label_49db00:
    if (ctx->pc == 0x49DB00u) {
        ctx->pc = 0x49DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAFCu;
        // 0x49db00: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DB04u;
        goto label_49db04;
    }
    ctx->pc = 0x49DAFCu;
    SET_GPR_U32(ctx, 31, 0x49DB04u);
    ctx->pc = 0x49DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DAFCu;
    // 0x49db00: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49DAFCu, 0x49DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DB04u;
label_49db04:
    // 0x49db04: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x49db04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_49db08:
    // 0x49db08: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x49db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_49db0c:
    // 0x49db0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_49db10:
    // 0x49db10: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x49db10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_49db14:
    // 0x49db14: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x49db14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_49db18:
    // 0x49db18: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x49db18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_49db1c:
    // 0x49db1c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x49db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_49db20:
    // 0x49db20: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49db20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49db24:
    // 0x49db24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_49db28:
    if (ctx->pc == 0x49DB28u) {
        ctx->pc = 0x49DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DB24u;
        // 0x49db28: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DB2Cu;
        goto label_49db2c;
    }
    ctx->pc = 0x49DB24u;
    {
        const bool branch_taken_0x49db24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DB24u;
        // 0x49db28: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49db24) {
            ctx->pc = 0x49DB40u;
            goto label_49db40;
        }
    }
    ctx->pc = 0x49DB2Cu;
label_49db2c:
    // 0x49db2c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_49db30:
    // 0x49db30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49db30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49db34:
    // 0x49db34: 0xc12a9a0  jal         func_4AA680
label_49db38:
    if (ctx->pc == 0x49DB38u) {
        ctx->pc = 0x49DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DB34u;
        // 0x49db38: 0x24848308  addiu       $a0, $a0, -0x7CF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DB3Cu;
        goto label_49db3c;
    }
    ctx->pc = 0x49DB34u;
    SET_GPR_U32(ctx, 31, 0x49DB3Cu);
    ctx->pc = 0x49DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DB34u;
    // 0x49db38: 0x24848308  addiu       $a0, $a0, -0x7CF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49DB34u, 0x49DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DB3Cu;
label_49db3c:
    // 0x49db3c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49db3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49db40:
    // 0x49db40: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49db40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49db44:
    // 0x49db44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49db44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49db48:
    // 0x49db48: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49db48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49db4c:
    // 0x49db4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49db4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49db50:
    // 0x49db50: 0x3e00008  jr          $ra
label_49db54:
    if (ctx->pc == 0x49DB54u) {
        ctx->pc = 0x49DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DB50u;
        // 0x49db54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DB58u;
        goto label_fallthrough_0x49db50;
    }
    ctx->pc = 0x49DB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DB50u;
        // 0x49db54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x49db50:
    ctx->pc = 0x49DB58u;
}
