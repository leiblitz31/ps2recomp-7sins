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

// Function: sub_00113DE0
// Address: 0x113de0 - 0x113e20
void sub_00113DE0_0x113de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113DE0_0x113de0");
#endif

    switch (ctx->pc) {
        case 0x113de0u: goto label_113de0;
        case 0x113de4u: goto label_113de4;
        case 0x113de8u: goto label_113de8;
        case 0x113decu: goto label_113dec;
        case 0x113df0u: goto label_113df0;
        case 0x113df4u: goto label_113df4;
        case 0x113df8u: goto label_113df8;
        case 0x113dfcu: goto label_113dfc;
        case 0x113e00u: goto label_113e00;
        case 0x113e04u: goto label_113e04;
        case 0x113e08u: goto label_113e08;
        case 0x113e0cu: goto label_113e0c;
        case 0x113e10u: goto label_113e10;
        case 0x113e14u: goto label_113e14;
        case 0x113e18u: goto label_113e18;
        case 0x113e1cu: goto label_113e1c;
        default: break;
    }

    ctx->pc = 0x113de0u;

label_113de0:
    // 0x113de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_113de4:
    // 0x113de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_113de8:
    // 0x113de8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_113dec:
    // 0x113dec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_113df0:
    // 0x113df0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x113df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_113df4:
    // 0x113df4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x113df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_113df8:
    // 0x113df8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x113df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_113dfc:
    // 0x113dfc: 0x320f809  jalr        $t9
label_113e00:
    if (ctx->pc == 0x113E00u) {
        ctx->pc = 0x113E04u;
        goto label_113e04;
    }
    ctx->pc = 0x113DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113E04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113DFCu, 0x113E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113E04u;
label_113e04:
    // 0x113e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113e08:
    // 0x113e08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x113e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_113e0c:
    // 0x113e0c: 0x3e00008  jr          $ra
label_113e10:
    if (ctx->pc == 0x113E10u) {
        ctx->pc = 0x113E14u;
        goto label_113e14;
    }
    ctx->pc = 0x113E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113E14u;
label_113e14:
    // 0x113e14: 0x0  nop
    ctx->pc = 0x113e14u;
    // NOP
label_113e18:
    // 0x113e18: 0x0  nop
    ctx->pc = 0x113e18u;
    // NOP
label_113e1c:
    // 0x113e1c: 0x0  nop
    ctx->pc = 0x113e1cu;
    // NOP
    ctx->pc = 0x113e20u;
}
