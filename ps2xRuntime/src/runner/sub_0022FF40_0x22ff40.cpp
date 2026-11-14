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

// Function: sub_0022FF40
// Address: 0x22ff40 - 0x22ffb0
void sub_0022FF40_0x22ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FF40_0x22ff40");
#endif

    switch (ctx->pc) {
        case 0x22ff64u: goto label_22ff64;
        case 0x22ff9cu: goto label_22ff9c;
        default: break;
    }

    ctx->pc = 0x22ff40u;

    // 0x22ff40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22ff44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ff48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22ff4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ff50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ff54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ff58: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22ff58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22ff5c: 0xc08b09c  jal         func_22C270
    ctx->pc = 0x22FF5Cu;
    SET_GPR_U32(ctx, 31, 0x22FF64u);
    ctx->pc = 0x22C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C270u, 0x22FF5Cu, 0x22FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF64u;
label_22ff64:
    // 0x22ff64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ff68: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x22ff68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ff6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ff70: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22ff74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ff78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ff7c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ff80: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ff84: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x22ff84u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22ff88: 0x3012  mflo        $a2
    ctx->pc = 0x22ff88u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x22ff8c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x22ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22ff90: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x22ff90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22ff94: 0xc08ca78  jal         func_2329E0
    ctx->pc = 0x22FF94u;
    SET_GPR_U32(ctx, 31, 0x22FF9Cu);
    ctx->pc = 0x2329E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2329E0u, 0x22FF94u, 0x22FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF9Cu;
label_22ff9c:
    // 0x22ff9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ff9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ffa0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22ffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22ffa4: 0x3e00008  jr          $ra
    ctx->pc = 0x22FFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FFACu;
    // 0x22ffac: 0x0  nop
    ctx->pc = 0x22ffacu;
    // NOP
    ctx->pc = 0x22ffb0u;
}
