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

// Function: sub_00233160
// Address: 0x233160 - 0x2331f0
void sub_00233160_0x233160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233160_0x233160");
#endif

    switch (ctx->pc) {
        case 0x23319cu: goto label_23319c;
        case 0x2331dcu: goto label_2331dc;
        default: break;
    }

    ctx->pc = 0x233160u;

    // 0x233160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233168: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x233168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23316c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23316cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x233170: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233174: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x233174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x233178: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23317c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23317cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x233180: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x233180u;
    {
        const bool branch_taken_0x233180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x233180) {
            ctx->pc = 0x2331B4u;
            goto label_2331b4;
        }
    }
    ctx->pc = 0x233188u;
    // 0x233188: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23318c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x23318cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x233190: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x233190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233194: 0xc04dec4  jal         func_137B10
    ctx->pc = 0x233194u;
    SET_GPR_U32(ctx, 31, 0x23319Cu);
    ctx->pc = 0x137B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137B10u, 0x233194u, 0x23319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23319Cu;
label_23319c:
    // 0x23319c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2331a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2331a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2331a4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2331a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2331a8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2331a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2331ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2331ACu;
    {
        const bool branch_taken_0x2331ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2331ac) {
            ctx->pc = 0x2331DCu;
            goto label_2331dc;
        }
    }
    ctx->pc = 0x2331B4u;
label_2331b4:
    // 0x2331b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2331b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2331b8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2331b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2331bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2331bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2331c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2331c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2331c4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2331c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2331c8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2331c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2331cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2331ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2331d0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2331d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2331d4: 0xc08cc7c  jal         func_2331F0
    ctx->pc = 0x2331D4u;
    SET_GPR_U32(ctx, 31, 0x2331DCu);
    ctx->pc = 0x2331F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2331F0u, 0x2331D4u, 0x2331DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331DCu;
label_2331dc:
    // 0x2331dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2331dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2331e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2331e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2331e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2331E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2331E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2331ECu;
    // 0x2331ec: 0x0  nop
    ctx->pc = 0x2331ecu;
    // NOP
    ctx->pc = 0x2331f0u;
}
