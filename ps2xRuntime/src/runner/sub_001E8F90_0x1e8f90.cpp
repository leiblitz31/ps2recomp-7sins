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

// Function: sub_001E8F90
// Address: 0x1e8f90 - 0x1e9000
void sub_001E8F90_0x1e8f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8F90_0x1e8f90");
#endif

    switch (ctx->pc) {
        case 0x1e8fb4u: goto label_1e8fb4;
        default: break;
    }

    ctx->pc = 0x1e8f90u;

    // 0x1e8f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e8f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e8f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8f9c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e8f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e8fa0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e8fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e8fa4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e8fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e8fa8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e8fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8fac: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1E8FACu;
    SET_GPR_U32(ctx, 31, 0x1E8FB4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1E8FACu, 0x1E8FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8FB4u;
label_1e8fb4:
    // 0x1e8fb4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1e8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1e8fb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E8FB8u;
    {
        const bool branch_taken_0x1e8fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8fb8) {
            ctx->pc = 0x1E8FE8u;
            goto label_1e8fe8;
        }
    }
    ctx->pc = 0x1E8FC0u;
    // 0x1e8fc0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e8fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8fc4: 0x8fa7002c  lw          $a3, 0x2C($sp)
    ctx->pc = 0x1e8fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1e8fc8: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x1e8fc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8fcc: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x1e8fccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1e8fd0: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x1e8fd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e8fd4: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1e8fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1e8fd8: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x1e8fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e8fdc: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x1e8fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e8fe0: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x1e8fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e8fe4: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x1e8fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
label_1e8fe8:
    // 0x1e8fe8: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1e8fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e8fec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8ff4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e8ff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e8ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9000u;
}
