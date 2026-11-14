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

// Function: sub_00343A68
// Address: 0x343a68 - 0x343b30
void sub_00343A68_0x343a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343A68_0x343a68");
#endif

    switch (ctx->pc) {
        case 0x343a68u: goto label_343a68;
        case 0x343a6cu: goto label_343a6c;
        case 0x343a70u: goto label_343a70;
        case 0x343a74u: goto label_343a74;
        case 0x343a78u: goto label_343a78;
        case 0x343a7cu: goto label_343a7c;
        case 0x343a80u: goto label_343a80;
        case 0x343a84u: goto label_343a84;
        case 0x343a88u: goto label_343a88;
        case 0x343a8cu: goto label_343a8c;
        case 0x343a90u: goto label_343a90;
        case 0x343a94u: goto label_343a94;
        case 0x343a98u: goto label_343a98;
        case 0x343a9cu: goto label_343a9c;
        case 0x343aa0u: goto label_343aa0;
        case 0x343aa4u: goto label_343aa4;
        case 0x343aa8u: goto label_343aa8;
        case 0x343aacu: goto label_343aac;
        case 0x343ab0u: goto label_343ab0;
        case 0x343ab4u: goto label_343ab4;
        case 0x343ab8u: goto label_343ab8;
        case 0x343abcu: goto label_343abc;
        case 0x343ac0u: goto label_343ac0;
        case 0x343ac4u: goto label_343ac4;
        case 0x343ac8u: goto label_343ac8;
        case 0x343accu: goto label_343acc;
        case 0x343ad0u: goto label_343ad0;
        case 0x343ad4u: goto label_343ad4;
        case 0x343ad8u: goto label_343ad8;
        case 0x343adcu: goto label_343adc;
        case 0x343ae0u: goto label_343ae0;
        case 0x343ae4u: goto label_343ae4;
        case 0x343ae8u: goto label_343ae8;
        case 0x343aecu: goto label_343aec;
        case 0x343af0u: goto label_343af0;
        case 0x343af4u: goto label_343af4;
        case 0x343af8u: goto label_343af8;
        case 0x343afcu: goto label_343afc;
        case 0x343b00u: goto label_343b00;
        case 0x343b04u: goto label_343b04;
        case 0x343b08u: goto label_343b08;
        case 0x343b0cu: goto label_343b0c;
        case 0x343b10u: goto label_343b10;
        case 0x343b14u: goto label_343b14;
        case 0x343b18u: goto label_343b18;
        case 0x343b1cu: goto label_343b1c;
        case 0x343b20u: goto label_343b20;
        case 0x343b24u: goto label_343b24;
        case 0x343b28u: goto label_343b28;
        case 0x343b2cu: goto label_343b2c;
        default: break;
    }

    ctx->pc = 0x343a68u;

label_343a68:
    // 0x343a68: 0x3e00008  jr          $ra
label_343a6c:
    if (ctx->pc == 0x343A6Cu) {
        ctx->pc = 0x343A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A68u;
        // 0x343a6c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343A70u;
        goto label_343a70;
    }
    ctx->pc = 0x343A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A68u;
        // 0x343a6c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343A70u;
label_343a70:
    // 0x343a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x343a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_343a74:
    // 0x343a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343a78:
    // 0x343a78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x343a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_343a7c:
    // 0x343a7c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x343a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_343a80:
    // 0x343a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_343a84:
    // 0x343a84: 0xc0bb7e6  jal         func_2EDF98
label_343a88:
    if (ctx->pc == 0x343A88u) {
        ctx->pc = 0x343A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A84u;
        // 0x343a88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343A8Cu;
        goto label_343a8c;
    }
    ctx->pc = 0x343A84u;
    SET_GPR_U32(ctx, 31, 0x343A8Cu);
    ctx->pc = 0x343A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343A84u;
    // 0x343a88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x343A84u, 0x343A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A8Cu;
label_343a8c:
    // 0x343a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343a90:
    // 0x343a90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x343a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343a94:
    // 0x343a94: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x343a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_343a98:
    // 0x343a98: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x343a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_343a9c:
    // 0x343a9c: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x343a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
label_343aa0:
    // 0x343aa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x343aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_343aa4:
    // 0x343aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_343aa8:
    // 0x343aa8: 0x3e00008  jr          $ra
label_343aac:
    if (ctx->pc == 0x343AACu) {
        ctx->pc = 0x343AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AA8u;
        // 0x343aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343AB0u;
        goto label_343ab0;
    }
    ctx->pc = 0x343AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AA8u;
        // 0x343aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343AB0u;
label_343ab0:
    // 0x343ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x343ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_343ab4:
    // 0x343ab4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x343ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_343ab8:
    // 0x343ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_343abc:
    // 0x343abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x343abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_343ac0:
    // 0x343ac0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x343ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_343ac4:
    // 0x343ac4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_343ac8:
    if (ctx->pc == 0x343AC8u) {
        ctx->pc = 0x343AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AC4u;
        // 0x343ac8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343ACCu;
        goto label_343acc;
    }
    ctx->pc = 0x343AC4u;
    {
        const bool branch_taken_0x343ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x343AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AC4u;
        // 0x343ac8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ac4) {
            ctx->pc = 0x343AD8u;
            goto label_343ad8;
        }
    }
    ctx->pc = 0x343ACCu;
label_343acc:
    // 0x343acc: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x343accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_343ad0:
    // 0x343ad0: 0x40f809  jalr        $v0
label_343ad4:
    if (ctx->pc == 0x343AD4u) {
        ctx->pc = 0x343AD8u;
        goto label_343ad8;
    }
    ctx->pc = 0x343AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343AD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343AD0u, 0x343AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343AD8u;
label_343ad8:
    // 0x343ad8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x343ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_343adc:
    // 0x343adc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_343ae0:
    if (ctx->pc == 0x343AE0u) {
        ctx->pc = 0x343AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343ADCu;
        // 0x343ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343AE4u;
        goto label_343ae4;
    }
    ctx->pc = 0x343ADCu;
    {
        const bool branch_taken_0x343adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x343adc) {
            ctx->pc = 0x343AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343ADCu;
            // 0x343ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343AF0u;
            goto label_343af0;
        }
    }
    ctx->pc = 0x343AE4u;
label_343ae4:
    // 0x343ae4: 0xc0d1054  jal         func_344150
label_343ae8:
    if (ctx->pc == 0x343AE8u) {
        ctx->pc = 0x343AECu;
        goto label_343aec;
    }
    ctx->pc = 0x343AE4u;
    SET_GPR_U32(ctx, 31, 0x343AECu);
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x343AE4u, 0x343AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343AECu;
label_343aec:
    // 0x343aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x343aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343af0:
    // 0x343af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343af4:
    // 0x343af4: 0xc0bb7e6  jal         func_2EDF98
label_343af8:
    if (ctx->pc == 0x343AF8u) {
        ctx->pc = 0x343AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AF4u;
        // 0x343af8: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343AFCu;
        goto label_343afc;
    }
    ctx->pc = 0x343AF4u;
    SET_GPR_U32(ctx, 31, 0x343AFCu);
    ctx->pc = 0x343AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343AF4u;
    // 0x343af8: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x343AF4u, 0x343AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343AFCu;
label_343afc:
    // 0x343afc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x343afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343b00:
    // 0x343b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_343b04:
    // 0x343b04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x343b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_343b08:
    // 0x343b08: 0x3e00008  jr          $ra
label_343b0c:
    if (ctx->pc == 0x343B0Cu) {
        ctx->pc = 0x343B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B08u;
        // 0x343b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343B10u;
        goto label_343b10;
    }
    ctx->pc = 0x343B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B08u;
        // 0x343b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343B10u;
label_343b10:
    // 0x343b10: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_343b14:
    if (ctx->pc == 0x343B14u) {
        ctx->pc = 0x343B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B10u;
        // 0x343b14: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343B18u;
        goto label_343b18;
    }
    ctx->pc = 0x343B10u;
    {
        const bool branch_taken_0x343b10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x343b10) {
            ctx->pc = 0x343B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343B10u;
            // 0x343b14: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343B20u;
            goto label_343b20;
        }
    }
    ctx->pc = 0x343B18u;
label_343b18:
    // 0x343b18: 0x10000003  b           . + 4 + (0x3 << 2)
label_343b1c:
    if (ctx->pc == 0x343B1Cu) {
        ctx->pc = 0x343B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B18u;
        // 0x343b1c: 0xaca50000  sw          $a1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343B20u;
        goto label_343b20;
    }
    ctx->pc = 0x343B18u;
    {
        const bool branch_taken_0x343b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B18u;
        // 0x343b1c: 0xaca50000  sw          $a1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b18) {
            ctx->pc = 0x343B28u;
            goto label_343b28;
        }
    }
    ctx->pc = 0x343B20u;
label_343b20:
    // 0x343b20: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x343b20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_343b24:
    // 0x343b24: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x343b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_343b28:
    // 0x343b28: 0x3e00008  jr          $ra
label_343b2c:
    if (ctx->pc == 0x343B2Cu) {
        ctx->pc = 0x343B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B28u;
        // 0x343b2c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343B30u;
        goto label_fallthrough_0x343b28;
    }
    ctx->pc = 0x343B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B28u;
        // 0x343b2c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x343b28:
    ctx->pc = 0x343B30u;
}
