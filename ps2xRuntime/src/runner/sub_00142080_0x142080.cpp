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

// Function: sub_00142080
// Address: 0x142080 - 0x1420e0
void sub_00142080_0x142080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142080_0x142080");
#endif

    switch (ctx->pc) {
        case 0x142080u: goto label_142080;
        case 0x142084u: goto label_142084;
        case 0x142088u: goto label_142088;
        case 0x14208cu: goto label_14208c;
        case 0x142090u: goto label_142090;
        case 0x142094u: goto label_142094;
        case 0x142098u: goto label_142098;
        case 0x14209cu: goto label_14209c;
        case 0x1420a0u: goto label_1420a0;
        case 0x1420a4u: goto label_1420a4;
        case 0x1420a8u: goto label_1420a8;
        case 0x1420acu: goto label_1420ac;
        case 0x1420b0u: goto label_1420b0;
        case 0x1420b4u: goto label_1420b4;
        case 0x1420b8u: goto label_1420b8;
        case 0x1420bcu: goto label_1420bc;
        case 0x1420c0u: goto label_1420c0;
        case 0x1420c4u: goto label_1420c4;
        case 0x1420c8u: goto label_1420c8;
        case 0x1420ccu: goto label_1420cc;
        case 0x1420d0u: goto label_1420d0;
        case 0x1420d4u: goto label_1420d4;
        case 0x1420d8u: goto label_1420d8;
        case 0x1420dcu: goto label_1420dc;
        default: break;
    }

    ctx->pc = 0x142080u;

label_142080:
    // 0x142080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x142080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_142084:
    // 0x142084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_142088:
    // 0x142088: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x142088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_14208c:
    // 0x14208c: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x14208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_142090:
    // 0x142090: 0x1002000e  beq         $zero, $v0, . + 4 + (0xE << 2)
label_142094:
    if (ctx->pc == 0x142094u) {
        ctx->pc = 0x142098u;
        goto label_142098;
    }
    ctx->pc = 0x142090u;
    {
        const bool branch_taken_0x142090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142090) {
            ctx->pc = 0x1420CCu;
            goto label_1420cc;
        }
    }
    ctx->pc = 0x142098u;
label_142098:
    // 0x142098: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x142098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14209c:
    // 0x14209c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x14209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1420a0:
    // 0x1420a0: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_1420a4:
    if (ctx->pc == 0x1420A4u) {
        ctx->pc = 0x1420A8u;
        goto label_1420a8;
    }
    ctx->pc = 0x1420A0u;
    {
        const bool branch_taken_0x1420a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1420a0) {
            ctx->pc = 0x1420CCu;
            goto label_1420cc;
        }
    }
    ctx->pc = 0x1420A8u;
label_1420a8:
    // 0x1420a8: 0x8f83ba84  lw          $v1, -0x457C($gp)
    ctx->pc = 0x1420a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_1420ac:
    // 0x1420ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1420acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1420b0:
    // 0x1420b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1420b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1420b4:
    // 0x1420b4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1420b4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1420b8:
    // 0x1420b8: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x1420b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1420bc:
    // 0x1420bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1420bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1420c0:
    // 0x1420c0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1420c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1420c4:
    // 0x1420c4: 0x320f809  jalr        $t9
label_1420c8:
    if (ctx->pc == 0x1420C8u) {
        ctx->pc = 0x1420CCu;
        goto label_1420cc;
    }
    ctx->pc = 0x1420C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1420CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1420C4u, 0x1420CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1420CCu;
label_1420cc:
    // 0x1420cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1420ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1420d0:
    // 0x1420d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1420d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1420d4:
    // 0x1420d4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1420d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1420d8:
    // 0x1420d8: 0x3e00008  jr          $ra
label_1420dc:
    if (ctx->pc == 0x1420DCu) {
        ctx->pc = 0x1420E0u;
        goto label_fallthrough_0x1420d8;
    }
    ctx->pc = 0x1420D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1420D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1420d8:
    ctx->pc = 0x1420E0u;
}
