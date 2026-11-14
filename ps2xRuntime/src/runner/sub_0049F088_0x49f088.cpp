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

// Function: sub_0049F088
// Address: 0x49f088 - 0x49f188
void sub_0049F088_0x49f088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F088_0x49f088");
#endif

    switch (ctx->pc) {
        case 0x49f088u: goto label_49f088;
        case 0x49f08cu: goto label_49f08c;
        case 0x49f090u: goto label_49f090;
        case 0x49f094u: goto label_49f094;
        case 0x49f098u: goto label_49f098;
        case 0x49f09cu: goto label_49f09c;
        case 0x49f0a0u: goto label_49f0a0;
        case 0x49f0a4u: goto label_49f0a4;
        case 0x49f0a8u: goto label_49f0a8;
        case 0x49f0acu: goto label_49f0ac;
        case 0x49f0b0u: goto label_49f0b0;
        case 0x49f0b4u: goto label_49f0b4;
        case 0x49f0b8u: goto label_49f0b8;
        case 0x49f0bcu: goto label_49f0bc;
        case 0x49f0c0u: goto label_49f0c0;
        case 0x49f0c4u: goto label_49f0c4;
        case 0x49f0c8u: goto label_49f0c8;
        case 0x49f0ccu: goto label_49f0cc;
        case 0x49f0d0u: goto label_49f0d0;
        case 0x49f0d4u: goto label_49f0d4;
        case 0x49f0d8u: goto label_49f0d8;
        case 0x49f0dcu: goto label_49f0dc;
        case 0x49f0e0u: goto label_49f0e0;
        case 0x49f0e4u: goto label_49f0e4;
        case 0x49f0e8u: goto label_49f0e8;
        case 0x49f0ecu: goto label_49f0ec;
        case 0x49f0f0u: goto label_49f0f0;
        case 0x49f0f4u: goto label_49f0f4;
        case 0x49f0f8u: goto label_49f0f8;
        case 0x49f0fcu: goto label_49f0fc;
        case 0x49f100u: goto label_49f100;
        case 0x49f104u: goto label_49f104;
        case 0x49f108u: goto label_49f108;
        case 0x49f10cu: goto label_49f10c;
        case 0x49f110u: goto label_49f110;
        case 0x49f114u: goto label_49f114;
        case 0x49f118u: goto label_49f118;
        case 0x49f11cu: goto label_49f11c;
        case 0x49f120u: goto label_49f120;
        case 0x49f124u: goto label_49f124;
        case 0x49f128u: goto label_49f128;
        case 0x49f12cu: goto label_49f12c;
        case 0x49f130u: goto label_49f130;
        case 0x49f134u: goto label_49f134;
        case 0x49f138u: goto label_49f138;
        case 0x49f13cu: goto label_49f13c;
        case 0x49f140u: goto label_49f140;
        case 0x49f144u: goto label_49f144;
        case 0x49f148u: goto label_49f148;
        case 0x49f14cu: goto label_49f14c;
        case 0x49f150u: goto label_49f150;
        case 0x49f154u: goto label_49f154;
        case 0x49f158u: goto label_49f158;
        case 0x49f15cu: goto label_49f15c;
        case 0x49f160u: goto label_49f160;
        case 0x49f164u: goto label_49f164;
        case 0x49f168u: goto label_49f168;
        case 0x49f16cu: goto label_49f16c;
        case 0x49f170u: goto label_49f170;
        case 0x49f174u: goto label_49f174;
        case 0x49f178u: goto label_49f178;
        case 0x49f17cu: goto label_49f17c;
        case 0x49f180u: goto label_49f180;
        case 0x49f184u: goto label_49f184;
        default: break;
    }

    ctx->pc = 0x49f088u;

label_49f088:
    // 0x49f088: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49f088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49f08c:
    // 0x49f08c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49f08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_49f090:
    // 0x49f090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49f090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49f094:
    // 0x49f094: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49f094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_49f098:
    // 0x49f098: 0x24920004  addiu       $s2, $a0, 0x4
    ctx->pc = 0x49f098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_49f09c:
    // 0x49f09c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49f0a0:
    // 0x49f0a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x49f0a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49f0a4:
    // 0x49f0a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49f0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_49f0a8:
    // 0x49f0a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_49f0ac:
    if (ctx->pc == 0x49F0ACu) {
        ctx->pc = 0x49F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0A8u;
        // 0x49f0ac: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F0B0u;
        goto label_49f0b0;
    }
    ctx->pc = 0x49F0A8u;
    {
        const bool branch_taken_0x49f0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0A8u;
        // 0x49f0ac: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f0a8) {
            ctx->pc = 0x49F0C0u;
            goto label_49f0c0;
        }
    }
    ctx->pc = 0x49F0B0u;
label_49f0b0:
    // 0x49f0b0: 0x16120004  bne         $s0, $s2, . + 4 + (0x4 << 2)
label_49f0b4:
    if (ctx->pc == 0x49F0B4u) {
        ctx->pc = 0x49F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0B0u;
        // 0x49f0b4: 0x2611ffe0  addiu       $s1, $s0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F0B8u;
        goto label_49f0b8;
    }
    ctx->pc = 0x49F0B0u;
    {
        const bool branch_taken_0x49f0b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x49F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0B0u;
        // 0x49f0b4: 0x2611ffe0  addiu       $s1, $s0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f0b0) {
            ctx->pc = 0x49F0C4u;
            goto label_49f0c4;
        }
    }
    ctx->pc = 0x49F0B8u;
label_49f0b8:
    // 0x49f0b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_49f0bc:
    if (ctx->pc == 0x49F0BCu) {
        ctx->pc = 0x49F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0B8u;
        // 0x49f0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F0C0u;
        goto label_49f0c0;
    }
    ctx->pc = 0x49F0B8u;
    {
        const bool branch_taken_0x49f0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0B8u;
        // 0x49f0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f0b8) {
            ctx->pc = 0x49F0DCu;
            goto label_49f0dc;
        }
    }
    ctx->pc = 0x49F0C0u;
label_49f0c0:
    // 0x49f0c0: 0x2611ffe0  addiu       $s1, $s0, -0x20
    ctx->pc = 0x49f0c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
label_49f0c4:
    // 0x49f0c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x49f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_49f0c8:
    // 0x49f0c8: 0xc12a3ec  jal         func_4A8FB0
label_49f0cc:
    if (ctx->pc == 0x49F0CCu) {
        ctx->pc = 0x49F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0C8u;
        // 0x49f0cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F0D0u;
        goto label_49f0d0;
    }
    ctx->pc = 0x49F0C8u;
    SET_GPR_U32(ctx, 31, 0x49F0D0u);
    ctx->pc = 0x49F0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F0C8u;
    // 0x49f0cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x49F0C8u, 0x49F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F0D0u;
label_49f0d0:
    // 0x49f0d0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_49f0d4:
    if (ctx->pc == 0x49F0D4u) {
        ctx->pc = 0x49F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0D0u;
        // 0x49f0d4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F0D8u;
        goto label_49f0d8;
    }
    ctx->pc = 0x49F0D0u;
    {
        const bool branch_taken_0x49f0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49f0d0) {
            ctx->pc = 0x49F0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F0D0u;
            // 0x49f0d4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f0b0;
        }
    }
    ctx->pc = 0x49F0D8u;
label_49f0d8:
    // 0x49f0d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49f0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49f0dc:
    // 0x49f0dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49f0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49f0e0:
    // 0x49f0e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49f0e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49f0e4:
    // 0x49f0e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49f0e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49f0e8:
    // 0x49f0e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49f0e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49f0ec:
    // 0x49f0ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49f0f0:
    // 0x49f0f0: 0x3e00008  jr          $ra
label_49f0f4:
    if (ctx->pc == 0x49F0F4u) {
        ctx->pc = 0x49F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0F0u;
        // 0x49f0f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F0F8u;
        goto label_49f0f8;
    }
    ctx->pc = 0x49F0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0F0u;
        // 0x49f0f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F0F8u;
label_49f0f8:
    // 0x49f0f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49f0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_49f0fc:
    // 0x49f0fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x49f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_49f100:
    // 0x49f100: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x49f100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_49f104:
    // 0x49f104: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x49f104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_49f108:
    // 0x49f108: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x49f108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49f10c:
    // 0x49f10c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x49f10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_49f110:
    // 0x49f110: 0x24930004  addiu       $s3, $a0, 0x4
    ctx->pc = 0x49f110u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_49f114:
    // 0x49f114: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x49f114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_49f118:
    // 0x49f118: 0x2454e880  addiu       $s4, $v0, -0x1780
    ctx->pc = 0x49f118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_49f11c:
    // 0x49f11c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49f120:
    // 0x49f120: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x49f120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_49f124:
    // 0x49f124: 0x10000006  b           . + 4 + (0x6 << 2)
label_49f128:
    if (ctx->pc == 0x49F128u) {
        ctx->pc = 0x49F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F124u;
        // 0x49f128: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F12Cu;
        goto label_49f12c;
    }
    ctx->pc = 0x49F124u;
    {
        const bool branch_taken_0x49f124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F124u;
        // 0x49f128: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f124) {
            ctx->pc = 0x49F140u;
            goto label_49f140;
        }
    }
    ctx->pc = 0x49F12Cu;
label_49f12c:
    // 0x49f12c: 0x0  nop
    ctx->pc = 0x49f12cu;
    // NOP
label_49f130:
    // 0x49f130: 0x16130004  bne         $s0, $s3, . + 4 + (0x4 << 2)
label_49f134:
    if (ctx->pc == 0x49F134u) {
        ctx->pc = 0x49F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F130u;
        // 0x49f134: 0x2611ffe0  addiu       $s1, $s0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F138u;
        goto label_49f138;
    }
    ctx->pc = 0x49F130u;
    {
        const bool branch_taken_0x49f130 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x49F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F130u;
        // 0x49f134: 0x2611ffe0  addiu       $s1, $s0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f130) {
            ctx->pc = 0x49F144u;
            goto label_49f144;
        }
    }
    ctx->pc = 0x49F138u;
label_49f138:
    // 0x49f138: 0x1000000b  b           . + 4 + (0xB << 2)
label_49f13c:
    if (ctx->pc == 0x49F13Cu) {
        ctx->pc = 0x49F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F138u;
        // 0x49f13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F140u;
        goto label_49f140;
    }
    ctx->pc = 0x49F138u;
    {
        const bool branch_taken_0x49f138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F138u;
        // 0x49f13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f138) {
            ctx->pc = 0x49F168u;
            goto label_49f168;
        }
    }
    ctx->pc = 0x49F140u;
label_49f140:
    // 0x49f140: 0x2611ffe0  addiu       $s1, $s0, -0x20
    ctx->pc = 0x49f140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
label_49f144:
    // 0x49f144: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x49f144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_49f148:
    // 0x49f148: 0x5080fff9  beql        $a0, $zero, . + 4 + (-0x7 << 2)
label_49f14c:
    if (ctx->pc == 0x49F14Cu) {
        ctx->pc = 0x49F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F148u;
        // 0x49f14c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F150u;
        goto label_49f150;
    }
    ctx->pc = 0x49F148u;
    {
        const bool branch_taken_0x49f148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f148) {
            ctx->pc = 0x49F14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F148u;
            // 0x49f14c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f130;
        }
    }
    ctx->pc = 0x49F150u;
label_49f150:
    // 0x49f150: 0x8e8200e8  lw          $v0, 0xE8($s4)
    ctx->pc = 0x49f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_49f154:
    // 0x49f154: 0x40f809  jalr        $v0
label_49f158:
    if (ctx->pc == 0x49F158u) {
        ctx->pc = 0x49F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F154u;
        // 0x49f158: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F15Cu;
        goto label_49f15c;
    }
    ctx->pc = 0x49F154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49F15Cu);
        ctx->pc = 0x49F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F154u;
        // 0x49f158: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F154u, 0x49F15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49F15Cu;
label_49f15c:
    // 0x49f15c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_49f160:
    if (ctx->pc == 0x49F160u) {
        ctx->pc = 0x49F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F15Cu;
        // 0x49f160: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F164u;
        goto label_49f164;
    }
    ctx->pc = 0x49F15Cu;
    {
        const bool branch_taken_0x49f15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49f15c) {
            ctx->pc = 0x49F160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F15Cu;
            // 0x49f160: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f130;
        }
    }
    ctx->pc = 0x49F164u;
label_49f164:
    // 0x49f164: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49f164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49f168:
    // 0x49f168: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x49f168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49f16c:
    // 0x49f16c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x49f16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49f170:
    // 0x49f170: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x49f170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49f174:
    // 0x49f174: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x49f174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49f178:
    // 0x49f178: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x49f178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49f17c:
    // 0x49f17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49f180:
    // 0x49f180: 0x3e00008  jr          $ra
label_49f184:
    if (ctx->pc == 0x49F184u) {
        ctx->pc = 0x49F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F180u;
        // 0x49f184: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F188u;
        goto label_fallthrough_0x49f180;
    }
    ctx->pc = 0x49F180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F180u;
        // 0x49f184: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x49f180:
    ctx->pc = 0x49F188u;
}
