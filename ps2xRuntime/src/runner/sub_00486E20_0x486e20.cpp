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

// Function: sub_00486E20
// Address: 0x486e20 - 0x486ec0
void sub_00486E20_0x486e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486E20_0x486e20");
#endif

    switch (ctx->pc) {
        case 0x486e80u: goto label_486e80;
        case 0x486ea0u: goto label_486ea0;
        default: break;
    }

    ctx->pc = 0x486e20u;

    // 0x486e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x486e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x486e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x486e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x486e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x486e2c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x486e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x486e30: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x486e30u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x486e34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x486e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486e38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x486e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x486e3c: 0x90420072  lbu         $v0, 0x72($v0)
    ctx->pc = 0x486e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 114)));
    // 0x486e40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x486E40u;
    {
        const bool branch_taken_0x486e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486e40) {
            ctx->pc = 0x486E58u;
            goto label_486e58;
        }
    }
    ctx->pc = 0x486E48u;
    // 0x486e48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x486e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x486e4c: 0x8c50007c  lw          $s0, 0x7C($v0)
    ctx->pc = 0x486e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x486e50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x486E50u;
    {
        const bool branch_taken_0x486e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486e50) {
            ctx->pc = 0x486E60u;
            goto label_486e60;
        }
    }
    ctx->pc = 0x486E58u;
label_486e58:
    // 0x486e58: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x486e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x486e5c: 0x8c500078  lw          $s0, 0x78($v0)
    ctx->pc = 0x486e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_486e60:
    // 0x486e60: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x486e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x486e64: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x486e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x486e68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x486e68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x486e6c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x486e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x486e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x486e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486e74: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x486e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x486e78: 0xc0ef412  jal         func_3BD048
    ctx->pc = 0x486E78u;
    SET_GPR_U32(ctx, 31, 0x486E80u);
    ctx->pc = 0x3BD048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD048u, 0x486E78u, 0x486E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486E80u;
label_486e80:
    // 0x486e80: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x486e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x486e84: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x486e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x486e88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x486E88u;
    {
        const bool branch_taken_0x486e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x486e88) {
            ctx->pc = 0x486EA0u;
            goto label_486ea0;
        }
    }
    ctx->pc = 0x486E90u;
    // 0x486e90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x486e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x486e94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x486e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486e98: 0xc121fd0  jal         func_487F40
    ctx->pc = 0x486E98u;
    SET_GPR_U32(ctx, 31, 0x486EA0u);
    ctx->pc = 0x487F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487F40u, 0x486E98u, 0x486EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486EA0u;
label_486ea0:
    // 0x486ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x486ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x486ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x486ea8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x486ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x486eac: 0x3e00008  jr          $ra
    ctx->pc = 0x486EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x486EB4u;
    // 0x486eb4: 0x0  nop
    ctx->pc = 0x486eb4u;
    // NOP
    // 0x486eb8: 0x0  nop
    ctx->pc = 0x486eb8u;
    // NOP
    // 0x486ebc: 0x0  nop
    ctx->pc = 0x486ebcu;
    // NOP
    ctx->pc = 0x486ec0u;
}
