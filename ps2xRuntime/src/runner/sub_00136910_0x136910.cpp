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

// Function: sub_00136910
// Address: 0x136910 - 0x1369a0
void sub_00136910_0x136910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136910_0x136910");
#endif

    switch (ctx->pc) {
        case 0x136948u: goto label_136948;
        case 0x136958u: goto label_136958;
        default: break;
    }

    ctx->pc = 0x136910u;

    // 0x136910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x136910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x136914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13691c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13691cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x136920: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x136920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x136924: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x136924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x136928: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x136928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13692c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136930: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x136930u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x136934: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x136934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136938: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x136938u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13693c: 0x8012  mflo        $s0
    ctx->pc = 0x13693cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x136940: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x136940u;
    {
        const bool branch_taken_0x136940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136940) {
            ctx->pc = 0x136974u;
            goto label_136974;
        }
    }
    ctx->pc = 0x136948u;
label_136948:
    // 0x136948: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x136948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13694c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13694cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136950: 0xc04da68  jal         func_1369A0
    ctx->pc = 0x136950u;
    SET_GPR_U32(ctx, 31, 0x136958u);
    ctx->pc = 0x1369A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1369A0u, 0x136950u, 0x136958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136958u;
label_136958:
    // 0x136958: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x136958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13695c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x13695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x136960: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x136960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x136964: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136968: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x136968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x13696c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x13696cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x136970: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x136970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_136974:
    // 0x136974: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x136974u;
    {
        const bool branch_taken_0x136974 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x136974) {
            ctx->pc = 0x136948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136948;
        }
    }
    ctx->pc = 0x13697Cu;
    // 0x13697c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136988: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x136988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13698c: 0x3e00008  jr          $ra
    ctx->pc = 0x13698Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13698Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136994u;
    // 0x136994: 0x0  nop
    ctx->pc = 0x136994u;
    // NOP
    // 0x136998: 0x0  nop
    ctx->pc = 0x136998u;
    // NOP
    // 0x13699c: 0x0  nop
    ctx->pc = 0x13699cu;
    // NOP
    ctx->pc = 0x1369a0u;
}
