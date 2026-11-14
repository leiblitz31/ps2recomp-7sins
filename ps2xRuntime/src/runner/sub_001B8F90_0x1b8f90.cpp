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

// Function: sub_001B8F90
// Address: 0x1b8f90 - 0x1b9010
void sub_001B8F90_0x1b8f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8F90_0x1b8f90");
#endif

    switch (ctx->pc) {
        case 0x1b8fc4u: goto label_1b8fc4;
        case 0x1b8fd4u: goto label_1b8fd4;
        case 0x1b8ff4u: goto label_1b8ff4;
        default: break;
    }

    ctx->pc = 0x1b8f90u;

    // 0x1b8f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8f98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b8f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b8f9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1b8f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b8fa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8fa4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B8FA4u;
    {
        const bool branch_taken_0x1b8fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8fa4) {
            ctx->pc = 0x1B8FF4u;
            goto label_1b8ff4;
        }
    }
    ctx->pc = 0x1B8FACu;
    // 0x1b8fac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b8facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8fb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8fb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b8fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8fb8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b8fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b8fbc: 0xc06e42c  jal         func_1B90B0
    ctx->pc = 0x1B8FBCu;
    SET_GPR_U32(ctx, 31, 0x1B8FC4u);
    ctx->pc = 0x1B90B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B90B0u, 0x1B8FBCu, 0x1B8FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FC4u;
label_1b8fc4:
    // 0x1b8fc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b8fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8fc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8fcc: 0xc06e404  jal         func_1B9010
    ctx->pc = 0x1B8FCCu;
    SET_GPR_U32(ctx, 31, 0x1B8FD4u);
    ctx->pc = 0x1B9010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9010u, 0x1B8FCCu, 0x1B8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FD4u;
label_1b8fd4:
    // 0x1b8fd4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1b8fd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8fd8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b8fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b8fdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b8fdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b8fe0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8FE0u;
    {
        const bool branch_taken_0x1b8fe0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b8fe0) {
            ctx->pc = 0x1B8FF4u;
            goto label_1b8ff4;
        }
    }
    ctx->pc = 0x1B8FE8u;
    // 0x1b8fe8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b8fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8fec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1B8FECu;
    SET_GPR_U32(ctx, 31, 0x1B8FF4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1B8FECu, 0x1B8FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FF4u;
label_1b8ff4:
    // 0x1b8ff4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8ffc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b8ffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9000: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9008u;
    // 0x1b9008: 0x0  nop
    ctx->pc = 0x1b9008u;
    // NOP
    // 0x1b900c: 0x0  nop
    ctx->pc = 0x1b900cu;
    // NOP
    ctx->pc = 0x1b9010u;
}
