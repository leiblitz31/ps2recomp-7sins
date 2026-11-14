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

// Function: sub_002E5FD0
// Address: 0x2e5fd0 - 0x2e6010
void sub_002E5FD0_0x2e5fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5FD0_0x2e5fd0");
#endif

    switch (ctx->pc) {
        case 0x2e5fd0u: goto label_2e5fd0;
        case 0x2e5fd4u: goto label_2e5fd4;
        case 0x2e5fd8u: goto label_2e5fd8;
        case 0x2e5fdcu: goto label_2e5fdc;
        case 0x2e5fe0u: goto label_2e5fe0;
        case 0x2e5fe4u: goto label_2e5fe4;
        case 0x2e5fe8u: goto label_2e5fe8;
        case 0x2e5fecu: goto label_2e5fec;
        case 0x2e5ff0u: goto label_2e5ff0;
        case 0x2e5ff4u: goto label_2e5ff4;
        case 0x2e5ff8u: goto label_2e5ff8;
        case 0x2e5ffcu: goto label_2e5ffc;
        case 0x2e6000u: goto label_2e6000;
        case 0x2e6004u: goto label_2e6004;
        case 0x2e6008u: goto label_2e6008;
        case 0x2e600cu: goto label_2e600c;
        default: break;
    }

    ctx->pc = 0x2e5fd0u;

label_2e5fd0:
    // 0x2e5fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e5fd4:
    // 0x2e5fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e5fd8:
    // 0x2e5fd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e5fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2e5fdc:
    // 0x2e5fdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e5fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5fe0:
    // 0x2e5fe0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e5fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e5fe4:
    // 0x2e5fe4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e5fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e5fe8:
    // 0x2e5fe8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2e5fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2e5fec:
    // 0x2e5fec: 0x320f809  jalr        $t9
label_2e5ff0:
    if (ctx->pc == 0x2E5FF0u) {
        ctx->pc = 0x2E5FF4u;
        goto label_2e5ff4;
    }
    ctx->pc = 0x2E5FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E5FF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5FECu, 0x2E5FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5FF4u;
label_2e5ff4:
    // 0x2e5ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5ff8:
    // 0x2e5ff8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e5ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e5ffc:
    // 0x2e5ffc: 0x3e00008  jr          $ra
label_2e6000:
    if (ctx->pc == 0x2E6000u) {
        ctx->pc = 0x2E6004u;
        goto label_2e6004;
    }
    ctx->pc = 0x2E5FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6004u;
label_2e6004:
    // 0x2e6004: 0x0  nop
    ctx->pc = 0x2e6004u;
    // NOP
label_2e6008:
    // 0x2e6008: 0x0  nop
    ctx->pc = 0x2e6008u;
    // NOP
label_2e600c:
    // 0x2e600c: 0x0  nop
    ctx->pc = 0x2e600cu;
    // NOP
    ctx->pc = 0x2e6010u;
}
