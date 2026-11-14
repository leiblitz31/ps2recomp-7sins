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

// Function: sub_00478F60
// Address: 0x478f60 - 0x478fd0
void sub_00478F60_0x478f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478F60_0x478f60");
#endif

    switch (ctx->pc) {
        case 0x478f84u: goto label_478f84;
        case 0x478facu: goto label_478fac;
        default: break;
    }

    ctx->pc = 0x478f60u;

    // 0x478f60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x478f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x478f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x478f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x478f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x478f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x478f6c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x478f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x478f70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x478f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x478f74: 0xa3a70060  sb          $a3, 0x60($sp)
    ctx->pc = 0x478f74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 7));
    // 0x478f78: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x478f78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478f7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x478F7Cu;
    {
        const bool branch_taken_0x478f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478f7c) {
            ctx->pc = 0x478FB0u;
            goto label_478fb0;
        }
    }
    ctx->pc = 0x478F84u;
label_478f84:
    // 0x478f84: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x478f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x478f88: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x478f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x478f8c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x478f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478f90: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x478f90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x478f94: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x478f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x478f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x478f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478f9c: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x478f9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x478fa0: 0x83a60060  lb          $a2, 0x60($sp)
    ctx->pc = 0x478fa0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x478fa4: 0xc11e3f4  jal         func_478FD0
    ctx->pc = 0x478FA4u;
    SET_GPR_U32(ctx, 31, 0x478FACu);
    ctx->pc = 0x478FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478FD0u, 0x478FA4u, 0x478FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478FACu;
label_478fac:
    // 0x478fac: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x478facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_478fb0:
    // 0x478fb0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x478fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478fb4: 0x1603fff3  bne         $s0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x478FB4u;
    {
        const bool branch_taken_0x478fb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x478fb4) {
            ctx->pc = 0x478F84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478f84;
        }
    }
    ctx->pc = 0x478FBCu;
    // 0x478fbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x478fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x478fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478fc4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x478fc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x478fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x478FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478FD0u;
}
