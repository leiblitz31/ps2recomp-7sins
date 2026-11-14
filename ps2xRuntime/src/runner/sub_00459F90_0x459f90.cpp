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

// Function: sub_00459F90
// Address: 0x459f90 - 0x45a010
void sub_00459F90_0x459f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459F90_0x459f90");
#endif

    switch (ctx->pc) {
        case 0x459fb4u: goto label_459fb4;
        case 0x459ff8u: goto label_459ff8;
        default: break;
    }

    ctx->pc = 0x459f90u;

    // 0x459f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x459f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x459f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459f98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x459f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x459f9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x459f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459fa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459fa4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x459fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x459fa8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x459fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x459fac: 0xc04ac78  jal         func_12B1E0
    ctx->pc = 0x459FACu;
    SET_GPR_U32(ctx, 31, 0x459FB4u);
    ctx->pc = 0x12B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B1E0u, 0x459FACu, 0x459FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459FB4u;
label_459fb4:
    // 0x459fb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x459fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459fb8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x459fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459fbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459fc0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x459fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x459fc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459fc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x459fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x459fcc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x459fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x459fd0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x459fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x459fd4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x459fd4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x459fd8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x459FD8u;
    {
        const bool branch_taken_0x459fd8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x459fd8) {
            ctx->pc = 0x459FE8u;
            goto label_459fe8;
        }
    }
    ctx->pc = 0x459FE0u;
    // 0x459fe0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x459fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x459fe4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x459fe4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_459fe8:
    // 0x459fe8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x459fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x459fec: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x459fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x459ff0: 0xc116c2c  jal         func_45B0B0
    ctx->pc = 0x459FF0u;
    SET_GPR_U32(ctx, 31, 0x459FF8u);
    ctx->pc = 0x45B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B0B0u, 0x459FF0u, 0x459FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459FF8u;
label_459ff8:
    // 0x459ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459ffc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x459ffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45a000: 0x3e00008  jr          $ra
    ctx->pc = 0x45A000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45A008u;
    // 0x45a008: 0x0  nop
    ctx->pc = 0x45a008u;
    // NOP
    // 0x45a00c: 0x0  nop
    ctx->pc = 0x45a00cu;
    // NOP
    ctx->pc = 0x45a010u;
}
