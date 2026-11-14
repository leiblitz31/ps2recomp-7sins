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

// Function: sub_00280560
// Address: 0x280560 - 0x2805d0
void sub_00280560_0x280560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280560_0x280560");
#endif

    switch (ctx->pc) {
        case 0x280588u: goto label_280588;
        case 0x280598u: goto label_280598;
        case 0x2805b8u: goto label_2805b8;
        default: break;
    }

    ctx->pc = 0x280560u;

    // 0x280560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280568: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x280568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28056c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x28056cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x280570: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x280570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280574: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x280574u;
    {
        const bool branch_taken_0x280574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280574) {
            ctx->pc = 0x2805B8u;
            goto label_2805b8;
        }
    }
    ctx->pc = 0x28057Cu;
    // 0x28057c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28057cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280580: 0xc0a0190  jal         func_280640
    ctx->pc = 0x280580u;
    SET_GPR_U32(ctx, 31, 0x280588u);
    ctx->pc = 0x280640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280640u, 0x280580u, 0x280588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280588u;
label_280588:
    // 0x280588: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x280588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28058c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28058cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280590: 0xc0a0174  jal         func_2805D0
    ctx->pc = 0x280590u;
    SET_GPR_U32(ctx, 31, 0x280598u);
    ctx->pc = 0x2805D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2805D0u, 0x280590u, 0x280598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280598u;
label_280598:
    // 0x280598: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x280598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28059c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x28059cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2805a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2805a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2805a4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2805A4u;
    {
        const bool branch_taken_0x2805a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2805a4) {
            ctx->pc = 0x2805B8u;
            goto label_2805b8;
        }
    }
    ctx->pc = 0x2805ACu;
    // 0x2805ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2805acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2805b0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2805B0u;
    SET_GPR_U32(ctx, 31, 0x2805B8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2805B0u, 0x2805B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805B8u;
label_2805b8:
    // 0x2805b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2805b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2805bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2805bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2805c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2805c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2805c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2805C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2805C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2805CCu;
    // 0x2805cc: 0x0  nop
    ctx->pc = 0x2805ccu;
    // NOP
    ctx->pc = 0x2805d0u;
}
