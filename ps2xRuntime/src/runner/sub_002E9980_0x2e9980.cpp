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

// Function: sub_002E9980
// Address: 0x2e9980 - 0x2e9cb0
void sub_002E9980_0x2e9980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9980_0x2e9980");
#endif

    switch (ctx->pc) {
        case 0x2e999cu: goto label_2e999c;
        case 0x2e99fcu: goto label_2e99fc;
        case 0x2e9a14u: goto label_2e9a14;
        case 0x2e9a20u: goto label_2e9a20;
        case 0x2e9a38u: goto label_2e9a38;
        case 0x2e9a50u: goto label_2e9a50;
        case 0x2e9a5cu: goto label_2e9a5c;
        case 0x2e9a68u: goto label_2e9a68;
        case 0x2e9a80u: goto label_2e9a80;
        case 0x2e9a8cu: goto label_2e9a8c;
        case 0x2e9aa4u: goto label_2e9aa4;
        case 0x2e9ab0u: goto label_2e9ab0;
        case 0x2e9ac8u: goto label_2e9ac8;
        case 0x2e9ad4u: goto label_2e9ad4;
        case 0x2e9ae0u: goto label_2e9ae0;
        case 0x2e9af8u: goto label_2e9af8;
        case 0x2e9b04u: goto label_2e9b04;
        case 0x2e9b10u: goto label_2e9b10;
        case 0x2e9b1cu: goto label_2e9b1c;
        case 0x2e9b34u: goto label_2e9b34;
        case 0x2e9b4cu: goto label_2e9b4c;
        case 0x2e9b58u: goto label_2e9b58;
        case 0x2e9b9cu: goto label_2e9b9c;
        case 0x2e9ba8u: goto label_2e9ba8;
        case 0x2e9bbcu: goto label_2e9bbc;
        case 0x2e9bd0u: goto label_2e9bd0;
        case 0x2e9bdcu: goto label_2e9bdc;
        case 0x2e9be8u: goto label_2e9be8;
        case 0x2e9c04u: goto label_2e9c04;
        case 0x2e9c0cu: goto label_2e9c0c;
        case 0x2e9c18u: goto label_2e9c18;
        case 0x2e9c28u: goto label_2e9c28;
        case 0x2e9c54u: goto label_2e9c54;
        case 0x2e9c60u: goto label_2e9c60;
        case 0x2e9c74u: goto label_2e9c74;
        case 0x2e9c84u: goto label_2e9c84;
        default: break;
    }

    ctx->pc = 0x2e9980u;

    // 0x2e9980: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e9980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e9984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e9984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e9988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e998c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e9990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9994: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x2e9994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e9998: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2e9998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2e999c:
    // 0x2e999c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2e999cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e99a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e99a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e99a4: 0x144000a8  bnez        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2E99A4u;
    {
        const bool branch_taken_0x2e99a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99A4u;
        // 0x2e99a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e99a4) {
            ctx->pc = 0x2E9C48u;
            goto label_2e9c48;
        }
    }
    ctx->pc = 0x2E99ACu;
    // 0x2e99ac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2e99acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e99b0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2e99b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2e99b4: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2E99B4u;
    {
        const bool branch_taken_0x2e99b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99B4u;
        // 0x2e99b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e99b4) {
            ctx->pc = 0x2E9C4Cu;
            goto label_2e9c4c;
        }
    }
    ctx->pc = 0x2E99BCu;
    // 0x2e99bc: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2e99bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99c0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2e99c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e99c4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2e99c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2e99c8: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x2e99c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e99cc: 0x1020008b  beqz        $at, . + 4 + (0x8B << 2)
    ctx->pc = 0x2E99CCu;
    {
        const bool branch_taken_0x2e99cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e99cc) {
            ctx->pc = 0x2E9BFCu;
            goto label_2e9bfc;
        }
    }
    ctx->pc = 0x2E99D4u;
    // 0x2e99d4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e99d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e99dc: 0x24638f00  addiu       $v1, $v1, -0x7100
    ctx->pc = 0x2e99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938368));
    // 0x2e99e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e99e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e99e8: 0x400008  jr          $v0
    ctx->pc = 0x2E99E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E99F0u: goto label_2e99f0;
            case 0x2E9A08u: goto label_2e9a08;
            case 0x2E9A2Cu: goto label_2e9a2c;
            case 0x2E9A44u: goto label_2e9a44;
            case 0x2E9A74u: goto label_2e9a74;
            case 0x2E9A98u: goto label_2e9a98;
            case 0x2E9ABCu: goto label_2e9abc;
            case 0x2E9AECu: goto label_2e9aec;
            case 0x2E9B28u: goto label_2e9b28;
            case 0x2E9B40u: goto label_2e9b40;
            case 0x2E9B64u: goto label_2e9b64;
            case 0x2E9BB0u: goto label_2e9bb0;
            case 0x2E9BC4u: goto label_2e9bc4;
            case 0x2E9BFCu: goto label_2e9bfc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E99E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E99F0u;
label_2e99f0:
    // 0x2e99f0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e99f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e99f4: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E99F4u;
    SET_GPR_U32(ctx, 31, 0x2E99FCu);
    ctx->pc = 0x2E99F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E99F4u;
    // 0x2e99f8: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E99F4u, 0x2E99FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E99FCu;
label_2e99fc:
    // 0x2e99fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2e99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e9a00: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2E9A00u;
    {
        const bool branch_taken_0x2e9a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A00u;
        // 0x2e9a04: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a00) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9A08u;
label_2e9a08:
    // 0x2e9a08: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9a0c: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9A0Cu;
    SET_GPR_U32(ctx, 31, 0x2E9A14u);
    ctx->pc = 0x2E9A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A0Cu;
    // 0x2e9a10: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9A0Cu, 0x2E9A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A14u;
label_2e9a14:
    // 0x2e9a14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a18: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9A18u;
    SET_GPR_U32(ctx, 31, 0x2E9A20u);
    ctx->pc = 0x2E9A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A18u;
    // 0x2e9a1c: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9A18u, 0x2E9A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A20u;
label_2e9a20:
    // 0x2e9a20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2e9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e9a24: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2E9A24u;
    {
        const bool branch_taken_0x2e9a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A24u;
        // 0x2e9a28: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a24) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9A2Cu;
label_2e9a2c:
    // 0x2e9a2c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9a30: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9A30u;
    SET_GPR_U32(ctx, 31, 0x2E9A38u);
    ctx->pc = 0x2E9A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A30u;
    // 0x2e9a34: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9A30u, 0x2E9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A38u;
label_2e9a38:
    // 0x2e9a38: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2e9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e9a3c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2E9A3Cu;
    {
        const bool branch_taken_0x2e9a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A3Cu;
        // 0x2e9a40: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a3c) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9A44u;
label_2e9a44:
    // 0x2e9a44: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9a48: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9A48u;
    SET_GPR_U32(ctx, 31, 0x2E9A50u);
    ctx->pc = 0x2E9A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A48u;
    // 0x2e9a4c: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9A48u, 0x2E9A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A50u;
label_2e9a50:
    // 0x2e9a50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a54: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9A54u;
    SET_GPR_U32(ctx, 31, 0x2E9A5Cu);
    ctx->pc = 0x2E9A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A54u;
    // 0x2e9a58: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9A54u, 0x2E9A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A5Cu;
label_2e9a5c:
    // 0x2e9a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a60: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9A60u;
    SET_GPR_U32(ctx, 31, 0x2E9A68u);
    ctx->pc = 0x2E9A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A60u;
    // 0x2e9a64: 0x27a50094  addiu       $a1, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9A60u, 0x2E9A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A68u;
label_2e9a68:
    // 0x2e9a68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2e9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e9a6c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2E9A6Cu;
    {
        const bool branch_taken_0x2e9a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A6Cu;
        // 0x2e9a70: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a6c) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9A74u;
label_2e9a74:
    // 0x2e9a74: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9a78: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9A78u;
    SET_GPR_U32(ctx, 31, 0x2E9A80u);
    ctx->pc = 0x2E9A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A78u;
    // 0x2e9a7c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9A78u, 0x2E9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A80u;
label_2e9a80:
    // 0x2e9a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a84: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9A84u;
    SET_GPR_U32(ctx, 31, 0x2E9A8Cu);
    ctx->pc = 0x2E9A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A84u;
    // 0x2e9a88: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9A84u, 0x2E9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A8Cu;
label_2e9a8c:
    // 0x2e9a8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2e9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e9a90: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2E9A90u;
    {
        const bool branch_taken_0x2e9a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A90u;
        // 0x2e9a94: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a90) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9A98u;
label_2e9a98:
    // 0x2e9a98: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9a9c: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9A9Cu;
    SET_GPR_U32(ctx, 31, 0x2E9AA4u);
    ctx->pc = 0x2E9AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A9Cu;
    // 0x2e9aa0: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9A9Cu, 0x2E9AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9AA4u;
label_2e9aa4:
    // 0x2e9aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9aa8: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9AA8u;
    SET_GPR_U32(ctx, 31, 0x2E9AB0u);
    ctx->pc = 0x2E9AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AA8u;
    // 0x2e9aac: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9AA8u, 0x2E9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9AB0u;
label_2e9ab0:
    // 0x2e9ab0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2e9ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e9ab4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2E9AB4u;
    {
        const bool branch_taken_0x2e9ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AB4u;
        // 0x2e9ab8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ab4) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9ABCu;
label_2e9abc:
    // 0x2e9abc: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9ac0: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9AC0u;
    SET_GPR_U32(ctx, 31, 0x2E9AC8u);
    ctx->pc = 0x2E9AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AC0u;
    // 0x2e9ac4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9AC0u, 0x2E9AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9AC8u;
label_2e9ac8:
    // 0x2e9ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9acc: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9ACCu;
    SET_GPR_U32(ctx, 31, 0x2E9AD4u);
    ctx->pc = 0x2E9AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9ACCu;
    // 0x2e9ad0: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9ACCu, 0x2E9AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9AD4u;
label_2e9ad4:
    // 0x2e9ad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ad8: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9AD8u;
    SET_GPR_U32(ctx, 31, 0x2E9AE0u);
    ctx->pc = 0x2E9ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AD8u;
    // 0x2e9adc: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9AD8u, 0x2E9AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9AE0u;
label_2e9ae0:
    // 0x2e9ae0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2e9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e9ae4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2E9AE4u;
    {
        const bool branch_taken_0x2e9ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AE4u;
        // 0x2e9ae8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ae4) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9AECu;
label_2e9aec:
    // 0x2e9aec: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9af0: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9AF0u;
    SET_GPR_U32(ctx, 31, 0x2E9AF8u);
    ctx->pc = 0x2E9AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AF0u;
    // 0x2e9af4: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9AF0u, 0x2E9AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9AF8u;
label_2e9af8:
    // 0x2e9af8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9afc: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9AFCu;
    SET_GPR_U32(ctx, 31, 0x2E9B04u);
    ctx->pc = 0x2E9B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AFCu;
    // 0x2e9b00: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9AFCu, 0x2E9B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B04u;
label_2e9b04:
    // 0x2e9b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b08: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9B08u;
    SET_GPR_U32(ctx, 31, 0x2E9B10u);
    ctx->pc = 0x2E9B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B08u;
    // 0x2e9b0c: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9B08u, 0x2E9B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B10u;
label_2e9b10:
    // 0x2e9b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b14: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9B14u;
    SET_GPR_U32(ctx, 31, 0x2E9B1Cu);
    ctx->pc = 0x2E9B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B14u;
    // 0x2e9b18: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9B14u, 0x2E9B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B1Cu;
label_2e9b1c:
    // 0x2e9b1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2e9b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e9b20: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2E9B20u;
    {
        const bool branch_taken_0x2e9b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B20u;
        // 0x2e9b24: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b20) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9B28u;
label_2e9b28:
    // 0x2e9b28: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9b2c: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E9B34u);
    ctx->pc = 0x2E9B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B2Cu;
    // 0x2e9b30: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9B2Cu, 0x2E9B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B34u;
label_2e9b34:
    // 0x2e9b34: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2e9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e9b38: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2E9B38u;
    {
        const bool branch_taken_0x2e9b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B38u;
        // 0x2e9b3c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b38) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9B40u;
label_2e9b40:
    // 0x2e9b40: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9b44: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9B44u;
    SET_GPR_U32(ctx, 31, 0x2E9B4Cu);
    ctx->pc = 0x2E9B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B44u;
    // 0x2e9b48: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9B44u, 0x2E9B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B4Cu;
label_2e9b4c:
    // 0x2e9b4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b50: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9B50u;
    SET_GPR_U32(ctx, 31, 0x2E9B58u);
    ctx->pc = 0x2E9B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B50u;
    // 0x2e9b54: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9B50u, 0x2E9B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B58u;
label_2e9b58:
    // 0x2e9b58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2e9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e9b5c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2E9B5Cu;
    {
        const bool branch_taken_0x2e9b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B5Cu;
        // 0x2e9b60: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b5c) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9B64u;
label_2e9b64:
    // 0x2e9b64: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x2e9b64u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2e9b68: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x2e9b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x2e9b6c: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x2e9b6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x2e9b70: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x2e9b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2e9b74: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x2e9b74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2e9b78: 0x91060001  lbu         $a2, 0x1($t0)
    ctx->pc = 0x2e9b78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x2e9b7c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2e9b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2e9b80: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2e9b84: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e9b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e9b88: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2e9b88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2e9b8c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2e9b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2e9b90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e9b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e9b94: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9B94u;
    SET_GPR_U32(ctx, 31, 0x2E9B9Cu);
    ctx->pc = 0x2E9B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B94u;
    // 0x2e9b98: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9B94u, 0x2E9B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B9Cu;
label_2e9b9c:
    // 0x2e9b9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ba0: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9BA0u;
    SET_GPR_U32(ctx, 31, 0x2E9BA8u);
    ctx->pc = 0x2E9BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BA0u;
    // 0x2e9ba4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9BA0u, 0x2E9BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BA8u;
label_2e9ba8:
    // 0x2e9ba8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2E9BA8u;
    {
        const bool branch_taken_0x2e9ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BA8u;
        // 0x2e9bac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ba8) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9BB0u;
label_2e9bb0:
    // 0x2e9bb0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9bb4: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9BB4u;
    SET_GPR_U32(ctx, 31, 0x2E9BBCu);
    ctx->pc = 0x2E9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BB4u;
    // 0x2e9bb8: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9BB4u, 0x2E9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BBCu;
label_2e9bbc:
    // 0x2e9bbc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E9BBCu;
    {
        const bool branch_taken_0x2e9bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BBCu;
        // 0x2e9bc0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9bbc) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9BC4u;
label_2e9bc4:
    // 0x2e9bc4: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9bc8: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9BC8u;
    SET_GPR_U32(ctx, 31, 0x2E9BD0u);
    ctx->pc = 0x2E9BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BC8u;
    // 0x2e9bcc: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9BC8u, 0x2E9BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BD0u;
label_2e9bd0:
    // 0x2e9bd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9bd4: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9BD4u;
    SET_GPR_U32(ctx, 31, 0x2E9BDCu);
    ctx->pc = 0x2E9BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BD4u;
    // 0x2e9bd8: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9BD4u, 0x2E9BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BDCu;
label_2e9bdc:
    // 0x2e9bdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9be0: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9BE0u;
    SET_GPR_U32(ctx, 31, 0x2E9BE8u);
    ctx->pc = 0x2E9BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BE0u;
    // 0x2e9be4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9BE0u, 0x2E9BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BE8u;
label_2e9be8:
    // 0x2e9be8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e9bec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e9becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e9bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9bf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E9BF4u;
    {
        const bool branch_taken_0x2e9bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BF4u;
        // 0x2e9bf8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9bf4) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9BFCu;
label_2e9bfc:
    // 0x2e9bfc: 0xc0ba1a0  jal         func_2E8680
    ctx->pc = 0x2E9BFCu;
    SET_GPR_U32(ctx, 31, 0x2E9C04u);
    ctx->pc = 0x2E8680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8680u, 0x2E9BFCu, 0x2E9C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C04u;
label_2e9c04:
    // 0x2e9c04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9C04u;
    {
        const bool branch_taken_0x2e9c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c04) {
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9C0Cu;
label_2e9c0c:
    // 0x2e9c0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e9c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e9c10: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E9C10u;
    SET_GPR_U32(ctx, 31, 0x2E9C18u);
    ctx->pc = 0x2E9C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C10u;
    // 0x2e9c14: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9C10u, 0x2E9C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C18u;
label_2e9c18:
    // 0x2e9c18: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2e9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e9c1c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2e9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2e9c20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e9c24: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2e9c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2e9c28:
    // 0x2e9c28: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2e9c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e9c2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9c30: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2e9c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e9c34: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2e9c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2e9c38: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E9C38u;
    {
        const bool branch_taken_0x2e9c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e9c38) {
            ctx->pc = 0x2E9C0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9c0c;
        }
    }
    ctx->pc = 0x2E9C40u;
    // 0x2e9c40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E9C40u;
    {
        const bool branch_taken_0x2e9c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c40) {
            ctx->pc = 0x2E9C98u;
            goto label_2e9c98;
        }
    }
    ctx->pc = 0x2E9C48u;
label_2e9c48:
    // 0x2e9c48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e9c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9c4c:
    // 0x2e9c4c: 0xc0ba82c  jal         func_2EA0B0
    ctx->pc = 0x2E9C4Cu;
    SET_GPR_U32(ctx, 31, 0x2E9C54u);
    ctx->pc = 0x2EA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA0B0u, 0x2E9C4Cu, 0x2E9C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C54u;
label_2e9c54:
    // 0x2e9c54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c58: 0xc0ba72c  jal         func_2E9CB0
    ctx->pc = 0x2E9C58u;
    SET_GPR_U32(ctx, 31, 0x2E9C60u);
    ctx->pc = 0x2E9C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C58u;
    // 0x2e9c5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9CB0u, 0x2E9C58u, 0x2E9C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C60u;
label_2e9c60:
    // 0x2e9c60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e9c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e9c64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9C64u;
    {
        const bool branch_taken_0x2e9c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c64) {
            ctx->pc = 0x2E9C78u;
            goto label_2e9c78;
        }
    }
    ctx->pc = 0x2E9C6Cu;
    // 0x2e9c6c: 0xc0ba1a0  jal         func_2E8680
    ctx->pc = 0x2E9C6Cu;
    SET_GPR_U32(ctx, 31, 0x2E9C74u);
    ctx->pc = 0x2E8680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8680u, 0x2E9C6Cu, 0x2E9C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C74u;
label_2e9c74:
    // 0x2e9c74: 0x0  nop
    ctx->pc = 0x2e9c74u;
    // NOP
label_2e9c78:
    // 0x2e9c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c7c: 0xc0ba7fc  jal         func_2E9FF0
    ctx->pc = 0x2E9C7Cu;
    SET_GPR_U32(ctx, 31, 0x2E9C84u);
    ctx->pc = 0x2E9C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C7Cu;
    // 0x2e9c80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9FF0u, 0x2E9C7Cu, 0x2E9C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C84u;
label_2e9c84:
    // 0x2e9c84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2e9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e9c88: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2E9C88u;
    {
        const bool branch_taken_0x2e9c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c88) {
            ctx->pc = 0x2E9C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9C90u;
    // 0x2e9c90: 0x1000ff42  b           . + 4 + (-0xBE << 2)
    ctx->pc = 0x2E9C90u;
    {
        const bool branch_taken_0x2e9c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C90u;
        // 0x2e9c94: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c90) {
            ctx->pc = 0x2E999Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e999c;
        }
    }
    ctx->pc = 0x2E9C98u;
label_2e9c98:
    // 0x2e9c98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e9c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e9c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e9ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9CA4u;
        // 0x2e9ca8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9CACu;
    // 0x2e9cac: 0x0  nop
    ctx->pc = 0x2e9cacu;
    // NOP
    ctx->pc = 0x2e9cb0u;
}
