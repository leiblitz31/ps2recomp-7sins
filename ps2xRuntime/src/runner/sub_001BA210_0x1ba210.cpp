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

// Function: sub_001BA210
// Address: 0x1ba210 - 0x1ba2a0
void sub_001BA210_0x1ba210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA210_0x1ba210");
#endif

    switch (ctx->pc) {
        case 0x1ba248u: goto label_1ba248;
        case 0x1ba258u: goto label_1ba258;
        default: break;
    }

    ctx->pc = 0x1ba210u;

    // 0x1ba210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ba210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ba214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba21c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ba21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ba220: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1ba220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1ba224: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1ba224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1ba228: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ba228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba22c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ba22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba230: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ba230u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ba234: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ba234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ba238: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ba238u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ba23c: 0x8012  mflo        $s0
    ctx->pc = 0x1ba23cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1ba240: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BA240u;
    {
        const bool branch_taken_0x1ba240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba240) {
            ctx->pc = 0x1BA274u;
            goto label_1ba274;
        }
    }
    ctx->pc = 0x1BA248u;
label_1ba248:
    // 0x1ba248: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ba248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba24c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ba24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba250: 0xc06e8a8  jal         func_1BA2A0
    ctx->pc = 0x1BA250u;
    SET_GPR_U32(ctx, 31, 0x1BA258u);
    ctx->pc = 0x1BA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA2A0u, 0x1BA250u, 0x1BA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA258u;
label_1ba258:
    // 0x1ba258: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ba258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba25c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1ba25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1ba260: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ba260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ba264: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ba264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba268: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1ba268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1ba26c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ba26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ba270: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ba270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1ba274:
    // 0x1ba274: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BA274u;
    {
        const bool branch_taken_0x1ba274 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1ba274) {
            ctx->pc = 0x1BA248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba248;
        }
    }
    ctx->pc = 0x1BA27Cu;
    // 0x1ba27c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ba27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba288: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1ba288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ba28c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA294u;
    // 0x1ba294: 0x0  nop
    ctx->pc = 0x1ba294u;
    // NOP
    // 0x1ba298: 0x0  nop
    ctx->pc = 0x1ba298u;
    // NOP
    // 0x1ba29c: 0x0  nop
    ctx->pc = 0x1ba29cu;
    // NOP
    ctx->pc = 0x1ba2a0u;
}
