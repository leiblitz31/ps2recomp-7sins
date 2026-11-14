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

// Function: sub_0045F010
// Address: 0x45f010 - 0x45f050
void sub_0045F010_0x45f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F010_0x45f010");
#endif

    switch (ctx->pc) {
        case 0x45f03cu: goto label_45f03c;
        default: break;
    }

    ctx->pc = 0x45f010u;

    // 0x45f010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45f010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45f014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45f018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x45f018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45f01c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45f020: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x45F020u;
    {
        const bool branch_taken_0x45f020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f020) {
            ctx->pc = 0x45F03Cu;
            goto label_45f03c;
        }
    }
    ctx->pc = 0x45F028u;
    // 0x45f028: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45f028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45f02c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x45f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x45f030: 0x24a54dd8  addiu       $a1, $a1, 0x4DD8
    ctx->pc = 0x45f030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19928));
    // 0x45f034: 0xc117bf0  jal         func_45EFC0
    ctx->pc = 0x45F034u;
    SET_GPR_U32(ctx, 31, 0x45F03Cu);
    ctx->pc = 0x45EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EFC0u, 0x45F034u, 0x45F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F03Cu;
label_45f03c:
    // 0x45f03c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45f03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45f040: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45f040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45f044: 0x3e00008  jr          $ra
    ctx->pc = 0x45F044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F04Cu;
    // 0x45f04c: 0x0  nop
    ctx->pc = 0x45f04cu;
    // NOP
    ctx->pc = 0x45f050u;
}
