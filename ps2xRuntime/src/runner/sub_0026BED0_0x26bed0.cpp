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

// Function: sub_0026BED0
// Address: 0x26bed0 - 0x26bf40
void sub_0026BED0_0x26bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BED0_0x26bed0");
#endif

    switch (ctx->pc) {
        case 0x26bef4u: goto label_26bef4;
        case 0x26bf2cu: goto label_26bf2c;
        default: break;
    }

    ctx->pc = 0x26bed0u;

    // 0x26bed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26bed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26bedc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x26bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bee4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26bee8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26bee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26beec: 0xc096278  jal         func_2589E0
    ctx->pc = 0x26BEECu;
    SET_GPR_U32(ctx, 31, 0x26BEF4u);
    ctx->pc = 0x2589E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2589E0u, 0x26BEECu, 0x26BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEF4u;
label_26bef4:
    // 0x26bef4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bef8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x26bef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26befc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bf00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x26bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26bf04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bf08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26bf0c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26bf10: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x26bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26bf14: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x26bf14u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26bf18: 0x3012  mflo        $a2
    ctx->pc = 0x26bf18u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x26bf1c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x26bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26bf20: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x26bf20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26bf24: 0xc0971d0  jal         func_25C740
    ctx->pc = 0x26BF24u;
    SET_GPR_U32(ctx, 31, 0x26BF2Cu);
    ctx->pc = 0x25C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C740u, 0x26BF24u, 0x26BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF2Cu;
label_26bf2c:
    // 0x26bf2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bf30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26bf34: 0x3e00008  jr          $ra
    ctx->pc = 0x26BF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BF3Cu;
    // 0x26bf3c: 0x0  nop
    ctx->pc = 0x26bf3cu;
    // NOP
    ctx->pc = 0x26bf40u;
}
