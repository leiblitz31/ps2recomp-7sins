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

// Function: sub_00493BF0
// Address: 0x493bf0 - 0x493c60
void sub_00493BF0_0x493bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493BF0_0x493bf0");
#endif

    switch (ctx->pc) {
        case 0x493c40u: goto label_493c40;
        default: break;
    }

    ctx->pc = 0x493bf0u;

    // 0x493bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x493bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x493bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x493bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x493bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x493bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x493bfc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x493bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x493c00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x493c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493c04: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x493c04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x493c08: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x493c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x493c0c: 0x24845108  addiu       $a0, $a0, 0x5108
    ctx->pc = 0x493c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20744));
    // 0x493c10: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x493c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x493c14: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x493c14u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5F5108u));
    // 0x493c18: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x493c18u;
    { uint32_t bits = FAST_READ32(0x5F5110u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x493c1c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x493c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x493c20: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x493c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x493c24: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x493c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x493c28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x493c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x493c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x493c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493c30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x493c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x493c34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x493c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x493c38: 0xc1065b8  jal         func_4196E0
    ctx->pc = 0x493C38u;
    SET_GPR_U32(ctx, 31, 0x493C40u);
    ctx->pc = 0x4196E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4196E0u, 0x493C38u, 0x493C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493C40u;
label_493c40:
    // 0x493c40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x493c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x493c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493c48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x493c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x493c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x493C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493C54u;
    // 0x493c54: 0x0  nop
    ctx->pc = 0x493c54u;
    // NOP
    // 0x493c58: 0x0  nop
    ctx->pc = 0x493c58u;
    // NOP
    // 0x493c5c: 0x0  nop
    ctx->pc = 0x493c5cu;
    // NOP
    ctx->pc = 0x493c60u;
}
