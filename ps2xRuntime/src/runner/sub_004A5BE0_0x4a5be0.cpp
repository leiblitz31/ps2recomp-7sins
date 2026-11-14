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

// Function: sub_004A5BE0
// Address: 0x4a5be0 - 0x4a5da8
void sub_004A5BE0_0x4a5be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5BE0_0x4a5be0");
#endif

    switch (ctx->pc) {
        case 0x4a5c08u: goto label_4a5c08;
        case 0x4a5c20u: goto label_4a5c20;
        case 0x4a5c3cu: goto label_4a5c3c;
        case 0x4a5c58u: goto label_4a5c58;
        case 0x4a5c74u: goto label_4a5c74;
        case 0x4a5c90u: goto label_4a5c90;
        case 0x4a5ca8u: goto label_4a5ca8;
        case 0x4a5d0cu: goto label_4a5d0c;
        case 0x4a5d18u: goto label_4a5d18;
        case 0x4a5d24u: goto label_4a5d24;
        case 0x4a5d50u: goto label_4a5d50;
        case 0x4a5d68u: goto label_4a5d68;
        case 0x4a5d84u: goto label_4a5d84;
        default: break;
    }

    ctx->pc = 0x4a5be0u;

label_4a5be0:
    // 0x4a5be0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a5be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a5be4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a5be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a5be8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a5be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4a5bec: 0x24a52610  addiu       $a1, $a1, 0x2610
    ctx->pc = 0x4a5becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
    // 0x4a5bf0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4a5bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4a5bf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a5bf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5bf8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a5bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4a5bfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a5bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a5c00: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5C00u;
    SET_GPR_U32(ctx, 31, 0x4A5C08u);
    ctx->pc = 0x4A5C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5C00u;
    // 0x4a5c04: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5C00u, 0x4A5C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5C08u;
label_4a5c08:
    // 0x4a5c08: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x4A5C08u;
    {
        const bool branch_taken_0x4a5c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C08u;
        // 0x4a5c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5c08) {
            ctx->pc = 0x4A5D90u;
            goto label_4a5d90;
        }
    }
    ctx->pc = 0x4A5C10u;
    // 0x4a5c10: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a5c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a5c14: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a5c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a5c18: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5C18u;
    SET_GPR_U32(ctx, 31, 0x4A5C20u);
    ctx->pc = 0x4A5C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5C18u;
    // 0x4a5c1c: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5C18u, 0x4A5C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5C20u;
label_4a5c20:
    // 0x4a5c20: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5C20u;
    {
        const bool branch_taken_0x4a5c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5c20) {
            ctx->pc = 0x4A5C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5C20u;
            // 0x4a5c24: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5C30u;
            goto label_4a5c30;
        }
    }
    ctx->pc = 0x4A5C28u;
    // 0x4a5c28: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x4A5C28u;
    {
        const bool branch_taken_0x4a5c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C28u;
        // 0x4a5c2c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5c28) {
            ctx->pc = 0x4A5D90u;
            goto label_4a5d90;
        }
    }
    ctx->pc = 0x4A5C30u;
label_4a5c30:
    // 0x4a5c30: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a5c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a5c34: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5C34u;
    SET_GPR_U32(ctx, 31, 0x4A5C3Cu);
    ctx->pc = 0x4A5C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5C34u;
    // 0x4a5c38: 0x24a52620  addiu       $a1, $a1, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5C34u, 0x4A5C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5C3Cu;
label_4a5c3c:
    // 0x4a5c3c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5C3Cu;
    {
        const bool branch_taken_0x4a5c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5c3c) {
            ctx->pc = 0x4A5C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5C3Cu;
            // 0x4a5c40: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5C4Cu;
            goto label_4a5c4c;
        }
    }
    ctx->pc = 0x4A5C44u;
    // 0x4a5c44: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x4A5C44u;
    {
        const bool branch_taken_0x4a5c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C44u;
        // 0x4a5c48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5c44) {
            ctx->pc = 0x4A5D90u;
            goto label_4a5d90;
        }
    }
    ctx->pc = 0x4A5C4Cu;
label_4a5c4c:
    // 0x4a5c4c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a5c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a5c50: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5C50u;
    SET_GPR_U32(ctx, 31, 0x4A5C58u);
    ctx->pc = 0x4A5C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5C50u;
    // 0x4a5c54: 0x24a52690  addiu       $a1, $a1, 0x2690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5C50u, 0x4A5C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5C58u;
label_4a5c58:
    // 0x4a5c58: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5C58u;
    {
        const bool branch_taken_0x4a5c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5c58) {
            ctx->pc = 0x4A5C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5C58u;
            // 0x4a5c5c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5C68u;
            goto label_4a5c68;
        }
    }
    ctx->pc = 0x4A5C60u;
    // 0x4a5c60: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x4A5C60u;
    {
        const bool branch_taken_0x4a5c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C60u;
        // 0x4a5c64: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5c60) {
            ctx->pc = 0x4A5D90u;
            goto label_4a5d90;
        }
    }
    ctx->pc = 0x4A5C68u;
label_4a5c68:
    // 0x4a5c68: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a5c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a5c6c: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5C6Cu;
    SET_GPR_U32(ctx, 31, 0x4A5C74u);
    ctx->pc = 0x4A5C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5C6Cu;
    // 0x4a5c70: 0x24a52630  addiu       $a1, $a1, 0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5C6Cu, 0x4A5C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5C74u;
label_4a5c74:
    // 0x4a5c74: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5C74u;
    {
        const bool branch_taken_0x4a5c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5c74) {
            ctx->pc = 0x4A5C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5C74u;
            // 0x4a5c78: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5C84u;
            goto label_4a5c84;
        }
    }
    ctx->pc = 0x4A5C7Cu;
    // 0x4a5c7c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x4A5C7Cu;
    {
        const bool branch_taken_0x4a5c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C7Cu;
        // 0x4a5c80: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5c7c) {
            ctx->pc = 0x4A5D90u;
            goto label_4a5d90;
        }
    }
    ctx->pc = 0x4A5C84u;
label_4a5c84:
    // 0x4a5c84: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a5c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a5c88: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5C88u;
    SET_GPR_U32(ctx, 31, 0x4A5C90u);
    ctx->pc = 0x4A5C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5C88u;
    // 0x4a5c8c: 0x24a52640  addiu       $a1, $a1, 0x2640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5C88u, 0x4A5C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5C90u;
label_4a5c90:
    // 0x4a5c90: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A5C90u;
    {
        const bool branch_taken_0x4a5c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5c90) {
            ctx->pc = 0x4A5C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5C90u;
            // 0x4a5c94: 0x9242000d  lbu         $v0, 0xD($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5CB4u;
            goto label_4a5cb4;
        }
    }
    ctx->pc = 0x4A5C98u;
    // 0x4a5c98: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a5c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a5c9c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a5c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a5ca0: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5CA0u;
    SET_GPR_U32(ctx, 31, 0x4A5CA8u);
    ctx->pc = 0x4A5CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5CA0u;
    // 0x4a5ca4: 0x24a526a0  addiu       $a1, $a1, 0x26A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5CA0u, 0x4A5CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5CA8u;
label_4a5ca8:
    // 0x4a5ca8: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x4A5CA8u;
    {
        const bool branch_taken_0x4a5ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5ca8) {
            ctx->pc = 0x4A5CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5CA8u;
            // 0x4a5cac: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5D44u;
            goto label_4a5d44;
        }
    }
    ctx->pc = 0x4A5CB0u;
    // 0x4a5cb0: 0x9242000d  lbu         $v0, 0xD($s2)
    ctx->pc = 0x4a5cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
label_4a5cb4:
    // 0x4a5cb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a5cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a5cb8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5CB8u;
    {
        const bool branch_taken_0x4a5cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a5cb8) {
            ctx->pc = 0x4A5CC8u;
            goto label_4a5cc8;
        }
    }
    ctx->pc = 0x4A5CC0u;
    // 0x4a5cc0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x4A5CC0u;
    {
        const bool branch_taken_0x4a5cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5CC0u;
        // 0x4a5cc4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5cc0) {
            ctx->pc = 0x4A5D90u;
            goto label_4a5d90;
        }
    }
    ctx->pc = 0x4A5CC8u;
label_4a5cc8:
    // 0x4a5cc8: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x4a5cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4a5ccc: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x4a5cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4a5cd0: 0x6a44000f  ldl         $a0, 0xF($s2)
    ctx->pc = 0x4a5cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4a5cd4: 0x6e440008  ldr         $a0, 0x8($s2)
    ctx->pc = 0x4a5cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4a5cd8: 0x6a450017  ldl         $a1, 0x17($s2)
    ctx->pc = 0x4a5cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4a5cdc: 0x6e450010  ldr         $a1, 0x10($s2)
    ctx->pc = 0x4a5cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4a5ce0: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x4a5ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4a5ce4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4a5ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a5ce8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4a5ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a5cec: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x4a5cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a5cf0: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x4a5cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a5cf4: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x4a5cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a5cf8: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x4a5cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a5cfc: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x4a5cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x4a5d00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a5d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5d04: 0xc1296f8  jal         func_4A5BE0
    ctx->pc = 0x4A5D04u;
    SET_GPR_U32(ctx, 31, 0x4A5D0Cu);
    ctx->pc = 0x4A5D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5D04u;
    // 0x4a5d08: 0xa3a3000d  sb          $v1, 0xD($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 13), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5BE0u;
    goto label_4a5be0;
    ctx->pc = 0x4A5D0Cu;
label_4a5d0c:
    // 0x4a5d0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a5d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5d10: 0xc1295d8  jal         func_4A5760
    ctx->pc = 0x4A5D10u;
    SET_GPR_U32(ctx, 31, 0x4A5D18u);
    ctx->pc = 0x4A5D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5D10u;
    // 0x4a5d14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5760u, 0x4A5D10u, 0x4A5D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5D18u;
label_4a5d18:
    // 0x4a5d18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a5d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5d1c: 0xc1295d8  jal         func_4A5760
    ctx->pc = 0x4A5D1Cu;
    SET_GPR_U32(ctx, 31, 0x4A5D24u);
    ctx->pc = 0x4A5D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5D1Cu;
    // 0x4a5d20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5760u, 0x4A5D1Cu, 0x4A5D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5D24u;
label_4a5d24:
    // 0x4a5d24: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x4a5d24u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x4a5d28: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A5D28u;
    {
        const bool branch_taken_0x4a5d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5d28) {
            ctx->pc = 0x4A5D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5D28u;
            // 0x4a5d2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5D30u;
            goto label_4a5d30;
        }
    }
    ctx->pc = 0x4A5D30u;
label_4a5d30:
    // 0x4a5d30: 0x8012  mflo        $s0
    ctx->pc = 0x4a5d30u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x4a5d34: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x4a5d34u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x4a5d38: 0x8812  mflo        $s1
    ctx->pc = 0x4a5d38u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x4a5d3c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4A5D3Cu;
    {
        const bool branch_taken_0x4a5d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D3Cu;
        // 0x4a5d40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5d3c) {
            ctx->pc = 0x4A5D90u;
            goto label_4a5d90;
        }
    }
    ctx->pc = 0x4A5D44u;
label_4a5d44:
    // 0x4a5d44: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a5d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a5d48: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5D48u;
    SET_GPR_U32(ctx, 31, 0x4A5D50u);
    ctx->pc = 0x4A5D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5D48u;
    // 0x4a5d4c: 0x24a52660  addiu       $a1, $a1, 0x2660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5D48u, 0x4A5D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5D50u;
label_4a5d50:
    // 0x4a5d50: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4A5D50u;
    {
        const bool branch_taken_0x4a5d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D50u;
        // 0x4a5d54: 0x24020480  addiu       $v0, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5d50) {
            ctx->pc = 0x4A5D90u;
            goto label_4a5d90;
        }
    }
    ctx->pc = 0x4A5D58u;
    // 0x4a5d58: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a5d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a5d5c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a5d60: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5D60u;
    SET_GPR_U32(ctx, 31, 0x4A5D68u);
    ctx->pc = 0x4A5D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5D60u;
    // 0x4a5d64: 0x24a52670  addiu       $a1, $a1, 0x2670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5D60u, 0x4A5D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5D68u;
label_4a5d68:
    // 0x4a5d68: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5D68u;
    {
        const bool branch_taken_0x4a5d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5d68) {
            ctx->pc = 0x4A5D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5D68u;
            // 0x4a5d6c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5D78u;
            goto label_4a5d78;
        }
    }
    ctx->pc = 0x4A5D70u;
    // 0x4a5d70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A5D70u;
    {
        const bool branch_taken_0x4a5d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D70u;
        // 0x4a5d74: 0x24020480  addiu       $v0, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5d70) {
            ctx->pc = 0x4A5D90u;
            goto label_4a5d90;
        }
    }
    ctx->pc = 0x4A5D78u;
label_4a5d78:
    // 0x4a5d78: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a5d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a5d7c: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5D7Cu;
    SET_GPR_U32(ctx, 31, 0x4A5D84u);
    ctx->pc = 0x4A5D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5D7Cu;
    // 0x4a5d80: 0x24a52680  addiu       $a1, $a1, 0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5D7Cu, 0x4A5D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5D84u;
label_4a5d84:
    // 0x4a5d84: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x4a5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x4a5d88: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x4a5d88u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x4a5d8c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4a5d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4a5d90:
    // 0x4a5d90: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4a5d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a5d94: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a5d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a5d98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a5d98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a5d9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a5d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5da0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5DA0u;
        // 0x4a5da4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5DA8u;
}
