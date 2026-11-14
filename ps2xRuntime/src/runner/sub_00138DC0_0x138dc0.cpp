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

// Function: sub_00138DC0
// Address: 0x138dc0 - 0x138e20
void sub_00138DC0_0x138dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138DC0_0x138dc0");
#endif

    switch (ctx->pc) {
        case 0x138df8u: goto label_138df8;
        default: break;
    }

    ctx->pc = 0x138dc0u;

    // 0x138dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138dc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x138dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x138dcc: 0x8f82ba70  lw          $v0, -0x4590($gp)
    ctx->pc = 0x138dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138dd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x138DD0u;
    {
        const bool branch_taken_0x138dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138dd0) {
            ctx->pc = 0x138DE4u;
            goto label_138de4;
        }
    }
    ctx->pc = 0x138DD8u;
    // 0x138dd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x138dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ddc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x138DDCu;
    {
        const bool branch_taken_0x138ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138ddc) {
            ctx->pc = 0x138E10u;
            goto label_138e10;
        }
    }
    ctx->pc = 0x138DE4u;
label_138de4:
    // 0x138de4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x138de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x138de8: 0xa040bda0  sb          $zero, -0x4260($v0)
    ctx->pc = 0x138de8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60BDA0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60BDA0u, _value); } while (0);
    // 0x138dec: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x138decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138df0: 0xc1140c8  jal         func_450320
    ctx->pc = 0x138DF0u;
    SET_GPR_U32(ctx, 31, 0x138DF8u);
    ctx->pc = 0x450320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450320u, 0x138DF0u, 0x138DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DF8u;
label_138df8:
    // 0x138df8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x138df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x138dfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138e00: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x138e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x138e04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138e08: 0xa04000a8  sb          $zero, 0xA8($v0)
    ctx->pc = 0x138e08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x138e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138e10:
    // 0x138e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138e14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x138e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x138e18: 0x3e00008  jr          $ra
    ctx->pc = 0x138E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138E20u;
}
