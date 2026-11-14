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

// Function: sub_00212680
// Address: 0x212680 - 0x212700
void sub_00212680_0x212680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212680_0x212680");
#endif

    switch (ctx->pc) {
        case 0x2126b8u: goto label_2126b8;
        case 0x2126d8u: goto label_2126d8;
        default: break;
    }

    ctx->pc = 0x212680u;

    // 0x212680: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x212680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x212684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x212684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x212688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x212688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21268c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x21268cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x212690: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x212690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x212694: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x212694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x212698: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x212698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21269c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x21269cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2126a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2126a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2126a4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2126a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2126a8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2126a8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2126ac: 0x8012  mflo        $s0
    ctx->pc = 0x2126acu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2126b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2126B0u;
    {
        const bool branch_taken_0x2126b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2126b0) {
            ctx->pc = 0x2126DCu;
            goto label_2126dc;
        }
    }
    ctx->pc = 0x2126B8u;
label_2126b8:
    // 0x2126b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2126b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2126bc: 0x2444ffd0  addiu       $a0, $v0, -0x30
    ctx->pc = 0x2126bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2126c0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2126c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2126c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2126c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2126c8: 0x2445ffd0  addiu       $a1, $v0, -0x30
    ctx->pc = 0x2126c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2126cc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2126ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2126d0: 0xc0601e0  jal         func_180780
    ctx->pc = 0x2126D0u;
    SET_GPR_U32(ctx, 31, 0x2126D8u);
    ctx->pc = 0x180780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180780u, 0x2126D0u, 0x2126D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2126D8u;
label_2126d8:
    // 0x2126d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2126d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2126dc:
    // 0x2126dc: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2126DCu;
    {
        const bool branch_taken_0x2126dc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2126dc) {
            ctx->pc = 0x2126B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2126b8;
        }
    }
    ctx->pc = 0x2126E4u;
    // 0x2126e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2126e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2126e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2126e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2126ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2126ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2126f0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2126f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2126f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2126F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2126F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2126FCu;
    // 0x2126fc: 0x0  nop
    ctx->pc = 0x2126fcu;
    // NOP
    ctx->pc = 0x212700u;
}
