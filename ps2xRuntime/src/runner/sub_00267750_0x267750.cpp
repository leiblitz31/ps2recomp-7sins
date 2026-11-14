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

// Function: sub_00267750
// Address: 0x267750 - 0x2677c0
void sub_00267750_0x267750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267750_0x267750");
#endif

    switch (ctx->pc) {
        case 0x267774u: goto label_267774;
        case 0x2677acu: goto label_2677ac;
        default: break;
    }

    ctx->pc = 0x267750u;

    // 0x267750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x267750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x267754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x267758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26775c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x26775cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267760: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x267760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267764: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x267764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267768: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x267768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26776c: 0xc0996e4  jal         func_265B90
    ctx->pc = 0x26776Cu;
    SET_GPR_U32(ctx, 31, 0x267774u);
    ctx->pc = 0x265B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265B90u, 0x26776Cu, 0x267774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267774u;
label_267774:
    // 0x267774: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x267774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267778: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x267778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26777c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267780: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x267780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x267784: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x267784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267788: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26778c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26778cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267790: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x267790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x267794: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x267794u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x267798: 0x3012  mflo        $a2
    ctx->pc = 0x267798u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x26779c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x26779cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2677a0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2677a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2677a4: 0xc09a160  jal         func_268580
    ctx->pc = 0x2677A4u;
    SET_GPR_U32(ctx, 31, 0x2677ACu);
    ctx->pc = 0x268580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268580u, 0x2677A4u, 0x2677ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677ACu;
label_2677ac:
    // 0x2677ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2677acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2677b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2677b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2677b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2677B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2677B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2677BCu;
    // 0x2677bc: 0x0  nop
    ctx->pc = 0x2677bcu;
    // NOP
    ctx->pc = 0x2677c0u;
}
