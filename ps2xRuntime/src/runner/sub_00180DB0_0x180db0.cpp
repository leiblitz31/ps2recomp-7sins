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

// Function: sub_00180DB0
// Address: 0x180db0 - 0x180e20
void sub_00180DB0_0x180db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180DB0_0x180db0");
#endif

    switch (ctx->pc) {
        case 0x180dccu: goto label_180dcc;
        default: break;
    }

    ctx->pc = 0x180db0u;

    // 0x180db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180db4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180db8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x180db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x180dbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x180dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x180dc0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x180dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x180dc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x180DC4u;
    {
        const bool branch_taken_0x180dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180dc4) {
            ctx->pc = 0x180DF4u;
            goto label_180df4;
        }
    }
    ctx->pc = 0x180DCCu;
label_180dcc:
    // 0x180dcc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x180dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180dd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x180dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180dd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x180dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180dd8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x180dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x180ddc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x180ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180de0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x180de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x180de4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x180de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x180de8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x180de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180dec: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x180decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x180df0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x180df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_180df4:
    // 0x180df4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x180df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180df8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x180DF8u;
    {
        const bool branch_taken_0x180df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180df8) {
            ctx->pc = 0x180DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180dcc;
        }
    }
    ctx->pc = 0x180E00u;
    // 0x180e00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x180e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180e08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x180e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x180e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x180E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180E14u;
    // 0x180e14: 0x0  nop
    ctx->pc = 0x180e14u;
    // NOP
    // 0x180e18: 0x0  nop
    ctx->pc = 0x180e18u;
    // NOP
    // 0x180e1c: 0x0  nop
    ctx->pc = 0x180e1cu;
    // NOP
    ctx->pc = 0x180e20u;
}
