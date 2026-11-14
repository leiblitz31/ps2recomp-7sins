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

// Function: sub_00208280
// Address: 0x208280 - 0x2082d0
void sub_00208280_0x208280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208280_0x208280");
#endif

    switch (ctx->pc) {
        case 0x2082a4u: goto label_2082a4;
        default: break;
    }

    ctx->pc = 0x208280u;

    // 0x208280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x208280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x208284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x208288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20828c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20828cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x208290: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x208290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x208294: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x208294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208298: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x208298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20829c: 0xc0820b4  jal         func_2082D0
    ctx->pc = 0x20829Cu;
    SET_GPR_U32(ctx, 31, 0x2082A4u);
    ctx->pc = 0x2082D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2082D0u, 0x20829Cu, 0x2082A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2082A4u;
label_2082a4:
    // 0x2082a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2082a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2082a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2082a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2082ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2082acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2082b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2082b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2082b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2082b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2082b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2082b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2082bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2082BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2082BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2082C4u;
    // 0x2082c4: 0x0  nop
    ctx->pc = 0x2082c4u;
    // NOP
    // 0x2082c8: 0x0  nop
    ctx->pc = 0x2082c8u;
    // NOP
    // 0x2082cc: 0x0  nop
    ctx->pc = 0x2082ccu;
    // NOP
    ctx->pc = 0x2082d0u;
}
