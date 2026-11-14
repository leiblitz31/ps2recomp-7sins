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

// Function: sub_0031FBE8
// Address: 0x31fbe8 - 0x31fd70
void sub_0031FBE8_0x31fbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FBE8_0x31fbe8");
#endif

    switch (ctx->pc) {
        case 0x31fc24u: goto label_31fc24;
        case 0x31fc40u: goto label_31fc40;
        case 0x31fc74u: goto label_31fc74;
        case 0x31fc88u: goto label_31fc88;
        case 0x31fca0u: goto label_31fca0;
        case 0x31fcc0u: goto label_31fcc0;
        case 0x31fcd0u: goto label_31fcd0;
        case 0x31fce4u: goto label_31fce4;
        case 0x31fcf8u: goto label_31fcf8;
        case 0x31fd38u: goto label_31fd38;
        default: break;
    }

    ctx->pc = 0x31fbe8u;

    // 0x31fbe8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31fbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31fbec: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x31fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31fbf0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31fbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x31fbf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31fbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fbf8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x31fbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x31fbfc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31fbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fc00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31fc00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fc04: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31fc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x31fc08: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31fc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x31fc0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31fc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31fc10: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31fc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31fc14: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x31fc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x31fc18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31fc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31fc1c: 0xc103440  jal         func_40D100
    ctx->pc = 0x31FC1Cu;
    SET_GPR_U32(ctx, 31, 0x31FC24u);
    ctx->pc = 0x31FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC1Cu;
    // 0x31fc20: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31FC1Cu, 0x31FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC24u;
label_31fc24:
    // 0x31fc24: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x31FC24u;
    {
        const bool branch_taken_0x31fc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC24u;
        // 0x31fc28: 0x8f82bce0  lw          $v0, -0x4320($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc24) {
            ctx->pc = 0x31FD20u;
            goto label_31fd20;
        }
    }
    ctx->pc = 0x31FC2Cu;
    // 0x31fc2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31fc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fc30: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31fc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31fc34: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31fc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31fc38: 0xc103440  jal         func_40D100
    ctx->pc = 0x31FC38u;
    SET_GPR_U32(ctx, 31, 0x31FC40u);
    ctx->pc = 0x31FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC38u;
    // 0x31fc3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31FC38u, 0x31FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC40u;
label_31fc40:
    // 0x31fc40: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x31FC40u;
    {
        const bool branch_taken_0x31fc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc40) {
            ctx->pc = 0x31FC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC40u;
            // 0x31fc44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FD48u;
            goto label_31fd48;
        }
    }
    ctx->pc = 0x31FC48u;
    // 0x31fc48: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x31fc48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31fc4c: 0x52200036  beql        $s1, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x31FC4Cu;
    {
        const bool branch_taken_0x31fc4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc4c) {
            ctx->pc = 0x31FC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC4Cu;
            // 0x31fc50: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FD28u;
            goto label_31fd28;
        }
    }
    ctx->pc = 0x31FC54u;
    // 0x31fc54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31fc58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31fc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31fc5c: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x31FC5Cu;
    {
        const bool branch_taken_0x31fc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fc5c) {
            ctx->pc = 0x31FC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC5Cu;
            // 0x31fc60: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FD28u;
            goto label_31fd28;
        }
    }
    ctx->pc = 0x31FC64u;
    // 0x31fc64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fc68: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x31fc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31fc6c: 0xc103440  jal         func_40D100
    ctx->pc = 0x31FC6Cu;
    SET_GPR_U32(ctx, 31, 0x31FC74u);
    ctx->pc = 0x31FC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC6Cu;
    // 0x31fc70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31FC6Cu, 0x31FC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC74u;
label_31fc74:
    // 0x31fc74: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x31FC74u;
    {
        const bool branch_taken_0x31fc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC74u;
        // 0x31fc78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc74) {
            ctx->pc = 0x31FD20u;
            goto label_31fd20;
        }
    }
    ctx->pc = 0x31FC7Cu;
    // 0x31fc7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31fc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fc80: 0xc103440  jal         func_40D100
    ctx->pc = 0x31FC80u;
    SET_GPR_U32(ctx, 31, 0x31FC88u);
    ctx->pc = 0x31FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC80u;
    // 0x31fc84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31FC80u, 0x31FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC88u;
label_31fc88:
    // 0x31fc88: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31FC88u;
    {
        const bool branch_taken_0x31fc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC88u;
        // 0x31fc8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc88) {
            ctx->pc = 0x31FD20u;
            goto label_31fd20;
        }
    }
    ctx->pc = 0x31FC90u;
    // 0x31fc90: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x31fc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x31fc94: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31fc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31fc98: 0xc103440  jal         func_40D100
    ctx->pc = 0x31FC98u;
    SET_GPR_U32(ctx, 31, 0x31FCA0u);
    ctx->pc = 0x31FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC98u;
    // 0x31fc9c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31FC98u, 0x31FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FCA0u;
label_31fca0:
    // 0x31fca0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x31FCA0u;
    {
        const bool branch_taken_0x31fca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCA0u;
        // 0x31fca4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fca0) {
            ctx->pc = 0x31FD20u;
            goto label_31fd20;
        }
    }
    ctx->pc = 0x31FCA8u;
    // 0x31fca8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31fcac: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31FCACu;
    {
        const bool branch_taken_0x31fcac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCACu;
        // 0x31fcb0: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcac) {
            ctx->pc = 0x31FD44u;
            goto label_31fd44;
        }
    }
    ctx->pc = 0x31FCB4u;
    // 0x31fcb4: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x31fcb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x31fcb8: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x31fcb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x31fcbc: 0x0  nop
    ctx->pc = 0x31fcbcu;
    // NOP
label_31fcc0:
    // 0x31fcc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31fcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fcc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31fcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fcc8: 0xc103440  jal         func_40D100
    ctx->pc = 0x31FCC8u;
    SET_GPR_U32(ctx, 31, 0x31FCD0u);
    ctx->pc = 0x31FCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FCC8u;
    // 0x31fccc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31FCC8u, 0x31FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FCD0u;
label_31fcd0:
    // 0x31fcd0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31FCD0u;
    {
        const bool branch_taken_0x31fcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCD0u;
        // 0x31fcd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcd0) {
            ctx->pc = 0x31FD20u;
            goto label_31fd20;
        }
    }
    ctx->pc = 0x31FCD8u;
    // 0x31fcd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31fcd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fcdc: 0xc103440  jal         func_40D100
    ctx->pc = 0x31FCDCu;
    SET_GPR_U32(ctx, 31, 0x31FCE4u);
    ctx->pc = 0x31FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FCDCu;
    // 0x31fce0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31FCDCu, 0x31FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FCE4u;
label_31fce4:
    // 0x31fce4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31FCE4u;
    {
        const bool branch_taken_0x31fce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCE4u;
        // 0x31fce8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fce4) {
            ctx->pc = 0x31FD20u;
            goto label_31fd20;
        }
    }
    ctx->pc = 0x31FCECu;
    // 0x31fcec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31fcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fcf0: 0xc103440  jal         func_40D100
    ctx->pc = 0x31FCF0u;
    SET_GPR_U32(ctx, 31, 0x31FCF8u);
    ctx->pc = 0x31FCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FCF0u;
    // 0x31fcf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31FCF0u, 0x31FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FCF8u;
label_31fcf8:
    // 0x31fcf8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31FCF8u;
    {
        const bool branch_taken_0x31fcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCF8u;
        // 0x31fcfc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcf8) {
            ctx->pc = 0x31FD20u;
            goto label_31fd20;
        }
    }
    ctx->pc = 0x31FD00u;
    // 0x31fd00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31fd04: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x31fd04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x31fd08: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31fd08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31fd0c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x31fd0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31fd10: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x31FD10u;
    {
        const bool branch_taken_0x31fd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD10u;
        // 0x31fd14: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd10) {
            ctx->pc = 0x31FCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fcc0;
        }
    }
    ctx->pc = 0x31FD18u;
    // 0x31fd18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31FD18u;
    {
        const bool branch_taken_0x31fd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD18u;
        // 0x31fd1c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd18) {
            ctx->pc = 0x31FD48u;
            goto label_31fd48;
        }
    }
    ctx->pc = 0x31FD20u;
label_31fd20:
    // 0x31fd20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31FD20u;
    {
        const bool branch_taken_0x31fd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD20u;
        // 0x31fd24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd20) {
            ctx->pc = 0x31FD48u;
            goto label_31fd48;
        }
    }
    ctx->pc = 0x31FD28u;
label_31fd28:
    // 0x31fd28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31fd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd2c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x31fd2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x31fd30: 0xc103440  jal         func_40D100
    ctx->pc = 0x31FD30u;
    SET_GPR_U32(ctx, 31, 0x31FD38u);
    ctx->pc = 0x31FD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FD30u;
    // 0x31fd34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31FD30u, 0x31FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD38u;
label_31fd38:
    // 0x31fd38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31fd38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd3c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31FD3Cu;
    {
        const bool branch_taken_0x31fd3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD3Cu;
        // 0x31fd40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd3c) {
            ctx->pc = 0x31FD48u;
            goto label_31fd48;
        }
    }
    ctx->pc = 0x31FD44u;
label_31fd44:
    // 0x31fd44: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x31fd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31fd48:
    // 0x31fd48: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31fd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31fd4c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31fd4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31fd50: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31fd50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31fd54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31fd54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31fd58: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x31fd58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31fd5c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31fd5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fd60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31fd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fd64: 0x3e00008  jr          $ra
    ctx->pc = 0x31FD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD64u;
        // 0x31fd68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FD6Cu;
    // 0x31fd6c: 0x0  nop
    ctx->pc = 0x31fd6cu;
    // NOP
    ctx->pc = 0x31fd70u;
}
