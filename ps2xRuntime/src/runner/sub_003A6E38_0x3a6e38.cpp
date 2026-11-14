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

// Function: sub_003A6E38
// Address: 0x3a6e38 - 0x3a6ec0
void sub_003A6E38_0x3a6e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6E38_0x3a6e38");
#endif

    switch (ctx->pc) {
        case 0x3a6e8cu: goto label_3a6e8c;
        default: break;
    }

    ctx->pc = 0x3a6e38u;

    // 0x3a6e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6e3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a6e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a6e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6e44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e48: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3a6e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a6e4c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A6E4Cu;
    {
        const bool branch_taken_0x3a6e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E4Cu;
        // 0x3a6e50: 0x8f82bd78  lw          $v0, -0x4288($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6e4c) {
            ctx->pc = 0x3A6EA0u;
            goto label_3a6ea0;
        }
    }
    ctx->pc = 0x3A6E54u;
    // 0x3a6e54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a6e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e58: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x3a6e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a6e5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a6e60: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A6E60u;
    {
        const bool branch_taken_0x3a6e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6e60) {
            ctx->pc = 0x3A6E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6E60u;
            // 0x3a6e64: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6E80u;
            goto label_3a6e80;
        }
    }
    ctx->pc = 0x3A6E68u;
    // 0x3a6e68: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x3a6e68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a6e6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a6e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a6e70: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6E70u;
    {
        const bool branch_taken_0x3a6e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a6e70) {
            ctx->pc = 0x3A6E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6E70u;
            // 0x3a6e74: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6E80u;
            goto label_3a6e80;
        }
    }
    ctx->pc = 0x3A6E78u;
    // 0x3a6e78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6E78u;
    {
        const bool branch_taken_0x3a6e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E78u;
        // 0x3a6e7c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6e78) {
            ctx->pc = 0x3A6E8Cu;
            goto label_3a6e8c;
        }
    }
    ctx->pc = 0x3A6E80u;
label_3a6e80:
    // 0x3a6e80: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x3a6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3a6e84: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x3A6E84u;
    SET_GPR_U32(ctx, 31, 0x3A6E8Cu);
    ctx->pc = 0x3A6E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6E84u;
    // 0x3a6e88: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A6E84u, 0x3A6E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6E8Cu;
label_3a6e8c:
    // 0x3a6e8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a6e90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6E90u;
    {
        const bool branch_taken_0x3a6e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E90u;
        // 0x3a6e94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6e90) {
            ctx->pc = 0x3A6EACu;
            goto label_3a6eac;
        }
    }
    ctx->pc = 0x3A6E98u;
    // 0x3a6e98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6E98u;
    {
        const bool branch_taken_0x3a6e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E98u;
        // 0x3a6e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6e98) {
            ctx->pc = 0x3A6EACu;
            goto label_3a6eac;
        }
    }
    ctx->pc = 0x3A6EA0u;
label_3a6ea0:
    // 0x3a6ea0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a6ea4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3a6ea8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a6ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a6eac:
    // 0x3a6eac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6EB4u;
        // 0x3a6eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6EBCu;
    // 0x3a6ebc: 0x0  nop
    ctx->pc = 0x3a6ebcu;
    // NOP
    ctx->pc = 0x3a6ec0u;
}
