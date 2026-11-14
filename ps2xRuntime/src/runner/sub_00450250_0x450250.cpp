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

// Function: sub_00450250
// Address: 0x450250 - 0x4502c0
void sub_00450250_0x450250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450250_0x450250");
#endif

    switch (ctx->pc) {
        case 0x45026cu: goto label_45026c;
        default: break;
    }

    ctx->pc = 0x450250u;

    // 0x450250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x450250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x450254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x450254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x450258: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x450258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45025c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45025cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x450260: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x450260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x450264: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x450264u;
    {
        const bool branch_taken_0x450264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450264) {
            ctx->pc = 0x450294u;
            goto label_450294;
        }
    }
    ctx->pc = 0x45026Cu;
label_45026c:
    // 0x45026c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450270: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x450270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x450274: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x450274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450278: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x45027c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450280: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x450280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x450284: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x450284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x450288: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x450288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45028c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x45028cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x450290: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x450290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_450294:
    // 0x450294: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x450294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450298: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x450298u;
    {
        const bool branch_taken_0x450298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450298) {
            ctx->pc = 0x45026Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45026c;
        }
    }
    ctx->pc = 0x4502A0u;
    // 0x4502a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4502a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4502a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4502a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4502a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4502a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4502ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4502ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4502ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4502B4u;
    // 0x4502b4: 0x0  nop
    ctx->pc = 0x4502b4u;
    // NOP
    // 0x4502b8: 0x0  nop
    ctx->pc = 0x4502b8u;
    // NOP
    // 0x4502bc: 0x0  nop
    ctx->pc = 0x4502bcu;
    // NOP
    ctx->pc = 0x4502c0u;
}
