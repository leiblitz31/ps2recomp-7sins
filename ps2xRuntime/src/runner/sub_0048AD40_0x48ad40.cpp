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

// Function: sub_0048AD40
// Address: 0x48ad40 - 0x48ada0
void sub_0048AD40_0x48ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048AD40_0x48ad40");
#endif

    ctx->pc = 0x48ad40u;

    // 0x48ad40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48ad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48ad44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x48ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x48ad48: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x48ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48ad4c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x48ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x48ad50: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ad54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x48AD54u;
    {
        const bool branch_taken_0x48ad54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ad54) {
            ctx->pc = 0x48AD6Cu;
            goto label_48ad6c;
        }
    }
    ctx->pc = 0x48AD5Cu;
    // 0x48ad5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ad60: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x48ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48ad64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ad68: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x48ad68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
label_48ad6c:
    // 0x48ad6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48ad70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x48AD70u;
    {
        const bool branch_taken_0x48ad70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ad70) {
            ctx->pc = 0x48AD88u;
            goto label_48ad88;
        }
    }
    ctx->pc = 0x48AD78u;
    // 0x48ad78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48ad7c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x48ad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48ad80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ad84: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x48ad84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_48ad88:
    // 0x48ad88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48ad88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48ad8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ad90: 0xac64008c  sw          $a0, 0x8C($v1)
    ctx->pc = 0x48ad90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
    // 0x48ad94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48ad94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48ad98: 0x3e00008  jr          $ra
    ctx->pc = 0x48AD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48AD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48ADA0u;
}
