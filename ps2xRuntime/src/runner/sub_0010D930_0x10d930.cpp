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

// Function: sub_0010D930
// Address: 0x10d930 - 0x10d9a0
void sub_0010D930_0x10d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D930_0x10d930");
#endif

    switch (ctx->pc) {
        case 0x10d954u: goto label_10d954;
        case 0x10d98cu: goto label_10d98c;
        default: break;
    }

    ctx->pc = 0x10d930u;

    // 0x10d930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d938: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10d938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10d93c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d940: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d944: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10d944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d948: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x10d948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10d94c: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x10D94Cu;
    SET_GPR_U32(ctx, 31, 0x10D954u);
    ctx->pc = 0x10C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1F0u, 0x10D94Cu, 0x10D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D954u;
label_10d954:
    // 0x10d954: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10d954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d958: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x10d958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d95c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d960: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x10d960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10d964: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10d964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d968: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10d968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d96c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d970: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10d970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10d974: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x10d974u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10d978: 0x3012  mflo        $a2
    ctx->pc = 0x10d978u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x10d97c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10d980: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x10d980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10d984: 0xc04372c  jal         func_10DCB0
    ctx->pc = 0x10D984u;
    SET_GPR_U32(ctx, 31, 0x10D98Cu);
    ctx->pc = 0x10DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCB0u, 0x10D984u, 0x10D98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D98Cu;
label_10d98c:
    // 0x10d98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d990: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10d990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10d994: 0x3e00008  jr          $ra
    ctx->pc = 0x10D994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D99Cu;
    // 0x10d99c: 0x0  nop
    ctx->pc = 0x10d99cu;
    // NOP
    ctx->pc = 0x10d9a0u;
}
