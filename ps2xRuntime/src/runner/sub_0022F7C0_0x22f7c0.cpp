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

// Function: sub_0022F7C0
// Address: 0x22f7c0 - 0x22f830
void sub_0022F7C0_0x22f7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F7C0_0x22f7c0");
#endif

    switch (ctx->pc) {
        case 0x22f7e4u: goto label_22f7e4;
        case 0x22f81cu: goto label_22f81c;
        default: break;
    }

    ctx->pc = 0x22f7c0u;

    // 0x22f7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22f7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22f7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22f7c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22f7cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f7d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f7d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f7d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22f7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22f7dc: 0xc08b138  jal         func_22C4E0
    ctx->pc = 0x22F7DCu;
    SET_GPR_U32(ctx, 31, 0x22F7E4u);
    ctx->pc = 0x22C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C4E0u, 0x22F7DCu, 0x22F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7E4u;
label_22f7e4:
    // 0x22f7e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f7e8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x22f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f7ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f7f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22f7f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f7f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f7fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f800: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22f800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22f804: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x22f804u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22f808: 0x3012  mflo        $a2
    ctx->pc = 0x22f808u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x22f80c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x22f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22f810: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x22f810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22f814: 0xc08cab8  jal         func_232AE0
    ctx->pc = 0x22F814u;
    SET_GPR_U32(ctx, 31, 0x22F81Cu);
    ctx->pc = 0x232AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232AE0u, 0x22F814u, 0x22F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F81Cu;
label_22f81c:
    // 0x22f81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f820: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22f820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22f824: 0x3e00008  jr          $ra
    ctx->pc = 0x22F824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F82Cu;
    // 0x22f82c: 0x0  nop
    ctx->pc = 0x22f82cu;
    // NOP
    ctx->pc = 0x22f830u;
}
