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

// Function: sub_0023D850
// Address: 0x23d850 - 0x23d8c0
void sub_0023D850_0x23d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D850_0x23d850");
#endif

    switch (ctx->pc) {
        case 0x23d874u: goto label_23d874;
        case 0x23d8acu: goto label_23d8ac;
        default: break;
    }

    ctx->pc = 0x23d850u;

    // 0x23d850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23d850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23d854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d858: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23d858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23d85c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d860: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23d860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d864: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23d864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d868: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23d868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23d86c: 0xc08f0a4  jal         func_23C290
    ctx->pc = 0x23D86Cu;
    SET_GPR_U32(ctx, 31, 0x23D874u);
    ctx->pc = 0x23C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C290u, 0x23D86Cu, 0x23D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D874u;
label_23d874:
    // 0x23d874: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23d874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d878: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x23d878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d87c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d880: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23d880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23d884: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23d884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d888: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23d888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d88c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d890: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x23d890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x23d894: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x23d894u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23d898: 0x3012  mflo        $a2
    ctx->pc = 0x23d898u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x23d89c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x23d8a0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d8a4: 0xc08f8d8  jal         func_23E360
    ctx->pc = 0x23D8A4u;
    SET_GPR_U32(ctx, 31, 0x23D8ACu);
    ctx->pc = 0x23E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E360u, 0x23D8A4u, 0x23D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8ACu;
label_23d8ac:
    // 0x23d8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d8b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23d8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23d8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x23D8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D8BCu;
    // 0x23d8bc: 0x0  nop
    ctx->pc = 0x23d8bcu;
    // NOP
    ctx->pc = 0x23d8c0u;
}
