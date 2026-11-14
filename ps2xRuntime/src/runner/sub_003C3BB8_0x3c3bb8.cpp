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

// Function: sub_003C3BB8
// Address: 0x3c3bb8 - 0x3c3c40
void sub_003C3BB8_0x3c3bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3BB8_0x3c3bb8");
#endif

    switch (ctx->pc) {
        case 0x3c3be0u: goto label_3c3be0;
        default: break;
    }

    ctx->pc = 0x3c3bb8u;

    // 0x3c3bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c3bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c3bbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c3bc0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c3bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c3bc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c3bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c3bc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c3bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c3bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c3bd0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c3bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3bd4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x3c3bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x3c3bd8: 0xc0c0de8  jal         func_3037A0
    ctx->pc = 0x3C3BD8u;
    SET_GPR_U32(ctx, 31, 0x3C3BE0u);
    ctx->pc = 0x3C3BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3BD8u;
    // 0x3c3bdc: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3037A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3037A0u, 0x3C3BD8u, 0x3C3BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3BE0u;
label_3c3be0:
    // 0x3c3be0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3c3be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3c3be4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3BE4u;
    {
        const bool branch_taken_0x3c3be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BE4u;
        // 0x3c3be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3be4) {
            ctx->pc = 0x3C3BF8u;
            goto label_3c3bf8;
        }
    }
    ctx->pc = 0x3C3BECu;
    // 0x3c3bec: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x3c3becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3c3bf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c3bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3bf4: 0x222200a  movz        $a0, $s1, $v0
    ctx->pc = 0x3c3bf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
label_3c3bf8:
    // 0x3c3bf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c3bfc: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C3BFCu;
    {
        const bool branch_taken_0x3c3bfc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3C3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BFCu;
        // 0x3c3c00: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3bfc) {
            ctx->pc = 0x3C3C28u;
            goto label_3c3c28;
        }
    }
    ctx->pc = 0x3C3C04u;
    // 0x3c3c04: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x3c3c04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c3c08: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x3c3c08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c3c0c: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x3c3c0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3c3c10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3c3c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c3c14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3C14u;
    {
        const bool branch_taken_0x3c3c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C14u;
        // 0x3c3c18: 0xfe030010  sd          $v1, 0x10($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c14) {
            ctx->pc = 0x3C3C20u;
            goto label_3c3c20;
        }
    }
    ctx->pc = 0x3C3C1Cu;
    // 0x3c3c1c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x3c3c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
label_3c3c20:
    // 0x3c3c20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3C20u;
    {
        const bool branch_taken_0x3c3c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C20u;
        // 0x3c3c24: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c20) {
            ctx->pc = 0x3C3C2Cu;
            goto label_3c3c2c;
        }
    }
    ctx->pc = 0x3C3C28u;
label_3c3c28:
    // 0x3c3c28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c3c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3c2c:
    // 0x3c3c2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c3c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c3c30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c3c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c3c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c3c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c3c38: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C38u;
        // 0x3c3c3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3C40u;
}
