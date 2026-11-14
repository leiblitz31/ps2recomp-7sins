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

// Function: sub_00129DE0
// Address: 0x129de0 - 0x129e50
void sub_00129DE0_0x129de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129DE0_0x129de0");
#endif

    switch (ctx->pc) {
        case 0x129e04u: goto label_129e04;
        case 0x129e3cu: goto label_129e3c;
        default: break;
    }

    ctx->pc = 0x129de0u;

    // 0x129de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x129de8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x129de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x129dec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x129decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129df0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x129df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129df4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x129df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129df8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x129df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x129dfc: 0xc048cfc  jal         func_1233F0
    ctx->pc = 0x129DFCu;
    SET_GPR_U32(ctx, 31, 0x129E04u);
    ctx->pc = 0x1233F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1233F0u, 0x129DFCu, 0x129E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E04u;
label_129e04:
    // 0x129e04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x129e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129e08: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x129e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129e0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x129e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129e10: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x129e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x129e14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x129e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129e18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x129e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129e1c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x129e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129e20: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x129e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x129e24: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x129e24u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129e28: 0x3012  mflo        $a2
    ctx->pc = 0x129e28u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x129e2c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x129e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x129e30: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x129e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x129e34: 0xc04aaf0  jal         func_12ABC0
    ctx->pc = 0x129E34u;
    SET_GPR_U32(ctx, 31, 0x129E3Cu);
    ctx->pc = 0x12ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ABC0u, 0x129E34u, 0x129E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E3Cu;
label_129e3c:
    // 0x129e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x129e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129e40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x129e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x129e44: 0x3e00008  jr          $ra
    ctx->pc = 0x129E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129E4Cu;
    // 0x129e4c: 0x0  nop
    ctx->pc = 0x129e4cu;
    // NOP
    ctx->pc = 0x129e50u;
}
