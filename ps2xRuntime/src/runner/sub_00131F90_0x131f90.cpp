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

// Function: sub_00131F90
// Address: 0x131f90 - 0x132000
void sub_00131F90_0x131f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131F90_0x131f90");
#endif

    switch (ctx->pc) {
        case 0x131fc4u: goto label_131fc4;
        case 0x131fe4u: goto label_131fe4;
        default: break;
    }

    ctx->pc = 0x131f90u;

    // 0x131f90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x131f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x131f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131f9c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x131f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x131fa0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x131fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x131fa4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x131fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x131fa8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x131fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x131fac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x131facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131fb0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x131fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x131fb4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x131fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131fb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fbc: 0xc04c878  jal         func_1321E0
    ctx->pc = 0x131FBCu;
    SET_GPR_U32(ctx, 31, 0x131FC4u);
    ctx->pc = 0x1321E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1321E0u, 0x131FBCu, 0x131FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FC4u;
label_131fc4:
    // 0x131fc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x131fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fc8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x131fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x131fcc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x131fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x131fd0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x131fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131fd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x131fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fd8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x131fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x131fdc: 0xc04c800  jal         func_132000
    ctx->pc = 0x131FDCu;
    SET_GPR_U32(ctx, 31, 0x131FE4u);
    ctx->pc = 0x132000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132000u, 0x131FDCu, 0x131FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FE4u;
label_131fe4:
    // 0x131fe4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x131fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131ff0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x131ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x131ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x131FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131FFCu;
    // 0x131ffc: 0x0  nop
    ctx->pc = 0x131ffcu;
    // NOP
    ctx->pc = 0x132000u;
}
