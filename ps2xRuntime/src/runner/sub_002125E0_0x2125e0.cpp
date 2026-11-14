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

// Function: sub_002125E0
// Address: 0x2125e0 - 0x212640
void sub_002125E0_0x2125e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002125E0_0x2125e0");
#endif

    switch (ctx->pc) {
        case 0x2125fcu: goto label_2125fc;
        case 0x21260cu: goto label_21260c;
        default: break;
    }

    ctx->pc = 0x2125e0u;

    // 0x2125e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2125e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2125e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2125e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2125e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2125e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2125ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2125ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2125f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2125f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2125f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2125F4u;
    {
        const bool branch_taken_0x2125f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2125f4) {
            ctx->pc = 0x212618u;
            goto label_212618;
        }
    }
    ctx->pc = 0x2125FCu;
label_2125fc:
    // 0x2125fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2125fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212600: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x212600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212604: 0xc0601e0  jal         func_180780
    ctx->pc = 0x212604u;
    SET_GPR_U32(ctx, 31, 0x21260Cu);
    ctx->pc = 0x180780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180780u, 0x212604u, 0x21260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21260Cu;
label_21260c:
    // 0x21260c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212610: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x212610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x212614: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x212614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_212618:
    // 0x212618: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x212618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21261c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x21261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212620: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x212620u;
    {
        const bool branch_taken_0x212620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x212620) {
            ctx->pc = 0x2125FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2125fc;
        }
    }
    ctx->pc = 0x212628u;
    // 0x212628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21262c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x21262cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x212630: 0x3e00008  jr          $ra
    ctx->pc = 0x212630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212638u;
    // 0x212638: 0x0  nop
    ctx->pc = 0x212638u;
    // NOP
    // 0x21263c: 0x0  nop
    ctx->pc = 0x21263cu;
    // NOP
    ctx->pc = 0x212640u;
}
