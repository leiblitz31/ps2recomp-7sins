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

// Function: sub_0028E4F0
// Address: 0x28e4f0 - 0x28e560
void sub_0028E4F0_0x28e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E4F0_0x28e4f0");
#endif

    switch (ctx->pc) {
        case 0x28e514u: goto label_28e514;
        case 0x28e54cu: goto label_28e54c;
        default: break;
    }

    ctx->pc = 0x28e4f0u;

    // 0x28e4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28e4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e4f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28e4fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e500: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28e500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e504: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28e504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28e508: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x28e508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28e50c: 0xc0a12f8  jal         func_284BE0
    ctx->pc = 0x28E50Cu;
    SET_GPR_U32(ctx, 31, 0x28E514u);
    ctx->pc = 0x284BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284BE0u, 0x28E50Cu, 0x28E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E514u;
label_28e514:
    // 0x28e514: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28e514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e518: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x28e518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e51c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e520: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x28e520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28e524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e528: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e52c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e530: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x28e530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e534: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x28e534u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x28e538: 0x3012  mflo        $a2
    ctx->pc = 0x28e538u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x28e53c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x28e540: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x28e540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28e544: 0xc0a37b4  jal         func_28DED0
    ctx->pc = 0x28E544u;
    SET_GPR_U32(ctx, 31, 0x28E54Cu);
    ctx->pc = 0x28DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DED0u, 0x28E544u, 0x28E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E54Cu;
label_28e54c:
    // 0x28e54c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e550: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28e550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28e554: 0x3e00008  jr          $ra
    ctx->pc = 0x28E554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E55Cu;
    // 0x28e55c: 0x0  nop
    ctx->pc = 0x28e55cu;
    // NOP
    ctx->pc = 0x28e560u;
}
