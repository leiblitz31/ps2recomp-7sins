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

// Function: sub_00146370
// Address: 0x146370 - 0x1463e0
void sub_00146370_0x146370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146370_0x146370");
#endif

    switch (ctx->pc) {
        case 0x146394u: goto label_146394;
        case 0x1463ccu: goto label_1463cc;
        default: break;
    }

    ctx->pc = 0x146370u;

    // 0x146370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x146378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14637c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146380: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x146380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146384: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x146384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146388: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x146388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14638c: 0xc0515f0  jal         func_1457C0
    ctx->pc = 0x14638Cu;
    SET_GPR_U32(ctx, 31, 0x146394u);
    ctx->pc = 0x1457C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1457C0u, 0x14638Cu, 0x146394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146394u;
label_146394:
    // 0x146394: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x146394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146398: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x146398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14639c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1463a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1463a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1463a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1463a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1463a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1463a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1463ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1463acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1463b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1463b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1463b4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1463b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1463b8: 0x3012  mflo        $a2
    ctx->pc = 0x1463b8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1463bc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1463bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1463c0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1463c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1463c4: 0xc0519ac  jal         func_1466B0
    ctx->pc = 0x1463C4u;
    SET_GPR_U32(ctx, 31, 0x1463CCu);
    ctx->pc = 0x1466B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1466B0u, 0x1463C4u, 0x1463CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1463CCu;
label_1463cc:
    // 0x1463cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1463ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1463d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1463d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1463d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1463D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1463D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1463DCu;
    // 0x1463dc: 0x0  nop
    ctx->pc = 0x1463dcu;
    // NOP
    ctx->pc = 0x1463e0u;
}
