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

// Function: sub_001BEEB0
// Address: 0x1beeb0 - 0x1bef20
void sub_001BEEB0_0x1beeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEEB0_0x1beeb0");
#endif

    switch (ctx->pc) {
        case 0x1beed4u: goto label_1beed4;
        case 0x1bef0cu: goto label_1bef0c;
        default: break;
    }

    ctx->pc = 0x1beeb0u;

    // 0x1beeb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1beeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1beeb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1beeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1beeb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1beeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1beebc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1beebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beec0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1beec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beec4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1beec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1beec8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1beec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1beecc: 0xc06e4c8  jal         func_1B9320
    ctx->pc = 0x1BEECCu;
    SET_GPR_U32(ctx, 31, 0x1BEED4u);
    ctx->pc = 0x1B9320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9320u, 0x1BEECCu, 0x1BEED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEED4u;
label_1beed4:
    // 0x1beed4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1beed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beed8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1beed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beedc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1beedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beee0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1beee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1beee4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1beee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beee8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1beee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1beeec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1beeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1beef0: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x1beef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1beef4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1beef4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1beef8: 0x3012  mflo        $a2
    ctx->pc = 0x1beef8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1beefc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1beefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bef00: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bef00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bef04: 0xc070e30  jal         func_1C38C0
    ctx->pc = 0x1BEF04u;
    SET_GPR_U32(ctx, 31, 0x1BEF0Cu);
    ctx->pc = 0x1C38C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38C0u, 0x1BEF04u, 0x1BEF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF0Cu;
label_1bef0c:
    // 0x1bef0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bef0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bef10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1bef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bef14: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEF1Cu;
    // 0x1bef1c: 0x0  nop
    ctx->pc = 0x1bef1cu;
    // NOP
    ctx->pc = 0x1bef20u;
}
