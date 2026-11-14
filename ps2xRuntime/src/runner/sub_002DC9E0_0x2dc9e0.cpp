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

// Function: sub_002DC9E0
// Address: 0x2dc9e0 - 0x2dca50
void sub_002DC9E0_0x2dc9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC9E0_0x2dc9e0");
#endif

    switch (ctx->pc) {
        case 0x2dca04u: goto label_2dca04;
        case 0x2dca3cu: goto label_2dca3c;
        default: break;
    }

    ctx->pc = 0x2dc9e0u;

    // 0x2dc9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc9e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dc9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dc9ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2dc9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc9f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc9f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2dc9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc9f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2dc9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dc9fc: 0xc0af688  jal         func_2BDA20
    ctx->pc = 0x2DC9FCu;
    SET_GPR_U32(ctx, 31, 0x2DCA04u);
    ctx->pc = 0x2BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDA20u, 0x2DC9FCu, 0x2DCA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA04u;
label_2dca04:
    // 0x2dca04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dca04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dca08: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2dca08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dca0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dca10: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2dca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dca14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dca18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dca1c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2dca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dca20: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2dca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2dca24: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2dca24u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2dca28: 0x3012  mflo        $a2
    ctx->pc = 0x2dca28u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2dca2c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2dca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2dca30: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2dca30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dca34: 0xc0b2a3c  jal         func_2CA8F0
    ctx->pc = 0x2DCA34u;
    SET_GPR_U32(ctx, 31, 0x2DCA3Cu);
    ctx->pc = 0x2CA8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA8F0u, 0x2DCA34u, 0x2DCA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA3Cu;
label_2dca3c:
    // 0x2dca3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dca3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dca40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dca40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dca44: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCA4Cu;
    // 0x2dca4c: 0x0  nop
    ctx->pc = 0x2dca4cu;
    // NOP
    ctx->pc = 0x2dca50u;
}
