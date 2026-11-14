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

// Function: sub_00218170
// Address: 0x218170 - 0x2181f0
void sub_00218170_0x218170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218170_0x218170");
#endif

    switch (ctx->pc) {
        case 0x218194u: goto label_218194;
        case 0x2181d8u: goto label_2181d8;
        default: break;
    }

    ctx->pc = 0x218170u;

    // 0x218170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x218170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x218174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218178: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21817c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218180: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x218180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218184: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x218184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218188: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x218188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21818c: 0xc085e20  jal         func_217880
    ctx->pc = 0x21818Cu;
    SET_GPR_U32(ctx, 31, 0x218194u);
    ctx->pc = 0x217880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217880u, 0x21818Cu, 0x218194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218194u;
label_218194:
    // 0x218194: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218198: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x218198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21819c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2181a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2181a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2181a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2181a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2181a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2181a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2181ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2181acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2181b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2181b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2181b4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2181b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2181b8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2181B8u;
    {
        const bool branch_taken_0x2181b8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2181b8) {
            ctx->pc = 0x2181C8u;
            goto label_2181c8;
        }
    }
    ctx->pc = 0x2181C0u;
    // 0x2181c0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2181c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2181c4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2181c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2181c8:
    // 0x2181c8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2181c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2181cc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2181ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2181d0: 0xc086180  jal         func_218600
    ctx->pc = 0x2181D0u;
    SET_GPR_U32(ctx, 31, 0x2181D8u);
    ctx->pc = 0x218600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218600u, 0x2181D0u, 0x2181D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181D8u;
label_2181d8:
    // 0x2181d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2181d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2181dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2181dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2181e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2181E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2181E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2181E8u;
    // 0x2181e8: 0x0  nop
    ctx->pc = 0x2181e8u;
    // NOP
    // 0x2181ec: 0x0  nop
    ctx->pc = 0x2181ecu;
    // NOP
    ctx->pc = 0x2181f0u;
}
