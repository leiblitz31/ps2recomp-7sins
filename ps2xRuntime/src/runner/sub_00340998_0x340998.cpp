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

// Function: sub_00340998
// Address: 0x340998 - 0x340ad0
void sub_00340998_0x340998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340998_0x340998");
#endif

    switch (ctx->pc) {
        case 0x3409ccu: goto label_3409cc;
        case 0x3409e4u: goto label_3409e4;
        case 0x3409f4u: goto label_3409f4;
        case 0x340a18u: goto label_340a18;
        case 0x340a3cu: goto label_340a3c;
        case 0x340a68u: goto label_340a68;
        case 0x340a80u: goto label_340a80;
        case 0x340aacu: goto label_340aac;
        default: break;
    }

    ctx->pc = 0x340998u;

    // 0x340998: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x340998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34099c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x34099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3409a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3409a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3409a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3409a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3409a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3409a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3409ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3409acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3409b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3409b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3409b4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x3409b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x3409b8: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x3409b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x3409bc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3409bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3409c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3409c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3409c4: 0xc0d120c  jal         func_344830
    ctx->pc = 0x3409C4u;
    SET_GPR_U32(ctx, 31, 0x3409CCu);
    ctx->pc = 0x3409C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3409C4u;
    // 0x3409c8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3409C4u, 0x3409CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3409CCu;
label_3409cc:
    // 0x3409cc: 0x4400039  bltz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3409CCu;
    {
        const bool branch_taken_0x3409cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3409D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409CCu;
        // 0x3409d0: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3409cc) {
            ctx->pc = 0x340AB4u;
            goto label_340ab4;
        }
    }
    ctx->pc = 0x3409D4u;
    // 0x3409d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3409d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3409d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3409d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3409dc: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3409DCu;
    SET_GPR_U32(ctx, 31, 0x3409E4u);
    ctx->pc = 0x3409E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3409DCu;
    // 0x3409e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3409DCu, 0x3409E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3409E4u;
label_3409e4:
    // 0x3409e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3409e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3409e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3409e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3409ec: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3409ECu;
    SET_GPR_U32(ctx, 31, 0x3409F4u);
    ctx->pc = 0x3409F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3409ECu;
    // 0x3409f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3409ECu, 0x3409F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3409F4u;
label_3409f4:
    // 0x3409f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3409f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3409f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3409f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3409fc: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3409FCu;
    {
        const bool branch_taken_0x3409fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3409fc) {
            ctx->pc = 0x340A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3409FCu;
            // 0x340a00: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340A08u;
            goto label_340a08;
        }
    }
    ctx->pc = 0x340A04u;
    // 0x340a04: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x340a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_340a08:
    // 0x340a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340a0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340a10: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x340A10u;
    SET_GPR_U32(ctx, 31, 0x340A18u);
    ctx->pc = 0x340A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340A10u;
    // 0x340a14: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x340A10u, 0x340A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340A18u;
label_340a18:
    // 0x340a18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x340a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x340a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340a20: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x340A20u;
    {
        const bool branch_taken_0x340a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340a20) {
            ctx->pc = 0x340A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340A20u;
            // 0x340a24: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340A2Cu;
            goto label_340a2c;
        }
    }
    ctx->pc = 0x340A28u;
    // 0x340a28: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x340a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_340a2c:
    // 0x340a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340a30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340a34: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x340A34u;
    SET_GPR_U32(ctx, 31, 0x340A3Cu);
    ctx->pc = 0x340A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340A34u;
    // 0x340a38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x340A34u, 0x340A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340A3Cu;
label_340a3c:
    // 0x340a3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x340a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x340a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340a44: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x340A44u;
    {
        const bool branch_taken_0x340a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340a44) {
            ctx->pc = 0x340A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340A44u;
            // 0x340a48: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340A70u;
            goto label_340a70;
        }
    }
    ctx->pc = 0x340A4Cu;
    // 0x340a4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x340a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x340a50: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x340a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x340a54: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x340a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x340a58: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x340a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340a5c: 0x3012  mflo        $a2
    ctx->pc = 0x340a5cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x340a60: 0xc103454  jal         func_40D150
    ctx->pc = 0x340A60u;
    SET_GPR_U32(ctx, 31, 0x340A68u);
    ctx->pc = 0x340A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340A60u;
    // 0x340a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x340A60u, 0x340A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340A68u;
label_340a68:
    // 0x340a68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x340A68u;
    {
        const bool branch_taken_0x340a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A68u;
        // 0x340a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340a68) {
            ctx->pc = 0x340A74u;
            goto label_340a74;
        }
    }
    ctx->pc = 0x340A70u;
label_340a70:
    // 0x340a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_340a74:
    // 0x340a74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340a78: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x340A78u;
    SET_GPR_U32(ctx, 31, 0x340A80u);
    ctx->pc = 0x340A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340A78u;
    // 0x340a7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x340A78u, 0x340A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340A80u;
label_340a80:
    // 0x340a80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x340a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340a84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x340a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340a88: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x340A88u;
    {
        const bool branch_taken_0x340a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340a88) {
            ctx->pc = 0x340A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340A88u;
            // 0x340a8c: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340AB4u;
            goto label_340ab4;
        }
    }
    ctx->pc = 0x340A90u;
    // 0x340a90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x340a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x340a94: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x340a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x340a98: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x340a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x340a9c: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x340a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340aa0: 0x3012  mflo        $a2
    ctx->pc = 0x340aa0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x340aa4: 0xc103454  jal         func_40D150
    ctx->pc = 0x340AA4u;
    SET_GPR_U32(ctx, 31, 0x340AACu);
    ctx->pc = 0x340AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340AA4u;
    // 0x340aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x340AA4u, 0x340AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340AACu;
label_340aac:
    // 0x340aac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x340AACu;
    {
        const bool branch_taken_0x340aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AACu;
        // 0x340ab0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340aac) {
            ctx->pc = 0x340AB8u;
            goto label_340ab8;
        }
    }
    ctx->pc = 0x340AB4u;
label_340ab4:
    // 0x340ab4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x340ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_340ab8:
    // 0x340ab8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x340ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x340abc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x340abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x340ac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x340ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340ac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x340AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AC8u;
        // 0x340acc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340AD0u;
}
