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

// Function: sub_00294DA0
// Address: 0x294da0 - 0x294e10
void sub_00294DA0_0x294da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294DA0_0x294da0");
#endif

    switch (ctx->pc) {
        case 0x294dfcu: goto label_294dfc;
        default: break;
    }

    ctx->pc = 0x294da0u;

    // 0x294da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294da4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x294da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x294da8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x294da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294dac: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x294dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x294db0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x294db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x294db4: 0x3e00008  jr          $ra
    ctx->pc = 0x294DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294DBCu;
    // 0x294dbc: 0x0  nop
    ctx->pc = 0x294dbcu;
    // NOP
    // 0x294dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294dc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x294dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x294dcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x294dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294dd0: 0x80630070  lb          $v1, 0x70($v1)
    ctx->pc = 0x294dd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x294dd4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x294dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x294dd8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x294dd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x294ddc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x294DDCu;
    {
        const bool branch_taken_0x294ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294ddc) {
            ctx->pc = 0x294DFCu;
            goto label_294dfc;
        }
    }
    ctx->pc = 0x294DE4u;
    // 0x294de4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x294de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294de8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x294de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x294dec: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x294decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x294df0: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x294df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x294df4: 0xc121910  jal         func_486440
    ctx->pc = 0x294DF4u;
    SET_GPR_U32(ctx, 31, 0x294DFCu);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x294DF4u, 0x294DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DFCu;
label_294dfc:
    // 0x294dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294e00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x294e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x294e04: 0x3e00008  jr          $ra
    ctx->pc = 0x294E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294E0Cu;
    // 0x294e0c: 0x0  nop
    ctx->pc = 0x294e0cu;
    // NOP
    ctx->pc = 0x294e10u;
}
