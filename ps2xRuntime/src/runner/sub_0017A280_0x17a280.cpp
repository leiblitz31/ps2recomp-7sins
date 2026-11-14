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

// Function: sub_0017A280
// Address: 0x17a280 - 0x17a2f0
void sub_0017A280_0x17a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A280_0x17a280");
#endif

    switch (ctx->pc) {
        case 0x17a2a4u: goto label_17a2a4;
        case 0x17a2dcu: goto label_17a2dc;
        default: break;
    }

    ctx->pc = 0x17a280u;

    // 0x17a280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17a288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17a28c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a290: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a294: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17a294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a298: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17a298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17a29c: 0xc05de84  jal         func_177A10
    ctx->pc = 0x17A29Cu;
    SET_GPR_U32(ctx, 31, 0x17A2A4u);
    ctx->pc = 0x177A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A10u, 0x17A29Cu, 0x17A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2A4u;
label_17a2a4:
    // 0x17a2a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a2a8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x17a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a2ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a2b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17a2b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a2b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a2bc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x17a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a2c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x17a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17a2c4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x17a2c4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17a2c8: 0x3012  mflo        $a2
    ctx->pc = 0x17a2c8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x17a2cc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x17a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x17a2d0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x17a2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17a2d4: 0xc05e750  jal         func_179D40
    ctx->pc = 0x17A2D4u;
    SET_GPR_U32(ctx, 31, 0x17A2DCu);
    ctx->pc = 0x179D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D40u, 0x17A2D4u, 0x17A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2DCu;
label_17a2dc:
    // 0x17a2dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a2e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17a2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A2ECu;
    // 0x17a2ec: 0x0  nop
    ctx->pc = 0x17a2ecu;
    // NOP
    ctx->pc = 0x17a2f0u;
}
