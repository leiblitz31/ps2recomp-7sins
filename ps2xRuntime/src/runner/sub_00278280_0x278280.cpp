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

// Function: sub_00278280
// Address: 0x278280 - 0x2782c0
void sub_00278280_0x278280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278280_0x278280");
#endif

    switch (ctx->pc) {
        case 0x278294u: goto label_278294;
        case 0x2782a4u: goto label_2782a4;
        default: break;
    }

    ctx->pc = 0x278280u;

    // 0x278280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27828c: 0xc12246c  jal         func_4891B0
    ctx->pc = 0x27828Cu;
    SET_GPR_U32(ctx, 31, 0x278294u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27828Cu, 0x278294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278294u;
label_278294:
    // 0x278294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x278294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278298: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x278298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27829c: 0xc1205f4  jal         func_4817D0
    ctx->pc = 0x27829Cu;
    SET_GPR_U32(ctx, 31, 0x2782A4u);
    ctx->pc = 0x4817D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4817D0u, 0x27829Cu, 0x2782A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2782A4u;
label_2782a4:
    // 0x2782a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2782a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2782a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2782a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2782ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2782acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2782b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2782B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2782B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2782B8u;
    // 0x2782b8: 0x0  nop
    ctx->pc = 0x2782b8u;
    // NOP
    // 0x2782bc: 0x0  nop
    ctx->pc = 0x2782bcu;
    // NOP
    ctx->pc = 0x2782c0u;
}
