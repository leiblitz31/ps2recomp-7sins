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

// Function: sub_002E61B0
// Address: 0x2e61b0 - 0x2e6250
void sub_002E61B0_0x2e61b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E61B0_0x2e61b0");
#endif

    switch (ctx->pc) {
        case 0x2e61d8u: goto label_2e61d8;
        case 0x2e61ecu: goto label_2e61ec;
        case 0x2e6200u: goto label_2e6200;
        case 0x2e6218u: goto label_2e6218;
        case 0x2e622cu: goto label_2e622c;
        default: break;
    }

    ctx->pc = 0x2e61b0u;

    // 0x2e61b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e61b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e61b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e61b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e61b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e61b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e61bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e61bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e61c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e61c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e61c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e61c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e61c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e61cc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e61ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e61d0: 0xc041010  jal         func_104040
    ctx->pc = 0x2E61D0u;
    SET_GPR_U32(ctx, 31, 0x2E61D8u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x2E61D0u, 0x2E61D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61D8u;
label_2e61d8:
    // 0x2e61d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e61d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e61dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e61e0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e61e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e61e4: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x2E61E4u;
    SET_GPR_U32(ctx, 31, 0x2E61ECu);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x2E61E4u, 0x2E61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61ECu;
label_2e61ec:
    // 0x2e61ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e61ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e61f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e61f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e61f4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2e61f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e61f8: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x2E61F8u;
    SET_GPR_U32(ctx, 31, 0x2E6200u);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x2E61F8u, 0x2E6200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6200u;
label_2e6200:
    // 0x2e6200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6204: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e6204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6208: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e6208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e620c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e620cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6210: 0xc06fa28  jal         func_1BE8A0
    ctx->pc = 0x2E6210u;
    SET_GPR_U32(ctx, 31, 0x2E6218u);
    ctx->pc = 0x1BE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE8A0u, 0x2E6210u, 0x2E6218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6218u;
label_2e6218:
    // 0x2e6218: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e6218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e621c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e6220: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e6220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e6224: 0xc0444e0  jal         func_111380
    ctx->pc = 0x2E6224u;
    SET_GPR_U32(ctx, 31, 0x2E622Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2E6224u, 0x2E622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E622Cu;
label_2e622c:
    // 0x2e622c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e622cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6238: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e6238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e623c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E623Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E623Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6244u;
    // 0x2e6244: 0x0  nop
    ctx->pc = 0x2e6244u;
    // NOP
    // 0x2e6248: 0x0  nop
    ctx->pc = 0x2e6248u;
    // NOP
    // 0x2e624c: 0x0  nop
    ctx->pc = 0x2e624cu;
    // NOP
    ctx->pc = 0x2e6250u;
}
