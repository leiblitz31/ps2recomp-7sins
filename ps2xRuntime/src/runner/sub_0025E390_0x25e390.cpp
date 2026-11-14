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

// Function: sub_0025E390
// Address: 0x25e390 - 0x25e400
void sub_0025E390_0x25e390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E390_0x25e390");
#endif

    switch (ctx->pc) {
        case 0x25e3b4u: goto label_25e3b4;
        case 0x25e3ecu: goto label_25e3ec;
        default: break;
    }

    ctx->pc = 0x25e390u;

    // 0x25e390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25e390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25e394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e398: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25e398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25e39c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e3a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e3a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e3a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e3ac: 0xc0975e4  jal         func_25D790
    ctx->pc = 0x25E3ACu;
    SET_GPR_U32(ctx, 31, 0x25E3B4u);
    ctx->pc = 0x25D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D790u, 0x25E3ACu, 0x25E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3B4u;
label_25e3b4:
    // 0x25e3b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25e3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e3b8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x25e3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e3bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e3c0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25e3c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e3c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e3cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e3d0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x25e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25e3d4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x25e3d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25e3d8: 0x3012  mflo        $a2
    ctx->pc = 0x25e3d8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x25e3dc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x25e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x25e3e0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x25e3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25e3e4: 0xc097be4  jal         func_25EF90
    ctx->pc = 0x25E3E4u;
    SET_GPR_U32(ctx, 31, 0x25E3ECu);
    ctx->pc = 0x25EF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EF90u, 0x25E3E4u, 0x25E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3ECu;
label_25e3ec:
    // 0x25e3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e3f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25e3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x25E3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E3FCu;
    // 0x25e3fc: 0x0  nop
    ctx->pc = 0x25e3fcu;
    // NOP
    ctx->pc = 0x25e400u;
}
