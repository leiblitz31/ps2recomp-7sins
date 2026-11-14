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

// Function: sub_00314B60
// Address: 0x314b60 - 0x314bd8
void sub_00314B60_0x314b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314B60_0x314b60");
#endif

    switch (ctx->pc) {
        case 0x314b88u: goto label_314b88;
        case 0x314b9cu: goto label_314b9c;
        case 0x314bb4u: goto label_314bb4;
        default: break;
    }

    ctx->pc = 0x314b60u;

    // 0x314b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x314b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x314b64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x314b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x314b68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x314b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x314b6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x314b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x314b70: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x314b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x314b74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x314b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x314b78: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x314B78u;
    {
        const bool branch_taken_0x314b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B78u;
        // 0x314b7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b78) {
            ctx->pc = 0x314BC0u;
            goto label_314bc0;
        }
    }
    ctx->pc = 0x314B80u;
    // 0x314b80: 0xc1063a4  jal         func_418E90
    ctx->pc = 0x314B80u;
    SET_GPR_U32(ctx, 31, 0x314B88u);
    ctx->pc = 0x418E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418E90u, 0x314B80u, 0x314B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B88u;
label_314b88:
    // 0x314b88: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x314b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x314b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314b90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x314b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314b94: 0xc103440  jal         func_40D100
    ctx->pc = 0x314B94u;
    SET_GPR_U32(ctx, 31, 0x314B9Cu);
    ctx->pc = 0x314B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B94u;
    // 0x314b98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x314B94u, 0x314B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B9Cu;
label_314b9c:
    // 0x314b9c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x314B9Cu;
    {
        const bool branch_taken_0x314b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314b9c) {
            ctx->pc = 0x314BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314B9Cu;
            // 0x314ba0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314BACu;
            goto label_314bac;
        }
    }
    ctx->pc = 0x314BA4u;
    // 0x314ba4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x314BA4u;
    {
        const bool branch_taken_0x314ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BA4u;
        // 0x314ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ba4) {
            ctx->pc = 0x314BC4u;
            goto label_314bc4;
        }
    }
    ctx->pc = 0x314BACu;
label_314bac:
    // 0x314bac: 0xc0c48f2  jal         func_3123C8
    ctx->pc = 0x314BACu;
    SET_GPR_U32(ctx, 31, 0x314BB4u);
    ctx->pc = 0x314BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314BACu;
    // 0x314bb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3123C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3123C8u, 0x314BACu, 0x314BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314BB4u;
label_314bb4:
    // 0x314bb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x314bb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314bb8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x314BB8u;
    {
        const bool branch_taken_0x314bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x314BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BB8u;
        // 0x314bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314bb8) {
            ctx->pc = 0x314BC4u;
            goto label_314bc4;
        }
    }
    ctx->pc = 0x314BC0u;
label_314bc0:
    // 0x314bc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x314bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_314bc4:
    // 0x314bc4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x314bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314bc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x314bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314bcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x314bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x314BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BD0u;
        // 0x314bd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314BD8u;
}
