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

// Function: sub_003A6F58
// Address: 0x3a6f58 - 0x3a6fe0
void sub_003A6F58_0x3a6f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6F58_0x3a6f58");
#endif

    switch (ctx->pc) {
        case 0x3a6facu: goto label_3a6fac;
        default: break;
    }

    ctx->pc = 0x3a6f58u;

    // 0x3a6f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6f5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a6f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a6f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6f68: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x3a6f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x3a6f6c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A6F6Cu;
    {
        const bool branch_taken_0x3a6f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F6Cu;
        // 0x3a6f70: 0x8f82bd80  lw          $v0, -0x4280($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f6c) {
            ctx->pc = 0x3A6FC0u;
            goto label_3a6fc0;
        }
    }
    ctx->pc = 0x3A6F74u;
    // 0x3a6f74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a6f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6f78: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x3a6f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a6f7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a6f80: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A6F80u;
    {
        const bool branch_taken_0x3a6f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6f80) {
            ctx->pc = 0x3A6F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6F80u;
            // 0x3a6f84: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6FA0u;
            goto label_3a6fa0;
        }
    }
    ctx->pc = 0x3A6F88u;
    // 0x3a6f88: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x3a6f88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a6f8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a6f90: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6F90u;
    {
        const bool branch_taken_0x3a6f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a6f90) {
            ctx->pc = 0x3A6F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6F90u;
            // 0x3a6f94: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6FA0u;
            goto label_3a6fa0;
        }
    }
    ctx->pc = 0x3A6F98u;
    // 0x3a6f98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6F98u;
    {
        const bool branch_taken_0x3a6f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F98u;
        // 0x3a6f9c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f98) {
            ctx->pc = 0x3A6FACu;
            goto label_3a6fac;
        }
    }
    ctx->pc = 0x3A6FA0u;
label_3a6fa0:
    // 0x3a6fa0: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x3a6fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3a6fa4: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x3A6FA4u;
    SET_GPR_U32(ctx, 31, 0x3A6FACu);
    ctx->pc = 0x3A6FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6FA4u;
    // 0x3a6fa8: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A6FA4u, 0x3A6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6FACu;
label_3a6fac:
    // 0x3a6fac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a6facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a6fb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6FB0u;
    {
        const bool branch_taken_0x3a6fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FB0u;
        // 0x3a6fb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6fb0) {
            ctx->pc = 0x3A6FCCu;
            goto label_3a6fcc;
        }
    }
    ctx->pc = 0x3A6FB8u;
    // 0x3a6fb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6FB8u;
    {
        const bool branch_taken_0x3a6fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FB8u;
        // 0x3a6fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6fb8) {
            ctx->pc = 0x3A6FCCu;
            goto label_3a6fcc;
        }
    }
    ctx->pc = 0x3A6FC0u;
label_3a6fc0:
    // 0x3a6fc0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a6fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a6fc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a6fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3a6fc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a6fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a6fcc:
    // 0x3a6fcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FD4u;
        // 0x3a6fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6FDCu;
    // 0x3a6fdc: 0x0  nop
    ctx->pc = 0x3a6fdcu;
    // NOP
    ctx->pc = 0x3a6fe0u;
}
