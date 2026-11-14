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

// Function: sub_00479F90
// Address: 0x479f90 - 0x47a020
void sub_00479F90_0x479f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479F90_0x479f90");
#endif

    switch (ctx->pc) {
        case 0x479fd0u: goto label_479fd0;
        default: break;
    }

    ctx->pc = 0x479f90u;

    // 0x479f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x479f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x479f94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x479f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x479f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x479f9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x479f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x479fa0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x479fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479fa4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x479fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x479fa8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x479fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x479fac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x479FACu;
    {
        const bool branch_taken_0x479fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479fac) {
            ctx->pc = 0x47A004u;
            goto label_47a004;
        }
    }
    ctx->pc = 0x479FB4u;
    // 0x479fb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x479fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479fb8: 0x8c510030  lw          $s1, 0x30($v0)
    ctx->pc = 0x479fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x479fbc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x479fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479fc0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x479fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x479fc4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x479fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x479fc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x479FC8u;
    {
        const bool branch_taken_0x479fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479fc8) {
            ctx->pc = 0x479FFCu;
            goto label_479ffc;
        }
    }
    ctx->pc = 0x479FD0u;
label_479fd0:
    // 0x479fd0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x479fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x479fd4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x479fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x479fd8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x479fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x479fdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x479fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x479fe0: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x479fe0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x479fe4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x479FE4u;
    {
        const bool branch_taken_0x479fe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x479fe4) {
            ctx->pc = 0x479FF8u;
            goto label_479ff8;
        }
    }
    ctx->pc = 0x479FECu;
    // 0x479fec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x479fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x479ff0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x479FF0u;
    {
        const bool branch_taken_0x479ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479ff0) {
            ctx->pc = 0x47A008u;
            goto label_47a008;
        }
    }
    ctx->pc = 0x479FF8u;
label_479ff8:
    // 0x479ff8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x479ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_479ffc:
    // 0x479ffc: 0x601fff4  bgez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x479FFCu;
    {
        const bool branch_taken_0x479ffc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x479ffc) {
            ctx->pc = 0x479FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_479fd0;
        }
    }
    ctx->pc = 0x47A004u;
label_47a004:
    // 0x47a004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47a004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a008:
    // 0x47a008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47a008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47a00c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47a00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47a010: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47a014: 0x3e00008  jr          $ra
    ctx->pc = 0x47A014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A01Cu;
    // 0x47a01c: 0x0  nop
    ctx->pc = 0x47a01cu;
    // NOP
    ctx->pc = 0x47a020u;
}
