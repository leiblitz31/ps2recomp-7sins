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

// Function: sub_00255350
// Address: 0x255350 - 0x2553d0
void sub_00255350_0x255350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255350_0x255350");
#endif

    switch (ctx->pc) {
        case 0x255374u: goto label_255374;
        case 0x2553b8u: goto label_2553b8;
        default: break;
    }

    ctx->pc = 0x255350u;

    // 0x255350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x255354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255358: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x255358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25535c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25535cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255360: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x255360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255364: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x255364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255368: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x255368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25536c: 0xc0951ac  jal         func_2546B0
    ctx->pc = 0x25536Cu;
    SET_GPR_U32(ctx, 31, 0x255374u);
    ctx->pc = 0x2546B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2546B0u, 0x25536Cu, 0x255374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255374u;
label_255374:
    // 0x255374: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x255374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255378: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x255378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25537c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255380: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x255380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x255384: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x255384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255388: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25538c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25538cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255390: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x255390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x255394: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x255394u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x255398: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x255398u;
    {
        const bool branch_taken_0x255398 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x255398) {
            ctx->pc = 0x2553A8u;
            goto label_2553a8;
        }
    }
    ctx->pc = 0x2553A0u;
    // 0x2553a0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2553a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2553a4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2553a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2553a8:
    // 0x2553a8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2553a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2553ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2553acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2553b0: 0xc095cb0  jal         func_2572C0
    ctx->pc = 0x2553B0u;
    SET_GPR_U32(ctx, 31, 0x2553B8u);
    ctx->pc = 0x2572C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2572C0u, 0x2553B0u, 0x2553B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553B8u;
label_2553b8:
    // 0x2553b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2553b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2553bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2553bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2553c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2553C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2553C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2553C8u;
    // 0x2553c8: 0x0  nop
    ctx->pc = 0x2553c8u;
    // NOP
    // 0x2553cc: 0x0  nop
    ctx->pc = 0x2553ccu;
    // NOP
    ctx->pc = 0x2553d0u;
}
