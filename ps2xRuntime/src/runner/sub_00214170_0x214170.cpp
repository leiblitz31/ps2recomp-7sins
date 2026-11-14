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

// Function: sub_00214170
// Address: 0x214170 - 0x214200
void sub_00214170_0x214170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214170_0x214170");
#endif

    switch (ctx->pc) {
        case 0x2141acu: goto label_2141ac;
        case 0x2141ecu: goto label_2141ec;
        default: break;
    }

    ctx->pc = 0x214170u;

    // 0x214170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214178: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x214178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x21417c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x21417cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x214180: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x214180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214184: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x214184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x214188: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x214188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21418c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x214190: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x214190u;
    {
        const bool branch_taken_0x214190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x214190) {
            ctx->pc = 0x2141C4u;
            goto label_2141c4;
        }
    }
    ctx->pc = 0x214198u;
    // 0x214198: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x214198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21419c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x21419cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2141a0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2141a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2141a4: 0xc085148  jal         func_214520
    ctx->pc = 0x2141A4u;
    SET_GPR_U32(ctx, 31, 0x2141ACu);
    ctx->pc = 0x214520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214520u, 0x2141A4u, 0x2141ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2141ACu;
label_2141ac:
    // 0x2141ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2141acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2141b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2141b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2141b4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2141b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2141b8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2141b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2141bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2141BCu;
    {
        const bool branch_taken_0x2141bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2141bc) {
            ctx->pc = 0x2141ECu;
            goto label_2141ec;
        }
    }
    ctx->pc = 0x2141C4u;
label_2141c4:
    // 0x2141c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2141c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2141c8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2141c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2141cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2141ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2141d0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2141d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2141d4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2141d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2141d8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2141d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2141dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2141dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2141e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2141e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2141e4: 0xc085080  jal         func_214200
    ctx->pc = 0x2141E4u;
    SET_GPR_U32(ctx, 31, 0x2141ECu);
    ctx->pc = 0x214200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214200u, 0x2141E4u, 0x2141ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2141ECu;
label_2141ec:
    // 0x2141ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2141ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2141f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2141f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2141f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2141F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2141F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2141FCu;
    // 0x2141fc: 0x0  nop
    ctx->pc = 0x2141fcu;
    // NOP
    ctx->pc = 0x214200u;
}
