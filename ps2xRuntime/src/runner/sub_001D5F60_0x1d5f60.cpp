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

// Function: sub_001D5F60
// Address: 0x1d5f60 - 0x1d6000
void sub_001D5F60_0x1d5f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5F60_0x1d5f60");
#endif

    switch (ctx->pc) {
        case 0x1d5fc4u: goto label_1d5fc4;
        case 0x1d5fe4u: goto label_1d5fe4;
        default: break;
    }

    ctx->pc = 0x1d5f60u;

    // 0x1d5f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5f68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d5f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d5f6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d5f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d5f70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f74: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D5F74u;
    {
        const bool branch_taken_0x1d5f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f74) {
            ctx->pc = 0x1D5FE4u;
            goto label_1d5fe4;
        }
    }
    ctx->pc = 0x1D5F7Cu;
    // 0x1d5f7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d5f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5f84: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5F84u;
    {
        const bool branch_taken_0x1d5f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f84) {
            ctx->pc = 0x1D5FC4u;
            goto label_1d5fc4;
        }
    }
    ctx->pc = 0x1D5F8Cu;
    // 0x1d5f8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d5f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f90: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1d5f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d5f9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5fa0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5fa4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5fa8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d5fac: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d5facu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d5fb0: 0x3012  mflo        $a2
    ctx->pc = 0x1d5fb0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1d5fb4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d5fb8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d5fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d5fbc: 0xc079c74  jal         func_1E71D0
    ctx->pc = 0x1D5FBCu;
    SET_GPR_U32(ctx, 31, 0x1D5FC4u);
    ctx->pc = 0x1E71D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E71D0u, 0x1D5FBCu, 0x1D5FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FC4u;
label_1d5fc4:
    // 0x1d5fc4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d5fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5fc8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d5fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d5fcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d5fccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d5fd0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5FD0u;
    {
        const bool branch_taken_0x1d5fd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d5fd0) {
            ctx->pc = 0x1D5FE4u;
            goto label_1d5fe4;
        }
    }
    ctx->pc = 0x1D5FD8u;
    // 0x1d5fd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d5fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5fdc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D5FDCu;
    SET_GPR_U32(ctx, 31, 0x1D5FE4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D5FDCu, 0x1D5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FE4u;
label_1d5fe4:
    // 0x1d5fe4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5fec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d5fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d5ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5FF8u;
    // 0x1d5ff8: 0x0  nop
    ctx->pc = 0x1d5ff8u;
    // NOP
    // 0x1d5ffc: 0x0  nop
    ctx->pc = 0x1d5ffcu;
    // NOP
    ctx->pc = 0x1d6000u;
}
