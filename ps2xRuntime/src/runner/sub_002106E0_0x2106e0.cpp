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

// Function: sub_002106E0
// Address: 0x2106e0 - 0x210740
void sub_002106E0_0x2106e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002106E0_0x2106e0");
#endif

    switch (ctx->pc) {
        case 0x2106fcu: goto label_2106fc;
        case 0x21070cu: goto label_21070c;
        default: break;
    }

    ctx->pc = 0x2106e0u;

    // 0x2106e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2106e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2106e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2106e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2106e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2106e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2106ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2106ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2106f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2106f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2106f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2106F4u;
    {
        const bool branch_taken_0x2106f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2106f4) {
            ctx->pc = 0x210718u;
            goto label_210718;
        }
    }
    ctx->pc = 0x2106FCu;
label_2106fc:
    // 0x2106fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2106fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210700: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x210700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210704: 0xc041d58  jal         func_107560
    ctx->pc = 0x210704u;
    SET_GPR_U32(ctx, 31, 0x21070Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x210704u, 0x21070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21070Cu;
label_21070c:
    // 0x21070c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210710: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x210710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x210714: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x210714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_210718:
    // 0x210718: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x210718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21071c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x21071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210720: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x210720u;
    {
        const bool branch_taken_0x210720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x210720) {
            ctx->pc = 0x2106FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2106fc;
        }
    }
    ctx->pc = 0x210728u;
    // 0x210728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21072c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x21072cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x210730: 0x3e00008  jr          $ra
    ctx->pc = 0x210730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210738u;
    // 0x210738: 0x0  nop
    ctx->pc = 0x210738u;
    // NOP
    // 0x21073c: 0x0  nop
    ctx->pc = 0x21073cu;
    // NOP
    ctx->pc = 0x210740u;
}
