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

// Function: sub_003C2E90
// Address: 0x3c2e90 - 0x3c2ed0
void sub_003C2E90_0x3c2e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2E90_0x3c2e90");
#endif

    switch (ctx->pc) {
        case 0x3c2e90u: goto label_3c2e90;
        case 0x3c2e94u: goto label_3c2e94;
        case 0x3c2e98u: goto label_3c2e98;
        case 0x3c2e9cu: goto label_3c2e9c;
        case 0x3c2ea0u: goto label_3c2ea0;
        case 0x3c2ea4u: goto label_3c2ea4;
        case 0x3c2ea8u: goto label_3c2ea8;
        case 0x3c2eacu: goto label_3c2eac;
        case 0x3c2eb0u: goto label_3c2eb0;
        case 0x3c2eb4u: goto label_3c2eb4;
        case 0x3c2eb8u: goto label_3c2eb8;
        case 0x3c2ebcu: goto label_3c2ebc;
        case 0x3c2ec0u: goto label_3c2ec0;
        case 0x3c2ec4u: goto label_3c2ec4;
        case 0x3c2ec8u: goto label_3c2ec8;
        case 0x3c2eccu: goto label_3c2ecc;
        default: break;
    }

    ctx->pc = 0x3c2e90u;

label_3c2e90:
    // 0x3c2e90: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x3c2e90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_3c2e94:
    // 0x3c2e94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c2e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c2e98:
    // 0x3c2e98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c2e98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3c2e9c:
    // 0x3c2e9c: 0x3e00008  jr          $ra
label_3c2ea0:
    if (ctx->pc == 0x3C2EA0u) {
        ctx->pc = 0x3C2EA4u;
        goto label_3c2ea4;
    }
    ctx->pc = 0x3C2E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2EA4u;
label_3c2ea4:
    // 0x3c2ea4: 0x0  nop
    ctx->pc = 0x3c2ea4u;
    // NOP
label_3c2ea8:
    // 0x3c2ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c2ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c2eac:
    // 0x3c2eac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c2eb0:
    // 0x3c2eb0: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3c2eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3c2eb4:
    // 0x3c2eb4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3c2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3c2eb8:
    // 0x3c2eb8: 0x40f809  jalr        $v0
label_3c2ebc:
    if (ctx->pc == 0x3C2EBCu) {
        ctx->pc = 0x3C2EC0u;
        goto label_3c2ec0;
    }
    ctx->pc = 0x3C2EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2EC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2EB8u, 0x3C2EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2EC0u;
label_3c2ec0:
    // 0x3c2ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2ec4:
    // 0x3c2ec4: 0x3e00008  jr          $ra
label_3c2ec8:
    if (ctx->pc == 0x3C2EC8u) {
        ctx->pc = 0x3C2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2EC4u;
        // 0x3c2ec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2ECCu;
        goto label_3c2ecc;
    }
    ctx->pc = 0x3C2EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2EC4u;
        // 0x3c2ec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2ECCu;
label_3c2ecc:
    // 0x3c2ecc: 0x0  nop
    ctx->pc = 0x3c2eccu;
    // NOP
    ctx->pc = 0x3c2ed0u;
}
