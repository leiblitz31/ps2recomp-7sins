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

// Function: sub_003D48E0
// Address: 0x3d48e0 - 0x3d4ae8
void sub_003D48E0_0x3d48e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D48E0_0x3d48e0");
#endif

    switch (ctx->pc) {
        case 0x3d48e0u: goto label_3d48e0;
        case 0x3d48e4u: goto label_3d48e4;
        case 0x3d48e8u: goto label_3d48e8;
        case 0x3d48ecu: goto label_3d48ec;
        case 0x3d48f0u: goto label_3d48f0;
        case 0x3d48f4u: goto label_3d48f4;
        case 0x3d48f8u: goto label_3d48f8;
        case 0x3d48fcu: goto label_3d48fc;
        case 0x3d4900u: goto label_3d4900;
        case 0x3d4904u: goto label_3d4904;
        case 0x3d4908u: goto label_3d4908;
        case 0x3d490cu: goto label_3d490c;
        case 0x3d4910u: goto label_3d4910;
        case 0x3d4914u: goto label_3d4914;
        case 0x3d4918u: goto label_3d4918;
        case 0x3d491cu: goto label_3d491c;
        case 0x3d4920u: goto label_3d4920;
        case 0x3d4924u: goto label_3d4924;
        case 0x3d4928u: goto label_3d4928;
        case 0x3d492cu: goto label_3d492c;
        case 0x3d4930u: goto label_3d4930;
        case 0x3d4934u: goto label_3d4934;
        case 0x3d4938u: goto label_3d4938;
        case 0x3d493cu: goto label_3d493c;
        case 0x3d4940u: goto label_3d4940;
        case 0x3d4944u: goto label_3d4944;
        case 0x3d4948u: goto label_3d4948;
        case 0x3d494cu: goto label_3d494c;
        case 0x3d4950u: goto label_3d4950;
        case 0x3d4954u: goto label_3d4954;
        case 0x3d4958u: goto label_3d4958;
        case 0x3d495cu: goto label_3d495c;
        case 0x3d4960u: goto label_3d4960;
        case 0x3d4964u: goto label_3d4964;
        case 0x3d4968u: goto label_3d4968;
        case 0x3d496cu: goto label_3d496c;
        case 0x3d4970u: goto label_3d4970;
        case 0x3d4974u: goto label_3d4974;
        case 0x3d4978u: goto label_3d4978;
        case 0x3d497cu: goto label_3d497c;
        case 0x3d4980u: goto label_3d4980;
        case 0x3d4984u: goto label_3d4984;
        case 0x3d4988u: goto label_3d4988;
        case 0x3d498cu: goto label_3d498c;
        case 0x3d4990u: goto label_3d4990;
        case 0x3d4994u: goto label_3d4994;
        case 0x3d4998u: goto label_3d4998;
        case 0x3d499cu: goto label_3d499c;
        case 0x3d49a0u: goto label_3d49a0;
        case 0x3d49a4u: goto label_3d49a4;
        case 0x3d49a8u: goto label_3d49a8;
        case 0x3d49acu: goto label_3d49ac;
        case 0x3d49b0u: goto label_3d49b0;
        case 0x3d49b4u: goto label_3d49b4;
        case 0x3d49b8u: goto label_3d49b8;
        case 0x3d49bcu: goto label_3d49bc;
        case 0x3d49c0u: goto label_3d49c0;
        case 0x3d49c4u: goto label_3d49c4;
        case 0x3d49c8u: goto label_3d49c8;
        case 0x3d49ccu: goto label_3d49cc;
        case 0x3d49d0u: goto label_3d49d0;
        case 0x3d49d4u: goto label_3d49d4;
        case 0x3d49d8u: goto label_3d49d8;
        case 0x3d49dcu: goto label_3d49dc;
        case 0x3d49e0u: goto label_3d49e0;
        case 0x3d49e4u: goto label_3d49e4;
        case 0x3d49e8u: goto label_3d49e8;
        case 0x3d49ecu: goto label_3d49ec;
        case 0x3d49f0u: goto label_3d49f0;
        case 0x3d49f4u: goto label_3d49f4;
        case 0x3d49f8u: goto label_3d49f8;
        case 0x3d49fcu: goto label_3d49fc;
        case 0x3d4a00u: goto label_3d4a00;
        case 0x3d4a04u: goto label_3d4a04;
        case 0x3d4a08u: goto label_3d4a08;
        case 0x3d4a0cu: goto label_3d4a0c;
        case 0x3d4a10u: goto label_3d4a10;
        case 0x3d4a14u: goto label_3d4a14;
        case 0x3d4a18u: goto label_3d4a18;
        case 0x3d4a1cu: goto label_3d4a1c;
        case 0x3d4a20u: goto label_3d4a20;
        case 0x3d4a24u: goto label_3d4a24;
        case 0x3d4a28u: goto label_3d4a28;
        case 0x3d4a2cu: goto label_3d4a2c;
        case 0x3d4a30u: goto label_3d4a30;
        case 0x3d4a34u: goto label_3d4a34;
        case 0x3d4a38u: goto label_3d4a38;
        case 0x3d4a3cu: goto label_3d4a3c;
        case 0x3d4a40u: goto label_3d4a40;
        case 0x3d4a44u: goto label_3d4a44;
        case 0x3d4a48u: goto label_3d4a48;
        case 0x3d4a4cu: goto label_3d4a4c;
        case 0x3d4a50u: goto label_3d4a50;
        case 0x3d4a54u: goto label_3d4a54;
        case 0x3d4a58u: goto label_3d4a58;
        case 0x3d4a5cu: goto label_3d4a5c;
        case 0x3d4a60u: goto label_3d4a60;
        case 0x3d4a64u: goto label_3d4a64;
        case 0x3d4a68u: goto label_3d4a68;
        case 0x3d4a6cu: goto label_3d4a6c;
        case 0x3d4a70u: goto label_3d4a70;
        case 0x3d4a74u: goto label_3d4a74;
        case 0x3d4a78u: goto label_3d4a78;
        case 0x3d4a7cu: goto label_3d4a7c;
        case 0x3d4a80u: goto label_3d4a80;
        case 0x3d4a84u: goto label_3d4a84;
        case 0x3d4a88u: goto label_3d4a88;
        case 0x3d4a8cu: goto label_3d4a8c;
        case 0x3d4a90u: goto label_3d4a90;
        case 0x3d4a94u: goto label_3d4a94;
        case 0x3d4a98u: goto label_3d4a98;
        case 0x3d4a9cu: goto label_3d4a9c;
        case 0x3d4aa0u: goto label_3d4aa0;
        case 0x3d4aa4u: goto label_3d4aa4;
        case 0x3d4aa8u: goto label_3d4aa8;
        case 0x3d4aacu: goto label_3d4aac;
        case 0x3d4ab0u: goto label_3d4ab0;
        case 0x3d4ab4u: goto label_3d4ab4;
        case 0x3d4ab8u: goto label_3d4ab8;
        case 0x3d4abcu: goto label_3d4abc;
        case 0x3d4ac0u: goto label_3d4ac0;
        case 0x3d4ac4u: goto label_3d4ac4;
        case 0x3d4ac8u: goto label_3d4ac8;
        case 0x3d4accu: goto label_3d4acc;
        case 0x3d4ad0u: goto label_3d4ad0;
        case 0x3d4ad4u: goto label_3d4ad4;
        case 0x3d4ad8u: goto label_3d4ad8;
        case 0x3d4adcu: goto label_3d4adc;
        case 0x3d4ae0u: goto label_3d4ae0;
        case 0x3d4ae4u: goto label_3d4ae4;
        default: break;
    }

    ctx->pc = 0x3d48e0u;

label_3d48e0:
    // 0x3d48e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d48e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d48e4:
    // 0x3d48e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d48e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d48e8:
    // 0x3d48e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d48e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d48ec:
    // 0x3d48ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d48ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d48f0:
    // 0x3d48f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3d48f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d48f4:
    // 0x3d48f4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d48f8:
    if (ctx->pc == 0x3D48F8u) {
        ctx->pc = 0x3D48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D48F4u;
        // 0x3d48f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D48FCu;
        goto label_3d48fc;
    }
    ctx->pc = 0x3D48F4u;
    {
        const bool branch_taken_0x3d48f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d48f4) {
            ctx->pc = 0x3D48F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D48F4u;
            // 0x3d48f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D490Cu;
            goto label_3d490c;
        }
    }
    ctx->pc = 0x3D48FCu;
label_3d48fc:
    // 0x3d48fc: 0xc103684  jal         func_40DA10
label_3d4900:
    if (ctx->pc == 0x3D4900u) {
        ctx->pc = 0x3D4904u;
        goto label_3d4904;
    }
    ctx->pc = 0x3D48FCu;
    SET_GPR_U32(ctx, 31, 0x3D4904u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D48FCu, 0x3D4904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4904u;
label_3d4904:
    // 0x3d4904: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3d4904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3d4908:
    // 0x3d4908: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d4908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d490c:
    // 0x3d490c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3d4910:
    if (ctx->pc == 0x3D4910u) {
        ctx->pc = 0x3D4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D490Cu;
        // 0x3d4910: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4914u;
        goto label_3d4914;
    }
    ctx->pc = 0x3D490Cu;
    {
        const bool branch_taken_0x3d490c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D490Cu;
        // 0x3d4910: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d490c) {
            ctx->pc = 0x3D4920u;
            goto label_3d4920;
        }
    }
    ctx->pc = 0x3D4914u;
label_3d4914:
    // 0x3d4914: 0xc103684  jal         func_40DA10
label_3d4918:
    if (ctx->pc == 0x3D4918u) {
        ctx->pc = 0x3D491Cu;
        goto label_3d491c;
    }
    ctx->pc = 0x3D4914u;
    SET_GPR_U32(ctx, 31, 0x3D491Cu);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D4914u, 0x3D491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D491Cu;
label_3d491c:
    // 0x3d491c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3d491cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3d4920:
    // 0x3d4920: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3d4920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3d4924:
    // 0x3d4924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d4924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4928:
    // 0x3d4928: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3d4928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3d492c:
    // 0x3d492c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3d492cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3d4930:
    // 0x3d4930: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d4930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d4934:
    // 0x3d4934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d4934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4938:
    // 0x3d4938: 0x3e00008  jr          $ra
label_3d493c:
    if (ctx->pc == 0x3D493Cu) {
        ctx->pc = 0x3D493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4938u;
        // 0x3d493c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4940u;
        goto label_3d4940;
    }
    ctx->pc = 0x3D4938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4938u;
        // 0x3d493c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4940u;
label_3d4940:
    // 0x3d4940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d4940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d4944:
    // 0x3d4944: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d4944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d4948:
    // 0x3d4948: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d4948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3d494c:
    // 0x3d494c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3d494cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3d4950:
    // 0x3d4950: 0x2470b1e0  addiu       $s0, $v1, -0x4E20
    ctx->pc = 0x3d4950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947296));
label_3d4954:
    // 0x3d4954: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3d4954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3d4958:
    // 0x3d4958: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d4958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3d495c:
    // 0x3d495c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d495cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4960:
    // 0x3d4960: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d4960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3d4964:
    // 0x3d4964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d4964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d4968:
    // 0x3d4968: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d496c:
    // 0x3d496c: 0x2829821  addu        $s3, $s4, $v0
    ctx->pc = 0x3d496cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3d4970:
    // 0x3d4970: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x3d4970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3d4974:
    // 0x3d4974: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3d4978:
    if (ctx->pc == 0x3D4978u) {
        ctx->pc = 0x3D4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4974u;
        // 0x3d4978: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D497Cu;
        goto label_3d497c;
    }
    ctx->pc = 0x3D4974u;
    {
        const bool branch_taken_0x3d4974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4974) {
            ctx->pc = 0x3D4978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4974u;
            // 0x3d4978: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4994u;
            goto label_3d4994;
        }
    }
    ctx->pc = 0x3D497Cu;
label_3d497c:
    // 0x3d497c: 0xc10822c  jal         func_4208B0
label_3d4980:
    if (ctx->pc == 0x3D4980u) {
        ctx->pc = 0x3D4984u;
        goto label_3d4984;
    }
    ctx->pc = 0x3D497Cu;
    SET_GPR_U32(ctx, 31, 0x3D4984u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3D497Cu, 0x3D4984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4984u;
label_3d4984:
    // 0x3d4984: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x3d4984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_3d4988:
    // 0x3d4988: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3d4988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3d498c:
    // 0x3d498c: 0xae80006c  sw          $zero, 0x6C($s4)
    ctx->pc = 0x3d498cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 0));
label_3d4990:
    // 0x3d4990: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x3d4990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_3d4994:
    // 0x3d4994: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3d4998:
    if (ctx->pc == 0x3D4998u) {
        ctx->pc = 0x3D4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4994u;
        // 0x3d4998: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D499Cu;
        goto label_3d499c;
    }
    ctx->pc = 0x3D4994u;
    {
        const bool branch_taken_0x3d4994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4994) {
            ctx->pc = 0x3D4998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4994u;
            // 0x3d4998: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D49A8u;
            goto label_3d49a8;
        }
    }
    ctx->pc = 0x3D499Cu;
label_3d499c:
    // 0x3d499c: 0xc0c8e22  jal         func_323888
label_3d49a0:
    if (ctx->pc == 0x3D49A0u) {
        ctx->pc = 0x3D49A4u;
        goto label_3d49a4;
    }
    ctx->pc = 0x3D499Cu;
    SET_GPR_U32(ctx, 31, 0x3D49A4u);
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3D499Cu, 0x3D49A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49A4u;
label_3d49a4:
    // 0x3d49a4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3d49a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d49a8:
    // 0x3d49a8: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x3d49a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3d49ac:
    // 0x3d49ac: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3d49acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3d49b0:
    // 0x3d49b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d49b4:
    // 0x3d49b4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_3d49b8:
    if (ctx->pc == 0x3D49B8u) {
        ctx->pc = 0x3D49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49B4u;
        // 0x3d49b8: 0xae600018  sw          $zero, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49BCu;
        goto label_3d49bc;
    }
    ctx->pc = 0x3D49B4u;
    {
        const bool branch_taken_0x3d49b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d49b4) {
            ctx->pc = 0x3D49B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D49B4u;
            // 0x3d49b8: 0xae600018  sw          $zero, 0x18($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4A18u;
            goto label_3d4a18;
        }
    }
    ctx->pc = 0x3D49BCu;
label_3d49bc:
    // 0x3d49bc: 0xc0f46a0  jal         func_3D1A80
label_3d49c0:
    if (ctx->pc == 0x3D49C0u) {
        ctx->pc = 0x3D49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49BCu;
        // 0x3d49c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49C4u;
        goto label_3d49c4;
    }
    ctx->pc = 0x3D49BCu;
    SET_GPR_U32(ctx, 31, 0x3D49C4u);
    ctx->pc = 0x3D49C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D49BCu;
    // 0x3d49c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1A80u, 0x3D49BCu, 0x3D49C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49C4u;
label_3d49c4:
    // 0x3d49c4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d49c8:
    // 0x3d49c8: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_3d49cc:
    if (ctx->pc == 0x3D49CCu) {
        ctx->pc = 0x3D49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49C8u;
        // 0x3d49cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49D0u;
        goto label_3d49d0;
    }
    ctx->pc = 0x3D49C8u;
    {
        const bool branch_taken_0x3d49c8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3D49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49C8u;
        // 0x3d49cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d49c8) {
            ctx->pc = 0x3D49FCu;
            goto label_3d49fc;
        }
    }
    ctx->pc = 0x3D49D0u;
label_3d49d0:
    // 0x3d49d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d49d4:
    // 0x3d49d4: 0x0  nop
    ctx->pc = 0x3d49d4u;
    // NOP
label_3d49d8:
    // 0x3d49d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d49d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d49dc:
    // 0x3d49dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3d49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3d49e0:
    // 0x3d49e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d49e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d49e4:
    // 0x3d49e4: 0xc103684  jal         func_40DA10
label_3d49e8:
    if (ctx->pc == 0x3D49E8u) {
        ctx->pc = 0x3D49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49E4u;
        // 0x3d49e8: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49ECu;
        goto label_3d49ec;
    }
    ctx->pc = 0x3D49E4u;
    SET_GPR_U32(ctx, 31, 0x3D49ECu);
    ctx->pc = 0x3D49E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D49E4u;
    // 0x3d49e8: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D49E4u, 0x3D49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49ECu;
label_3d49ec:
    // 0x3d49ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d49ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d49f0:
    // 0x3d49f0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3d49f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d49f4:
    // 0x3d49f4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_3d49f8:
    if (ctx->pc == 0x3D49F8u) {
        ctx->pc = 0x3D49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49F4u;
        // 0x3d49f8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49FCu;
        goto label_3d49fc;
    }
    ctx->pc = 0x3D49F4u;
    {
        const bool branch_taken_0x3d49f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d49f4) {
            ctx->pc = 0x3D49F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D49F4u;
            // 0x3d49f8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D49D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d49d8;
        }
    }
    ctx->pc = 0x3D49FCu;
label_3d49fc:
    // 0x3d49fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d4a00:
    // 0x3d4a00: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3d4a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3d4a04:
    // 0x3d4a04: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3d4a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3d4a08:
    // 0x3d4a08: 0x60f809  jalr        $v1
label_3d4a0c:
    if (ctx->pc == 0x3D4A0Cu) {
        ctx->pc = 0x3D4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A08u;
        // 0x3d4a0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A10u;
        goto label_3d4a10;
    }
    ctx->pc = 0x3D4A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D4A10u);
        ctx->pc = 0x3D4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A08u;
        // 0x3d4a0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4A08u, 0x3D4A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4A10u;
label_3d4a10:
    // 0x3d4a10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3d4a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3d4a14:
    // 0x3d4a14: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x3d4a14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_3d4a18:
    // 0x3d4a18: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3d4a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d4a1c:
    // 0x3d4a1c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d4a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d4a20:
    // 0x3d4a20: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d4a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d4a24:
    // 0x3d4a24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d4a24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d4a28:
    // 0x3d4a28: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3d4a28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4a2c:
    // 0x3d4a2c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3d4a2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d4a30:
    // 0x3d4a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d4a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4a34:
    // 0x3d4a34: 0x3e00008  jr          $ra
label_3d4a38:
    if (ctx->pc == 0x3D4A38u) {
        ctx->pc = 0x3D4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A34u;
        // 0x3d4a38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A3Cu;
        goto label_3d4a3c;
    }
    ctx->pc = 0x3D4A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A34u;
        // 0x3d4a38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4A3Cu;
label_3d4a3c:
    // 0x3d4a3c: 0x0  nop
    ctx->pc = 0x3d4a3cu;
    // NOP
label_3d4a40:
    // 0x3d4a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d4a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d4a44:
    // 0x3d4a44: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d4a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d4a48:
    // 0x3d4a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d4a4c:
    // 0x3d4a4c: 0x8c62b1ec  lw          $v0, -0x4E14($v1)
    ctx->pc = 0x3d4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947308)));
label_3d4a50:
    // 0x3d4a50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d4a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4a54:
    // 0x3d4a54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d4a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3d4a58:
    // 0x3d4a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d4a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d4a5c:
    // 0x3d4a5c: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x3d4a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3d4a60:
    // 0x3d4a60: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3d4a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3d4a64:
    // 0x3d4a64: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_3d4a68:
    if (ctx->pc == 0x3D4A68u) {
        ctx->pc = 0x3D4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A64u;
        // 0x3d4a68: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A6Cu;
        goto label_3d4a6c;
    }
    ctx->pc = 0x3D4A64u;
    {
        const bool branch_taken_0x3d4a64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4a64) {
            ctx->pc = 0x3D4A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4A64u;
            // 0x3d4a68: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4A8Cu;
            goto label_3d4a8c;
        }
    }
    ctx->pc = 0x3D4A6Cu;
label_3d4a6c:
    // 0x3d4a6c: 0xc10822c  jal         func_4208B0
label_3d4a70:
    if (ctx->pc == 0x3D4A70u) {
        ctx->pc = 0x3D4A74u;
        goto label_3d4a74;
    }
    ctx->pc = 0x3D4A6Cu;
    SET_GPR_U32(ctx, 31, 0x3D4A74u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3D4A6Cu, 0x3D4A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A74u;
label_3d4a74:
    // 0x3d4a74: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3d4a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3d4a78:
    // 0x3d4a78: 0xc0f46de  jal         func_3D1B78
label_3d4a7c:
    if (ctx->pc == 0x3D4A7Cu) {
        ctx->pc = 0x3D4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A78u;
        // 0x3d4a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A80u;
        goto label_3d4a80;
    }
    ctx->pc = 0x3D4A78u;
    SET_GPR_U32(ctx, 31, 0x3D4A80u);
    ctx->pc = 0x3D4A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4A78u;
    // 0x3d4a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1B78u, 0x3D4A78u, 0x3D4A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A80u;
label_3d4a80:
    // 0x3d4a80: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3d4a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3d4a84:
    // 0x3d4a84: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x3d4a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_3d4a88:
    // 0x3d4a88: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3d4a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3d4a8c:
    // 0x3d4a8c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3d4a90:
    if (ctx->pc == 0x3D4A90u) {
        ctx->pc = 0x3D4A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A8Cu;
        // 0x3d4a90: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A94u;
        goto label_3d4a94;
    }
    ctx->pc = 0x3D4A8Cu;
    {
        const bool branch_taken_0x3d4a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4a8c) {
            ctx->pc = 0x3D4A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4A8Cu;
            // 0x3d4a90: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4AA0u;
            goto label_3d4aa0;
        }
    }
    ctx->pc = 0x3D4A94u;
label_3d4a94:
    // 0x3d4a94: 0xc0c8e22  jal         func_323888
label_3d4a98:
    if (ctx->pc == 0x3D4A98u) {
        ctx->pc = 0x3D4A9Cu;
        goto label_3d4a9c;
    }
    ctx->pc = 0x3D4A94u;
    SET_GPR_U32(ctx, 31, 0x3D4A9Cu);
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3D4A94u, 0x3D4A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A9Cu;
label_3d4a9c:
    // 0x3d4a9c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3d4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3d4aa0:
    // 0x3d4aa0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d4aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4aa4:
    // 0x3d4aa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d4aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4aa8:
    // 0x3d4aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d4aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d4aac:
    // 0x3d4aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d4aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4ab0:
    // 0x3d4ab0: 0x3e00008  jr          $ra
label_3d4ab4:
    if (ctx->pc == 0x3D4AB4u) {
        ctx->pc = 0x3D4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AB0u;
        // 0x3d4ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4AB8u;
        goto label_3d4ab8;
    }
    ctx->pc = 0x3D4AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AB0u;
        // 0x3d4ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4AB8u;
label_3d4ab8:
    // 0x3d4ab8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d4abc:
    // 0x3d4abc: 0x3e00008  jr          $ra
label_3d4ac0:
    if (ctx->pc == 0x3D4AC0u) {
        ctx->pc = 0x3D4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4ABCu;
        // 0x3d4ac0: 0xc440b22c  lwc1        $f0, -0x4DD4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4AC4u;
        goto label_3d4ac4;
    }
    ctx->pc = 0x3D4ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4ABCu;
        // 0x3d4ac0: 0xc440b22c  lwc1        $f0, -0x4DD4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4AC4u;
label_3d4ac4:
    // 0x3d4ac4: 0x0  nop
    ctx->pc = 0x3d4ac4u;
    // NOP
label_3d4ac8:
    // 0x3d4ac8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d4ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d4acc:
    // 0x3d4acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d4accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4ad0:
    // 0x3d4ad0: 0x3e00008  jr          $ra
label_3d4ad4:
    if (ctx->pc == 0x3D4AD4u) {
        ctx->pc = 0x3D4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AD0u;
        // 0x3d4ad4: 0xe46cb22c  swc1        $f12, -0x4DD4($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294947372), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4AD8u;
        goto label_3d4ad8;
    }
    ctx->pc = 0x3D4AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AD0u;
        // 0x3d4ad4: 0xe46cb22c  swc1        $f12, -0x4DD4($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294947372), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4AD8u;
label_3d4ad8:
    // 0x3d4ad8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d4ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d4adc:
    // 0x3d4adc: 0x3e00008  jr          $ra
label_3d4ae0:
    if (ctx->pc == 0x3D4AE0u) {
        ctx->pc = 0x3D4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4ADCu;
        // 0x3d4ae0: 0x8c62b204  lw          $v0, -0x4DFC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4AE4u;
        goto label_3d4ae4;
    }
    ctx->pc = 0x3D4ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4ADCu;
        // 0x3d4ae0: 0x8c62b204  lw          $v0, -0x4DFC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947332)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4AE4u;
label_3d4ae4:
    // 0x3d4ae4: 0x0  nop
    ctx->pc = 0x3d4ae4u;
    // NOP
    ctx->pc = 0x3d4ae8u;
}
