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

// Function: sub_00227940
// Address: 0x227940 - 0x2279b0
void sub_00227940_0x227940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227940_0x227940");
#endif

    switch (ctx->pc) {
        case 0x227974u: goto label_227974;
        case 0x227994u: goto label_227994;
        default: break;
    }

    ctx->pc = 0x227940u;

    // 0x227940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x227948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22794c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22794cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x227950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227954: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x227954u;
    {
        const bool branch_taken_0x227954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227954) {
            ctx->pc = 0x227994u;
            goto label_227994;
        }
    }
    ctx->pc = 0x22795Cu;
    // 0x22795c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227960: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x227960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227964: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x227964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227968: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x227968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22796c: 0xc08ab38  jal         func_22ACE0
    ctx->pc = 0x22796Cu;
    SET_GPR_U32(ctx, 31, 0x227974u);
    ctx->pc = 0x22ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ACE0u, 0x22796Cu, 0x227974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227974u;
label_227974:
    // 0x227974: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x227974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227978: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x227978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22797c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22797cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x227980: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227980u;
    {
        const bool branch_taken_0x227980 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x227980) {
            ctx->pc = 0x227994u;
            goto label_227994;
        }
    }
    ctx->pc = 0x227988u;
    // 0x227988: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x227988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22798c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22798Cu;
    SET_GPR_U32(ctx, 31, 0x227994u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22798Cu, 0x227994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227994u;
label_227994:
    // 0x227994: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22799c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22799cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2279a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2279A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2279A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2279A8u;
    // 0x2279a8: 0x0  nop
    ctx->pc = 0x2279a8u;
    // NOP
    // 0x2279ac: 0x0  nop
    ctx->pc = 0x2279acu;
    // NOP
    ctx->pc = 0x2279b0u;
}
