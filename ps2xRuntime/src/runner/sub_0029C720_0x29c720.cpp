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

// Function: sub_0029C720
// Address: 0x29c720 - 0x29c760
void sub_0029C720_0x29c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C720_0x29c720");
#endif

    switch (ctx->pc) {
        case 0x29c73cu: goto label_29c73c;
        default: break;
    }

    ctx->pc = 0x29c720u;

    // 0x29c720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29c728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29c72c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x29c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x29c730: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x29c730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x29c734: 0xc0858ac  jal         func_2162B0
    ctx->pc = 0x29C734u;
    SET_GPR_U32(ctx, 31, 0x29C73Cu);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x29C734u, 0x29C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C73Cu;
label_29c73c:
    // 0x29c73c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c740: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x29c740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c744: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29c744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c74c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29c74cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29c750: 0x3e00008  jr          $ra
    ctx->pc = 0x29C750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C758u;
    // 0x29c758: 0x0  nop
    ctx->pc = 0x29c758u;
    // NOP
    // 0x29c75c: 0x0  nop
    ctx->pc = 0x29c75cu;
    // NOP
    ctx->pc = 0x29c760u;
}
