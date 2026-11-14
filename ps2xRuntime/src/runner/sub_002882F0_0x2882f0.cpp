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

// Function: sub_002882F0
// Address: 0x2882f0 - 0x288380
void sub_002882F0_0x2882f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002882F0_0x2882f0");
#endif

    switch (ctx->pc) {
        case 0x288338u: goto label_288338;
        case 0x288348u: goto label_288348;
        case 0x28835cu: goto label_28835c;
        default: break;
    }

    ctx->pc = 0x2882f0u;

    // 0x2882f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2882f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2882f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2882f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2882f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2882f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2882fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2882fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x288300: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x288300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x288304: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x288304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288308: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x288308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28830c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28830cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288310: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x288310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x288314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288318: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x288318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28831c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288320: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x288320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288324: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x288324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x288328: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x288328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28832c: 0x2447000c  addiu       $a3, $v0, 0xC
    ctx->pc = 0x28832cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x288330: 0xc045a70  jal         func_1169C0
    ctx->pc = 0x288330u;
    SET_GPR_U32(ctx, 31, 0x288338u);
    ctx->pc = 0x1169C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1169C0u, 0x288330u, 0x288338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288338u;
label_288338:
    // 0x288338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28833c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x28833cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288340: 0xc0a20e0  jal         func_288380
    ctx->pc = 0x288340u;
    SET_GPR_U32(ctx, 31, 0x288348u);
    ctx->pc = 0x288380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288380u, 0x288340u, 0x288348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288348u;
label_288348:
    // 0x288348: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x288348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28834c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28834cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288350: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x288350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288354: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x288354u;
    SET_GPR_U32(ctx, 31, 0x28835Cu);
    ctx->pc = 0x28E0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0C0u, 0x288354u, 0x28835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28835Cu;
label_28835c:
    // 0x28835c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28835cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288360: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x288360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x288364: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x288364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x288368: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x288368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x28836c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28836cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x288370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288374: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x288374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x288378: 0x3e00008  jr          $ra
    ctx->pc = 0x288378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288380u;
}
