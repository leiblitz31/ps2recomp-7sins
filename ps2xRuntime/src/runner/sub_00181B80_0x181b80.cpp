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

// Function: sub_00181B80
// Address: 0x181b80 - 0x181bf0
void sub_00181B80_0x181b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181B80_0x181b80");
#endif

    switch (ctx->pc) {
        case 0x181ba4u: goto label_181ba4;
        case 0x181bdcu: goto label_181bdc;
        default: break;
    }

    ctx->pc = 0x181b80u;

    // 0x181b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181b88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x181b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x181b8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x181b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181b90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x181b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181b94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x181b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181b98: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x181b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181b9c: 0xc056eb4  jal         func_15BAD0
    ctx->pc = 0x181B9Cu;
    SET_GPR_U32(ctx, 31, 0x181BA4u);
    ctx->pc = 0x15BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BAD0u, 0x181B9Cu, 0x181BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BA4u;
label_181ba4:
    // 0x181ba4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x181ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181ba8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x181ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181bac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x181bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181bb0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x181bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x181bb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x181bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181bb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x181bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181bbc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x181bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x181bc0: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x181bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x181bc4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x181bc4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x181bc8: 0x3012  mflo        $a2
    ctx->pc = 0x181bc8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x181bcc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x181bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181bd0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x181bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x181bd4: 0xc058afc  jal         func_162BF0
    ctx->pc = 0x181BD4u;
    SET_GPR_U32(ctx, 31, 0x181BDCu);
    ctx->pc = 0x162BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162BF0u, 0x181BD4u, 0x181BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BDCu;
label_181bdc:
    // 0x181bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181be0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x181be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x181be4: 0x3e00008  jr          $ra
    ctx->pc = 0x181BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181BECu;
    // 0x181bec: 0x0  nop
    ctx->pc = 0x181becu;
    // NOP
    ctx->pc = 0x181bf0u;
}
