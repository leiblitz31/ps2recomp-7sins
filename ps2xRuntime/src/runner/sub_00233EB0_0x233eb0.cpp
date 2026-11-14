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

// Function: sub_00233EB0
// Address: 0x233eb0 - 0x233f60
void sub_00233EB0_0x233eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233EB0_0x233eb0");
#endif

    switch (ctx->pc) {
        case 0x233f4cu: goto label_233f4c;
        default: break;
    }

    ctx->pc = 0x233eb0u;

    // 0x233eb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x233eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x233eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233eb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x233ebc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x233ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x233ec0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x233ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x233ec4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x233ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x233ec8: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x233ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
    // 0x233ecc: 0xafa90060  sw          $t1, 0x60($sp)
    ctx->pc = 0x233eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 9));
    // 0x233ed0: 0xafaa0070  sw          $t2, 0x70($sp)
    ctx->pc = 0x233ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 10));
    // 0x233ed4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x233ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233ed8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233edc: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x233edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x233ee0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x233ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233ee4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233ee8: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x233ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x233eec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x233eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233ef0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233ef4: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x233ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
    // 0x233ef8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x233ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233efc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233f00: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x233f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x233f04: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x233f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x233f08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233f0c: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x233f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x233f10: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x233f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x233f14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233f18: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x233f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x233f1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233f20: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x233f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x233f24: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x233f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x233f28: 0x24a5b980  addiu       $a1, $a1, -0x4680
    ctx->pc = 0x233f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949248));
    // 0x233f2c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x233f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233f30: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x233f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233f34: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x233f34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233f38: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x233f38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233f3c: 0x8faa0060  lw          $t2, 0x60($sp)
    ctx->pc = 0x233f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x233f40: 0x8fab0070  lw          $t3, 0x70($sp)
    ctx->pc = 0x233f40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x233f44: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x233F44u;
    SET_GPR_U32(ctx, 31, 0x233F4Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x233F44u, 0x233F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F4Cu;
label_233f4c:
    // 0x233f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233f50: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x233f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x233f54: 0x3e00008  jr          $ra
    ctx->pc = 0x233F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233F5Cu;
    // 0x233f5c: 0x0  nop
    ctx->pc = 0x233f5cu;
    // NOP
    ctx->pc = 0x233f60u;
}
