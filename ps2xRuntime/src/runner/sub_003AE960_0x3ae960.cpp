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

// Function: sub_003AE960
// Address: 0x3ae960 - 0x3aea90
void sub_003AE960_0x3ae960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE960_0x3ae960");
#endif

    switch (ctx->pc) {
        case 0x3ae960u: goto label_3ae960;
        case 0x3ae964u: goto label_3ae964;
        case 0x3ae968u: goto label_3ae968;
        case 0x3ae96cu: goto label_3ae96c;
        case 0x3ae970u: goto label_3ae970;
        case 0x3ae974u: goto label_3ae974;
        case 0x3ae978u: goto label_3ae978;
        case 0x3ae97cu: goto label_3ae97c;
        case 0x3ae980u: goto label_3ae980;
        case 0x3ae984u: goto label_3ae984;
        case 0x3ae988u: goto label_3ae988;
        case 0x3ae98cu: goto label_3ae98c;
        case 0x3ae990u: goto label_3ae990;
        case 0x3ae994u: goto label_3ae994;
        case 0x3ae998u: goto label_3ae998;
        case 0x3ae99cu: goto label_3ae99c;
        case 0x3ae9a0u: goto label_3ae9a0;
        case 0x3ae9a4u: goto label_3ae9a4;
        case 0x3ae9a8u: goto label_3ae9a8;
        case 0x3ae9acu: goto label_3ae9ac;
        case 0x3ae9b0u: goto label_3ae9b0;
        case 0x3ae9b4u: goto label_3ae9b4;
        case 0x3ae9b8u: goto label_3ae9b8;
        case 0x3ae9bcu: goto label_3ae9bc;
        case 0x3ae9c0u: goto label_3ae9c0;
        case 0x3ae9c4u: goto label_3ae9c4;
        case 0x3ae9c8u: goto label_3ae9c8;
        case 0x3ae9ccu: goto label_3ae9cc;
        case 0x3ae9d0u: goto label_3ae9d0;
        case 0x3ae9d4u: goto label_3ae9d4;
        case 0x3ae9d8u: goto label_3ae9d8;
        case 0x3ae9dcu: goto label_3ae9dc;
        case 0x3ae9e0u: goto label_3ae9e0;
        case 0x3ae9e4u: goto label_3ae9e4;
        case 0x3ae9e8u: goto label_3ae9e8;
        case 0x3ae9ecu: goto label_3ae9ec;
        case 0x3ae9f0u: goto label_3ae9f0;
        case 0x3ae9f4u: goto label_3ae9f4;
        case 0x3ae9f8u: goto label_3ae9f8;
        case 0x3ae9fcu: goto label_3ae9fc;
        case 0x3aea00u: goto label_3aea00;
        case 0x3aea04u: goto label_3aea04;
        case 0x3aea08u: goto label_3aea08;
        case 0x3aea0cu: goto label_3aea0c;
        case 0x3aea10u: goto label_3aea10;
        case 0x3aea14u: goto label_3aea14;
        case 0x3aea18u: goto label_3aea18;
        case 0x3aea1cu: goto label_3aea1c;
        case 0x3aea20u: goto label_3aea20;
        case 0x3aea24u: goto label_3aea24;
        case 0x3aea28u: goto label_3aea28;
        case 0x3aea2cu: goto label_3aea2c;
        case 0x3aea30u: goto label_3aea30;
        case 0x3aea34u: goto label_3aea34;
        case 0x3aea38u: goto label_3aea38;
        case 0x3aea3cu: goto label_3aea3c;
        case 0x3aea40u: goto label_3aea40;
        case 0x3aea44u: goto label_3aea44;
        case 0x3aea48u: goto label_3aea48;
        case 0x3aea4cu: goto label_3aea4c;
        case 0x3aea50u: goto label_3aea50;
        case 0x3aea54u: goto label_3aea54;
        case 0x3aea58u: goto label_3aea58;
        case 0x3aea5cu: goto label_3aea5c;
        case 0x3aea60u: goto label_3aea60;
        case 0x3aea64u: goto label_3aea64;
        case 0x3aea68u: goto label_3aea68;
        case 0x3aea6cu: goto label_3aea6c;
        case 0x3aea70u: goto label_3aea70;
        case 0x3aea74u: goto label_3aea74;
        case 0x3aea78u: goto label_3aea78;
        case 0x3aea7cu: goto label_3aea7c;
        case 0x3aea80u: goto label_3aea80;
        case 0x3aea84u: goto label_3aea84;
        case 0x3aea88u: goto label_3aea88;
        case 0x3aea8cu: goto label_3aea8c;
        default: break;
    }

    ctx->pc = 0x3ae960u;

label_3ae960:
    // 0x3ae960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ae960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3ae964:
    // 0x3ae964: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3ae964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3ae968:
    // 0x3ae968: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x3ae968u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
label_3ae96c:
    // 0x3ae96c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3ae96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3ae970:
    // 0x3ae970: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ae970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ae974:
    // 0x3ae974: 0x2642ce80  addiu       $v0, $s2, -0x3180
    ctx->pc = 0x3ae974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954624));
label_3ae978:
    // 0x3ae978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ae97c:
    // 0x3ae97c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x3ae97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3ae980:
    // 0x3ae980: 0x24500590  addiu       $s0, $v0, 0x590
    ctx->pc = 0x3ae980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1424));
label_3ae984:
    // 0x3ae984: 0x0  nop
    ctx->pc = 0x3ae984u;
    // NOP
label_3ae988:
    // 0x3ae988: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ae988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ae98c:
    // 0x3ae98c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3ae990:
    if (ctx->pc == 0x3AE990u) {
        ctx->pc = 0x3AE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE98Cu;
        // 0x3ae990: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE994u;
        goto label_3ae994;
    }
    ctx->pc = 0x3AE98Cu;
    {
        const bool branch_taken_0x3ae98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae98c) {
            ctx->pc = 0x3AE990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE98Cu;
            // 0x3ae990: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE9A4u;
            goto label_3ae9a4;
        }
    }
    ctx->pc = 0x3AE994u;
label_3ae994:
    // 0x3ae994: 0xc103da2  jal         func_40F688
label_3ae998:
    if (ctx->pc == 0x3AE998u) {
        ctx->pc = 0x3AE99Cu;
        goto label_3ae99c;
    }
    ctx->pc = 0x3AE994u;
    SET_GPR_U32(ctx, 31, 0x3AE99Cu);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x3AE994u, 0x3AE99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE99Cu;
label_3ae99c:
    // 0x3ae99c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3ae99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3ae9a0:
    // 0x3ae9a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3ae9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ae9a4:
    // 0x3ae9a4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3ae9a8:
    if (ctx->pc == 0x3AE9A8u) {
        ctx->pc = 0x3AE9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9A4u;
        // 0x3ae9a8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE9ACu;
        goto label_3ae9ac;
    }
    ctx->pc = 0x3AE9A4u;
    {
        const bool branch_taken_0x3ae9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae9a4) {
            ctx->pc = 0x3AE9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE9A4u;
            // 0x3ae9a8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE9BCu;
            goto label_3ae9bc;
        }
    }
    ctx->pc = 0x3AE9ACu;
label_3ae9ac:
    // 0x3ae9ac: 0xc103da2  jal         func_40F688
label_3ae9b0:
    if (ctx->pc == 0x3AE9B0u) {
        ctx->pc = 0x3AE9B4u;
        goto label_3ae9b4;
    }
    ctx->pc = 0x3AE9ACu;
    SET_GPR_U32(ctx, 31, 0x3AE9B4u);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x3AE9ACu, 0x3AE9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE9B4u;
label_3ae9b4:
    // 0x3ae9b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3ae9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3ae9b8:
    // 0x3ae9b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3ae9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ae9bc:
    // 0x3ae9bc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3ae9c0:
    if (ctx->pc == 0x3AE9C0u) {
        ctx->pc = 0x3AE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9BCu;
        // 0x3ae9c0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE9C4u;
        goto label_3ae9c4;
    }
    ctx->pc = 0x3AE9BCu;
    {
        const bool branch_taken_0x3ae9bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae9bc) {
            ctx->pc = 0x3AE9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE9BCu;
            // 0x3ae9c0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE9D4u;
            goto label_3ae9d4;
        }
    }
    ctx->pc = 0x3AE9C4u;
label_3ae9c4:
    // 0x3ae9c4: 0xc103da2  jal         func_40F688
label_3ae9c8:
    if (ctx->pc == 0x3AE9C8u) {
        ctx->pc = 0x3AE9CCu;
        goto label_3ae9cc;
    }
    ctx->pc = 0x3AE9C4u;
    SET_GPR_U32(ctx, 31, 0x3AE9CCu);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x3AE9C4u, 0x3AE9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE9CCu;
label_3ae9cc:
    // 0x3ae9cc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3ae9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3ae9d0:
    // 0x3ae9d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3ae9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3ae9d4:
    // 0x3ae9d4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3ae9d8:
    if (ctx->pc == 0x3AE9D8u) {
        ctx->pc = 0x3AE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9D4u;
        // 0x3ae9d8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE9DCu;
        goto label_3ae9dc;
    }
    ctx->pc = 0x3AE9D4u;
    {
        const bool branch_taken_0x3ae9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae9d4) {
            ctx->pc = 0x3AE9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE9D4u;
            // 0x3ae9d8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE9ECu;
            goto label_3ae9ec;
        }
    }
    ctx->pc = 0x3AE9DCu;
label_3ae9dc:
    // 0x3ae9dc: 0xc103da2  jal         func_40F688
label_3ae9e0:
    if (ctx->pc == 0x3AE9E0u) {
        ctx->pc = 0x3AE9E4u;
        goto label_3ae9e4;
    }
    ctx->pc = 0x3AE9DCu;
    SET_GPR_U32(ctx, 31, 0x3AE9E4u);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x3AE9DCu, 0x3AE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE9E4u;
label_3ae9e4:
    // 0x3ae9e4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3ae9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3ae9e8:
    // 0x3ae9e8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3ae9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3ae9ec:
    // 0x3ae9ec: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3ae9f0:
    if (ctx->pc == 0x3AE9F0u) {
        ctx->pc = 0x3AE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9ECu;
        // 0x3ae9f0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE9F4u;
        goto label_3ae9f4;
    }
    ctx->pc = 0x3AE9ECu;
    {
        const bool branch_taken_0x3ae9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae9ec) {
            ctx->pc = 0x3AE9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE9ECu;
            // 0x3ae9f0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEA04u;
            goto label_3aea04;
        }
    }
    ctx->pc = 0x3AE9F4u;
label_3ae9f4:
    // 0x3ae9f4: 0xc103da2  jal         func_40F688
label_3ae9f8:
    if (ctx->pc == 0x3AE9F8u) {
        ctx->pc = 0x3AE9FCu;
        goto label_3ae9fc;
    }
    ctx->pc = 0x3AE9F4u;
    SET_GPR_U32(ctx, 31, 0x3AE9FCu);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x3AE9F4u, 0x3AE9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE9FCu;
label_3ae9fc:
    // 0x3ae9fc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3ae9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3aea00:
    // 0x3aea00: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3aea00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3aea04:
    // 0x3aea04: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3aea08:
    if (ctx->pc == 0x3AEA08u) {
        ctx->pc = 0x3AEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA04u;
        // 0x3aea08: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA0Cu;
        goto label_3aea0c;
    }
    ctx->pc = 0x3AEA04u;
    {
        const bool branch_taken_0x3aea04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aea04) {
            ctx->pc = 0x3AEA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEA04u;
            // 0x3aea08: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEA1Cu;
            goto label_3aea1c;
        }
    }
    ctx->pc = 0x3AEA0Cu;
label_3aea0c:
    // 0x3aea0c: 0xc103da2  jal         func_40F688
label_3aea10:
    if (ctx->pc == 0x3AEA10u) {
        ctx->pc = 0x3AEA14u;
        goto label_3aea14;
    }
    ctx->pc = 0x3AEA0Cu;
    SET_GPR_U32(ctx, 31, 0x3AEA14u);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x3AEA0Cu, 0x3AEA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA14u;
label_3aea14:
    // 0x3aea14: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3aea14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3aea18:
    // 0x3aea18: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3aea18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3aea1c:
    // 0x3aea1c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3aea20:
    if (ctx->pc == 0x3AEA20u) {
        ctx->pc = 0x3AEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA1Cu;
        // 0x3aea20: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA24u;
        goto label_3aea24;
    }
    ctx->pc = 0x3AEA1Cu;
    {
        const bool branch_taken_0x3aea1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aea1c) {
            ctx->pc = 0x3AEA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEA1Cu;
            // 0x3aea20: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEA34u;
            goto label_3aea34;
        }
    }
    ctx->pc = 0x3AEA24u;
label_3aea24:
    // 0x3aea24: 0xc103da2  jal         func_40F688
label_3aea28:
    if (ctx->pc == 0x3AEA28u) {
        ctx->pc = 0x3AEA2Cu;
        goto label_3aea2c;
    }
    ctx->pc = 0x3AEA24u;
    SET_GPR_U32(ctx, 31, 0x3AEA2Cu);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x3AEA24u, 0x3AEA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA2Cu;
label_3aea2c:
    // 0x3aea2c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3aea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3aea30:
    // 0x3aea30: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3aea30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3aea34:
    // 0x3aea34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3aea38:
    if (ctx->pc == 0x3AEA38u) {
        ctx->pc = 0x3AEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA34u;
        // 0x3aea38: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA3Cu;
        goto label_3aea3c;
    }
    ctx->pc = 0x3AEA34u;
    {
        const bool branch_taken_0x3aea34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA34u;
        // 0x3aea38: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aea34) {
            ctx->pc = 0x3AEA48u;
            goto label_3aea48;
        }
    }
    ctx->pc = 0x3AEA3Cu;
label_3aea3c:
    // 0x3aea3c: 0xc103da2  jal         func_40F688
label_3aea40:
    if (ctx->pc == 0x3AEA40u) {
        ctx->pc = 0x3AEA44u;
        goto label_3aea44;
    }
    ctx->pc = 0x3AEA3Cu;
    SET_GPR_U32(ctx, 31, 0x3AEA44u);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x3AEA3Cu, 0x3AEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA44u;
label_3aea44:
    // 0x3aea44: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3aea44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3aea48:
    // 0x3aea48: 0x621ffcf  bgez        $s1, . + 4 + (-0x31 << 2)
label_3aea4c:
    if (ctx->pc == 0x3AEA4Cu) {
        ctx->pc = 0x3AEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA48u;
        // 0x3aea4c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA50u;
        goto label_3aea50;
    }
    ctx->pc = 0x3AEA48u;
    {
        const bool branch_taken_0x3aea48 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3AEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA48u;
        // 0x3aea4c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aea48) {
            ctx->pc = 0x3AE988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ae988;
        }
    }
    ctx->pc = 0x3AEA50u;
label_3aea50:
    // 0x3aea50: 0x2650ce80  addiu       $s0, $s2, -0x3180
    ctx->pc = 0x3aea50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954624));
label_3aea54:
    // 0x3aea54: 0x8e040d1c  lw          $a0, 0xD1C($s0)
    ctx->pc = 0x3aea54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3356)));
label_3aea58:
    // 0x3aea58: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_3aea5c:
    if (ctx->pc == 0x3AEA5Cu) {
        ctx->pc = 0x3AEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA58u;
        // 0x3aea5c: 0xae000610  sw          $zero, 0x610($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA60u;
        goto label_3aea60;
    }
    ctx->pc = 0x3AEA58u;
    {
        const bool branch_taken_0x3aea58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA58u;
        // 0x3aea5c: 0xae000610  sw          $zero, 0x610($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aea58) {
            ctx->pc = 0x3AEA78u;
            goto label_3aea78;
        }
    }
    ctx->pc = 0x3AEA60u;
label_3aea60:
    // 0x3aea60: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3aea60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3aea64:
    // 0x3aea64: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3aea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3aea68:
    // 0x3aea68: 0x40f809  jalr        $v0
label_3aea6c:
    if (ctx->pc == 0x3AEA6Cu) {
        ctx->pc = 0x3AEA70u;
        goto label_3aea70;
    }
    ctx->pc = 0x3AEA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AEA70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEA68u, 0x3AEA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEA70u;
label_3aea70:
    // 0x3aea70: 0xae000d20  sw          $zero, 0xD20($s0)
    ctx->pc = 0x3aea70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3360), GPR_U32(ctx, 0));
label_3aea74:
    // 0x3aea74: 0xae000d1c  sw          $zero, 0xD1C($s0)
    ctx->pc = 0x3aea74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3356), GPR_U32(ctx, 0));
label_3aea78:
    // 0x3aea78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3aea78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3aea7c:
    // 0x3aea7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3aea7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aea80:
    // 0x3aea80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3aea80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3aea84:
    // 0x3aea84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aea84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aea88:
    // 0x3aea88: 0x3e00008  jr          $ra
label_3aea8c:
    if (ctx->pc == 0x3AEA8Cu) {
        ctx->pc = 0x3AEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA88u;
        // 0x3aea8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA90u;
        goto label_fallthrough_0x3aea88;
    }
    ctx->pc = 0x3AEA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA88u;
        // 0x3aea8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3aea88:
    ctx->pc = 0x3AEA90u;
}
