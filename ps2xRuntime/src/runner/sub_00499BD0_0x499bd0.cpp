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

// Function: sub_00499BD0
// Address: 0x499bd0 - 0x499cd8
void sub_00499BD0_0x499bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499BD0_0x499bd0");
#endif

    switch (ctx->pc) {
        case 0x499c08u: goto label_499c08;
        case 0x499c38u: goto label_499c38;
        case 0x499c4cu: goto label_499c4c;
        case 0x499c88u: goto label_499c88;
        case 0x499c9cu: goto label_499c9c;
        default: break;
    }

    ctx->pc = 0x499bd0u;

    // 0x499bd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x499bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x499bd4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x499bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x499bd8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x499bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x499bdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x499bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499be0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x499be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499be4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x499be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x499be8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x499be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x499bec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x499becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499bf0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x499bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x499bf4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x499bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x499bf8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x499bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x499bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x499bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x499c00: 0xc127c70  jal         func_49F1C0
    ctx->pc = 0x499C00u;
    SET_GPR_U32(ctx, 31, 0x499C08u);
    ctx->pc = 0x499C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499C00u;
    // 0x499c04: 0x24848330  addiu       $a0, $a0, -0x7CD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F1C0u, 0x499C00u, 0x499C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499C08u;
label_499c08:
    // 0x499c08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x499c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x499c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499c10: 0x16020015  bne         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x499C10u;
    {
        const bool branch_taken_0x499c10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x499C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C10u;
        // 0x499c14: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499c10) {
            ctx->pc = 0x499C68u;
            goto label_499c68;
        }
    }
    ctx->pc = 0x499C18u;
    // 0x499c18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x499c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499c1c: 0x9451000c  lhu         $s1, 0xC($v0)
    ctx->pc = 0x499c1cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x499c20: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x499C20u;
    {
        const bool branch_taken_0x499c20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x499C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C20u;
        // 0x499c24: 0x8c520010  lw          $s2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499c20) {
            ctx->pc = 0x499CB0u;
            goto label_499cb0;
        }
    }
    ctx->pc = 0x499C28u;
    // 0x499c28: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x499c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x499c2c: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x499c2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x499c30: 0x2455adf0  addiu       $s5, $v0, -0x5210
    ctx->pc = 0x499c30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946288));
    // 0x499c34: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x499c34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_499c38:
    // 0x499c38: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x499c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x499c3c: 0xac93000c  sw          $s3, 0xC($a0)
    ctx->pc = 0x499c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 19));
    // 0x499c40: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x499c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x499c44: 0xc12a4ce  jal         func_4A9338
    ctx->pc = 0x499C44u;
    SET_GPR_U32(ctx, 31, 0x499C4Cu);
    ctx->pc = 0x499C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499C44u;
    // 0x499c48: 0xac950014  sw          $s5, 0x14($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x499C44u, 0x499C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499C4Cu;
label_499c4c:
    // 0x499c4c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x499c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x499c50: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x499c50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x499c54: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x499c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x499c58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x499C58u;
    {
        const bool branch_taken_0x499c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C58u;
        // 0x499c5c: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x499c58) {
            ctx->pc = 0x499C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499c38;
        }
    }
    ctx->pc = 0x499C60u;
    // 0x499c60: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x499C60u;
    {
        const bool branch_taken_0x499c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C60u;
        // 0x499c64: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499c60) {
            ctx->pc = 0x499CB4u;
            goto label_499cb4;
        }
    }
    ctx->pc = 0x499C68u;
label_499c68:
    // 0x499c68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x499c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499c6c: 0x9451000e  lhu         $s1, 0xE($v0)
    ctx->pc = 0x499c6cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x499c70: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x499C70u;
    {
        const bool branch_taken_0x499c70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x499C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C70u;
        // 0x499c74: 0x8c520014  lw          $s2, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499c70) {
            ctx->pc = 0x499CB0u;
            goto label_499cb0;
        }
    }
    ctx->pc = 0x499C78u;
    // 0x499c78: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x499c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x499c7c: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x499c7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x499c80: 0x2455adf0  addiu       $s5, $v0, -0x5210
    ctx->pc = 0x499c80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946288));
    // 0x499c84: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x499c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_499c88:
    // 0x499c88: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x499c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x499c8c: 0xac93000c  sw          $s3, 0xC($a0)
    ctx->pc = 0x499c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 19));
    // 0x499c90: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x499c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x499c94: 0xc12a4ce  jal         func_4A9338
    ctx->pc = 0x499C94u;
    SET_GPR_U32(ctx, 31, 0x499C9Cu);
    ctx->pc = 0x499C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499C94u;
    // 0x499c98: 0xac950014  sw          $s5, 0x14($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x499C94u, 0x499C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499C9Cu;
label_499c9c:
    // 0x499c9c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x499c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x499ca0: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x499ca0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x499ca4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x499ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x499ca8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x499CA8u;
    {
        const bool branch_taken_0x499ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499CA8u;
        // 0x499cac: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x499ca8) {
            ctx->pc = 0x499C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499c88;
        }
    }
    ctx->pc = 0x499CB0u;
label_499cb0:
    // 0x499cb0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x499cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_499cb4:
    // 0x499cb4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x499cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x499cb8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x499cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x499cbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x499cbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499cc0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x499cc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499cc4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x499cc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x499CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499CCCu;
        // 0x499cd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499CD4u;
    // 0x499cd4: 0x0  nop
    ctx->pc = 0x499cd4u;
    // NOP
    ctx->pc = 0x499cd8u;
}
