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

// Function: sub_00140F90
// Address: 0x140f90 - 0x140fe0
void sub_00140F90_0x140f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140F90_0x140f90");
#endif

    switch (ctx->pc) {
        case 0x140fb0u: goto label_140fb0;
        case 0x140fd0u: goto label_140fd0;
        default: break;
    }

    ctx->pc = 0x140f90u;

    // 0x140f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140f98: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x140f98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x140f9c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x140f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x140fa0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x140fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x140fa4: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x140fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x140fa8: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x140FA8u;
    SET_GPR_U32(ctx, 31, 0x140FB0u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x140FA8u, 0x140FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140FB0u;
label_140fb0:
    // 0x140fb0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x140fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x140fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x140fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140fb8: 0x0  nop
    ctx->pc = 0x140fb8u;
    // NOP
    // 0x140fbc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x140fbcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x140fc0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x140fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x140fc4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x140fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x140fc8: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x140FC8u;
    SET_GPR_U32(ctx, 31, 0x140FD0u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x140FC8u, 0x140FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140FD0u;
label_140fd0:
    // 0x140fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140fd4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x140fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x140fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x140FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140FE0u;
}
