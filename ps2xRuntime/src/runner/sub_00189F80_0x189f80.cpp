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

// Function: sub_00189F80
// Address: 0x189f80 - 0x189ff0
void sub_00189F80_0x189f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189F80_0x189f80");
#endif

    switch (ctx->pc) {
        case 0x189fa4u: goto label_189fa4;
        case 0x189fdcu: goto label_189fdc;
        default: break;
    }

    ctx->pc = 0x189f80u;

    // 0x189f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189f88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x189f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x189f8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x189f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189f90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189f94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x189f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189f98: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x189f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x189f9c: 0xc06247c  jal         func_1891F0
    ctx->pc = 0x189F9Cu;
    SET_GPR_U32(ctx, 31, 0x189FA4u);
    ctx->pc = 0x1891F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891F0u, 0x189F9Cu, 0x189FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FA4u;
label_189fa4:
    // 0x189fa4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189fa8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x189fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189fac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189fb0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x189fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x189fb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189fb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x189fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189fbc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x189fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189fc0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x189fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x189fc4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x189fc4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x189fc8: 0x3012  mflo        $a2
    ctx->pc = 0x189fc8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x189fcc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x189fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x189fd0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x189fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x189fd4: 0xc062bdc  jal         func_18AF70
    ctx->pc = 0x189FD4u;
    SET_GPR_U32(ctx, 31, 0x189FDCu);
    ctx->pc = 0x18AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF70u, 0x189FD4u, 0x189FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FDCu;
label_189fdc:
    // 0x189fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189fe0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x189fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x189FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189FECu;
    // 0x189fec: 0x0  nop
    ctx->pc = 0x189fecu;
    // NOP
    ctx->pc = 0x189ff0u;
}
