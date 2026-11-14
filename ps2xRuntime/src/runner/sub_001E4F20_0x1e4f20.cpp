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

// Function: sub_001E4F20
// Address: 0x1e4f20 - 0x1e4fb0
void sub_001E4F20_0x1e4f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4F20_0x1e4f20");
#endif

    switch (ctx->pc) {
        case 0x1e4f58u: goto label_1e4f58;
        case 0x1e4f8cu: goto label_1e4f8c;
        case 0x1e4f98u: goto label_1e4f98;
        default: break;
    }

    ctx->pc = 0x1e4f20u;

    // 0x1e4f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e4f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4f28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e4f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e4f2c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4f30: 0x906300ee  lbu         $v1, 0xEE($v1)
    ctx->pc = 0x1e4f30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 238)));
    // 0x1e4f34: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E4F34u;
    {
        const bool branch_taken_0x1e4f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f34) {
            ctx->pc = 0x1E4F98u;
            goto label_1e4f98;
        }
    }
    ctx->pc = 0x1E4F3Cu;
    // 0x1e4f3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4f40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4f44: 0xa04300ee  sb          $v1, 0xEE($v0)
    ctx->pc = 0x1e4f44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 238), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4f48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4f4c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4f50: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4F50u;
    SET_GPR_U32(ctx, 31, 0x1E4F58u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4F50u, 0x1E4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F58u;
label_1e4f58:
    // 0x1e4f58: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4f5c: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e4f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e4f60: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4f64: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1e4f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4f68: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1e4f68u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1e4f6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4f70: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x1e4f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4f74: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1e4f74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e4f78: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e4f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e4f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4f80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4f84: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E4F84u;
    SET_GPR_U32(ctx, 31, 0x1E4F8Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E4F84u, 0x1E4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F8Cu;
label_1e4f8c:
    // 0x1e4f8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e4f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4f90: 0xc07925c  jal         func_1E4970
    ctx->pc = 0x1E4F90u;
    SET_GPR_U32(ctx, 31, 0x1E4F98u);
    ctx->pc = 0x1E4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4970u, 0x1E4F90u, 0x1E4F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F98u;
label_1e4f98:
    // 0x1e4f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4f9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e4f9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e4fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4FA8u;
    // 0x1e4fa8: 0x0  nop
    ctx->pc = 0x1e4fa8u;
    // NOP
    // 0x1e4fac: 0x0  nop
    ctx->pc = 0x1e4facu;
    // NOP
    ctx->pc = 0x1e4fb0u;
}
