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

// Function: sub_0022C440
// Address: 0x22c440 - 0x22c4e0
void sub_0022C440_0x22c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C440_0x22c440");
#endif

    switch (ctx->pc) {
        case 0x22c4a4u: goto label_22c4a4;
        case 0x22c4c4u: goto label_22c4c4;
        default: break;
    }

    ctx->pc = 0x22c440u;

    // 0x22c440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c44c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22c44cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x22c450: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c454: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22C454u;
    {
        const bool branch_taken_0x22c454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c454) {
            ctx->pc = 0x22C4C4u;
            goto label_22c4c4;
        }
    }
    ctx->pc = 0x22C45Cu;
    // 0x22c45c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c460: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c464: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22C464u;
    {
        const bool branch_taken_0x22c464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c464) {
            ctx->pc = 0x22C4A4u;
            goto label_22c4a4;
        }
    }
    ctx->pc = 0x22C46Cu;
    // 0x22c46c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c470: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x22c470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c474: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c478: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22c478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22c47c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c480: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22c480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c484: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22c484u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22c488: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22c488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22c48c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x22c48cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22c490: 0x3012  mflo        $a2
    ctx->pc = 0x22c490u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x22c494: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x22c494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22c498: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x22c498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22c49c: 0xc08cab8  jal         func_232AE0
    ctx->pc = 0x22C49Cu;
    SET_GPR_U32(ctx, 31, 0x22C4A4u);
    ctx->pc = 0x232AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232AE0u, 0x22C49Cu, 0x22C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4A4u;
label_22c4a4:
    // 0x22c4a4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22c4a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c4a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22c4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22c4ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22c4acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22c4b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C4B0u;
    {
        const bool branch_taken_0x22c4b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22c4b0) {
            ctx->pc = 0x22C4C4u;
            goto label_22c4c4;
        }
    }
    ctx->pc = 0x22C4B8u;
    // 0x22c4b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c4bc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22C4BCu;
    SET_GPR_U32(ctx, 31, 0x22C4C4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22C4BCu, 0x22C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4C4u;
label_22c4c4:
    // 0x22c4c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c4cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c4ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x22C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C4D8u;
    // 0x22c4d8: 0x0  nop
    ctx->pc = 0x22c4d8u;
    // NOP
    // 0x22c4dc: 0x0  nop
    ctx->pc = 0x22c4dcu;
    // NOP
    ctx->pc = 0x22c4e0u;
}
