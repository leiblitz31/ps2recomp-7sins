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

// Function: sub_00264AB0
// Address: 0x264ab0 - 0x264b20
void sub_00264AB0_0x264ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264AB0_0x264ab0");
#endif

    switch (ctx->pc) {
        case 0x264ad4u: goto label_264ad4;
        case 0x264b0cu: goto label_264b0c;
        default: break;
    }

    ctx->pc = 0x264ab0u;

    // 0x264ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x264ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264ab8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x264ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x264abc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x264abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264ac0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264ac4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264ac8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x264ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x264acc: 0xc098a4c  jal         func_262930
    ctx->pc = 0x264ACCu;
    SET_GPR_U32(ctx, 31, 0x264AD4u);
    ctx->pc = 0x262930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262930u, 0x264ACCu, 0x264AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264AD4u;
label_264ad4:
    // 0x264ad4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x264ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264ad8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x264ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264adc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264ae0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x264ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x264ae4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264ae8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x264ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264aec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x264aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264af0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x264af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x264af4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x264af4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x264af8: 0x3012  mflo        $a2
    ctx->pc = 0x264af8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x264afc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x264afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x264b00: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x264b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x264b04: 0xc0995bc  jal         func_2656F0
    ctx->pc = 0x264B04u;
    SET_GPR_U32(ctx, 31, 0x264B0Cu);
    ctx->pc = 0x2656F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2656F0u, 0x264B04u, 0x264B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B0Cu;
label_264b0c:
    // 0x264b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264b10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x264b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x264b14: 0x3e00008  jr          $ra
    ctx->pc = 0x264B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264B1Cu;
    // 0x264b1c: 0x0  nop
    ctx->pc = 0x264b1cu;
    // NOP
    ctx->pc = 0x264b20u;
}
