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

// Function: sub_004AE978
// Address: 0x4ae978 - 0x4aeb28
void sub_004AE978_0x4ae978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE978_0x4ae978");
#endif

    switch (ctx->pc) {
        case 0x4ae978u: goto label_4ae978;
        case 0x4ae97cu: goto label_4ae97c;
        case 0x4ae980u: goto label_4ae980;
        case 0x4ae984u: goto label_4ae984;
        case 0x4ae988u: goto label_4ae988;
        case 0x4ae98cu: goto label_4ae98c;
        case 0x4ae990u: goto label_4ae990;
        case 0x4ae994u: goto label_4ae994;
        case 0x4ae998u: goto label_4ae998;
        case 0x4ae99cu: goto label_4ae99c;
        case 0x4ae9a0u: goto label_4ae9a0;
        case 0x4ae9a4u: goto label_4ae9a4;
        case 0x4ae9a8u: goto label_4ae9a8;
        case 0x4ae9acu: goto label_4ae9ac;
        case 0x4ae9b0u: goto label_4ae9b0;
        case 0x4ae9b4u: goto label_4ae9b4;
        case 0x4ae9b8u: goto label_4ae9b8;
        case 0x4ae9bcu: goto label_4ae9bc;
        case 0x4ae9c0u: goto label_4ae9c0;
        case 0x4ae9c4u: goto label_4ae9c4;
        case 0x4ae9c8u: goto label_4ae9c8;
        case 0x4ae9ccu: goto label_4ae9cc;
        case 0x4ae9d0u: goto label_4ae9d0;
        case 0x4ae9d4u: goto label_4ae9d4;
        case 0x4ae9d8u: goto label_4ae9d8;
        case 0x4ae9dcu: goto label_4ae9dc;
        case 0x4ae9e0u: goto label_4ae9e0;
        case 0x4ae9e4u: goto label_4ae9e4;
        case 0x4ae9e8u: goto label_4ae9e8;
        case 0x4ae9ecu: goto label_4ae9ec;
        case 0x4ae9f0u: goto label_4ae9f0;
        case 0x4ae9f4u: goto label_4ae9f4;
        case 0x4ae9f8u: goto label_4ae9f8;
        case 0x4ae9fcu: goto label_4ae9fc;
        case 0x4aea00u: goto label_4aea00;
        case 0x4aea04u: goto label_4aea04;
        case 0x4aea08u: goto label_4aea08;
        case 0x4aea0cu: goto label_4aea0c;
        case 0x4aea10u: goto label_4aea10;
        case 0x4aea14u: goto label_4aea14;
        case 0x4aea18u: goto label_4aea18;
        case 0x4aea1cu: goto label_4aea1c;
        case 0x4aea20u: goto label_4aea20;
        case 0x4aea24u: goto label_4aea24;
        case 0x4aea28u: goto label_4aea28;
        case 0x4aea2cu: goto label_4aea2c;
        case 0x4aea30u: goto label_4aea30;
        case 0x4aea34u: goto label_4aea34;
        case 0x4aea38u: goto label_4aea38;
        case 0x4aea3cu: goto label_4aea3c;
        case 0x4aea40u: goto label_4aea40;
        case 0x4aea44u: goto label_4aea44;
        case 0x4aea48u: goto label_4aea48;
        case 0x4aea4cu: goto label_4aea4c;
        case 0x4aea50u: goto label_4aea50;
        case 0x4aea54u: goto label_4aea54;
        case 0x4aea58u: goto label_4aea58;
        case 0x4aea5cu: goto label_4aea5c;
        case 0x4aea60u: goto label_4aea60;
        case 0x4aea64u: goto label_4aea64;
        case 0x4aea68u: goto label_4aea68;
        case 0x4aea6cu: goto label_4aea6c;
        case 0x4aea70u: goto label_4aea70;
        case 0x4aea74u: goto label_4aea74;
        case 0x4aea78u: goto label_4aea78;
        case 0x4aea7cu: goto label_4aea7c;
        case 0x4aea80u: goto label_4aea80;
        case 0x4aea84u: goto label_4aea84;
        case 0x4aea88u: goto label_4aea88;
        case 0x4aea8cu: goto label_4aea8c;
        case 0x4aea90u: goto label_4aea90;
        case 0x4aea94u: goto label_4aea94;
        case 0x4aea98u: goto label_4aea98;
        case 0x4aea9cu: goto label_4aea9c;
        case 0x4aeaa0u: goto label_4aeaa0;
        case 0x4aeaa4u: goto label_4aeaa4;
        case 0x4aeaa8u: goto label_4aeaa8;
        case 0x4aeaacu: goto label_4aeaac;
        case 0x4aeab0u: goto label_4aeab0;
        case 0x4aeab4u: goto label_4aeab4;
        case 0x4aeab8u: goto label_4aeab8;
        case 0x4aeabcu: goto label_4aeabc;
        case 0x4aeac0u: goto label_4aeac0;
        case 0x4aeac4u: goto label_4aeac4;
        case 0x4aeac8u: goto label_4aeac8;
        case 0x4aeaccu: goto label_4aeacc;
        case 0x4aead0u: goto label_4aead0;
        case 0x4aead4u: goto label_4aead4;
        case 0x4aead8u: goto label_4aead8;
        case 0x4aeadcu: goto label_4aeadc;
        case 0x4aeae0u: goto label_4aeae0;
        case 0x4aeae4u: goto label_4aeae4;
        case 0x4aeae8u: goto label_4aeae8;
        case 0x4aeaecu: goto label_4aeaec;
        case 0x4aeaf0u: goto label_4aeaf0;
        case 0x4aeaf4u: goto label_4aeaf4;
        case 0x4aeaf8u: goto label_4aeaf8;
        case 0x4aeafcu: goto label_4aeafc;
        case 0x4aeb00u: goto label_4aeb00;
        case 0x4aeb04u: goto label_4aeb04;
        case 0x4aeb08u: goto label_4aeb08;
        case 0x4aeb0cu: goto label_4aeb0c;
        case 0x4aeb10u: goto label_4aeb10;
        case 0x4aeb14u: goto label_4aeb14;
        case 0x4aeb18u: goto label_4aeb18;
        case 0x4aeb1cu: goto label_4aeb1c;
        case 0x4aeb20u: goto label_4aeb20;
        case 0x4aeb24u: goto label_4aeb24;
        default: break;
    }

    ctx->pc = 0x4ae978u;

label_4ae978:
    // 0x4ae978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ae97c:
    // 0x4ae97c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ae97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4ae980:
    // 0x4ae980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ae984:
    // 0x4ae984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ae988:
    // 0x4ae988: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4ae988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4ae98c:
    // 0x4ae98c: 0x24a3fff7  addiu       $v1, $a1, -0x9
    ctx->pc = 0x4ae98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967287));
label_4ae990:
    // 0x4ae990: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x4ae990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4ae994:
    // 0x4ae994: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_4ae998:
    if (ctx->pc == 0x4AE998u) {
        ctx->pc = 0x4AE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE994u;
        // 0x4ae998: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE99Cu;
        goto label_4ae99c;
    }
    ctx->pc = 0x4AE994u;
    {
        const bool branch_taken_0x4ae994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE994u;
        // 0x4ae998: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae994) {
            ctx->pc = 0x4AEA54u;
            goto label_4aea54;
        }
    }
    ctx->pc = 0x4AE99Cu;
label_4ae99c:
    // 0x4ae99c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ae99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ae9a0:
    // 0x4ae9a0: 0x24422c60  addiu       $v0, $v0, 0x2C60
    ctx->pc = 0x4ae9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11360));
label_4ae9a4:
    // 0x4ae9a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ae9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ae9a8:
    // 0x4ae9a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4ae9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ae9ac:
    // 0x4ae9ac: 0x800008  jr          $a0
label_4ae9b0:
    if (ctx->pc == 0x4AE9B0u) {
        ctx->pc = 0x4AE9B4u;
        goto label_4ae9b4;
    }
    ctx->pc = 0x4AE9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4AE9B4u: goto label_4ae9b4;
            case 0x4AE9C4u: goto label_4ae9c4;
            case 0x4AE9D0u: goto label_4ae9d0;
            case 0x4AE9F0u: goto label_4ae9f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE9ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4AE9B4u;
label_4ae9b4:
    // 0x4ae9b4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x4ae9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4ae9b8:
    // 0x4ae9b8: 0xaf82b8c8  sw          $v0, -0x4738($gp)
    ctx->pc = 0x4ae9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949064), GPR_U32(ctx, 2));
label_4ae9bc:
    // 0x4ae9bc: 0x1000002d  b           . + 4 + (0x2D << 2)
label_4ae9c0:
    if (ctx->pc == 0x4AE9C0u) {
        ctx->pc = 0x4AE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE9BCu;
        // 0x4ae9c0: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE9C4u;
        goto label_4ae9c4;
    }
    ctx->pc = 0x4AE9BCu;
    {
        const bool branch_taken_0x4ae9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE9BCu;
        // 0x4ae9c0: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae9bc) {
            ctx->pc = 0x4AEA74u;
            goto label_4aea74;
        }
    }
    ctx->pc = 0x4AE9C4u;
label_4ae9c4:
    // 0x4ae9c4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x4ae9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4ae9c8:
    // 0x4ae9c8: 0x10000029  b           . + 4 + (0x29 << 2)
label_4ae9cc:
    if (ctx->pc == 0x4AE9CCu) {
        ctx->pc = 0x4AE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE9C8u;
        // 0x4ae9cc: 0xaf82b8c4  sw          $v0, -0x473C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE9D0u;
        goto label_4ae9d0;
    }
    ctx->pc = 0x4AE9C8u;
    {
        const bool branch_taken_0x4ae9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE9C8u;
        // 0x4ae9cc: 0xaf82b8c4  sw          $v0, -0x473C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae9c8) {
            ctx->pc = 0x4AEA70u;
            goto label_4aea70;
        }
    }
    ctx->pc = 0x4AE9D0u;
label_4ae9d0:
    // 0x4ae9d0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x4ae9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_4ae9d4:
    // 0x4ae9d4: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_4ae9d8:
    if (ctx->pc == 0x4AE9D8u) {
        ctx->pc = 0x4AE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE9D4u;
        // 0x4ae9d8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE9DCu;
        goto label_4ae9dc;
    }
    ctx->pc = 0x4AE9D4u;
    {
        const bool branch_taken_0x4ae9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE9D4u;
        // 0x4ae9d8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae9d4) {
            ctx->pc = 0x4AEB14u;
            goto label_4aeb14;
        }
    }
    ctx->pc = 0x4AE9DCu;
label_4ae9dc:
    // 0x4ae9dc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4ae9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4ae9e0:
    // 0x4ae9e0: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_4ae9e4:
    if (ctx->pc == 0x4AE9E4u) {
        ctx->pc = 0x4AE9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE9E0u;
        // 0x4ae9e4: 0xaf80b8bc  sw          $zero, -0x4744($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE9E8u;
        goto label_4ae9e8;
    }
    ctx->pc = 0x4AE9E0u;
    {
        const bool branch_taken_0x4ae9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ae9e0) {
            ctx->pc = 0x4AE9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AE9E0u;
            // 0x4ae9e4: 0xaf80b8bc  sw          $zero, -0x4744($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294949052), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AE9E8u;
            goto label_4ae9e8;
        }
    }
    ctx->pc = 0x4AE9E8u;
label_4ae9e8:
    // 0x4ae9e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_4ae9ec:
    if (ctx->pc == 0x4AE9ECu) {
        ctx->pc = 0x4AE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE9E8u;
        // 0x4ae9ec: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE9F0u;
        goto label_4ae9f0;
    }
    ctx->pc = 0x4AE9E8u;
    {
        const bool branch_taken_0x4ae9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE9E8u;
        // 0x4ae9ec: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae9e8) {
            ctx->pc = 0x4AEA04u;
            goto label_4aea04;
        }
    }
    ctx->pc = 0x4AE9F0u;
label_4ae9f0:
    // 0x4ae9f0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x4ae9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_4ae9f4:
    // 0x4ae9f4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_4ae9f8:
    if (ctx->pc == 0x4AE9F8u) {
        ctx->pc = 0x4AE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE9F4u;
        // 0x4ae9f8: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE9FCu;
        goto label_4ae9fc;
    }
    ctx->pc = 0x4AE9F4u;
    {
        const bool branch_taken_0x4ae9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae9f4) {
            ctx->pc = 0x4AE9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AE9F4u;
            // 0x4ae9f8: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AEA20u;
            goto label_4aea20;
        }
    }
    ctx->pc = 0x4AE9FCu;
label_4ae9fc:
    // 0x4ae9fc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4ae9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4aea00:
    // 0x4aea00: 0xaf80b8bc  sw          $zero, -0x4744($gp)
    ctx->pc = 0x4aea00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949052), GPR_U32(ctx, 0));
label_4aea04:
    // 0x4aea04: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_4aea08:
    if (ctx->pc == 0x4AEA08u) {
        ctx->pc = 0x4AEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA04u;
        // 0x4aea08: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEA0Cu;
        goto label_4aea0c;
    }
    ctx->pc = 0x4AEA04u;
    {
        const bool branch_taken_0x4aea04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aea04) {
            ctx->pc = 0x4AEA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AEA04u;
            // 0x4aea08: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AEA74u;
            goto label_4aea74;
        }
    }
    ctx->pc = 0x4AEA0Cu;
label_4aea0c:
    // 0x4aea0c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x4aea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4aea10:
    // 0x4aea10: 0x40f809  jalr        $v0
label_4aea14:
    if (ctx->pc == 0x4AEA14u) {
        ctx->pc = 0x4AEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA10u;
        // 0x4aea14: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEA18u;
        goto label_4aea18;
    }
    ctx->pc = 0x4AEA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4AEA18u);
        ctx->pc = 0x4AEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA10u;
        // 0x4aea14: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEA10u, 0x4AEA18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AEA18u;
label_4aea18:
    // 0x4aea18: 0x10000016  b           . + 4 + (0x16 << 2)
label_4aea1c:
    if (ctx->pc == 0x4AEA1Cu) {
        ctx->pc = 0x4AEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA18u;
        // 0x4aea1c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEA20u;
        goto label_4aea20;
    }
    ctx->pc = 0x4AEA18u;
    {
        const bool branch_taken_0x4aea18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA18u;
        // 0x4aea1c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aea18) {
            ctx->pc = 0x4AEA74u;
            goto label_4aea74;
        }
    }
    ctx->pc = 0x4AEA20u;
label_4aea20:
    // 0x4aea20: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x4aea20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_4aea24:
    // 0x4aea24: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4aea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4aea28:
    // 0x4aea28: 0x8f88b8c4  lw          $t0, -0x473C($gp)
    ctx->pc = 0x4aea28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949060)));
label_4aea2c:
    // 0x4aea2c: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x4aea2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4aea30:
    // 0x4aea30: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4aea30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4aea34:
    // 0x4aea34: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x4aea34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4aea38:
    // 0x4aea38: 0x62480a  movz        $t1, $v1, $v0
    ctx->pc = 0x4aea38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_4aea3c:
    // 0x4aea3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4aea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aea40:
    // 0x4aea40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4aea40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4aea44:
    // 0x4aea44: 0xc0c03aa  jal         func_300EA8
label_4aea48:
    if (ctx->pc == 0x4AEA48u) {
        ctx->pc = 0x4AEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA44u;
        // 0x4aea48: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEA4Cu;
        goto label_4aea4c;
    }
    ctx->pc = 0x4AEA44u;
    SET_GPR_U32(ctx, 31, 0x4AEA4Cu);
    ctx->pc = 0x4AEA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEA44u;
    // 0x4aea48: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300EA8u, 0x4AEA44u, 0x4AEA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEA4Cu;
label_4aea4c:
    // 0x4aea4c: 0x10000009  b           . + 4 + (0x9 << 2)
label_4aea50:
    if (ctx->pc == 0x4AEA50u) {
        ctx->pc = 0x4AEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA4Cu;
        // 0x4aea50: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEA54u;
        goto label_4aea54;
    }
    ctx->pc = 0x4AEA4Cu;
    {
        const bool branch_taken_0x4aea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA4Cu;
        // 0x4aea50: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aea4c) {
            ctx->pc = 0x4AEA74u;
            goto label_4aea74;
        }
    }
    ctx->pc = 0x4AEA54u;
label_4aea54:
    // 0x4aea54: 0x8f82b8b8  lw          $v0, -0x4748($gp)
    ctx->pc = 0x4aea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949048)));
label_4aea58:
    // 0x4aea58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4aea5c:
    if (ctx->pc == 0x4AEA5Cu) {
        ctx->pc = 0x4AEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA58u;
        // 0x4aea5c: 0x8f84b8c0  lw          $a0, -0x4740($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEA60u;
        goto label_4aea60;
    }
    ctx->pc = 0x4AEA58u;
    {
        const bool branch_taken_0x4aea58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA58u;
        // 0x4aea5c: 0x8f84b8c0  lw          $a0, -0x4740($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aea58) {
            ctx->pc = 0x4AEA70u;
            goto label_4aea70;
        }
    }
    ctx->pc = 0x4AEA60u;
label_4aea60:
    // 0x4aea60: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x4aea60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4aea64:
    // 0x4aea64: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x4aea64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4aea68:
    // 0x4aea68: 0x40f809  jalr        $v0
label_4aea6c:
    if (ctx->pc == 0x4AEA6Cu) {
        ctx->pc = 0x4AEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA68u;
        // 0x4aea6c: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEA70u;
        goto label_4aea70;
    }
    ctx->pc = 0x4AEA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4AEA70u);
        ctx->pc = 0x4AEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA68u;
        // 0x4aea6c: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEA68u, 0x4AEA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AEA70u;
label_4aea70:
    // 0x4aea70: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x4aea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_4aea74:
    // 0x4aea74: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4aea78:
    if (ctx->pc == 0x4AEA78u) {
        ctx->pc = 0x4AEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA74u;
        // 0x4aea78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEA7Cu;
        goto label_4aea7c;
    }
    ctx->pc = 0x4AEA74u;
    {
        const bool branch_taken_0x4aea74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA74u;
        // 0x4aea78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aea74) {
            ctx->pc = 0x4AEB18u;
            goto label_4aeb18;
        }
    }
    ctx->pc = 0x4AEA7Cu;
label_4aea7c:
    // 0x4aea7c: 0x8f82b8bc  lw          $v0, -0x4744($gp)
    ctx->pc = 0x4aea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949052)));
label_4aea80:
    // 0x4aea80: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_4aea84:
    if (ctx->pc == 0x4AEA84u) {
        ctx->pc = 0x4AEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA80u;
        // 0x4aea84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEA88u;
        goto label_4aea88;
    }
    ctx->pc = 0x4AEA80u;
    {
        const bool branch_taken_0x4aea80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA80u;
        // 0x4aea84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aea80) {
            ctx->pc = 0x4AEB18u;
            goto label_4aeb18;
        }
    }
    ctx->pc = 0x4AEA88u;
label_4aea88:
    // 0x4aea88: 0x8f82b8d8  lw          $v0, -0x4728($gp)
    ctx->pc = 0x4aea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949080)));
label_4aea8c:
    // 0x4aea8c: 0x8f83b8dc  lw          $v1, -0x4724($gp)
    ctx->pc = 0x4aea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949084)));
label_4aea90:
    // 0x4aea90: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4aea90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4aea94:
    // 0x4aea94: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4aea98:
    if (ctx->pc == 0x4AEA98u) {
        ctx->pc = 0x4AEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA94u;
        // 0x4aea98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEA9Cu;
        goto label_4aea9c;
    }
    ctx->pc = 0x4AEA94u;
    {
        const bool branch_taken_0x4aea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA94u;
        // 0x4aea98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aea94) {
            ctx->pc = 0x4AEB18u;
            goto label_4aeb18;
        }
    }
    ctx->pc = 0x4AEA9Cu;
label_4aea9c:
    // 0x4aea9c: 0x8f82b8d8  lw          $v0, -0x4728($gp)
    ctx->pc = 0x4aea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949080)));
label_4aeaa0:
    // 0x4aeaa0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4aeaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4aeaa4:
    // 0x4aeaa4: 0x2484c9c0  addiu       $a0, $a0, -0x3640
    ctx->pc = 0x4aeaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953408));
label_4aeaa8:
    // 0x4aeaa8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4aeaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4aeaac:
    // 0x4aeaac: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x4aeaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_4aeab0:
    // 0x4aeab0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4aeab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_4aeab4:
    // 0x4aeab4: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x4aeab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4aeab8:
    // 0x4aeab8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4aeab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4aeabc:
    // 0x4aeabc: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
label_4aeac0:
    if (ctx->pc == 0x4AEAC0u) {
        ctx->pc = 0x4AEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEABCu;
        // 0x4aeac0: 0x8f84c23c  lw          $a0, -0x3DC4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEAC4u;
        goto label_4aeac4;
    }
    ctx->pc = 0x4AEABCu;
    {
        const bool branch_taken_0x4aeabc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4AEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEABCu;
        // 0x4aeac0: 0x8f84c23c  lw          $a0, -0x3DC4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aeabc) {
            ctx->pc = 0x4AEAD0u;
            goto label_4aead0;
        }
    }
    ctx->pc = 0x4AEAC4u;
label_4aeac4:
    // 0x4aeac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4aeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4aeac8:
    // 0x4aeac8: 0xaf82b8bc  sw          $v0, -0x4744($gp)
    ctx->pc = 0x4aeac8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949052), GPR_U32(ctx, 2));
label_4aeacc:
    // 0x4aeacc: 0x8f84c23c  lw          $a0, -0x3DC4($gp)
    ctx->pc = 0x4aeaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951484)));
label_4aead0:
    // 0x4aead0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4aead4:
    if (ctx->pc == 0x4AEAD4u) {
        ctx->pc = 0x4AEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEAD0u;
        // 0x4aead4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEAD8u;
        goto label_4aead8;
    }
    ctx->pc = 0x4AEAD0u;
    {
        const bool branch_taken_0x4aead0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEAD0u;
        // 0x4aead4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aead0) {
            ctx->pc = 0x4AEAECu;
            goto label_4aeaec;
        }
    }
    ctx->pc = 0x4AEAD8u;
label_4aead8:
    // 0x4aead8: 0xc0bf7c0  jal         func_2FDF00
label_4aeadc:
    if (ctx->pc == 0x4AEADCu) {
        ctx->pc = 0x4AEAE0u;
        goto label_4aeae0;
    }
    ctx->pc = 0x4AEAD8u;
    SET_GPR_U32(ctx, 31, 0x4AEAE0u);
    ctx->pc = 0x2FDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDF00u, 0x4AEAD8u, 0x4AEAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEAE0u;
label_4aeae0:
    // 0x4aeae0: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_4aeae4:
    if (ctx->pc == 0x4AEAE4u) {
        ctx->pc = 0x4AEAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEAE0u;
        // 0x4aeae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEAE8u;
        goto label_4aeae8;
    }
    ctx->pc = 0x4AEAE0u;
    {
        const bool branch_taken_0x4aeae0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4AEAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEAE0u;
        // 0x4aeae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aeae0) {
            ctx->pc = 0x4AEB18u;
            goto label_4aeb18;
        }
    }
    ctx->pc = 0x4AEAE8u;
label_4aeae8:
    // 0x4aeae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4aeae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4aeaec:
    // 0x4aeaec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4aeaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aeaf0:
    // 0x4aeaf0: 0x8ca70030  lw          $a3, 0x30($a1)
    ctx->pc = 0x4aeaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_4aeaf4:
    // 0x4aeaf4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x4aeaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4aeaf8:
    // 0x4aeaf8: 0x8ca80034  lw          $t0, 0x34($a1)
    ctx->pc = 0x4aeaf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_4aeafc:
    // 0x4aeafc: 0xc0c03aa  jal         func_300EA8
label_4aeb00:
    if (ctx->pc == 0x4AEB00u) {
        ctx->pc = 0x4AEB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEAFCu;
        // 0x4aeb00: 0x8ca90038  lw          $t1, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEB04u;
        goto label_4aeb04;
    }
    ctx->pc = 0x4AEAFCu;
    SET_GPR_U32(ctx, 31, 0x4AEB04u);
    ctx->pc = 0x4AEB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEAFCu;
    // 0x4aeb00: 0x8ca90038  lw          $t1, 0x38($a1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300EA8u, 0x4AEAFCu, 0x4AEB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEB04u;
label_4aeb04:
    // 0x4aeb04: 0x8f83b8d8  lw          $v1, -0x4728($gp)
    ctx->pc = 0x4aeb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949080)));
label_4aeb08:
    // 0x4aeb08: 0xaf82c23c  sw          $v0, -0x3DC4($gp)
    ctx->pc = 0x4aeb08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951484), GPR_U32(ctx, 2));
label_4aeb0c:
    // 0x4aeb0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4aeb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4aeb10:
    // 0x4aeb10: 0xaf83b8d8  sw          $v1, -0x4728($gp)
    ctx->pc = 0x4aeb10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949080), GPR_U32(ctx, 3));
label_4aeb14:
    // 0x4aeb14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4aeb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4aeb18:
    // 0x4aeb18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4aeb18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4aeb1c:
    // 0x4aeb1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aeb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4aeb20:
    // 0x4aeb20: 0x3e00008  jr          $ra
label_4aeb24:
    if (ctx->pc == 0x4AEB24u) {
        ctx->pc = 0x4AEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEB20u;
        // 0x4aeb24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEB28u;
        goto label_fallthrough_0x4aeb20;
    }
    ctx->pc = 0x4AEB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEB20u;
        // 0x4aeb24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4aeb20:
    ctx->pc = 0x4AEB28u;
}
