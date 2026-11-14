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

// Function: sub_001422C0
// Address: 0x1422c0 - 0x142320
void sub_001422C0_0x1422c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001422C0_0x1422c0");
#endif

    switch (ctx->pc) {
        case 0x1422c0u: goto label_1422c0;
        case 0x1422c4u: goto label_1422c4;
        case 0x1422c8u: goto label_1422c8;
        case 0x1422ccu: goto label_1422cc;
        case 0x1422d0u: goto label_1422d0;
        case 0x1422d4u: goto label_1422d4;
        case 0x1422d8u: goto label_1422d8;
        case 0x1422dcu: goto label_1422dc;
        case 0x1422e0u: goto label_1422e0;
        case 0x1422e4u: goto label_1422e4;
        case 0x1422e8u: goto label_1422e8;
        case 0x1422ecu: goto label_1422ec;
        case 0x1422f0u: goto label_1422f0;
        case 0x1422f4u: goto label_1422f4;
        case 0x1422f8u: goto label_1422f8;
        case 0x1422fcu: goto label_1422fc;
        case 0x142300u: goto label_142300;
        case 0x142304u: goto label_142304;
        case 0x142308u: goto label_142308;
        case 0x14230cu: goto label_14230c;
        case 0x142310u: goto label_142310;
        case 0x142314u: goto label_142314;
        case 0x142318u: goto label_142318;
        case 0x14231cu: goto label_14231c;
        default: break;
    }

    ctx->pc = 0x1422c0u;

label_1422c0:
    // 0x1422c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1422c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1422c4:
    // 0x1422c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1422c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1422c8:
    // 0x1422c8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1422c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1422cc:
    // 0x1422cc: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x1422ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_1422d0:
    // 0x1422d0: 0x1002000e  beq         $zero, $v0, . + 4 + (0xE << 2)
label_1422d4:
    if (ctx->pc == 0x1422D4u) {
        ctx->pc = 0x1422D8u;
        goto label_1422d8;
    }
    ctx->pc = 0x1422D0u;
    {
        const bool branch_taken_0x1422d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1422d0) {
            ctx->pc = 0x14230Cu;
            goto label_14230c;
        }
    }
    ctx->pc = 0x1422D8u;
label_1422d8:
    // 0x1422d8: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x1422d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_1422dc:
    // 0x1422dc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1422dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1422e0:
    // 0x1422e0: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_1422e4:
    if (ctx->pc == 0x1422E4u) {
        ctx->pc = 0x1422E8u;
        goto label_1422e8;
    }
    ctx->pc = 0x1422E0u;
    {
        const bool branch_taken_0x1422e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1422e0) {
            ctx->pc = 0x14230Cu;
            goto label_14230c;
        }
    }
    ctx->pc = 0x1422E8u;
label_1422e8:
    // 0x1422e8: 0x8f83ba84  lw          $v1, -0x457C($gp)
    ctx->pc = 0x1422e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_1422ec:
    // 0x1422ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1422ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1422f0:
    // 0x1422f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1422f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1422f4:
    // 0x1422f4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1422f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1422f8:
    // 0x1422f8: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x1422f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1422fc:
    // 0x1422fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1422fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142300:
    // 0x142300: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x142300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_142304:
    // 0x142304: 0x320f809  jalr        $t9
label_142308:
    if (ctx->pc == 0x142308u) {
        ctx->pc = 0x14230Cu;
        goto label_14230c;
    }
    ctx->pc = 0x142304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14230Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142304u, 0x14230Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14230Cu;
label_14230c:
    // 0x14230c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142310:
    // 0x142310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142314:
    // 0x142314: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x142314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_142318:
    // 0x142318: 0x3e00008  jr          $ra
label_14231c:
    if (ctx->pc == 0x14231Cu) {
        ctx->pc = 0x142320u;
        goto label_fallthrough_0x142318;
    }
    ctx->pc = 0x142318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x142318:
    ctx->pc = 0x142320u;
}
