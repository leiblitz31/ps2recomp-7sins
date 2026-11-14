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

// Function: sub_00418940
// Address: 0x418940 - 0x418af0
void sub_00418940_0x418940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418940_0x418940");
#endif

    switch (ctx->pc) {
        case 0x418940u: goto label_418940;
        case 0x418944u: goto label_418944;
        case 0x418948u: goto label_418948;
        case 0x41894cu: goto label_41894c;
        case 0x418950u: goto label_418950;
        case 0x418954u: goto label_418954;
        case 0x418958u: goto label_418958;
        case 0x41895cu: goto label_41895c;
        case 0x418960u: goto label_418960;
        case 0x418964u: goto label_418964;
        case 0x418968u: goto label_418968;
        case 0x41896cu: goto label_41896c;
        case 0x418970u: goto label_418970;
        case 0x418974u: goto label_418974;
        case 0x418978u: goto label_418978;
        case 0x41897cu: goto label_41897c;
        case 0x418980u: goto label_418980;
        case 0x418984u: goto label_418984;
        case 0x418988u: goto label_418988;
        case 0x41898cu: goto label_41898c;
        case 0x418990u: goto label_418990;
        case 0x418994u: goto label_418994;
        case 0x418998u: goto label_418998;
        case 0x41899cu: goto label_41899c;
        case 0x4189a0u: goto label_4189a0;
        case 0x4189a4u: goto label_4189a4;
        case 0x4189a8u: goto label_4189a8;
        case 0x4189acu: goto label_4189ac;
        case 0x4189b0u: goto label_4189b0;
        case 0x4189b4u: goto label_4189b4;
        case 0x4189b8u: goto label_4189b8;
        case 0x4189bcu: goto label_4189bc;
        case 0x4189c0u: goto label_4189c0;
        case 0x4189c4u: goto label_4189c4;
        case 0x4189c8u: goto label_4189c8;
        case 0x4189ccu: goto label_4189cc;
        case 0x4189d0u: goto label_4189d0;
        case 0x4189d4u: goto label_4189d4;
        case 0x4189d8u: goto label_4189d8;
        case 0x4189dcu: goto label_4189dc;
        case 0x4189e0u: goto label_4189e0;
        case 0x4189e4u: goto label_4189e4;
        case 0x4189e8u: goto label_4189e8;
        case 0x4189ecu: goto label_4189ec;
        case 0x4189f0u: goto label_4189f0;
        case 0x4189f4u: goto label_4189f4;
        case 0x4189f8u: goto label_4189f8;
        case 0x4189fcu: goto label_4189fc;
        case 0x418a00u: goto label_418a00;
        case 0x418a04u: goto label_418a04;
        case 0x418a08u: goto label_418a08;
        case 0x418a0cu: goto label_418a0c;
        case 0x418a10u: goto label_418a10;
        case 0x418a14u: goto label_418a14;
        case 0x418a18u: goto label_418a18;
        case 0x418a1cu: goto label_418a1c;
        case 0x418a20u: goto label_418a20;
        case 0x418a24u: goto label_418a24;
        case 0x418a28u: goto label_418a28;
        case 0x418a2cu: goto label_418a2c;
        case 0x418a30u: goto label_418a30;
        case 0x418a34u: goto label_418a34;
        case 0x418a38u: goto label_418a38;
        case 0x418a3cu: goto label_418a3c;
        case 0x418a40u: goto label_418a40;
        case 0x418a44u: goto label_418a44;
        case 0x418a48u: goto label_418a48;
        case 0x418a4cu: goto label_418a4c;
        case 0x418a50u: goto label_418a50;
        case 0x418a54u: goto label_418a54;
        case 0x418a58u: goto label_418a58;
        case 0x418a5cu: goto label_418a5c;
        case 0x418a60u: goto label_418a60;
        case 0x418a64u: goto label_418a64;
        case 0x418a68u: goto label_418a68;
        case 0x418a6cu: goto label_418a6c;
        case 0x418a70u: goto label_418a70;
        case 0x418a74u: goto label_418a74;
        case 0x418a78u: goto label_418a78;
        case 0x418a7cu: goto label_418a7c;
        case 0x418a80u: goto label_418a80;
        case 0x418a84u: goto label_418a84;
        case 0x418a88u: goto label_418a88;
        case 0x418a8cu: goto label_418a8c;
        case 0x418a90u: goto label_418a90;
        case 0x418a94u: goto label_418a94;
        case 0x418a98u: goto label_418a98;
        case 0x418a9cu: goto label_418a9c;
        case 0x418aa0u: goto label_418aa0;
        case 0x418aa4u: goto label_418aa4;
        case 0x418aa8u: goto label_418aa8;
        case 0x418aacu: goto label_418aac;
        case 0x418ab0u: goto label_418ab0;
        case 0x418ab4u: goto label_418ab4;
        case 0x418ab8u: goto label_418ab8;
        case 0x418abcu: goto label_418abc;
        case 0x418ac0u: goto label_418ac0;
        case 0x418ac4u: goto label_418ac4;
        case 0x418ac8u: goto label_418ac8;
        case 0x418accu: goto label_418acc;
        case 0x418ad0u: goto label_418ad0;
        case 0x418ad4u: goto label_418ad4;
        case 0x418ad8u: goto label_418ad8;
        case 0x418adcu: goto label_418adc;
        case 0x418ae0u: goto label_418ae0;
        case 0x418ae4u: goto label_418ae4;
        case 0x418ae8u: goto label_418ae8;
        case 0x418aecu: goto label_418aec;
        default: break;
    }

    ctx->pc = 0x418940u;

label_418940:
    // 0x418940: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x418940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_418944:
    // 0x418944: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x418944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_418948:
    // 0x418948: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x418948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41894c:
    // 0x41894c: 0x8c62e894  lw          $v0, -0x176C($v1)
    ctx->pc = 0x41894cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
label_418950:
    // 0x418950: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x418950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_418954:
    // 0x418954: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x418954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_418958:
    // 0x418958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x418958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41895c:
    // 0x41895c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41895cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418960:
    // 0x418960: 0x40f809  jalr        $v0
label_418964:
    if (ctx->pc == 0x418964u) {
        ctx->pc = 0x418964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418960u;
        // 0x418964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418968u;
        goto label_418968;
    }
    ctx->pc = 0x418960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418968u);
        ctx->pc = 0x418964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418960u;
        // 0x418964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418960u, 0x418968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418968u;
label_418968:
    // 0x418968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x418968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41896c:
    // 0x41896c: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_418970:
    if (ctx->pc == 0x418970u) {
        ctx->pc = 0x418970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41896Cu;
        // 0x418970: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x418974u;
        goto label_418974;
    }
    ctx->pc = 0x41896Cu;
    {
        const bool branch_taken_0x41896c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x418970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41896Cu;
        // 0x418970: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41896c) {
            ctx->pc = 0x418998u;
            goto label_418998;
        }
    }
    ctx->pc = 0x418974u;
label_418974:
    // 0x418974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418978:
    // 0x418978: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x418978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_41897c:
    // 0x41897c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41897cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_418980:
    // 0x418980: 0xc1035f6  jal         func_40D7D8
label_418984:
    if (ctx->pc == 0x418984u) {
        ctx->pc = 0x418984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418980u;
        // 0x418984: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418988u;
        goto label_418988;
    }
    ctx->pc = 0x418980u;
    SET_GPR_U32(ctx, 31, 0x418988u);
    ctx->pc = 0x418984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418980u;
    // 0x418984: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x418980u, 0x418988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418988u;
label_418988:
    // 0x418988: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x418988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41898c:
    // 0x41898c: 0xc103628  jal         func_40D8A0
label_418990:
    if (ctx->pc == 0x418990u) {
        ctx->pc = 0x418990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41898Cu;
        // 0x418990: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418994u;
        goto label_418994;
    }
    ctx->pc = 0x41898Cu;
    SET_GPR_U32(ctx, 31, 0x418994u);
    ctx->pc = 0x418990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41898Cu;
    // 0x418990: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41898Cu, 0x418994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418994u;
label_418994:
    // 0x418994: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x418994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_418998:
    // 0x418998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x418998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41899c:
    // 0x41899c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41899cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4189a0:
    // 0x4189a0: 0x3e00008  jr          $ra
label_4189a4:
    if (ctx->pc == 0x4189A4u) {
        ctx->pc = 0x4189A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4189A0u;
        // 0x4189a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4189A8u;
        goto label_4189a8;
    }
    ctx->pc = 0x4189A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4189A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4189A0u;
        // 0x4189a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4189A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4189A8u;
label_4189a8:
    // 0x4189a8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4189a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4189ac:
    // 0x4189ac: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4189acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4189b0:
    // 0x4189b0: 0x8c62e894  lw          $v0, -0x176C($v1)
    ctx->pc = 0x4189b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
label_4189b4:
    // 0x4189b4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4189b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4189b8:
    // 0x4189b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4189b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4189bc:
    // 0x4189bc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4189bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4189c0:
    // 0x4189c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4189c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4189c4:
    // 0x4189c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4189c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4189c8:
    // 0x4189c8: 0x40f809  jalr        $v0
label_4189cc:
    if (ctx->pc == 0x4189CCu) {
        ctx->pc = 0x4189CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4189C8u;
        // 0x4189cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4189D0u;
        goto label_4189d0;
    }
    ctx->pc = 0x4189C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4189D0u);
        ctx->pc = 0x4189CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4189C8u;
        // 0x4189cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4189C8u, 0x4189D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4189D0u;
label_4189d0:
    // 0x4189d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4189d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4189d4:
    // 0x4189d4: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_4189d8:
    if (ctx->pc == 0x4189D8u) {
        ctx->pc = 0x4189D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4189D4u;
        // 0x4189d8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4189DCu;
        goto label_4189dc;
    }
    ctx->pc = 0x4189D4u;
    {
        const bool branch_taken_0x4189d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4189d4) {
            ctx->pc = 0x4189D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4189D4u;
            // 0x4189d8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418A08u;
            goto label_418a08;
        }
    }
    ctx->pc = 0x4189DCu;
label_4189dc:
    // 0x4189dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4189dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4189e0:
    // 0x4189e0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x4189e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4189e4:
    // 0x4189e4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4189e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4189e8:
    // 0x4189e8: 0xc1035f6  jal         func_40D7D8
label_4189ec:
    if (ctx->pc == 0x4189ECu) {
        ctx->pc = 0x4189ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4189E8u;
        // 0x4189ec: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4189F0u;
        goto label_4189f0;
    }
    ctx->pc = 0x4189E8u;
    SET_GPR_U32(ctx, 31, 0x4189F0u);
    ctx->pc = 0x4189ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4189E8u;
    // 0x4189ec: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4189E8u, 0x4189F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4189F0u;
label_4189f0:
    // 0x4189f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4189f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4189f4:
    // 0x4189f4: 0xc103628  jal         func_40D8A0
label_4189f8:
    if (ctx->pc == 0x4189F8u) {
        ctx->pc = 0x4189F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4189F4u;
        // 0x4189f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4189FCu;
        goto label_4189fc;
    }
    ctx->pc = 0x4189F4u;
    SET_GPR_U32(ctx, 31, 0x4189FCu);
    ctx->pc = 0x4189F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4189F4u;
    // 0x4189f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4189F4u, 0x4189FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4189FCu;
label_4189fc:
    // 0x4189fc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_418a00:
    if (ctx->pc == 0x418A00u) {
        ctx->pc = 0x418A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4189FCu;
        // 0x418a00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418A04u;
        goto label_418a04;
    }
    ctx->pc = 0x4189FCu;
    {
        const bool branch_taken_0x4189fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x418A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4189FCu;
        // 0x418a00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4189fc) {
            ctx->pc = 0x418A08u;
            goto label_418a08;
        }
    }
    ctx->pc = 0x418A04u;
label_418a04:
    // 0x418a04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x418a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_418a08:
    // 0x418a08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x418a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_418a0c:
    // 0x418a0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x418a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_418a10:
    // 0x418a10: 0x3e00008  jr          $ra
label_418a14:
    if (ctx->pc == 0x418A14u) {
        ctx->pc = 0x418A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A10u;
        // 0x418a14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418A18u;
        goto label_418a18;
    }
    ctx->pc = 0x418A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A10u;
        // 0x418a14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418A18u;
label_418a18:
    // 0x418a18: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x418a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_418a1c:
    // 0x418a1c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x418a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_418a20:
    // 0x418a20: 0x8c62e894  lw          $v0, -0x176C($v1)
    ctx->pc = 0x418a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
label_418a24:
    // 0x418a24: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x418a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_418a28:
    // 0x418a28: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x418a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_418a2c:
    // 0x418a2c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x418a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_418a30:
    // 0x418a30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x418a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_418a34:
    // 0x418a34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418a38:
    // 0x418a38: 0x40f809  jalr        $v0
label_418a3c:
    if (ctx->pc == 0x418A3Cu) {
        ctx->pc = 0x418A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A38u;
        // 0x418a3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418A40u;
        goto label_418a40;
    }
    ctx->pc = 0x418A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418A40u);
        ctx->pc = 0x418A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A38u;
        // 0x418a3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418A38u, 0x418A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418A40u;
label_418a40:
    // 0x418a40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x418a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_418a44:
    // 0x418a44: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_418a48:
    if (ctx->pc == 0x418A48u) {
        ctx->pc = 0x418A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A44u;
        // 0x418a48: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418A4Cu;
        goto label_418a4c;
    }
    ctx->pc = 0x418A44u;
    {
        const bool branch_taken_0x418a44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x418a44) {
            ctx->pc = 0x418A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418A44u;
            // 0x418a48: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418A78u;
            goto label_418a78;
        }
    }
    ctx->pc = 0x418A4Cu;
label_418a4c:
    // 0x418a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418a50:
    // 0x418a50: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x418a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_418a54:
    // 0x418a54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x418a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_418a58:
    // 0x418a58: 0xc1035f6  jal         func_40D7D8
label_418a5c:
    if (ctx->pc == 0x418A5Cu) {
        ctx->pc = 0x418A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A58u;
        // 0x418a5c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418A60u;
        goto label_418a60;
    }
    ctx->pc = 0x418A58u;
    SET_GPR_U32(ctx, 31, 0x418A60u);
    ctx->pc = 0x418A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418A58u;
    // 0x418a5c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x418A58u, 0x418A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418A60u;
label_418a60:
    // 0x418a60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x418a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_418a64:
    // 0x418a64: 0xc103628  jal         func_40D8A0
label_418a68:
    if (ctx->pc == 0x418A68u) {
        ctx->pc = 0x418A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A64u;
        // 0x418a68: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418A6Cu;
        goto label_418a6c;
    }
    ctx->pc = 0x418A64u;
    SET_GPR_U32(ctx, 31, 0x418A6Cu);
    ctx->pc = 0x418A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418A64u;
    // 0x418a68: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x418A64u, 0x418A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418A6Cu;
label_418a6c:
    // 0x418a6c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_418a70:
    if (ctx->pc == 0x418A70u) {
        ctx->pc = 0x418A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A6Cu;
        // 0x418a70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418A74u;
        goto label_418a74;
    }
    ctx->pc = 0x418A6Cu;
    {
        const bool branch_taken_0x418a6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x418A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A6Cu;
        // 0x418a70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418a6c) {
            ctx->pc = 0x418A78u;
            goto label_418a78;
        }
    }
    ctx->pc = 0x418A74u;
label_418a74:
    // 0x418a74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x418a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_418a78:
    // 0x418a78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x418a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_418a7c:
    // 0x418a7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x418a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_418a80:
    // 0x418a80: 0x3e00008  jr          $ra
label_418a84:
    if (ctx->pc == 0x418A84u) {
        ctx->pc = 0x418A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A80u;
        // 0x418a84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418A88u;
        goto label_418a88;
    }
    ctx->pc = 0x418A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A80u;
        // 0x418a84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418A88u;
label_418a88:
    // 0x418a88: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x418a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_418a8c:
    // 0x418a8c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x418a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_418a90:
    // 0x418a90: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x418a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_418a94:
    // 0x418a94: 0x8c62e894  lw          $v0, -0x176C($v1)
    ctx->pc = 0x418a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
label_418a98:
    // 0x418a98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x418a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_418a9c:
    // 0x418a9c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x418a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_418aa0:
    // 0x418aa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x418aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_418aa4:
    // 0x418aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418aa8:
    // 0x418aa8: 0x40f809  jalr        $v0
label_418aac:
    if (ctx->pc == 0x418AACu) {
        ctx->pc = 0x418AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AA8u;
        // 0x418aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418AB0u;
        goto label_418ab0;
    }
    ctx->pc = 0x418AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418AB0u);
        ctx->pc = 0x418AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AA8u;
        // 0x418aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418AA8u, 0x418AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418AB0u;
label_418ab0:
    // 0x418ab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x418ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_418ab4:
    // 0x418ab4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_418ab8:
    if (ctx->pc == 0x418AB8u) {
        ctx->pc = 0x418AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AB4u;
        // 0x418ab8: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x418ABCu;
        goto label_418abc;
    }
    ctx->pc = 0x418AB4u;
    {
        const bool branch_taken_0x418ab4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x418AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AB4u;
        // 0x418ab8: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x418ab4) {
            ctx->pc = 0x418AE0u;
            goto label_418ae0;
        }
    }
    ctx->pc = 0x418ABCu;
label_418abc:
    // 0x418abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418ac0:
    // 0x418ac0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x418ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_418ac4:
    // 0x418ac4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x418ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_418ac8:
    // 0x418ac8: 0xc1035f6  jal         func_40D7D8
label_418acc:
    if (ctx->pc == 0x418ACCu) {
        ctx->pc = 0x418ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AC8u;
        // 0x418acc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418AD0u;
        goto label_418ad0;
    }
    ctx->pc = 0x418AC8u;
    SET_GPR_U32(ctx, 31, 0x418AD0u);
    ctx->pc = 0x418ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418AC8u;
    // 0x418acc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x418AC8u, 0x418AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418AD0u;
label_418ad0:
    // 0x418ad0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x418ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_418ad4:
    // 0x418ad4: 0xc103628  jal         func_40D8A0
label_418ad8:
    if (ctx->pc == 0x418AD8u) {
        ctx->pc = 0x418AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AD4u;
        // 0x418ad8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418ADCu;
        goto label_418adc;
    }
    ctx->pc = 0x418AD4u;
    SET_GPR_U32(ctx, 31, 0x418ADCu);
    ctx->pc = 0x418AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418AD4u;
    // 0x418ad8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x418AD4u, 0x418ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418ADCu;
label_418adc:
    // 0x418adc: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x418adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_418ae0:
    // 0x418ae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x418ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_418ae4:
    // 0x418ae4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x418ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_418ae8:
    // 0x418ae8: 0x3e00008  jr          $ra
label_418aec:
    if (ctx->pc == 0x418AECu) {
        ctx->pc = 0x418AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AE8u;
        // 0x418aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418AF0u;
        goto label_fallthrough_0x418ae8;
    }
    ctx->pc = 0x418AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AE8u;
        // 0x418aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x418ae8:
    ctx->pc = 0x418AF0u;
}
